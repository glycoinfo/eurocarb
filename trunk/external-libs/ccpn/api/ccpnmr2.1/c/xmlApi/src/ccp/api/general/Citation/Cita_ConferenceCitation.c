
#include "ccp.h"

/*
  Citation (litterature reference) to Conference presentation
*/

/* package ccp.api.general.Citation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ConferenceCitation self
  @param  Impl_ApplicationData value
**/
void *Cita_ConferenceCitation_AddApplicationData(Cita_ConferenceCitation self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
  @param  Affi_Person value
**/
void *Cita_ConferenceCitation_AddAuthor(Cita_ConferenceCitation self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAuthor");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'addAuthor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'addAuthor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Citation.Citation.editors

People who are editors of 
Citation
  @param  Cita_ConferenceCitation self
  @param  Affi_Person value
**/
void *Cita_ConferenceCitation_AddEditor(Cita_ConferenceCitation self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addEditor");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'addEditor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'addEditor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Citation.Citation.keywords

Keywords characterising 
Citation
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
void *Cita_ConferenceCitation_AddKeyword(Cita_ConferenceCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addKeyword");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'addKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'addKeyword' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Citation.Citation.molSystems

MolSystems described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  Mols_MolSystem value
**/
void *Cita_ConferenceCitation_AddMolSystem(Cita_ConferenceCitation self, Mols_MolSystem value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addMolSystem");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'addMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'addMolSystem' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Citation.Citation.nmrEntries

BioMagResBank entries 
that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @param  Entr_Entry value
**/
void *Cita_ConferenceCitation_AddNmrEntry(Cita_ConferenceCitation self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNmrEntry");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'addNmrEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'addNmrEntry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ConferenceCitation self
  @param  Entr_Entry value
**/
void *Cita_ConferenceCitation_AddNmrEntryPrimary(Cita_ConferenceCitation self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNmrEntryPrimary");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'addNmrEntryPrimary'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'addNmrEntryPrimary' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Citation.Citation.protocols

Protocol where Citation 
refers to.
  @param  Cita_ConferenceCitation self
  @param  Prot_Protocol value
**/
void *Cita_ConferenceCitation_AddProtocol(Cita_ConferenceCitation self, Prot_Protocol value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addProtocol");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'addProtocol'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'addProtocol' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Citation.Citation.shiftReferences

Shift References 
citing CItation.
  @param  Cita_ConferenceCitation self
  @param  Nmr_ShiftReference value
**/
void *Cita_ConferenceCitation_AddShiftReference(Cita_ConferenceCitation self, Nmr_ShiftReference value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addShiftReference");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'addShiftReference'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'addShiftReference' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ConferenceCitation self
  @param  Targ_Target value
**/
void *Cita_ConferenceCitation_AddTarget(Cita_ConferenceCitation self, Targ_Target value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addTarget");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'addTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'addTarget' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @param  Targ_TargetGroup value
**/
void *Cita_ConferenceCitation_AddTargetGroup(Cita_ConferenceCitation self, Targ_TargetGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addTargetGroup");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'addTargetGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'addTargetGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.general.Citation.ConferenceCitation
  @param  Cita_ConferenceCitation self
  @param  ApiBoolean complete
**/
void *Cita_ConferenceCitation_CheckAllValid(Cita_ConferenceCitation self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.general.Citation.ConferenceCitation
  @param  Cita_ConferenceCitation self
  @param  ApiBoolean complete
**/
void *Cita_ConferenceCitation_CheckValid(Cita_ConferenceCitation self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'checkValid' is not callable");
  
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
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ConferenceCitation_FindAllApplicationData(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findAllApplicationData' is not callable");
  
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
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ConferenceCitation_FindAllApplicationData_keyval0(Cita_ConferenceCitation self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ConferenceCitation_FindAllApplicationData_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ConferenceCitation_FindAllApplicationData_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ConferenceCitation_FindAllApplicationData_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ConferenceCitation self
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
ApiList Cita_ConferenceCitation_FindAllApplicationData_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ConferenceCitation_FindAllAuthors(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAuthors");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findAllAuthors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findAllAuthors' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ConferenceCitation_FindAllAuthors_keyval0(Cita_ConferenceCitation self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindAllAuthors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ConferenceCitation_FindAllAuthors_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindAllAuthors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ConferenceCitation_FindAllAuthors_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindAllAuthors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ConferenceCitation_FindAllAuthors_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindAllAuthors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
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
ApiList Cita_ConferenceCitation_FindAllAuthors_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindAllAuthors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllDataLists(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDataLists");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findAllDataLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findAllDataLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllDataLists_keyval0(Cita_ConferenceCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindAllDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllDataLists_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindAllDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllDataLists_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindAllDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllDataLists_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindAllDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ConferenceCitation self
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
ApiSet Cita_ConferenceCitation_FindAllDataLists_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindAllDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ConferenceCitation_FindAllEditors(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllEditors");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findAllEditors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findAllEditors' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ConferenceCitation_FindAllEditors_keyval0(Cita_ConferenceCitation self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindAllEditors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ConferenceCitation_FindAllEditors_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindAllEditors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ConferenceCitation_FindAllEditors_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindAllEditors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ConferenceCitation_FindAllEditors_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindAllEditors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ConferenceCitation self
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
ApiList Cita_ConferenceCitation_FindAllEditors_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindAllEditors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllExperiments(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findAllExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findAllExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllExperiments_keyval0(Cita_ConferenceCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllExperiments_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllExperiments_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllExperiments_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
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
ApiSet Cita_ConferenceCitation_FindAllExperiments_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllMethods(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMethods");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findAllMethods'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findAllMethods' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllMethods_keyval0(Cita_ConferenceCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindAllMethods(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllMethods_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindAllMethods(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllMethods_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindAllMethods(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllMethods_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindAllMethods(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ConferenceCitation self
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
ApiSet Cita_ConferenceCitation_FindAllMethods_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindAllMethods(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllMolSystems(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolSystems");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findAllMolSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findAllMolSystems' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllMolSystems_keyval0(Cita_ConferenceCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllMolSystems_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllMolSystems_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllMolSystems_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ConferenceCitation self
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
ApiSet Cita_ConferenceCitation_FindAllMolSystems_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllMolecules(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolecules");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findAllMolecules'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findAllMolecules' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllMolecules_keyval0(Cita_ConferenceCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindAllMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllMolecules_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindAllMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllMolecules_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindAllMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllMolecules_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindAllMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_ConferenceCitation self
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
ApiSet Cita_ConferenceCitation_FindAllMolecules_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindAllMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllNmrEntries(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrEntries");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findAllNmrEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findAllNmrEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ConferenceCitation_FindAllNmrEntriesPrimary(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrEntriesPrimary");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findAllNmrEntriesPrimary'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findAllNmrEntriesPrimary' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ConferenceCitation_FindAllNmrEntriesPrimary_keyval0(Cita_ConferenceCitation self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindAllNmrEntriesPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ConferenceCitation_FindAllNmrEntriesPrimary_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindAllNmrEntriesPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ConferenceCitation_FindAllNmrEntriesPrimary_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindAllNmrEntriesPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ConferenceCitation_FindAllNmrEntriesPrimary_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindAllNmrEntriesPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ConferenceCitation self
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
ApiList Cita_ConferenceCitation_FindAllNmrEntriesPrimary_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindAllNmrEntriesPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllNmrEntries_keyval0(Cita_ConferenceCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindAllNmrEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllNmrEntries_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindAllNmrEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllNmrEntries_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindAllNmrEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllNmrEntries_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindAllNmrEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
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
ApiSet Cita_ConferenceCitation_FindAllNmrEntries_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindAllNmrEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllNmrProbes(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrProbes");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findAllNmrProbes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findAllNmrProbes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllNmrProbes_keyval0(Cita_ConferenceCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindAllNmrProbes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllNmrProbes_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindAllNmrProbes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllNmrProbes_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindAllNmrProbes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllNmrProbes_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindAllNmrProbes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ConferenceCitation self
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
ApiSet Cita_ConferenceCitation_FindAllNmrProbes_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindAllNmrProbes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllNmrSpectrometers(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrSpectrometers");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findAllNmrSpectrometers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findAllNmrSpectrometers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllNmrSpectrometers_keyval0(Cita_ConferenceCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindAllNmrSpectrometers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllNmrSpectrometers_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindAllNmrSpectrometers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllNmrSpectrometers_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindAllNmrSpectrometers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllNmrSpectrometers_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindAllNmrSpectrometers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
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
ApiSet Cita_ConferenceCitation_FindAllNmrSpectrometers_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindAllNmrSpectrometers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllProtocols(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllProtocols");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findAllProtocols'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findAllProtocols' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllProtocols_keyval0(Cita_ConferenceCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindAllProtocols(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllProtocols_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindAllProtocols(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllProtocols_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindAllProtocols(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllProtocols_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindAllProtocols(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ConferenceCitation self
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
ApiSet Cita_ConferenceCitation_FindAllProtocols_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindAllProtocols(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllRatioShiftReferences(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRatioShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findAllRatioShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findAllRatioShiftReferences' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllRatioShiftReferences_keyval0(Cita_ConferenceCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindAllRatioShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllRatioShiftReferences_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindAllRatioShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllRatioShiftReferences_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindAllRatioShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllRatioShiftReferences_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindAllRatioShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
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
ApiSet Cita_ConferenceCitation_FindAllRatioShiftReferences_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindAllRatioShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllSampleConditionSets(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSampleConditionSets");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findAllSampleConditionSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findAllSampleConditionSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllSampleConditionSets_keyval0(Cita_ConferenceCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindAllSampleConditionSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllSampleConditionSets_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindAllSampleConditionSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllSampleConditionSets_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindAllSampleConditionSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllSampleConditionSets_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindAllSampleConditionSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
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
ApiSet Cita_ConferenceCitation_FindAllSampleConditionSets_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindAllSampleConditionSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllShiftReferences(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findAllShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findAllShiftReferences' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllShiftReferences_keyval0(Cita_ConferenceCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindAllShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllShiftReferences_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindAllShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllShiftReferences_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindAllShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllShiftReferences_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindAllShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ConferenceCitation self
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
ApiSet Cita_ConferenceCitation_FindAllShiftReferences_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindAllShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllSoftware(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSoftware");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findAllSoftware'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findAllSoftware' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllSoftware_keyval0(Cita_ConferenceCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindAllSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllSoftware_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindAllSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllSoftware_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindAllSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllSoftware_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindAllSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ConferenceCitation self
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
ApiSet Cita_ConferenceCitation_FindAllSoftware_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindAllSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllTargetGroups(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllTargetGroups");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findAllTargetGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findAllTargetGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllTargetGroups_keyval0(Cita_ConferenceCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllTargetGroups_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllTargetGroups_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllTargetGroups_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
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
ApiSet Cita_ConferenceCitation_FindAllTargetGroups_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllTargets(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllTargets");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findAllTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findAllTargets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ConferenceCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllTargets_keyval0(Cita_ConferenceCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllTargets_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllTargets_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ConferenceCitation_FindAllTargets_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ConferenceCitation self
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
ApiSet Cita_ConferenceCitation_FindAllTargets_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cita_ConferenceCitation_FindFirstApplicationData(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findFirstApplicationData' is not callable");
  
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
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cita_ConferenceCitation_FindFirstApplicationData_keyval0(Cita_ConferenceCitation self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cita_ConferenceCitation_FindFirstApplicationData_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cita_ConferenceCitation_FindFirstApplicationData_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cita_ConferenceCitation_FindFirstApplicationData_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ConferenceCitation self
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
Impl_ApplicationData Cita_ConferenceCitation_FindFirstApplicationData_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_ConferenceCitation_FindFirstAuthor(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  Affi_Person obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAuthor");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findFirstAuthor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findFirstAuthor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_ConferenceCitation_FindFirstAuthor_keyval0(Cita_ConferenceCitation self)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindFirstAuthor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_ConferenceCitation_FindFirstAuthor_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindFirstAuthor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_ConferenceCitation_FindFirstAuthor_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindFirstAuthor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_ConferenceCitation_FindFirstAuthor_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindFirstAuthor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
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
Affi_Person Cita_ConferenceCitation_FindFirstAuthor_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindFirstAuthor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataList Cita_ConferenceCitation_FindFirstDataList(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  Nmr_DataList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDataList");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findFirstDataList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findFirstDataList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataList Cita_ConferenceCitation_FindFirstDataList_keyval0(Cita_ConferenceCitation self)
{
  
  Nmr_DataList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindFirstDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataList Cita_ConferenceCitation_FindFirstDataList_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  Nmr_DataList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindFirstDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataList Cita_ConferenceCitation_FindFirstDataList_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_DataList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindFirstDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataList Cita_ConferenceCitation_FindFirstDataList_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_DataList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindFirstDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ConferenceCitation self
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
Nmr_DataList Cita_ConferenceCitation_FindFirstDataList_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_DataList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindFirstDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_ConferenceCitation_FindFirstEditor(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  Affi_Person obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstEditor");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findFirstEditor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findFirstEditor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_ConferenceCitation_FindFirstEditor_keyval0(Cita_ConferenceCitation self)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindFirstEditor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_ConferenceCitation_FindFirstEditor_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindFirstEditor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_ConferenceCitation_FindFirstEditor_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindFirstEditor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_ConferenceCitation_FindFirstEditor_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindFirstEditor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ConferenceCitation self
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
Affi_Person Cita_ConferenceCitation_FindFirstEditor_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindFirstEditor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Cita_ConferenceCitation_FindFirstExperiment(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  Nmr_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExperiment");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findFirstExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findFirstExperiment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Cita_ConferenceCitation_FindFirstExperiment_keyval0(Cita_ConferenceCitation self)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Cita_ConferenceCitation_FindFirstExperiment_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Cita_ConferenceCitation_FindFirstExperiment_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Cita_ConferenceCitation_FindFirstExperiment_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
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
Nmr_Experiment Cita_ConferenceCitation_FindFirstExperiment_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Meth_Method Cita_ConferenceCitation_FindFirstMethod(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMethod");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findFirstMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findFirstMethod' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
Meth_Method Cita_ConferenceCitation_FindFirstMethod_keyval0(Cita_ConferenceCitation self)
{
  
  Meth_Method  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindFirstMethod(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Meth_Method Cita_ConferenceCitation_FindFirstMethod_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  Meth_Method  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindFirstMethod(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Meth_Method Cita_ConferenceCitation_FindFirstMethod_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Meth_Method  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindFirstMethod(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Meth_Method Cita_ConferenceCitation_FindFirstMethod_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Meth_Method  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindFirstMethod(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_ConferenceCitation self
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
Meth_Method Cita_ConferenceCitation_FindFirstMethod_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Meth_Method  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindFirstMethod(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Cita_ConferenceCitation_FindFirstMolSystem(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  Mols_MolSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolSystem");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findFirstMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findFirstMolSystem' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Cita_ConferenceCitation_FindFirstMolSystem_keyval0(Cita_ConferenceCitation self)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Cita_ConferenceCitation_FindFirstMolSystem_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Cita_ConferenceCitation_FindFirstMolSystem_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Cita_ConferenceCitation_FindFirstMolSystem_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ConferenceCitation self
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
Mols_MolSystem Cita_ConferenceCitation_FindFirstMolSystem_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mole_Molecule Cita_ConferenceCitation_FindFirstMolecule(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  Mole_Molecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolecule");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findFirstMolecule'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findFirstMolecule' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
Mole_Molecule Cita_ConferenceCitation_FindFirstMolecule_keyval0(Cita_ConferenceCitation self)
{
  
  Mole_Molecule  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindFirstMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mole_Molecule Cita_ConferenceCitation_FindFirstMolecule_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  Mole_Molecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindFirstMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mole_Molecule Cita_ConferenceCitation_FindFirstMolecule_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mole_Molecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindFirstMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mole_Molecule Cita_ConferenceCitation_FindFirstMolecule_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mole_Molecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindFirstMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_ConferenceCitation self
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
Mole_Molecule Cita_ConferenceCitation_FindFirstMolecule_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mole_Molecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindFirstMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_ConferenceCitation_FindFirstNmrEntry(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  Entr_Entry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrEntry");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findFirstNmrEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findFirstNmrEntry' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_ConferenceCitation_FindFirstNmrEntryPrimary(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  Entr_Entry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrEntryPrimary");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findFirstNmrEntryPrimary'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findFirstNmrEntryPrimary' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_ConferenceCitation_FindFirstNmrEntryPrimary_keyval0(Cita_ConferenceCitation self)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindFirstNmrEntryPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_ConferenceCitation_FindFirstNmrEntryPrimary_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindFirstNmrEntryPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_ConferenceCitation_FindFirstNmrEntryPrimary_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindFirstNmrEntryPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_ConferenceCitation_FindFirstNmrEntryPrimary_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindFirstNmrEntryPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_ConferenceCitation self
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
Entr_Entry Cita_ConferenceCitation_FindFirstNmrEntryPrimary_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindFirstNmrEntryPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_ConferenceCitation_FindFirstNmrEntry_keyval0(Cita_ConferenceCitation self)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindFirstNmrEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_ConferenceCitation_FindFirstNmrEntry_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindFirstNmrEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_ConferenceCitation_FindFirstNmrEntry_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindFirstNmrEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_ConferenceCitation_FindFirstNmrEntry_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindFirstNmrEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
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
Entr_Entry Cita_ConferenceCitation_FindFirstNmrEntry_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindFirstNmrEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrProbe Cita_ConferenceCitation_FindFirstNmrProbe(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  Inst_NmrProbe obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrProbe");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findFirstNmrProbe'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findFirstNmrProbe' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrProbe Cita_ConferenceCitation_FindFirstNmrProbe_keyval0(Cita_ConferenceCitation self)
{
  
  Inst_NmrProbe  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindFirstNmrProbe(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrProbe Cita_ConferenceCitation_FindFirstNmrProbe_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  Inst_NmrProbe  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindFirstNmrProbe(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrProbe Cita_ConferenceCitation_FindFirstNmrProbe_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Inst_NmrProbe  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindFirstNmrProbe(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrProbe Cita_ConferenceCitation_FindFirstNmrProbe_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Inst_NmrProbe  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindFirstNmrProbe(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_ConferenceCitation self
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
Inst_NmrProbe Cita_ConferenceCitation_FindFirstNmrProbe_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Inst_NmrProbe  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindFirstNmrProbe(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrSpectrometer Cita_ConferenceCitation_FindFirstNmrSpectrometer(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  Inst_NmrSpectrometer obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrSpectrometer");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findFirstNmrSpectrometer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findFirstNmrSpectrometer' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrSpectrometer Cita_ConferenceCitation_FindFirstNmrSpectrometer_keyval0(Cita_ConferenceCitation self)
{
  
  Inst_NmrSpectrometer  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindFirstNmrSpectrometer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrSpectrometer Cita_ConferenceCitation_FindFirstNmrSpectrometer_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  Inst_NmrSpectrometer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindFirstNmrSpectrometer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrSpectrometer Cita_ConferenceCitation_FindFirstNmrSpectrometer_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Inst_NmrSpectrometer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindFirstNmrSpectrometer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrSpectrometer Cita_ConferenceCitation_FindFirstNmrSpectrometer_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Inst_NmrSpectrometer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindFirstNmrSpectrometer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
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
Inst_NmrSpectrometer Cita_ConferenceCitation_FindFirstNmrSpectrometer_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Inst_NmrSpectrometer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindFirstNmrSpectrometer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Prot_Protocol Cita_ConferenceCitation_FindFirstProtocol(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  Prot_Protocol obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstProtocol");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findFirstProtocol'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findFirstProtocol' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
Prot_Protocol Cita_ConferenceCitation_FindFirstProtocol_keyval0(Cita_ConferenceCitation self)
{
  
  Prot_Protocol  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindFirstProtocol(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Prot_Protocol Cita_ConferenceCitation_FindFirstProtocol_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  Prot_Protocol  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindFirstProtocol(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Prot_Protocol Cita_ConferenceCitation_FindFirstProtocol_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Prot_Protocol  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindFirstProtocol(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Prot_Protocol Cita_ConferenceCitation_FindFirstProtocol_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Prot_Protocol  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindFirstProtocol(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ConferenceCitation self
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
Prot_Protocol Cita_ConferenceCitation_FindFirstProtocol_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Prot_Protocol  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindFirstProtocol(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_ConferenceCitation_FindFirstRatioShiftReference(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  Nmr_ShiftReference obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRatioShiftReference");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findFirstRatioShiftReference'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findFirstRatioShiftReference' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_ConferenceCitation_FindFirstRatioShiftReference_keyval0(Cita_ConferenceCitation self)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindFirstRatioShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_ConferenceCitation_FindFirstRatioShiftReference_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindFirstRatioShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_ConferenceCitation_FindFirstRatioShiftReference_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindFirstRatioShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_ConferenceCitation_FindFirstRatioShiftReference_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindFirstRatioShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
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
Nmr_ShiftReference Cita_ConferenceCitation_FindFirstRatioShiftReference_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindFirstRatioShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_SampleConditionSet Cita_ConferenceCitation_FindFirstSampleConditionSet(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  Nmr_SampleConditionSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSampleConditionSet");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findFirstSampleConditionSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findFirstSampleConditionSet' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
Nmr_SampleConditionSet Cita_ConferenceCitation_FindFirstSampleConditionSet_keyval0(Cita_ConferenceCitation self)
{
  
  Nmr_SampleConditionSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindFirstSampleConditionSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_SampleConditionSet Cita_ConferenceCitation_FindFirstSampleConditionSet_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  Nmr_SampleConditionSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindFirstSampleConditionSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_SampleConditionSet Cita_ConferenceCitation_FindFirstSampleConditionSet_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_SampleConditionSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindFirstSampleConditionSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_SampleConditionSet Cita_ConferenceCitation_FindFirstSampleConditionSet_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_SampleConditionSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindFirstSampleConditionSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
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
Nmr_SampleConditionSet Cita_ConferenceCitation_FindFirstSampleConditionSet_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_SampleConditionSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindFirstSampleConditionSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_ConferenceCitation_FindFirstShiftReference(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  Nmr_ShiftReference obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstShiftReference");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findFirstShiftReference'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findFirstShiftReference' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_ConferenceCitation_FindFirstShiftReference_keyval0(Cita_ConferenceCitation self)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindFirstShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_ConferenceCitation_FindFirstShiftReference_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindFirstShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_ConferenceCitation_FindFirstShiftReference_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindFirstShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_ConferenceCitation_FindFirstShiftReference_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindFirstShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ConferenceCitation self
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
Nmr_ShiftReference Cita_ConferenceCitation_FindFirstShiftReference_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindFirstShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Meth_Software Cita_ConferenceCitation_FindFirstSoftware(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  Meth_Software obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSoftware");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findFirstSoftware'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findFirstSoftware' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
Meth_Software Cita_ConferenceCitation_FindFirstSoftware_keyval0(Cita_ConferenceCitation self)
{
  
  Meth_Software  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindFirstSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Meth_Software Cita_ConferenceCitation_FindFirstSoftware_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  Meth_Software  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindFirstSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Meth_Software Cita_ConferenceCitation_FindFirstSoftware_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Meth_Software  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindFirstSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Meth_Software Cita_ConferenceCitation_FindFirstSoftware_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Meth_Software  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindFirstSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ConferenceCitation self
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
Meth_Software Cita_ConferenceCitation_FindFirstSoftware_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Meth_Software  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindFirstSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Cita_ConferenceCitation_FindFirstTarget(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  Targ_Target obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstTarget");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findFirstTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findFirstTarget' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Cita_ConferenceCitation_FindFirstTargetGroup(Cita_ConferenceCitation self, ApiMap conditions)
{
  
  Targ_TargetGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstTargetGroup");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'findFirstTargetGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'findFirstTargetGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Cita_ConferenceCitation_FindFirstTargetGroup_keyval0(Cita_ConferenceCitation self)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Cita_ConferenceCitation_FindFirstTargetGroup_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Cita_ConferenceCitation_FindFirstTargetGroup_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Cita_ConferenceCitation_FindFirstTargetGroup_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
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
Targ_TargetGroup Cita_ConferenceCitation_FindFirstTargetGroup_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_ConferenceCitation self
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Cita_ConferenceCitation_FindFirstTarget_keyval0(Cita_ConferenceCitation self)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ConferenceCitation_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_ConferenceCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Cita_ConferenceCitation_FindFirstTarget_keyval1(Cita_ConferenceCitation self, char * key, ApiObject value)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ConferenceCitation_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Cita_ConferenceCitation_FindFirstTarget_keyval2(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ConferenceCitation_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_ConferenceCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Cita_ConferenceCitation_FindFirstTarget_keyval3(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ConferenceCitation_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_ConferenceCitation self
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
Targ_Target Cita_ConferenceCitation_FindFirstTarget_keyval4(Cita_ConferenceCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ConferenceCitation_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.general.Citation.ConferenceCitation
  @param  Cita_ConferenceCitation self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Cita_ConferenceCitation_Get(Cita_ConferenceCitation self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for ccp.general.Citation.ConferenceCitation.abstractNumber

Abstract 
'number' (not an integer) of presentation.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiString Cita_ConferenceCitation_GetAbstractNumber(Cita_ConferenceCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAbstractNumber");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getAbstractNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getAbstractNumber' is not callable");
  
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
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
Acco_AccessObject Cita_ConferenceCitation_GetAccess(Cita_ConferenceCitation self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getAccess' is not callable");
  
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
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
Acco_AccessObject Cita_ConferenceCitation_GetActiveAccess(Cita_ConferenceCitation self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getActiveAccess' is not callable");
  
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
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiList Cita_ConferenceCitation_GetApplicationData(Cita_ConferenceCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiList Cita_ConferenceCitation_GetAuthors(Cita_ConferenceCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAuthors");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getAuthors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getAuthors' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.general.Citation.ConferenceCitation
  @param  Cita_ConferenceCitation self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Cita_ConferenceCitation Cita_ConferenceCitation_GetByKey(Cita_ConferenceCitation self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Cita_ConferenceCitation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.casAbstractCode

Chemical 
Abstracts abstracting service (CAS) code
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiString Cita_ConferenceCitation_GetCasAbstractCode(Cita_ConferenceCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCasAbstractCode");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getCasAbstractCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getCasAbstractCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.citationStore

parent link
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
Cita_CitationStore Cita_ConferenceCitation_GetCitationStore(Cita_ConferenceCitation self)
{
  
  Cita_CitationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCitationStore");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getCitationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getCitationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.ConferenceCitation.city

City where 
conference is held
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiString Cita_ConferenceCitation_GetCity(Cita_ConferenceCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCity");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getCity'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getCity' is not callable");
  
  args = PyTuple_New(0);
  
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
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiString Cita_ConferenceCitation_GetClassName(Cita_ConferenceCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.ConferenceCitation.conferenceSite

Location 
of conference
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiString Cita_ConferenceCitation_GetConferenceSite(Cita_ConferenceCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getConferenceSite");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getConferenceSite'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getConferenceSite' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.ConferenceCitation.conferenceTitle

Title 
of cnference
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiString Cita_ConferenceCitation_GetConferenceTitle(Cita_ConferenceCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getConferenceTitle");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getConferenceTitle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getConferenceTitle' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.ConferenceCitation.country

Country where 
conference is held
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiString Cita_ConferenceCitation_GetCountry(Cita_ConferenceCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCountry");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getCountry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getCountry' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.dataLists

Nmr Generic Measurement 
Lists citing Citation.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiSet Cita_ConferenceCitation_GetDataLists(Cita_ConferenceCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataLists");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getDataLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getDataLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.details

Free text, for notes, 
explanatory comments, etc.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiString Cita_ConferenceCitation_GetDetails(Cita_ConferenceCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.doi

DOI identifier of citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiString Cita_ConferenceCitation_GetDoi(Cita_ConferenceCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDoi");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getDoi'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getDoi' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.editors

People who are editors of 
Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiList Cita_ConferenceCitation_GetEditors(Cita_ConferenceCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEditors");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getEditors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getEditors' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.ConferenceCitation.endDate

Finishing date 
of conference
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiString Cita_ConferenceCitation_GetEndDate(Cita_ConferenceCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEndDate");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getEndDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getEndDate' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiSet Cita_ConferenceCitation_GetExperiments(Cita_ConferenceCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getExperiments' is not callable");
  
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
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiList Cita_ConferenceCitation_GetFieldNames(Cita_ConferenceCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.firstPage

First page number (not 
an integer, as it might be e.g. '235A')
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiString Cita_ConferenceCitation_GetFirstPage(Cita_ConferenceCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFirstPage");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getFirstPage'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getFirstPage' is not callable");
  
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
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiBoolean Cita_ConferenceCitation_GetInConstructor(Cita_ConferenceCitation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getInConstructor' is not callable");
  
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
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiBoolean Cita_ConferenceCitation_GetIsDeleted(Cita_ConferenceCitation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.keywords

Keywords characterising 
Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiList Cita_ConferenceCitation_GetKeywords(Cita_ConferenceCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getKeywords");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getKeywords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getKeywords' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.lastPage

Last page number (not an 
integer, as it might be e.g. '238A')
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiString Cita_ConferenceCitation_GetLastPage(Cita_ConferenceCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastPage");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getLastPage'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getLastPage' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.medlineUiCode

Medline UI index 
code
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiString Cita_ConferenceCitation_GetMedlineUiCode(Cita_ConferenceCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMedlineUiCode");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getMedlineUiCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getMedlineUiCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiSet Cita_ConferenceCitation_GetMethods(Cita_ConferenceCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMethods");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getMethods'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getMethods' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.molSystems

MolSystems described 
by Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiSet Cita_ConferenceCitation_GetMolSystems(Cita_ConferenceCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolSystems");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getMolSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getMolSystems' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.molecules

Molecules described by 
Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiSet Cita_ConferenceCitation_GetMolecules(Cita_ConferenceCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolecules");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getMolecules'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getMolecules' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.nmrEntries

BioMagResBank entries 
that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiSet Cita_ConferenceCitation_GetNmrEntries(Cita_ConferenceCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrEntries");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getNmrEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getNmrEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiList Cita_ConferenceCitation_GetNmrEntriesPrimary(Cita_ConferenceCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrEntriesPrimary");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getNmrEntriesPrimary'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getNmrEntriesPrimary' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiSet Cita_ConferenceCitation_GetNmrProbes(Cita_ConferenceCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrProbes");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getNmrProbes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getNmrProbes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiSet Cita_ConferenceCitation_GetNmrSpectrometers(Cita_ConferenceCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrSpectrometers");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getNmrSpectrometers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getNmrSpectrometers' is not callable");
  
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
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiString Cita_ConferenceCitation_GetPackageName(Cita_ConferenceCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getPackageName' is not callable");
  
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
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiString Cita_ConferenceCitation_GetPackageShortName(Cita_ConferenceCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.parent

link to parent object - 
synonym for citationStore
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
Cita_CitationStore Cita_ConferenceCitation_GetParent(Cita_ConferenceCitation self)
{
  
  Cita_CitationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.protocols

Protocol where Citation 
refers to.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiSet Cita_ConferenceCitation_GetProtocols(Cita_ConferenceCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProtocols");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getProtocols'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getProtocols' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.pubMedId

pubMed ID
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiString Cita_ConferenceCitation_GetPubMedId(Cita_ConferenceCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPubMedId");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getPubMedId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getPubMedId' is not callable");
  
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
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiString Cita_ConferenceCitation_GetQualifiedName(Cita_ConferenceCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiSet Cita_ConferenceCitation_GetRatioShiftReferences(Cita_ConferenceCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRatioShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getRatioShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getRatioShiftReferences' is not callable");
  
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
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
Impl_MemopsRoot Cita_ConferenceCitation_GetRoot(Cita_ConferenceCitation self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiSet Cita_ConferenceCitation_GetSampleConditionSets(Cita_ConferenceCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSampleConditionSets");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getSampleConditionSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getSampleConditionSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiInteger Cita_ConferenceCitation_GetSerial(Cita_ConferenceCitation self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.shiftReferences

Shift References 
citing CItation.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiSet Cita_ConferenceCitation_GetShiftReferences(Cita_ConferenceCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getShiftReferences' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.software

Software described by 
Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiSet Cita_ConferenceCitation_GetSoftware(Cita_ConferenceCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSoftware");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getSoftware'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getSoftware' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.ConferenceCitation.startDate

Starting date 
of conference
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiString Cita_ConferenceCitation_GetStartDate(Cita_ConferenceCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStartDate");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getStartDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getStartDate' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.ConferenceCitation.stateProvince

State or 
provinde where conference is held
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiString Cita_ConferenceCitation_GetStateProvince(Cita_ConferenceCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStateProvince");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getStateProvince'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getStateProvince' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.status

E.g. 'published', 'in 
press','to be published' ?
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiString Cita_ConferenceCitation_GetStatus(Cita_ConferenceCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStatus");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getStatus' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiSet Cita_ConferenceCitation_GetTargetGroups(Cita_ConferenceCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTargetGroups");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getTargetGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getTargetGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiSet Cita_ConferenceCitation_GetTargets(Cita_ConferenceCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTargets");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getTargets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.title

Citation (article) Title
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiString Cita_ConferenceCitation_GetTitle(Cita_ConferenceCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTitle");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getTitle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getTitle' is not callable");
  
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
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
Impl_TopObject Cita_ConferenceCitation_GetTopObject(Cita_ConferenceCitation self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.year

Year of publication
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiInteger Cita_ConferenceCitation_GetYear(Cita_ConferenceCitation self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getYear");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'getYear'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'getYear' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.general.Citation.ConferenceCitation
  @param  Cita_CitationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Cita_ConferenceCitation Cita_ConferenceCitation_Init(Cita_CitationStore parent, ApiMap attrlinks)
{
  
  return Cita_CitationStore_NewConferenceCitation(parent, attrlinks);
}

/**
  Constructor for ccp.general.Citation.ConferenceCitation
  @param  Cita_CitationStore parent
  @returns  the new object
**/
Cita_ConferenceCitation Cita_ConferenceCitation_Init_reqd(Cita_CitationStore parent)
{
  
  Cita_ConferenceCitation  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Cita_ConferenceCitation_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ConferenceCitation self
  @param  Impl_ApplicationData value
**/
void *Cita_ConferenceCitation_RemoveApplicationData(Cita_ConferenceCitation self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
  @param  Affi_Person value
**/
void *Cita_ConferenceCitation_RemoveAuthor(Cita_ConferenceCitation self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAuthor");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'removeAuthor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'removeAuthor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Citation.Citation.editors

People who are editors 
of Citation
  @param  Cita_ConferenceCitation self
  @param  Affi_Person value
**/
void *Cita_ConferenceCitation_RemoveEditor(Cita_ConferenceCitation self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeEditor");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'removeEditor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'removeEditor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Citation.Citation.keywords

Keywords 
characterising Citation
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
void *Cita_ConferenceCitation_RemoveKeyword(Cita_ConferenceCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeKeyword");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'removeKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'removeKeyword' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ConferenceCitation self
  @param  Mols_MolSystem value
**/
void *Cita_ConferenceCitation_RemoveMolSystem(Cita_ConferenceCitation self, Mols_MolSystem value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeMolSystem");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'removeMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'removeMolSystem' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @param  Entr_Entry value
**/
void *Cita_ConferenceCitation_RemoveNmrEntry(Cita_ConferenceCitation self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNmrEntry");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'removeNmrEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'removeNmrEntry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ConferenceCitation self
  @param  Entr_Entry value
**/
void *Cita_ConferenceCitation_RemoveNmrEntryPrimary(Cita_ConferenceCitation self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNmrEntryPrimary");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'removeNmrEntryPrimary'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'removeNmrEntryPrimary' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ConferenceCitation self
  @param  Prot_Protocol value
**/
void *Cita_ConferenceCitation_RemoveProtocol(Cita_ConferenceCitation self, Prot_Protocol value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeProtocol");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'removeProtocol'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'removeProtocol' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ConferenceCitation self
  @param  Nmr_ShiftReference value
**/
void *Cita_ConferenceCitation_RemoveShiftReference(Cita_ConferenceCitation self, Nmr_ShiftReference value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeShiftReference");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'removeShiftReference'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'removeShiftReference' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ConferenceCitation self
  @param  Targ_Target value
**/
void *Cita_ConferenceCitation_RemoveTarget(Cita_ConferenceCitation self, Targ_Target value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeTarget");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'removeTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'removeTarget' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @param  Targ_TargetGroup value
**/
void *Cita_ConferenceCitation_RemoveTargetGroup(Cita_ConferenceCitation self, Targ_TargetGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeTargetGroup");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'removeTargetGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'removeTargetGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.general.Citation.ConferenceCitation
  @param  Cita_ConferenceCitation self
  @param  ApiString name
  @param  ApiObject value
**/
void *Cita_ConferenceCitation_Set(Cita_ConferenceCitation self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for ccp.general.Citation.ConferenceCitation.abstractNumber

Abstract 
'number' (not an integer) of presentation.
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
void *Cita_ConferenceCitation_SetAbstractNumber(Cita_ConferenceCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAbstractNumber");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setAbstractNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setAbstractNumber' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cita_ConferenceCitation self
  @param  Acco_AccessObject value
**/
void *Cita_ConferenceCitation_SetAccess(Cita_ConferenceCitation self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setAccess' is not callable");
  
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
  @param  Cita_ConferenceCitation self
  @param  ApiList values
**/
void *Cita_ConferenceCitation_SetApplicationData(Cita_ConferenceCitation self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ConferenceCitation self
  @param  ApiList values
**/
void *Cita_ConferenceCitation_SetAuthors(Cita_ConferenceCitation self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAuthors");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setAuthors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setAuthors' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.casAbstractCode

Chemical 
Abstracts abstracting service (CAS) code
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
void *Cita_ConferenceCitation_SetCasAbstractCode(Cita_ConferenceCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCasAbstractCode");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setCasAbstractCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setCasAbstractCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.ConferenceCitation.city

City where 
conference is held
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
void *Cita_ConferenceCitation_SetCity(Cita_ConferenceCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCity");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setCity'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setCity' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.ConferenceCitation.conferenceSite

Location 
of conference
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
void *Cita_ConferenceCitation_SetConferenceSite(Cita_ConferenceCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setConferenceSite");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setConferenceSite'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setConferenceSite' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.ConferenceCitation.conferenceTitle

Title 
of cnference
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
void *Cita_ConferenceCitation_SetConferenceTitle(Cita_ConferenceCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setConferenceTitle");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setConferenceTitle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setConferenceTitle' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.ConferenceCitation.country

Country where 
conference is held
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
void *Cita_ConferenceCitation_SetCountry(Cita_ConferenceCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCountry");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setCountry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setCountry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.dataLists

Nmr Generic Measurement 
Lists citing Citation.
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
void *Cita_ConferenceCitation_SetDataLists(Cita_ConferenceCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDataLists");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setDataLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setDataLists' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.details

Free text, for notes, 
explanatory comments, etc.
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
void *Cita_ConferenceCitation_SetDetails(Cita_ConferenceCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.doi

DOI identifier of citation
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
void *Cita_ConferenceCitation_SetDoi(Cita_ConferenceCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDoi");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setDoi'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setDoi' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.editors

People who are editors of 
Citation
  @param  Cita_ConferenceCitation self
  @param  ApiList values
**/
void *Cita_ConferenceCitation_SetEditors(Cita_ConferenceCitation self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setEditors");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setEditors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setEditors' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.ConferenceCitation.endDate

Finishing date 
of conference
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
void *Cita_ConferenceCitation_SetEndDate(Cita_ConferenceCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setEndDate");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setEndDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setEndDate' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
void *Cita_ConferenceCitation_SetExperiments(Cita_ConferenceCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setExperiments' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.firstPage

First page number (not 
an integer, as it might be e.g. '235A')
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
void *Cita_ConferenceCitation_SetFirstPage(Cita_ConferenceCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFirstPage");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setFirstPage'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setFirstPage' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.keywords

Keywords characterising 
Citation
  @param  Cita_ConferenceCitation self
  @param  ApiList values
**/
void *Cita_ConferenceCitation_SetKeywords(Cita_ConferenceCitation self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setKeywords");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setKeywords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setKeywords' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.lastPage

Last page number (not an 
integer, as it might be e.g. '238A')
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
void *Cita_ConferenceCitation_SetLastPage(Cita_ConferenceCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastPage");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setLastPage'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setLastPage' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.medlineUiCode

Medline UI index 
code
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
void *Cita_ConferenceCitation_SetMedlineUiCode(Cita_ConferenceCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMedlineUiCode");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setMedlineUiCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setMedlineUiCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
void *Cita_ConferenceCitation_SetMethods(Cita_ConferenceCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMethods");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setMethods'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setMethods' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.molSystems

MolSystems described 
by Citation
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
void *Cita_ConferenceCitation_SetMolSystems(Cita_ConferenceCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolSystems");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setMolSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setMolSystems' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.molecules

Molecules described by 
Citation
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
void *Cita_ConferenceCitation_SetMolecules(Cita_ConferenceCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolecules");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setMolecules'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setMolecules' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.nmrEntries

BioMagResBank entries 
that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
void *Cita_ConferenceCitation_SetNmrEntries(Cita_ConferenceCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrEntries");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setNmrEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setNmrEntries' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ConferenceCitation self
  @param  ApiList values
**/
void *Cita_ConferenceCitation_SetNmrEntriesPrimary(Cita_ConferenceCitation self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrEntriesPrimary");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setNmrEntriesPrimary'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setNmrEntriesPrimary' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
void *Cita_ConferenceCitation_SetNmrProbes(Cita_ConferenceCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrProbes");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setNmrProbes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setNmrProbes' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
void *Cita_ConferenceCitation_SetNmrSpectrometers(Cita_ConferenceCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrSpectrometers");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setNmrSpectrometers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setNmrSpectrometers' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.protocols

Protocol where Citation 
refers to.
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
void *Cita_ConferenceCitation_SetProtocols(Cita_ConferenceCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setProtocols");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setProtocols'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setProtocols' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.pubMedId

pubMed ID
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
void *Cita_ConferenceCitation_SetPubMedId(Cita_ConferenceCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPubMedId");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setPubMedId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setPubMedId' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
void *Cita_ConferenceCitation_SetRatioShiftReferences(Cita_ConferenceCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRatioShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setRatioShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setRatioShiftReferences' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
void *Cita_ConferenceCitation_SetSampleConditionSets(Cita_ConferenceCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSampleConditionSets");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setSampleConditionSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setSampleConditionSets' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Cita_ConferenceCitation self
  @param  ApiInteger value
**/
void *Cita_ConferenceCitation_SetSerial(Cita_ConferenceCitation self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.shiftReferences

Shift References 
citing CItation.
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
void *Cita_ConferenceCitation_SetShiftReferences(Cita_ConferenceCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setShiftReferences' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.software

Software described by 
Citation
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
void *Cita_ConferenceCitation_SetSoftware(Cita_ConferenceCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSoftware");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setSoftware'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setSoftware' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.ConferenceCitation.startDate

Starting date 
of conference
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
void *Cita_ConferenceCitation_SetStartDate(Cita_ConferenceCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStartDate");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setStartDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setStartDate' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.ConferenceCitation.stateProvince

State or 
provinde where conference is held
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
void *Cita_ConferenceCitation_SetStateProvince(Cita_ConferenceCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStateProvince");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setStateProvince'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setStateProvince' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.status

E.g. 'published', 'in 
press','to be published' ?
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
void *Cita_ConferenceCitation_SetStatus(Cita_ConferenceCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStatus");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setStatus' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
void *Cita_ConferenceCitation_SetTargetGroups(Cita_ConferenceCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTargetGroups");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setTargetGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setTargetGroups' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ConferenceCitation self
  @param  ApiSet values
**/
void *Cita_ConferenceCitation_SetTargets(Cita_ConferenceCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTargets");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setTargets' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.title

Citation (article) Title
  @param  Cita_ConferenceCitation self
  @param  ApiString value
**/
void *Cita_ConferenceCitation_SetTitle(Cita_ConferenceCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTitle");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setTitle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setTitle' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.year

Year of publication
  @param  Cita_ConferenceCitation self
  @param  ApiInteger value
**/
void *Cita_ConferenceCitation_SetYear(Cita_ConferenceCitation self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setYear");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'setYear'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'setYear' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiList Cita_ConferenceCitation_SortedDataLists(Cita_ConferenceCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDataLists");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'sortedDataLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'sortedDataLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiList Cita_ConferenceCitation_SortedExperiments(Cita_ConferenceCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'sortedExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'sortedExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiList Cita_ConferenceCitation_SortedMethods(Cita_ConferenceCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMethods");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'sortedMethods'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'sortedMethods' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiList Cita_ConferenceCitation_SortedMolSystems(Cita_ConferenceCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolSystems");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'sortedMolSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'sortedMolSystems' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiList Cita_ConferenceCitation_SortedMolecules(Cita_ConferenceCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolecules");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'sortedMolecules'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'sortedMolecules' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiList Cita_ConferenceCitation_SortedNmrEntries(Cita_ConferenceCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrEntries");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'sortedNmrEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'sortedNmrEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiList Cita_ConferenceCitation_SortedNmrProbes(Cita_ConferenceCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrProbes");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'sortedNmrProbes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'sortedNmrProbes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiList Cita_ConferenceCitation_SortedNmrSpectrometers(Cita_ConferenceCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrSpectrometers");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'sortedNmrSpectrometers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'sortedNmrSpectrometers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiList Cita_ConferenceCitation_SortedProtocols(Cita_ConferenceCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedProtocols");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'sortedProtocols'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'sortedProtocols' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiList Cita_ConferenceCitation_SortedRatioShiftReferences(Cita_ConferenceCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRatioShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'sortedRatioShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'sortedRatioShiftReferences' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiList Cita_ConferenceCitation_SortedSampleConditionSets(Cita_ConferenceCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSampleConditionSets");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'sortedSampleConditionSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'sortedSampleConditionSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiList Cita_ConferenceCitation_SortedShiftReferences(Cita_ConferenceCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'sortedShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'sortedShiftReferences' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Citation.Citation.software

Software described by 
Citation
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiList Cita_ConferenceCitation_SortedSoftware(Cita_ConferenceCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSoftware");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'sortedSoftware'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'sortedSoftware' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiList Cita_ConferenceCitation_SortedTargetGroups(Cita_ConferenceCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedTargetGroups");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'sortedTargetGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'sortedTargetGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ConferenceCitation self
  @returns   the result
**/
ApiList Cita_ConferenceCitation_SortedTargets(Cita_ConferenceCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedTargets");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ConferenceCitation: cannot find method 'sortedTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ConferenceCitation: method 'sortedTargets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
