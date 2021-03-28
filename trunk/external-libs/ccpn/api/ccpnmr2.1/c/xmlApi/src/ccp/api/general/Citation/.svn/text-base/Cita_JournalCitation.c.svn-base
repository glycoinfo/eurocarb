
#include "ccp.h"

/*
  Citation (litterature reference) to Journal article
*/

/* package ccp.api.general.Citation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_JournalCitation self
  @param  Impl_ApplicationData value
**/
void *Cita_JournalCitation_AddApplicationData(Cita_JournalCitation self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
  @param  Affi_Person value
**/
void *Cita_JournalCitation_AddAuthor(Cita_JournalCitation self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAuthor");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'addAuthor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'addAuthor' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  Affi_Person value
**/
void *Cita_JournalCitation_AddEditor(Cita_JournalCitation self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addEditor");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'addEditor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'addEditor' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
void *Cita_JournalCitation_AddKeyword(Cita_JournalCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addKeyword");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'addKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'addKeyword' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  Mols_MolSystem value
**/
void *Cita_JournalCitation_AddMolSystem(Cita_JournalCitation self, Mols_MolSystem value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addMolSystem");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'addMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'addMolSystem' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  Entr_Entry value
**/
void *Cita_JournalCitation_AddNmrEntry(Cita_JournalCitation self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNmrEntry");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'addNmrEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'addNmrEntry' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  Entr_Entry value
**/
void *Cita_JournalCitation_AddNmrEntryPrimary(Cita_JournalCitation self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNmrEntryPrimary");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'addNmrEntryPrimary'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'addNmrEntryPrimary' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  Prot_Protocol value
**/
void *Cita_JournalCitation_AddProtocol(Cita_JournalCitation self, Prot_Protocol value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addProtocol");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'addProtocol'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'addProtocol' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  Nmr_ShiftReference value
**/
void *Cita_JournalCitation_AddShiftReference(Cita_JournalCitation self, Nmr_ShiftReference value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addShiftReference");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'addShiftReference'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'addShiftReference' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  Targ_Target value
**/
void *Cita_JournalCitation_AddTarget(Cita_JournalCitation self, Targ_Target value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addTarget");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'addTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'addTarget' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @param  Targ_TargetGroup value
**/
void *Cita_JournalCitation_AddTargetGroup(Cita_JournalCitation self, Targ_TargetGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addTargetGroup");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'addTargetGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'addTargetGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.general.Citation.JournalCitation
  @param  Cita_JournalCitation self
  @param  ApiBoolean complete
**/
void *Cita_JournalCitation_CheckAllValid(Cita_JournalCitation self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.general.Citation.JournalCitation
  @param  Cita_JournalCitation self
  @param  ApiBoolean complete
**/
void *Cita_JournalCitation_CheckValid(Cita_JournalCitation self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'checkValid' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_JournalCitation_FindAllApplicationData(Cita_JournalCitation self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findAllApplicationData' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_JournalCitation_FindAllApplicationData_keyval0(Cita_JournalCitation self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_JournalCitation_FindAllApplicationData_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_JournalCitation_FindAllApplicationData_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_JournalCitation_FindAllApplicationData_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_JournalCitation self
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
ApiList Cita_JournalCitation_FindAllApplicationData_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_JournalCitation_FindAllAuthors(Cita_JournalCitation self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAuthors");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findAllAuthors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findAllAuthors' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_JournalCitation_FindAllAuthors_keyval0(Cita_JournalCitation self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindAllAuthors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_JournalCitation_FindAllAuthors_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindAllAuthors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_JournalCitation_FindAllAuthors_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindAllAuthors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_JournalCitation_FindAllAuthors_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindAllAuthors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
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
ApiList Cita_JournalCitation_FindAllAuthors_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindAllAuthors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllDataLists(Cita_JournalCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDataLists");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findAllDataLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findAllDataLists' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllDataLists_keyval0(Cita_JournalCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindAllDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllDataLists_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindAllDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllDataLists_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindAllDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllDataLists_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindAllDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_JournalCitation self
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
ApiSet Cita_JournalCitation_FindAllDataLists_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindAllDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_JournalCitation_FindAllEditors(Cita_JournalCitation self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllEditors");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findAllEditors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findAllEditors' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_JournalCitation_FindAllEditors_keyval0(Cita_JournalCitation self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindAllEditors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_JournalCitation_FindAllEditors_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindAllEditors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_JournalCitation_FindAllEditors_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindAllEditors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_JournalCitation_FindAllEditors_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindAllEditors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_JournalCitation self
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
ApiList Cita_JournalCitation_FindAllEditors_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindAllEditors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllExperiments(Cita_JournalCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findAllExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findAllExperiments' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllExperiments_keyval0(Cita_JournalCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllExperiments_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllExperiments_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllExperiments_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_JournalCitation self
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
ApiSet Cita_JournalCitation_FindAllExperiments_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllMethods(Cita_JournalCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMethods");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findAllMethods'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findAllMethods' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllMethods_keyval0(Cita_JournalCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindAllMethods(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllMethods_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindAllMethods(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllMethods_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindAllMethods(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllMethods_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindAllMethods(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_JournalCitation self
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
ApiSet Cita_JournalCitation_FindAllMethods_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindAllMethods(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllMolSystems(Cita_JournalCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolSystems");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findAllMolSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findAllMolSystems' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllMolSystems_keyval0(Cita_JournalCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllMolSystems_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllMolSystems_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllMolSystems_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_JournalCitation self
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
ApiSet Cita_JournalCitation_FindAllMolSystems_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllMolecules(Cita_JournalCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolecules");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findAllMolecules'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findAllMolecules' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllMolecules_keyval0(Cita_JournalCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindAllMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllMolecules_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindAllMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllMolecules_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindAllMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllMolecules_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindAllMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_JournalCitation self
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
ApiSet Cita_JournalCitation_FindAllMolecules_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindAllMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllNmrEntries(Cita_JournalCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrEntries");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findAllNmrEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findAllNmrEntries' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_JournalCitation_FindAllNmrEntriesPrimary(Cita_JournalCitation self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrEntriesPrimary");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findAllNmrEntriesPrimary'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findAllNmrEntriesPrimary' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_JournalCitation_FindAllNmrEntriesPrimary_keyval0(Cita_JournalCitation self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindAllNmrEntriesPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_JournalCitation_FindAllNmrEntriesPrimary_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindAllNmrEntriesPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_JournalCitation_FindAllNmrEntriesPrimary_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindAllNmrEntriesPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_JournalCitation_FindAllNmrEntriesPrimary_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindAllNmrEntriesPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_JournalCitation self
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
ApiList Cita_JournalCitation_FindAllNmrEntriesPrimary_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindAllNmrEntriesPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllNmrEntries_keyval0(Cita_JournalCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindAllNmrEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllNmrEntries_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindAllNmrEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllNmrEntries_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindAllNmrEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllNmrEntries_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindAllNmrEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_JournalCitation self
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
ApiSet Cita_JournalCitation_FindAllNmrEntries_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindAllNmrEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllNmrProbes(Cita_JournalCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrProbes");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findAllNmrProbes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findAllNmrProbes' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllNmrProbes_keyval0(Cita_JournalCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindAllNmrProbes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllNmrProbes_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindAllNmrProbes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllNmrProbes_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindAllNmrProbes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllNmrProbes_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindAllNmrProbes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_JournalCitation self
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
ApiSet Cita_JournalCitation_FindAllNmrProbes_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindAllNmrProbes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllNmrSpectrometers(Cita_JournalCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrSpectrometers");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findAllNmrSpectrometers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findAllNmrSpectrometers' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllNmrSpectrometers_keyval0(Cita_JournalCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindAllNmrSpectrometers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllNmrSpectrometers_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindAllNmrSpectrometers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllNmrSpectrometers_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindAllNmrSpectrometers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllNmrSpectrometers_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindAllNmrSpectrometers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_JournalCitation self
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
ApiSet Cita_JournalCitation_FindAllNmrSpectrometers_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindAllNmrSpectrometers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllProtocols(Cita_JournalCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllProtocols");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findAllProtocols'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findAllProtocols' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllProtocols_keyval0(Cita_JournalCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindAllProtocols(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllProtocols_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindAllProtocols(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllProtocols_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindAllProtocols(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllProtocols_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindAllProtocols(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_JournalCitation self
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
ApiSet Cita_JournalCitation_FindAllProtocols_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindAllProtocols(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllRatioShiftReferences(Cita_JournalCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRatioShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findAllRatioShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findAllRatioShiftReferences' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllRatioShiftReferences_keyval0(Cita_JournalCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindAllRatioShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllRatioShiftReferences_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindAllRatioShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllRatioShiftReferences_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindAllRatioShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllRatioShiftReferences_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindAllRatioShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_JournalCitation self
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
ApiSet Cita_JournalCitation_FindAllRatioShiftReferences_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindAllRatioShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllSampleConditionSets(Cita_JournalCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSampleConditionSets");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findAllSampleConditionSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findAllSampleConditionSets' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllSampleConditionSets_keyval0(Cita_JournalCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindAllSampleConditionSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllSampleConditionSets_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindAllSampleConditionSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllSampleConditionSets_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindAllSampleConditionSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllSampleConditionSets_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindAllSampleConditionSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_JournalCitation self
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
ApiSet Cita_JournalCitation_FindAllSampleConditionSets_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindAllSampleConditionSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllShiftReferences(Cita_JournalCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findAllShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findAllShiftReferences' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllShiftReferences_keyval0(Cita_JournalCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindAllShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllShiftReferences_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindAllShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllShiftReferences_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindAllShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllShiftReferences_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindAllShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_JournalCitation self
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
ApiSet Cita_JournalCitation_FindAllShiftReferences_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindAllShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllSoftware(Cita_JournalCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSoftware");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findAllSoftware'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findAllSoftware' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllSoftware_keyval0(Cita_JournalCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindAllSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllSoftware_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindAllSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllSoftware_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindAllSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllSoftware_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindAllSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_JournalCitation self
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
ApiSet Cita_JournalCitation_FindAllSoftware_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindAllSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllTargetGroups(Cita_JournalCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllTargetGroups");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findAllTargetGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findAllTargetGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllTargetGroups_keyval0(Cita_JournalCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllTargetGroups_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllTargetGroups_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllTargetGroups_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
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
ApiSet Cita_JournalCitation_FindAllTargetGroups_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllTargets(Cita_JournalCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllTargets");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findAllTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findAllTargets' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllTargets_keyval0(Cita_JournalCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllTargets_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllTargets_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_JournalCitation_FindAllTargets_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_JournalCitation self
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
ApiSet Cita_JournalCitation_FindAllTargets_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cita_JournalCitation_FindFirstApplicationData(Cita_JournalCitation self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findFirstApplicationData' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cita_JournalCitation_FindFirstApplicationData_keyval0(Cita_JournalCitation self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cita_JournalCitation_FindFirstApplicationData_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cita_JournalCitation_FindFirstApplicationData_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cita_JournalCitation_FindFirstApplicationData_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_JournalCitation self
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
Impl_ApplicationData Cita_JournalCitation_FindFirstApplicationData_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_JournalCitation_FindFirstAuthor(Cita_JournalCitation self, ApiMap conditions)
{
  
  Affi_Person obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAuthor");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findFirstAuthor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findFirstAuthor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_JournalCitation_FindFirstAuthor_keyval0(Cita_JournalCitation self)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindFirstAuthor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_JournalCitation_FindFirstAuthor_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindFirstAuthor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_JournalCitation_FindFirstAuthor_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindFirstAuthor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_JournalCitation_FindFirstAuthor_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindFirstAuthor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
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
Affi_Person Cita_JournalCitation_FindFirstAuthor_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindFirstAuthor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataList Cita_JournalCitation_FindFirstDataList(Cita_JournalCitation self, ApiMap conditions)
{
  
  Nmr_DataList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDataList");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findFirstDataList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findFirstDataList' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataList Cita_JournalCitation_FindFirstDataList_keyval0(Cita_JournalCitation self)
{
  
  Nmr_DataList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindFirstDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataList Cita_JournalCitation_FindFirstDataList_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  Nmr_DataList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindFirstDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataList Cita_JournalCitation_FindFirstDataList_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_DataList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindFirstDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataList Cita_JournalCitation_FindFirstDataList_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_DataList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindFirstDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_JournalCitation self
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
Nmr_DataList Cita_JournalCitation_FindFirstDataList_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_DataList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindFirstDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_JournalCitation_FindFirstEditor(Cita_JournalCitation self, ApiMap conditions)
{
  
  Affi_Person obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstEditor");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findFirstEditor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findFirstEditor' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_JournalCitation_FindFirstEditor_keyval0(Cita_JournalCitation self)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindFirstEditor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_JournalCitation_FindFirstEditor_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindFirstEditor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_JournalCitation_FindFirstEditor_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindFirstEditor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_JournalCitation_FindFirstEditor_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindFirstEditor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_JournalCitation self
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
Affi_Person Cita_JournalCitation_FindFirstEditor_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindFirstEditor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Cita_JournalCitation_FindFirstExperiment(Cita_JournalCitation self, ApiMap conditions)
{
  
  Nmr_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExperiment");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findFirstExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findFirstExperiment' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Cita_JournalCitation_FindFirstExperiment_keyval0(Cita_JournalCitation self)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Cita_JournalCitation_FindFirstExperiment_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Cita_JournalCitation_FindFirstExperiment_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Cita_JournalCitation_FindFirstExperiment_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_JournalCitation self
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
Nmr_Experiment Cita_JournalCitation_FindFirstExperiment_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Meth_Method Cita_JournalCitation_FindFirstMethod(Cita_JournalCitation self, ApiMap conditions)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMethod");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findFirstMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findFirstMethod' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
Meth_Method Cita_JournalCitation_FindFirstMethod_keyval0(Cita_JournalCitation self)
{
  
  Meth_Method  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindFirstMethod(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Meth_Method Cita_JournalCitation_FindFirstMethod_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  Meth_Method  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindFirstMethod(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Meth_Method Cita_JournalCitation_FindFirstMethod_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Meth_Method  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindFirstMethod(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Meth_Method Cita_JournalCitation_FindFirstMethod_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Meth_Method  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindFirstMethod(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_JournalCitation self
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
Meth_Method Cita_JournalCitation_FindFirstMethod_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Meth_Method  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindFirstMethod(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Cita_JournalCitation_FindFirstMolSystem(Cita_JournalCitation self, ApiMap conditions)
{
  
  Mols_MolSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolSystem");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findFirstMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findFirstMolSystem' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Cita_JournalCitation_FindFirstMolSystem_keyval0(Cita_JournalCitation self)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Cita_JournalCitation_FindFirstMolSystem_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Cita_JournalCitation_FindFirstMolSystem_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Cita_JournalCitation_FindFirstMolSystem_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_JournalCitation self
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
Mols_MolSystem Cita_JournalCitation_FindFirstMolSystem_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mole_Molecule Cita_JournalCitation_FindFirstMolecule(Cita_JournalCitation self, ApiMap conditions)
{
  
  Mole_Molecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolecule");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findFirstMolecule'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findFirstMolecule' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
Mole_Molecule Cita_JournalCitation_FindFirstMolecule_keyval0(Cita_JournalCitation self)
{
  
  Mole_Molecule  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindFirstMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mole_Molecule Cita_JournalCitation_FindFirstMolecule_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  Mole_Molecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindFirstMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mole_Molecule Cita_JournalCitation_FindFirstMolecule_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mole_Molecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindFirstMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mole_Molecule Cita_JournalCitation_FindFirstMolecule_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mole_Molecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindFirstMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_JournalCitation self
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
Mole_Molecule Cita_JournalCitation_FindFirstMolecule_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mole_Molecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindFirstMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_JournalCitation_FindFirstNmrEntry(Cita_JournalCitation self, ApiMap conditions)
{
  
  Entr_Entry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrEntry");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findFirstNmrEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findFirstNmrEntry' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_JournalCitation_FindFirstNmrEntryPrimary(Cita_JournalCitation self, ApiMap conditions)
{
  
  Entr_Entry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrEntryPrimary");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findFirstNmrEntryPrimary'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findFirstNmrEntryPrimary' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_JournalCitation_FindFirstNmrEntryPrimary_keyval0(Cita_JournalCitation self)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindFirstNmrEntryPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_JournalCitation_FindFirstNmrEntryPrimary_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindFirstNmrEntryPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_JournalCitation_FindFirstNmrEntryPrimary_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindFirstNmrEntryPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_JournalCitation_FindFirstNmrEntryPrimary_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindFirstNmrEntryPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_JournalCitation self
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
Entr_Entry Cita_JournalCitation_FindFirstNmrEntryPrimary_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindFirstNmrEntryPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_JournalCitation_FindFirstNmrEntry_keyval0(Cita_JournalCitation self)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindFirstNmrEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_JournalCitation_FindFirstNmrEntry_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindFirstNmrEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_JournalCitation_FindFirstNmrEntry_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindFirstNmrEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_JournalCitation_FindFirstNmrEntry_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindFirstNmrEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_JournalCitation self
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
Entr_Entry Cita_JournalCitation_FindFirstNmrEntry_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindFirstNmrEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrProbe Cita_JournalCitation_FindFirstNmrProbe(Cita_JournalCitation self, ApiMap conditions)
{
  
  Inst_NmrProbe obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrProbe");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findFirstNmrProbe'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findFirstNmrProbe' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrProbe Cita_JournalCitation_FindFirstNmrProbe_keyval0(Cita_JournalCitation self)
{
  
  Inst_NmrProbe  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindFirstNmrProbe(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrProbe Cita_JournalCitation_FindFirstNmrProbe_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  Inst_NmrProbe  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindFirstNmrProbe(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrProbe Cita_JournalCitation_FindFirstNmrProbe_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Inst_NmrProbe  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindFirstNmrProbe(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrProbe Cita_JournalCitation_FindFirstNmrProbe_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Inst_NmrProbe  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindFirstNmrProbe(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_JournalCitation self
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
Inst_NmrProbe Cita_JournalCitation_FindFirstNmrProbe_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Inst_NmrProbe  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindFirstNmrProbe(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrSpectrometer Cita_JournalCitation_FindFirstNmrSpectrometer(Cita_JournalCitation self, ApiMap conditions)
{
  
  Inst_NmrSpectrometer obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrSpectrometer");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findFirstNmrSpectrometer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findFirstNmrSpectrometer' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrSpectrometer Cita_JournalCitation_FindFirstNmrSpectrometer_keyval0(Cita_JournalCitation self)
{
  
  Inst_NmrSpectrometer  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindFirstNmrSpectrometer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrSpectrometer Cita_JournalCitation_FindFirstNmrSpectrometer_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  Inst_NmrSpectrometer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindFirstNmrSpectrometer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrSpectrometer Cita_JournalCitation_FindFirstNmrSpectrometer_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Inst_NmrSpectrometer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindFirstNmrSpectrometer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrSpectrometer Cita_JournalCitation_FindFirstNmrSpectrometer_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Inst_NmrSpectrometer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindFirstNmrSpectrometer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_JournalCitation self
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
Inst_NmrSpectrometer Cita_JournalCitation_FindFirstNmrSpectrometer_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Inst_NmrSpectrometer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindFirstNmrSpectrometer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Prot_Protocol Cita_JournalCitation_FindFirstProtocol(Cita_JournalCitation self, ApiMap conditions)
{
  
  Prot_Protocol obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstProtocol");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findFirstProtocol'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findFirstProtocol' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
Prot_Protocol Cita_JournalCitation_FindFirstProtocol_keyval0(Cita_JournalCitation self)
{
  
  Prot_Protocol  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindFirstProtocol(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Prot_Protocol Cita_JournalCitation_FindFirstProtocol_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  Prot_Protocol  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindFirstProtocol(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Prot_Protocol Cita_JournalCitation_FindFirstProtocol_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Prot_Protocol  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindFirstProtocol(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Prot_Protocol Cita_JournalCitation_FindFirstProtocol_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Prot_Protocol  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindFirstProtocol(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_JournalCitation self
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
Prot_Protocol Cita_JournalCitation_FindFirstProtocol_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Prot_Protocol  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindFirstProtocol(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_JournalCitation_FindFirstRatioShiftReference(Cita_JournalCitation self, ApiMap conditions)
{
  
  Nmr_ShiftReference obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRatioShiftReference");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findFirstRatioShiftReference'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findFirstRatioShiftReference' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_JournalCitation_FindFirstRatioShiftReference_keyval0(Cita_JournalCitation self)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindFirstRatioShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_JournalCitation_FindFirstRatioShiftReference_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindFirstRatioShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_JournalCitation_FindFirstRatioShiftReference_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindFirstRatioShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_JournalCitation_FindFirstRatioShiftReference_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindFirstRatioShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_JournalCitation self
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
Nmr_ShiftReference Cita_JournalCitation_FindFirstRatioShiftReference_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindFirstRatioShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_SampleConditionSet Cita_JournalCitation_FindFirstSampleConditionSet(Cita_JournalCitation self, ApiMap conditions)
{
  
  Nmr_SampleConditionSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSampleConditionSet");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findFirstSampleConditionSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findFirstSampleConditionSet' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
Nmr_SampleConditionSet Cita_JournalCitation_FindFirstSampleConditionSet_keyval0(Cita_JournalCitation self)
{
  
  Nmr_SampleConditionSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindFirstSampleConditionSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_SampleConditionSet Cita_JournalCitation_FindFirstSampleConditionSet_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  Nmr_SampleConditionSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindFirstSampleConditionSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_SampleConditionSet Cita_JournalCitation_FindFirstSampleConditionSet_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_SampleConditionSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindFirstSampleConditionSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_SampleConditionSet Cita_JournalCitation_FindFirstSampleConditionSet_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_SampleConditionSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindFirstSampleConditionSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_JournalCitation self
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
Nmr_SampleConditionSet Cita_JournalCitation_FindFirstSampleConditionSet_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_SampleConditionSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindFirstSampleConditionSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_JournalCitation_FindFirstShiftReference(Cita_JournalCitation self, ApiMap conditions)
{
  
  Nmr_ShiftReference obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstShiftReference");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findFirstShiftReference'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findFirstShiftReference' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_JournalCitation_FindFirstShiftReference_keyval0(Cita_JournalCitation self)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindFirstShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_JournalCitation_FindFirstShiftReference_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindFirstShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_JournalCitation_FindFirstShiftReference_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindFirstShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_JournalCitation_FindFirstShiftReference_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindFirstShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_JournalCitation self
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
Nmr_ShiftReference Cita_JournalCitation_FindFirstShiftReference_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindFirstShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Meth_Software Cita_JournalCitation_FindFirstSoftware(Cita_JournalCitation self, ApiMap conditions)
{
  
  Meth_Software obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSoftware");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findFirstSoftware'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findFirstSoftware' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
Meth_Software Cita_JournalCitation_FindFirstSoftware_keyval0(Cita_JournalCitation self)
{
  
  Meth_Software  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindFirstSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Meth_Software Cita_JournalCitation_FindFirstSoftware_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  Meth_Software  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindFirstSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Meth_Software Cita_JournalCitation_FindFirstSoftware_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Meth_Software  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindFirstSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Meth_Software Cita_JournalCitation_FindFirstSoftware_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Meth_Software  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindFirstSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_JournalCitation self
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
Meth_Software Cita_JournalCitation_FindFirstSoftware_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Meth_Software  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindFirstSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Cita_JournalCitation_FindFirstTarget(Cita_JournalCitation self, ApiMap conditions)
{
  
  Targ_Target obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstTarget");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findFirstTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findFirstTarget' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Cita_JournalCitation_FindFirstTargetGroup(Cita_JournalCitation self, ApiMap conditions)
{
  
  Targ_TargetGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstTargetGroup");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'findFirstTargetGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'findFirstTargetGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Cita_JournalCitation_FindFirstTargetGroup_keyval0(Cita_JournalCitation self)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Cita_JournalCitation_FindFirstTargetGroup_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Cita_JournalCitation_FindFirstTargetGroup_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Cita_JournalCitation_FindFirstTargetGroup_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
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
Targ_TargetGroup Cita_JournalCitation_FindFirstTargetGroup_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_JournalCitation self
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Cita_JournalCitation_FindFirstTarget_keyval0(Cita_JournalCitation self)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_JournalCitation_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_JournalCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Cita_JournalCitation_FindFirstTarget_keyval1(Cita_JournalCitation self, char * key, ApiObject value)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_JournalCitation_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Cita_JournalCitation_FindFirstTarget_keyval2(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_JournalCitation_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_JournalCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Cita_JournalCitation_FindFirstTarget_keyval3(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_JournalCitation_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_JournalCitation self
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
Targ_Target Cita_JournalCitation_FindFirstTarget_keyval4(Cita_JournalCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_JournalCitation_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.general.Citation.JournalCitation
  @param  Cita_JournalCitation self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Cita_JournalCitation_Get(Cita_JournalCitation self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cita_JournalCitation self
  @returns   the result
**/
Acco_AccessObject Cita_JournalCitation_GetAccess(Cita_JournalCitation self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getAccess' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
Acco_AccessObject Cita_JournalCitation_GetActiveAccess(Cita_JournalCitation self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getActiveAccess' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiList Cita_JournalCitation_GetApplicationData(Cita_JournalCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.JournalCitation.astm

ASTM code .
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiString Cita_JournalCitation_GetAstm(Cita_JournalCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAstm");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getAstm'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getAstm' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiList Cita_JournalCitation_GetAuthors(Cita_JournalCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAuthors");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getAuthors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getAuthors' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.general.Citation.JournalCitation
  @param  Cita_JournalCitation self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Cita_JournalCitation Cita_JournalCitation_GetByKey(Cita_JournalCitation self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Cita_JournalCitation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getByKey' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiString Cita_JournalCitation_GetCasAbstractCode(Cita_JournalCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCasAbstractCode");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getCasAbstractCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getCasAbstractCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.citationStore

parent link
  @param  Cita_JournalCitation self
  @returns   the result
**/
Cita_CitationStore Cita_JournalCitation_GetCitationStore(Cita_JournalCitation self)
{
  
  Cita_CitationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCitationStore");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getCitationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getCitationStore' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiString Cita_JournalCitation_GetClassName(Cita_JournalCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.JournalCitation.csd

CSD code
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiString Cita_JournalCitation_GetCsd(Cita_JournalCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCsd");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getCsd'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getCsd' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiSet Cita_JournalCitation_GetDataLists(Cita_JournalCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataLists");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getDataLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getDataLists' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiString Cita_JournalCitation_GetDetails(Cita_JournalCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.doi

DOI identifier of citation
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiString Cita_JournalCitation_GetDoi(Cita_JournalCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDoi");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getDoi'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getDoi' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiList Cita_JournalCitation_GetEditors(Cita_JournalCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEditors");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getEditors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getEditors' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiSet Cita_JournalCitation_GetExperiments(Cita_JournalCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getExperiments' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiList Cita_JournalCitation_GetFieldNames(Cita_JournalCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getFieldNames' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiString Cita_JournalCitation_GetFirstPage(Cita_JournalCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFirstPage");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getFirstPage'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getFirstPage' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiBoolean Cita_JournalCitation_GetInConstructor(Cita_JournalCitation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getInConstructor' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiBoolean Cita_JournalCitation_GetIsDeleted(Cita_JournalCitation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.JournalCitation.issn

ISSN code
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiString Cita_JournalCitation_GetIssn(Cita_JournalCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIssn");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getIssn'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getIssn' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.JournalCitation.issue

Journal issue 
'number' (not an integer)
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiString Cita_JournalCitation_GetIssue(Cita_JournalCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIssue");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getIssue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getIssue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.general.Citation.JournalCitation.journalAbbreviation

Journal 
abbreviation according to ACS standard abbreviations
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiString Cita_JournalCitation_GetJournalAbbreviation(Cita_JournalCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getJournalAbbreviation");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getJournalAbbreviation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getJournalAbbreviation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.JournalCitation.journalFullName

Full name 
of Journal
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiString Cita_JournalCitation_GetJournalFullName(Cita_JournalCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getJournalFullName");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getJournalFullName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getJournalFullName' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiList Cita_JournalCitation_GetKeywords(Cita_JournalCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getKeywords");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getKeywords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getKeywords' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiString Cita_JournalCitation_GetLastPage(Cita_JournalCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastPage");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getLastPage'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getLastPage' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiString Cita_JournalCitation_GetMedlineUiCode(Cita_JournalCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMedlineUiCode");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getMedlineUiCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getMedlineUiCode' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiSet Cita_JournalCitation_GetMethods(Cita_JournalCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMethods");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getMethods'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getMethods' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiSet Cita_JournalCitation_GetMolSystems(Cita_JournalCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolSystems");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getMolSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getMolSystems' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiSet Cita_JournalCitation_GetMolecules(Cita_JournalCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolecules");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getMolecules'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getMolecules' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiSet Cita_JournalCitation_GetNmrEntries(Cita_JournalCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrEntries");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getNmrEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getNmrEntries' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiList Cita_JournalCitation_GetNmrEntriesPrimary(Cita_JournalCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrEntriesPrimary");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getNmrEntriesPrimary'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getNmrEntriesPrimary' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiSet Cita_JournalCitation_GetNmrProbes(Cita_JournalCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrProbes");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getNmrProbes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getNmrProbes' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiSet Cita_JournalCitation_GetNmrSpectrometers(Cita_JournalCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrSpectrometers");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getNmrSpectrometers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getNmrSpectrometers' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiString Cita_JournalCitation_GetPackageName(Cita_JournalCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getPackageName' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiString Cita_JournalCitation_GetPackageShortName(Cita_JournalCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getPackageShortName' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
Cita_CitationStore Cita_JournalCitation_GetParent(Cita_JournalCitation self)
{
  
  Cita_CitationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getParent' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiSet Cita_JournalCitation_GetProtocols(Cita_JournalCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProtocols");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getProtocols'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getProtocols' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.pubMedId

pubMed ID
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiString Cita_JournalCitation_GetPubMedId(Cita_JournalCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPubMedId");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getPubMedId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getPubMedId' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiString Cita_JournalCitation_GetQualifiedName(Cita_JournalCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getQualifiedName' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiSet Cita_JournalCitation_GetRatioShiftReferences(Cita_JournalCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRatioShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getRatioShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getRatioShiftReferences' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
Impl_MemopsRoot Cita_JournalCitation_GetRoot(Cita_JournalCitation self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getRoot' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiSet Cita_JournalCitation_GetSampleConditionSets(Cita_JournalCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSampleConditionSets");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getSampleConditionSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getSampleConditionSets' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiInteger Cita_JournalCitation_GetSerial(Cita_JournalCitation self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getSerial' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiSet Cita_JournalCitation_GetShiftReferences(Cita_JournalCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getShiftReferences' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiSet Cita_JournalCitation_GetSoftware(Cita_JournalCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSoftware");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getSoftware'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getSoftware' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiString Cita_JournalCitation_GetStatus(Cita_JournalCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStatus");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getStatus' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiSet Cita_JournalCitation_GetTargetGroups(Cita_JournalCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTargetGroups");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getTargetGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getTargetGroups' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiSet Cita_JournalCitation_GetTargets(Cita_JournalCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTargets");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getTargets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.title

Citation (article) Title
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiString Cita_JournalCitation_GetTitle(Cita_JournalCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTitle");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getTitle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getTitle' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
Impl_TopObject Cita_JournalCitation_GetTopObject(Cita_JournalCitation self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.JournalCitation.volume

Journal volume 
'number' (not an integer)
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiString Cita_JournalCitation_GetVolume(Cita_JournalCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getVolume");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getVolume'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getVolume' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.year

Year of publication
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiInteger Cita_JournalCitation_GetYear(Cita_JournalCitation self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getYear");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'getYear'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'getYear' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.general.Citation.JournalCitation
  @param  Cita_CitationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Cita_JournalCitation Cita_JournalCitation_Init(Cita_CitationStore parent, ApiMap attrlinks)
{
  
  return Cita_CitationStore_NewJournalCitation(parent, attrlinks);
}

/**
  Constructor for ccp.general.Citation.JournalCitation
  @param  Cita_CitationStore parent
  @returns  the new object
**/
Cita_JournalCitation Cita_JournalCitation_Init_reqd(Cita_CitationStore parent)
{
  
  Cita_JournalCitation  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Cita_JournalCitation_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_JournalCitation self
  @param  Impl_ApplicationData value
**/
void *Cita_JournalCitation_RemoveApplicationData(Cita_JournalCitation self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
  @param  Affi_Person value
**/
void *Cita_JournalCitation_RemoveAuthor(Cita_JournalCitation self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAuthor");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'removeAuthor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'removeAuthor' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  Affi_Person value
**/
void *Cita_JournalCitation_RemoveEditor(Cita_JournalCitation self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeEditor");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'removeEditor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'removeEditor' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
void *Cita_JournalCitation_RemoveKeyword(Cita_JournalCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeKeyword");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'removeKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'removeKeyword' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  Mols_MolSystem value
**/
void *Cita_JournalCitation_RemoveMolSystem(Cita_JournalCitation self, Mols_MolSystem value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeMolSystem");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'removeMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'removeMolSystem' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  Entr_Entry value
**/
void *Cita_JournalCitation_RemoveNmrEntry(Cita_JournalCitation self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNmrEntry");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'removeNmrEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'removeNmrEntry' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  Entr_Entry value
**/
void *Cita_JournalCitation_RemoveNmrEntryPrimary(Cita_JournalCitation self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNmrEntryPrimary");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'removeNmrEntryPrimary'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'removeNmrEntryPrimary' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  Prot_Protocol value
**/
void *Cita_JournalCitation_RemoveProtocol(Cita_JournalCitation self, Prot_Protocol value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeProtocol");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'removeProtocol'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'removeProtocol' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  Nmr_ShiftReference value
**/
void *Cita_JournalCitation_RemoveShiftReference(Cita_JournalCitation self, Nmr_ShiftReference value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeShiftReference");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'removeShiftReference'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'removeShiftReference' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  Targ_Target value
**/
void *Cita_JournalCitation_RemoveTarget(Cita_JournalCitation self, Targ_Target value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeTarget");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'removeTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'removeTarget' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @param  Targ_TargetGroup value
**/
void *Cita_JournalCitation_RemoveTargetGroup(Cita_JournalCitation self, Targ_TargetGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeTargetGroup");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'removeTargetGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'removeTargetGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.general.Citation.JournalCitation
  @param  Cita_JournalCitation self
  @param  ApiString name
  @param  ApiObject value
**/
void *Cita_JournalCitation_Set(Cita_JournalCitation self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cita_JournalCitation self
  @param  Acco_AccessObject value
**/
void *Cita_JournalCitation_SetAccess(Cita_JournalCitation self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setAccess' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  ApiList values
**/
void *Cita_JournalCitation_SetApplicationData(Cita_JournalCitation self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.JournalCitation.astm

ASTM code .
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
void *Cita_JournalCitation_SetAstm(Cita_JournalCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAstm");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setAstm'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setAstm' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_JournalCitation self
  @param  ApiList values
**/
void *Cita_JournalCitation_SetAuthors(Cita_JournalCitation self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAuthors");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setAuthors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setAuthors' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
void *Cita_JournalCitation_SetCasAbstractCode(Cita_JournalCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCasAbstractCode");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setCasAbstractCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setCasAbstractCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.JournalCitation.csd

CSD code
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
void *Cita_JournalCitation_SetCsd(Cita_JournalCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCsd");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setCsd'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setCsd' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
void *Cita_JournalCitation_SetDataLists(Cita_JournalCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDataLists");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setDataLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setDataLists' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
void *Cita_JournalCitation_SetDetails(Cita_JournalCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.doi

DOI identifier of citation
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
void *Cita_JournalCitation_SetDoi(Cita_JournalCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDoi");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setDoi'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setDoi' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  ApiList values
**/
void *Cita_JournalCitation_SetEditors(Cita_JournalCitation self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setEditors");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setEditors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setEditors' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
void *Cita_JournalCitation_SetExperiments(Cita_JournalCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setExperiments' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
void *Cita_JournalCitation_SetFirstPage(Cita_JournalCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFirstPage");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setFirstPage'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setFirstPage' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.JournalCitation.issn

ISSN code
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
void *Cita_JournalCitation_SetIssn(Cita_JournalCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIssn");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setIssn'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setIssn' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.JournalCitation.issue

Journal issue 
'number' (not an integer)
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
void *Cita_JournalCitation_SetIssue(Cita_JournalCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIssue");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setIssue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setIssue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.general.Citation.JournalCitation.journalAbbreviation

Journal 
abbreviation according to ACS standard abbreviations
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
void *Cita_JournalCitation_SetJournalAbbreviation(Cita_JournalCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setJournalAbbreviation");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setJournalAbbreviation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setJournalAbbreviation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.JournalCitation.journalFullName

Full name 
of Journal
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
void *Cita_JournalCitation_SetJournalFullName(Cita_JournalCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setJournalFullName");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setJournalFullName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setJournalFullName' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  ApiList values
**/
void *Cita_JournalCitation_SetKeywords(Cita_JournalCitation self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setKeywords");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setKeywords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setKeywords' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
void *Cita_JournalCitation_SetLastPage(Cita_JournalCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastPage");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setLastPage'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setLastPage' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
void *Cita_JournalCitation_SetMedlineUiCode(Cita_JournalCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMedlineUiCode");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setMedlineUiCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setMedlineUiCode' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
void *Cita_JournalCitation_SetMethods(Cita_JournalCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMethods");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setMethods'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setMethods' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
void *Cita_JournalCitation_SetMolSystems(Cita_JournalCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolSystems");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setMolSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setMolSystems' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
void *Cita_JournalCitation_SetMolecules(Cita_JournalCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolecules");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setMolecules'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setMolecules' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
void *Cita_JournalCitation_SetNmrEntries(Cita_JournalCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrEntries");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setNmrEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setNmrEntries' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  ApiList values
**/
void *Cita_JournalCitation_SetNmrEntriesPrimary(Cita_JournalCitation self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrEntriesPrimary");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setNmrEntriesPrimary'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setNmrEntriesPrimary' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
void *Cita_JournalCitation_SetNmrProbes(Cita_JournalCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrProbes");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setNmrProbes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setNmrProbes' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
void *Cita_JournalCitation_SetNmrSpectrometers(Cita_JournalCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrSpectrometers");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setNmrSpectrometers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setNmrSpectrometers' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
void *Cita_JournalCitation_SetProtocols(Cita_JournalCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setProtocols");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setProtocols'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setProtocols' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.pubMedId

pubMed ID
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
void *Cita_JournalCitation_SetPubMedId(Cita_JournalCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPubMedId");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setPubMedId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setPubMedId' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
void *Cita_JournalCitation_SetRatioShiftReferences(Cita_JournalCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRatioShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setRatioShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setRatioShiftReferences' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
void *Cita_JournalCitation_SetSampleConditionSets(Cita_JournalCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSampleConditionSets");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setSampleConditionSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setSampleConditionSets' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  ApiInteger value
**/
void *Cita_JournalCitation_SetSerial(Cita_JournalCitation self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setSerial' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
void *Cita_JournalCitation_SetShiftReferences(Cita_JournalCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setShiftReferences' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
void *Cita_JournalCitation_SetSoftware(Cita_JournalCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSoftware");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setSoftware'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setSoftware' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.status

E.g. 'published', 'in 
press','to be published' ?
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
void *Cita_JournalCitation_SetStatus(Cita_JournalCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStatus");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setStatus' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
void *Cita_JournalCitation_SetTargetGroups(Cita_JournalCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTargetGroups");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setTargetGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setTargetGroups' is not callable");
  
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
  @param  Cita_JournalCitation self
  @param  ApiSet values
**/
void *Cita_JournalCitation_SetTargets(Cita_JournalCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTargets");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setTargets' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.title

Citation (article) Title
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
void *Cita_JournalCitation_SetTitle(Cita_JournalCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTitle");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setTitle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setTitle' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.JournalCitation.volume

Journal volume 
'number' (not an integer)
  @param  Cita_JournalCitation self
  @param  ApiString value
**/
void *Cita_JournalCitation_SetVolume(Cita_JournalCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setVolume");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setVolume'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setVolume' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.year

Year of publication
  @param  Cita_JournalCitation self
  @param  ApiInteger value
**/
void *Cita_JournalCitation_SetYear(Cita_JournalCitation self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setYear");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'setYear'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'setYear' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiList Cita_JournalCitation_SortedDataLists(Cita_JournalCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDataLists");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'sortedDataLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'sortedDataLists' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiList Cita_JournalCitation_SortedExperiments(Cita_JournalCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'sortedExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'sortedExperiments' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiList Cita_JournalCitation_SortedMethods(Cita_JournalCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMethods");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'sortedMethods'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'sortedMethods' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiList Cita_JournalCitation_SortedMolSystems(Cita_JournalCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolSystems");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'sortedMolSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'sortedMolSystems' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiList Cita_JournalCitation_SortedMolecules(Cita_JournalCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolecules");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'sortedMolecules'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'sortedMolecules' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiList Cita_JournalCitation_SortedNmrEntries(Cita_JournalCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrEntries");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'sortedNmrEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'sortedNmrEntries' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiList Cita_JournalCitation_SortedNmrProbes(Cita_JournalCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrProbes");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'sortedNmrProbes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'sortedNmrProbes' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiList Cita_JournalCitation_SortedNmrSpectrometers(Cita_JournalCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrSpectrometers");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'sortedNmrSpectrometers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'sortedNmrSpectrometers' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiList Cita_JournalCitation_SortedProtocols(Cita_JournalCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedProtocols");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'sortedProtocols'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'sortedProtocols' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiList Cita_JournalCitation_SortedRatioShiftReferences(Cita_JournalCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRatioShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'sortedRatioShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'sortedRatioShiftReferences' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiList Cita_JournalCitation_SortedSampleConditionSets(Cita_JournalCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSampleConditionSets");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'sortedSampleConditionSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'sortedSampleConditionSets' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiList Cita_JournalCitation_SortedShiftReferences(Cita_JournalCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'sortedShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'sortedShiftReferences' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiList Cita_JournalCitation_SortedSoftware(Cita_JournalCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSoftware");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'sortedSoftware'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'sortedSoftware' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Citation.Citation.targetGroups
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiList Cita_JournalCitation_SortedTargetGroups(Cita_JournalCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedTargetGroups");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'sortedTargetGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'sortedTargetGroups' is not callable");
  
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
  @param  Cita_JournalCitation self
  @returns   the result
**/
ApiList Cita_JournalCitation_SortedTargets(Cita_JournalCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedTargets");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.JournalCitation: cannot find method 'sortedTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.JournalCitation: method 'sortedTargets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
