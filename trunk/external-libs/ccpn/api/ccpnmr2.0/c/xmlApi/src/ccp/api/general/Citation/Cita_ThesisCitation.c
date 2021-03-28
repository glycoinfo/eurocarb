
#include "ccp.h"

/*
  Citation (litterature reference) to  a Thesis.
*/

/* package ccp.api.general.Citation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ThesisCitation self
  @param  Impl_ApplicationData value
**/
void *Cita_ThesisCitation_AddApplicationData(Cita_ThesisCitation self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
  @param  Affi_Person value
**/
void *Cita_ThesisCitation_AddAuthor(Cita_ThesisCitation self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAuthor");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'addAuthor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'addAuthor' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  Affi_Person value
**/
void *Cita_ThesisCitation_AddEditor(Cita_ThesisCitation self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addEditor");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'addEditor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'addEditor' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
void *Cita_ThesisCitation_AddKeyword(Cita_ThesisCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addKeyword");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'addKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'addKeyword' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  Mols_MolSystem value
**/
void *Cita_ThesisCitation_AddMolSystem(Cita_ThesisCitation self, Mols_MolSystem value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addMolSystem");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'addMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'addMolSystem' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  Entr_Entry value
**/
void *Cita_ThesisCitation_AddNmrEntry(Cita_ThesisCitation self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNmrEntry");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'addNmrEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'addNmrEntry' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  Entr_Entry value
**/
void *Cita_ThesisCitation_AddNmrEntryPrimary(Cita_ThesisCitation self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNmrEntryPrimary");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'addNmrEntryPrimary'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'addNmrEntryPrimary' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  Prot_Protocol value
**/
void *Cita_ThesisCitation_AddProtocol(Cita_ThesisCitation self, Prot_Protocol value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addProtocol");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'addProtocol'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'addProtocol' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  Nmr_ShiftReference value
**/
void *Cita_ThesisCitation_AddShiftReference(Cita_ThesisCitation self, Nmr_ShiftReference value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addShiftReference");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'addShiftReference'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'addShiftReference' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  Targ_Target value
**/
void *Cita_ThesisCitation_AddTarget(Cita_ThesisCitation self, Targ_Target value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addTarget");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'addTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'addTarget' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @param  Targ_TargetGroup value
**/
void *Cita_ThesisCitation_AddTargetGroup(Cita_ThesisCitation self, Targ_TargetGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addTargetGroup");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'addTargetGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'addTargetGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.general.Citation.ThesisCitation
  @param  Cita_ThesisCitation self
  @param  ApiBoolean complete
**/
void *Cita_ThesisCitation_CheckAllValid(Cita_ThesisCitation self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.general.Citation.ThesisCitation
  @param  Cita_ThesisCitation self
  @param  ApiBoolean complete
**/
void *Cita_ThesisCitation_CheckValid(Cita_ThesisCitation self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'checkValid' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ThesisCitation_FindAllApplicationData(Cita_ThesisCitation self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findAllApplicationData' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ThesisCitation_FindAllApplicationData_keyval0(Cita_ThesisCitation self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ThesisCitation_FindAllApplicationData_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ThesisCitation_FindAllApplicationData_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ThesisCitation_FindAllApplicationData_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ThesisCitation self
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
ApiList Cita_ThesisCitation_FindAllApplicationData_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ThesisCitation_FindAllAuthors(Cita_ThesisCitation self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAuthors");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findAllAuthors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findAllAuthors' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ThesisCitation_FindAllAuthors_keyval0(Cita_ThesisCitation self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindAllAuthors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ThesisCitation_FindAllAuthors_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindAllAuthors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ThesisCitation_FindAllAuthors_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindAllAuthors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ThesisCitation_FindAllAuthors_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindAllAuthors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
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
ApiList Cita_ThesisCitation_FindAllAuthors_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindAllAuthors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllDataLists(Cita_ThesisCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDataLists");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findAllDataLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findAllDataLists' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllDataLists_keyval0(Cita_ThesisCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindAllDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllDataLists_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindAllDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllDataLists_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindAllDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllDataLists_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindAllDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ThesisCitation self
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
ApiSet Cita_ThesisCitation_FindAllDataLists_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindAllDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ThesisCitation_FindAllEditors(Cita_ThesisCitation self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllEditors");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findAllEditors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findAllEditors' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ThesisCitation_FindAllEditors_keyval0(Cita_ThesisCitation self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindAllEditors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ThesisCitation_FindAllEditors_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindAllEditors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ThesisCitation_FindAllEditors_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindAllEditors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ThesisCitation_FindAllEditors_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindAllEditors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ThesisCitation self
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
ApiList Cita_ThesisCitation_FindAllEditors_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindAllEditors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllExperiments(Cita_ThesisCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findAllExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findAllExperiments' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllExperiments_keyval0(Cita_ThesisCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllExperiments_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllExperiments_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllExperiments_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ThesisCitation self
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
ApiSet Cita_ThesisCitation_FindAllExperiments_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllMethods(Cita_ThesisCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMethods");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findAllMethods'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findAllMethods' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllMethods_keyval0(Cita_ThesisCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindAllMethods(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllMethods_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindAllMethods(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllMethods_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindAllMethods(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllMethods_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindAllMethods(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.methods

Methods described by 
Citation
  @param  Cita_ThesisCitation self
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
ApiSet Cita_ThesisCitation_FindAllMethods_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindAllMethods(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllMolSystems(Cita_ThesisCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolSystems");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findAllMolSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findAllMolSystems' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllMolSystems_keyval0(Cita_ThesisCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllMolSystems_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllMolSystems_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllMolSystems_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ThesisCitation self
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
ApiSet Cita_ThesisCitation_FindAllMolSystems_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllMolecules(Cita_ThesisCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolecules");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findAllMolecules'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findAllMolecules' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllMolecules_keyval0(Cita_ThesisCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindAllMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllMolecules_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindAllMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllMolecules_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindAllMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllMolecules_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindAllMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.molecules

Molecules described 
by Citation
  @param  Cita_ThesisCitation self
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
ApiSet Cita_ThesisCitation_FindAllMolecules_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindAllMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllNmrEntries(Cita_ThesisCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrEntries");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findAllNmrEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findAllNmrEntries' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ThesisCitation_FindAllNmrEntriesPrimary(Cita_ThesisCitation self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrEntriesPrimary");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findAllNmrEntriesPrimary'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findAllNmrEntriesPrimary' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ThesisCitation_FindAllNmrEntriesPrimary_keyval0(Cita_ThesisCitation self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindAllNmrEntriesPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ThesisCitation_FindAllNmrEntriesPrimary_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindAllNmrEntriesPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ThesisCitation_FindAllNmrEntriesPrimary_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindAllNmrEntriesPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Cita_ThesisCitation_FindAllNmrEntriesPrimary_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindAllNmrEntriesPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR entries 
that have this as their primary citation
  @param  Cita_ThesisCitation self
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
ApiList Cita_ThesisCitation_FindAllNmrEntriesPrimary_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindAllNmrEntriesPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllNmrEntries_keyval0(Cita_ThesisCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindAllNmrEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllNmrEntries_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindAllNmrEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllNmrEntries_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindAllNmrEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllNmrEntries_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindAllNmrEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ThesisCitation self
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
ApiSet Cita_ThesisCitation_FindAllNmrEntries_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindAllNmrEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllNmrProbes(Cita_ThesisCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrProbes");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findAllNmrProbes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findAllNmrProbes' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllNmrProbes_keyval0(Cita_ThesisCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindAllNmrProbes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllNmrProbes_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindAllNmrProbes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllNmrProbes_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindAllNmrProbes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllNmrProbes_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindAllNmrProbes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrProbes

Nmr probes that use 
this Citation
  @param  Cita_ThesisCitation self
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
ApiSet Cita_ThesisCitation_FindAllNmrProbes_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindAllNmrProbes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllNmrSpectrometers(Cita_ThesisCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrSpectrometers");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findAllNmrSpectrometers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findAllNmrSpectrometers' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllNmrSpectrometers_keyval0(Cita_ThesisCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindAllNmrSpectrometers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllNmrSpectrometers_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindAllNmrSpectrometers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllNmrSpectrometers_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindAllNmrSpectrometers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllNmrSpectrometers_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindAllNmrSpectrometers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ThesisCitation self
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
ApiSet Cita_ThesisCitation_FindAllNmrSpectrometers_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindAllNmrSpectrometers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllProtocols(Cita_ThesisCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllProtocols");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findAllProtocols'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findAllProtocols' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllProtocols_keyval0(Cita_ThesisCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindAllProtocols(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllProtocols_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindAllProtocols(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllProtocols_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindAllProtocols(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllProtocols_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindAllProtocols(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ThesisCitation self
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
ApiSet Cita_ThesisCitation_FindAllProtocols_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindAllProtocols(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllRatioShiftReferences(Cita_ThesisCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRatioShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findAllRatioShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findAllRatioShiftReferences' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllRatioShiftReferences_keyval0(Cita_ThesisCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindAllRatioShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllRatioShiftReferences_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindAllRatioShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllRatioShiftReferences_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindAllRatioShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllRatioShiftReferences_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindAllRatioShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ThesisCitation self
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
ApiSet Cita_ThesisCitation_FindAllRatioShiftReferences_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindAllRatioShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllSampleConditionSets(Cita_ThesisCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSampleConditionSets");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findAllSampleConditionSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findAllSampleConditionSets' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllSampleConditionSets_keyval0(Cita_ThesisCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindAllSampleConditionSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllSampleConditionSets_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindAllSampleConditionSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllSampleConditionSets_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindAllSampleConditionSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllSampleConditionSets_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindAllSampleConditionSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ThesisCitation self
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
ApiSet Cita_ThesisCitation_FindAllSampleConditionSets_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindAllSampleConditionSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllShiftReferences(Cita_ThesisCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findAllShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findAllShiftReferences' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllShiftReferences_keyval0(Cita_ThesisCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindAllShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllShiftReferences_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindAllShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllShiftReferences_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindAllShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllShiftReferences_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindAllShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ThesisCitation self
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
ApiSet Cita_ThesisCitation_FindAllShiftReferences_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindAllShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllSoftware(Cita_ThesisCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSoftware");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findAllSoftware'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findAllSoftware' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllSoftware_keyval0(Cita_ThesisCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindAllSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllSoftware_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindAllSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllSoftware_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindAllSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllSoftware_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindAllSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ThesisCitation self
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
ApiSet Cita_ThesisCitation_FindAllSoftware_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindAllSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllTargetGroups(Cita_ThesisCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllTargetGroups");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findAllTargetGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findAllTargetGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllTargetGroups_keyval0(Cita_ThesisCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllTargetGroups_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllTargetGroups_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllTargetGroups_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
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
ApiSet Cita_ThesisCitation_FindAllTargetGroups_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindAllTargetGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllTargets(Cita_ThesisCitation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllTargets");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findAllTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findAllTargets' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllTargets_keyval0(Cita_ThesisCitation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllTargets_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllTargets_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cita_ThesisCitation_FindAllTargets_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.general.Citation.Citation.targets

Targets described by 
Citation.
  @param  Cita_ThesisCitation self
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
ApiSet Cita_ThesisCitation_FindAllTargets_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindAllTargets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cita_ThesisCitation_FindFirstApplicationData(Cita_ThesisCitation self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findFirstApplicationData' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cita_ThesisCitation_FindFirstApplicationData_keyval0(Cita_ThesisCitation self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cita_ThesisCitation_FindFirstApplicationData_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cita_ThesisCitation_FindFirstApplicationData_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cita_ThesisCitation_FindFirstApplicationData_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ThesisCitation self
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
Impl_ApplicationData Cita_ThesisCitation_FindFirstApplicationData_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_ThesisCitation_FindFirstAuthor(Cita_ThesisCitation self, ApiMap conditions)
{
  
  Affi_Person obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAuthor");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findFirstAuthor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findFirstAuthor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_ThesisCitation_FindFirstAuthor_keyval0(Cita_ThesisCitation self)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindFirstAuthor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_ThesisCitation_FindFirstAuthor_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindFirstAuthor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_ThesisCitation_FindFirstAuthor_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindFirstAuthor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_ThesisCitation_FindFirstAuthor_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindFirstAuthor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
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
Affi_Person Cita_ThesisCitation_FindFirstAuthor_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindFirstAuthor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataList Cita_ThesisCitation_FindFirstDataList(Cita_ThesisCitation self, ApiMap conditions)
{
  
  Nmr_DataList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDataList");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findFirstDataList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findFirstDataList' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataList Cita_ThesisCitation_FindFirstDataList_keyval0(Cita_ThesisCitation self)
{
  
  Nmr_DataList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindFirstDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataList Cita_ThesisCitation_FindFirstDataList_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  Nmr_DataList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindFirstDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataList Cita_ThesisCitation_FindFirstDataList_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_DataList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindFirstDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataList Cita_ThesisCitation_FindFirstDataList_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_DataList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindFirstDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.dataLists

Nmr Generic 
Measurement Lists citing Citation.
  @param  Cita_ThesisCitation self
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
Nmr_DataList Cita_ThesisCitation_FindFirstDataList_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_DataList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindFirstDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_ThesisCitation_FindFirstEditor(Cita_ThesisCitation self, ApiMap conditions)
{
  
  Affi_Person obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstEditor");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findFirstEditor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findFirstEditor' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_ThesisCitation_FindFirstEditor_keyval0(Cita_ThesisCitation self)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindFirstEditor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_ThesisCitation_FindFirstEditor_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindFirstEditor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_ThesisCitation_FindFirstEditor_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindFirstEditor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Cita_ThesisCitation_FindFirstEditor_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindFirstEditor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.editors

People who are 
editors of Citation
  @param  Cita_ThesisCitation self
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
Affi_Person Cita_ThesisCitation_FindFirstEditor_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindFirstEditor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Cita_ThesisCitation_FindFirstExperiment(Cita_ThesisCitation self, ApiMap conditions)
{
  
  Nmr_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExperiment");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findFirstExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findFirstExperiment' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Cita_ThesisCitation_FindFirstExperiment_keyval0(Cita_ThesisCitation self)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Cita_ThesisCitation_FindFirstExperiment_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Cita_ThesisCitation_FindFirstExperiment_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Cita_ThesisCitation_FindFirstExperiment_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.experiments

Nmr Experiments 
referring to Citation
  @param  Cita_ThesisCitation self
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
Nmr_Experiment Cita_ThesisCitation_FindFirstExperiment_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Meth_Method Cita_ThesisCitation_FindFirstMethod(Cita_ThesisCitation self, ApiMap conditions)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMethod");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findFirstMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findFirstMethod' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
Meth_Method Cita_ThesisCitation_FindFirstMethod_keyval0(Cita_ThesisCitation self)
{
  
  Meth_Method  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindFirstMethod(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Meth_Method Cita_ThesisCitation_FindFirstMethod_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  Meth_Method  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindFirstMethod(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Meth_Method Cita_ThesisCitation_FindFirstMethod_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Meth_Method  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindFirstMethod(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Meth_Method Cita_ThesisCitation_FindFirstMethod_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Meth_Method  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindFirstMethod(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.methods

Methods described 
by Citation
  @param  Cita_ThesisCitation self
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
Meth_Method Cita_ThesisCitation_FindFirstMethod_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Meth_Method  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindFirstMethod(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Cita_ThesisCitation_FindFirstMolSystem(Cita_ThesisCitation self, ApiMap conditions)
{
  
  Mols_MolSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolSystem");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findFirstMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findFirstMolSystem' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Cita_ThesisCitation_FindFirstMolSystem_keyval0(Cita_ThesisCitation self)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Cita_ThesisCitation_FindFirstMolSystem_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Cita_ThesisCitation_FindFirstMolSystem_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Cita_ThesisCitation_FindFirstMolSystem_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molSystems

MolSystems 
described by Citation
  @param  Cita_ThesisCitation self
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
Mols_MolSystem Cita_ThesisCitation_FindFirstMolSystem_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mole_Molecule Cita_ThesisCitation_FindFirstMolecule(Cita_ThesisCitation self, ApiMap conditions)
{
  
  Mole_Molecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolecule");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findFirstMolecule'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findFirstMolecule' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
Mole_Molecule Cita_ThesisCitation_FindFirstMolecule_keyval0(Cita_ThesisCitation self)
{
  
  Mole_Molecule  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindFirstMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mole_Molecule Cita_ThesisCitation_FindFirstMolecule_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  Mole_Molecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindFirstMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mole_Molecule Cita_ThesisCitation_FindFirstMolecule_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mole_Molecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindFirstMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mole_Molecule Cita_ThesisCitation_FindFirstMolecule_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mole_Molecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindFirstMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.molecules

Molecules 
described by Citation
  @param  Cita_ThesisCitation self
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
Mole_Molecule Cita_ThesisCitation_FindFirstMolecule_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mole_Molecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindFirstMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_ThesisCitation_FindFirstNmrEntry(Cita_ThesisCitation self, ApiMap conditions)
{
  
  Entr_Entry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrEntry");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findFirstNmrEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findFirstNmrEntry' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_ThesisCitation_FindFirstNmrEntryPrimary(Cita_ThesisCitation self, ApiMap conditions)
{
  
  Entr_Entry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrEntryPrimary");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findFirstNmrEntryPrimary'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findFirstNmrEntryPrimary' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_ThesisCitation_FindFirstNmrEntryPrimary_keyval0(Cita_ThesisCitation self)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindFirstNmrEntryPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_ThesisCitation_FindFirstNmrEntryPrimary_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindFirstNmrEntryPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_ThesisCitation_FindFirstNmrEntryPrimary_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindFirstNmrEntryPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_ThesisCitation_FindFirstNmrEntryPrimary_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindFirstNmrEntryPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntriesPrimary

NMR 
entries that have this as their primary citation
  @param  Cita_ThesisCitation self
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
Entr_Entry Cita_ThesisCitation_FindFirstNmrEntryPrimary_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindFirstNmrEntryPrimary(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_ThesisCitation_FindFirstNmrEntry_keyval0(Cita_ThesisCitation self)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindFirstNmrEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_ThesisCitation_FindFirstNmrEntry_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindFirstNmrEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_ThesisCitation_FindFirstNmrEntry_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindFirstNmrEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Cita_ThesisCitation_FindFirstNmrEntry_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindFirstNmrEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrEntries

BioMagResBank 
entries that cite Citatoin as non-primary reference
  @param  Cita_ThesisCitation self
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
Entr_Entry Cita_ThesisCitation_FindFirstNmrEntry_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindFirstNmrEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrProbe Cita_ThesisCitation_FindFirstNmrProbe(Cita_ThesisCitation self, ApiMap conditions)
{
  
  Inst_NmrProbe obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrProbe");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findFirstNmrProbe'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findFirstNmrProbe' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrProbe Cita_ThesisCitation_FindFirstNmrProbe_keyval0(Cita_ThesisCitation self)
{
  
  Inst_NmrProbe  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindFirstNmrProbe(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrProbe Cita_ThesisCitation_FindFirstNmrProbe_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  Inst_NmrProbe  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindFirstNmrProbe(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrProbe Cita_ThesisCitation_FindFirstNmrProbe_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Inst_NmrProbe  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindFirstNmrProbe(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrProbe Cita_ThesisCitation_FindFirstNmrProbe_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Inst_NmrProbe  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindFirstNmrProbe(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrProbes

Nmr probes that 
use this Citation
  @param  Cita_ThesisCitation self
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
Inst_NmrProbe Cita_ThesisCitation_FindFirstNmrProbe_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Inst_NmrProbe  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindFirstNmrProbe(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrSpectrometer Cita_ThesisCitation_FindFirstNmrSpectrometer(Cita_ThesisCitation self, ApiMap conditions)
{
  
  Inst_NmrSpectrometer obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrSpectrometer");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findFirstNmrSpectrometer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findFirstNmrSpectrometer' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrSpectrometer Cita_ThesisCitation_FindFirstNmrSpectrometer_keyval0(Cita_ThesisCitation self)
{
  
  Inst_NmrSpectrometer  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindFirstNmrSpectrometer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrSpectrometer Cita_ThesisCitation_FindFirstNmrSpectrometer_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  Inst_NmrSpectrometer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindFirstNmrSpectrometer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrSpectrometer Cita_ThesisCitation_FindFirstNmrSpectrometer_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Inst_NmrSpectrometer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindFirstNmrSpectrometer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrSpectrometer Cita_ThesisCitation_FindFirstNmrSpectrometer_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Inst_NmrSpectrometer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindFirstNmrSpectrometer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.nmrSpectrometers

Nmr 
Spectrometers citing this Citation
  @param  Cita_ThesisCitation self
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
Inst_NmrSpectrometer Cita_ThesisCitation_FindFirstNmrSpectrometer_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Inst_NmrSpectrometer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindFirstNmrSpectrometer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Prot_Protocol Cita_ThesisCitation_FindFirstProtocol(Cita_ThesisCitation self, ApiMap conditions)
{
  
  Prot_Protocol obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstProtocol");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findFirstProtocol'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findFirstProtocol' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
Prot_Protocol Cita_ThesisCitation_FindFirstProtocol_keyval0(Cita_ThesisCitation self)
{
  
  Prot_Protocol  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindFirstProtocol(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Prot_Protocol Cita_ThesisCitation_FindFirstProtocol_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  Prot_Protocol  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindFirstProtocol(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Prot_Protocol Cita_ThesisCitation_FindFirstProtocol_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Prot_Protocol  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindFirstProtocol(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Prot_Protocol Cita_ThesisCitation_FindFirstProtocol_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Prot_Protocol  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindFirstProtocol(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.protocols

Protocol where 
Citation refers to.
  @param  Cita_ThesisCitation self
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
Prot_Protocol Cita_ThesisCitation_FindFirstProtocol_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Prot_Protocol  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindFirstProtocol(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_ThesisCitation_FindFirstRatioShiftReference(Cita_ThesisCitation self, ApiMap conditions)
{
  
  Nmr_ShiftReference obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRatioShiftReference");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findFirstRatioShiftReference'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findFirstRatioShiftReference' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_ThesisCitation_FindFirstRatioShiftReference_keyval0(Cita_ThesisCitation self)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindFirstRatioShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_ThesisCitation_FindFirstRatioShiftReference_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindFirstRatioShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_ThesisCitation_FindFirstRatioShiftReference_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindFirstRatioShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_ThesisCitation_FindFirstRatioShiftReference_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindFirstRatioShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.ratioShiftReferences

Shift 
reference indirect shift ratio references.
  @param  Cita_ThesisCitation self
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
Nmr_ShiftReference Cita_ThesisCitation_FindFirstRatioShiftReference_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindFirstRatioShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_SampleConditionSet Cita_ThesisCitation_FindFirstSampleConditionSet(Cita_ThesisCitation self, ApiMap conditions)
{
  
  Nmr_SampleConditionSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSampleConditionSet");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findFirstSampleConditionSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findFirstSampleConditionSet' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
Nmr_SampleConditionSet Cita_ThesisCitation_FindFirstSampleConditionSet_keyval0(Cita_ThesisCitation self)
{
  
  Nmr_SampleConditionSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindFirstSampleConditionSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_SampleConditionSet Cita_ThesisCitation_FindFirstSampleConditionSet_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  Nmr_SampleConditionSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindFirstSampleConditionSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_SampleConditionSet Cita_ThesisCitation_FindFirstSampleConditionSet_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_SampleConditionSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindFirstSampleConditionSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_SampleConditionSet Cita_ThesisCitation_FindFirstSampleConditionSet_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_SampleConditionSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindFirstSampleConditionSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.general.Citation.Citation.sampleConditionSets

SampleConditionSets 
quoting Citation
  @param  Cita_ThesisCitation self
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
Nmr_SampleConditionSet Cita_ThesisCitation_FindFirstSampleConditionSet_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_SampleConditionSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindFirstSampleConditionSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_ThesisCitation_FindFirstShiftReference(Cita_ThesisCitation self, ApiMap conditions)
{
  
  Nmr_ShiftReference obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstShiftReference");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findFirstShiftReference'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findFirstShiftReference' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_ThesisCitation_FindFirstShiftReference_keyval0(Cita_ThesisCitation self)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindFirstShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_ThesisCitation_FindFirstShiftReference_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindFirstShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_ThesisCitation_FindFirstShiftReference_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindFirstShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Cita_ThesisCitation_FindFirstShiftReference_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindFirstShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.shiftReferences

Shift 
References citing CItation.
  @param  Cita_ThesisCitation self
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
Nmr_ShiftReference Cita_ThesisCitation_FindFirstShiftReference_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindFirstShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Meth_Software Cita_ThesisCitation_FindFirstSoftware(Cita_ThesisCitation self, ApiMap conditions)
{
  
  Meth_Software obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSoftware");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findFirstSoftware'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findFirstSoftware' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
Meth_Software Cita_ThesisCitation_FindFirstSoftware_keyval0(Cita_ThesisCitation self)
{
  
  Meth_Software  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindFirstSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Meth_Software Cita_ThesisCitation_FindFirstSoftware_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  Meth_Software  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindFirstSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Meth_Software Cita_ThesisCitation_FindFirstSoftware_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Meth_Software  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindFirstSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Meth_Software Cita_ThesisCitation_FindFirstSoftware_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Meth_Software  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindFirstSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.software

Software described 
by Citation
  @param  Cita_ThesisCitation self
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
Meth_Software Cita_ThesisCitation_FindFirstSoftware_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Meth_Software  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindFirstSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Cita_ThesisCitation_FindFirstTarget(Cita_ThesisCitation self, ApiMap conditions)
{
  
  Targ_Target obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstTarget");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findFirstTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findFirstTarget' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Cita_ThesisCitation_FindFirstTargetGroup(Cita_ThesisCitation self, ApiMap conditions)
{
  
  Targ_TargetGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstTargetGroup");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'findFirstTargetGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'findFirstTargetGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Cita_ThesisCitation_FindFirstTargetGroup_keyval0(Cita_ThesisCitation self)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Cita_ThesisCitation_FindFirstTargetGroup_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Cita_ThesisCitation_FindFirstTargetGroup_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Targ_TargetGroup Cita_ThesisCitation_FindFirstTargetGroup_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
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
Targ_TargetGroup Cita_ThesisCitation_FindFirstTargetGroup_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Targ_TargetGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindFirstTargetGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_ThesisCitation self
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Cita_ThesisCitation_FindFirstTarget_keyval0(Cita_ThesisCitation self)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cita_ThesisCitation_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_ThesisCitation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Cita_ThesisCitation_FindFirstTarget_keyval1(Cita_ThesisCitation self, char * key, ApiObject value)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cita_ThesisCitation_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Cita_ThesisCitation_FindFirstTarget_keyval2(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cita_ThesisCitation_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_ThesisCitation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Targ_Target Cita_ThesisCitation_FindFirstTarget_keyval3(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cita_ThesisCitation_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.general.Citation.Citation.targets

Targets described 
by Citation.
  @param  Cita_ThesisCitation self
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
Targ_Target Cita_ThesisCitation_FindFirstTarget_keyval4(Cita_ThesisCitation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Targ_Target  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cita_ThesisCitation_FindFirstTarget(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.general.Citation.ThesisCitation
  @param  Cita_ThesisCitation self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Cita_ThesisCitation_Get(Cita_ThesisCitation self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cita_ThesisCitation self
  @returns   the result
**/
Acco_AccessObject Cita_ThesisCitation_GetAccess(Cita_ThesisCitation self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getAccess' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiList Cita_ThesisCitation_GetApplicationData(Cita_ThesisCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiList Cita_ThesisCitation_GetAuthors(Cita_ThesisCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAuthors");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getAuthors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getAuthors' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.general.Citation.ThesisCitation
  @param  Cita_ThesisCitation self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Cita_ThesisCitation Cita_ThesisCitation_GetByKey(Cita_ThesisCitation self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Cita_ThesisCitation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getByKey' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiString Cita_ThesisCitation_GetCasAbstractCode(Cita_ThesisCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCasAbstractCode");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getCasAbstractCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getCasAbstractCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.citationStore

parent link
  @param  Cita_ThesisCitation self
  @returns   the result
**/
Cita_CitationStore Cita_ThesisCitation_GetCitationStore(Cita_ThesisCitation self)
{
  
  Cita_CitationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCitationStore");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getCitationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getCitationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.ThesisCitation.city

City where institution 
is located
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiString Cita_ThesisCitation_GetCity(Cita_ThesisCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCity");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getCity'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getCity' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiString Cita_ThesisCitation_GetClassName(Cita_ThesisCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.ThesisCitation.country

Country where 
institution is located
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiString Cita_ThesisCitation_GetCountry(Cita_ThesisCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCountry");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getCountry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getCountry' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiSet Cita_ThesisCitation_GetDataLists(Cita_ThesisCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataLists");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getDataLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getDataLists' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiString Cita_ThesisCitation_GetDetails(Cita_ThesisCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.doi

DOI identifier of citation
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiString Cita_ThesisCitation_GetDoi(Cita_ThesisCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDoi");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getDoi'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getDoi' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiList Cita_ThesisCitation_GetEditors(Cita_ThesisCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEditors");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getEditors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getEditors' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiSet Cita_ThesisCitation_GetExperiments(Cita_ThesisCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getExperiments' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiList Cita_ThesisCitation_GetFieldNames(Cita_ThesisCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getFieldNames' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiString Cita_ThesisCitation_GetFirstPage(Cita_ThesisCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFirstPage");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getFirstPage'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getFirstPage' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiBoolean Cita_ThesisCitation_GetInConstructor(Cita_ThesisCitation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.ThesisCitation.institution

Institution 
where thesis is submitted
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiString Cita_ThesisCitation_GetInstitution(Cita_ThesisCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInstitution");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getInstitution'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getInstitution' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiBoolean Cita_ThesisCitation_GetIsDeleted(Cita_ThesisCitation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getIsDeleted' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiList Cita_ThesisCitation_GetKeywords(Cita_ThesisCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getKeywords");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getKeywords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getKeywords' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiString Cita_ThesisCitation_GetLastPage(Cita_ThesisCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastPage");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getLastPage'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getLastPage' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiString Cita_ThesisCitation_GetMedlineUiCode(Cita_ThesisCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMedlineUiCode");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getMedlineUiCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getMedlineUiCode' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiSet Cita_ThesisCitation_GetMethods(Cita_ThesisCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMethods");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getMethods'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getMethods' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiSet Cita_ThesisCitation_GetMolSystems(Cita_ThesisCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolSystems");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getMolSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getMolSystems' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiSet Cita_ThesisCitation_GetMolecules(Cita_ThesisCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolecules");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getMolecules'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getMolecules' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiSet Cita_ThesisCitation_GetNmrEntries(Cita_ThesisCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrEntries");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getNmrEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getNmrEntries' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiList Cita_ThesisCitation_GetNmrEntriesPrimary(Cita_ThesisCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrEntriesPrimary");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getNmrEntriesPrimary'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getNmrEntriesPrimary' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiSet Cita_ThesisCitation_GetNmrProbes(Cita_ThesisCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrProbes");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getNmrProbes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getNmrProbes' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiSet Cita_ThesisCitation_GetNmrSpectrometers(Cita_ThesisCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrSpectrometers");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getNmrSpectrometers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getNmrSpectrometers' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiString Cita_ThesisCitation_GetPackageName(Cita_ThesisCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getPackageName' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiString Cita_ThesisCitation_GetPackageShortName(Cita_ThesisCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getPackageShortName' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
Cita_CitationStore Cita_ThesisCitation_GetParent(Cita_ThesisCitation self)
{
  
  Cita_CitationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getParent' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiSet Cita_ThesisCitation_GetProtocols(Cita_ThesisCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProtocols");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getProtocols'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getProtocols' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.pubMedId

pubMed ID
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiString Cita_ThesisCitation_GetPubMedId(Cita_ThesisCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPubMedId");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getPubMedId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getPubMedId' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiString Cita_ThesisCitation_GetQualifiedName(Cita_ThesisCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getQualifiedName' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiSet Cita_ThesisCitation_GetRatioShiftReferences(Cita_ThesisCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRatioShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getRatioShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getRatioShiftReferences' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
Impl_MemopsRoot Cita_ThesisCitation_GetRoot(Cita_ThesisCitation self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getRoot' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiSet Cita_ThesisCitation_GetSampleConditionSets(Cita_ThesisCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSampleConditionSets");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getSampleConditionSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getSampleConditionSets' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiInteger Cita_ThesisCitation_GetSerial(Cita_ThesisCitation self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getSerial' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiSet Cita_ThesisCitation_GetShiftReferences(Cita_ThesisCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getShiftReferences' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiSet Cita_ThesisCitation_GetSoftware(Cita_ThesisCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSoftware");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getSoftware'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getSoftware' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.ThesisCitation.stateProvince

State or 
province where institution is located
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiString Cita_ThesisCitation_GetStateProvince(Cita_ThesisCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStateProvince");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getStateProvince'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getStateProvince' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiString Cita_ThesisCitation_GetStatus(Cita_ThesisCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStatus");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getStatus' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiSet Cita_ThesisCitation_GetTargetGroups(Cita_ThesisCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTargetGroups");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getTargetGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getTargetGroups' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiSet Cita_ThesisCitation_GetTargets(Cita_ThesisCitation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTargets");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getTargets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.title

Citation (article) Title
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiString Cita_ThesisCitation_GetTitle(Cita_ThesisCitation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTitle");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getTitle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getTitle' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
Impl_TopObject Cita_ThesisCitation_GetTopObject(Cita_ThesisCitation self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Citation.Citation.year

Year of publication
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiInteger Cita_ThesisCitation_GetYear(Cita_ThesisCitation self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getYear");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'getYear'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'getYear' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.general.Citation.ThesisCitation
  @param  Cita_CitationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Cita_ThesisCitation Cita_ThesisCitation_Init(Cita_CitationStore parent, ApiMap attrlinks)
{
  
  return Cita_CitationStore_NewThesisCitation(parent, attrlinks);
}

/**
  Constructor for ccp.general.Citation.ThesisCitation
  @param  Cita_CitationStore parent
  @returns  the new object
**/
Cita_ThesisCitation Cita_ThesisCitation_Init_reqd(Cita_CitationStore parent)
{
  
  Cita_ThesisCitation  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Cita_ThesisCitation_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cita_ThesisCitation self
  @param  Impl_ApplicationData value
**/
void *Cita_ThesisCitation_RemoveApplicationData(Cita_ThesisCitation self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
  @param  Affi_Person value
**/
void *Cita_ThesisCitation_RemoveAuthor(Cita_ThesisCitation self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAuthor");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'removeAuthor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'removeAuthor' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  Affi_Person value
**/
void *Cita_ThesisCitation_RemoveEditor(Cita_ThesisCitation self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeEditor");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'removeEditor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'removeEditor' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
void *Cita_ThesisCitation_RemoveKeyword(Cita_ThesisCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeKeyword");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'removeKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'removeKeyword' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  Mols_MolSystem value
**/
void *Cita_ThesisCitation_RemoveMolSystem(Cita_ThesisCitation self, Mols_MolSystem value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeMolSystem");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'removeMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'removeMolSystem' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  Entr_Entry value
**/
void *Cita_ThesisCitation_RemoveNmrEntry(Cita_ThesisCitation self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNmrEntry");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'removeNmrEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'removeNmrEntry' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  Entr_Entry value
**/
void *Cita_ThesisCitation_RemoveNmrEntryPrimary(Cita_ThesisCitation self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNmrEntryPrimary");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'removeNmrEntryPrimary'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'removeNmrEntryPrimary' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  Prot_Protocol value
**/
void *Cita_ThesisCitation_RemoveProtocol(Cita_ThesisCitation self, Prot_Protocol value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeProtocol");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'removeProtocol'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'removeProtocol' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  Nmr_ShiftReference value
**/
void *Cita_ThesisCitation_RemoveShiftReference(Cita_ThesisCitation self, Nmr_ShiftReference value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeShiftReference");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'removeShiftReference'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'removeShiftReference' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  Targ_Target value
**/
void *Cita_ThesisCitation_RemoveTarget(Cita_ThesisCitation self, Targ_Target value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeTarget");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'removeTarget'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'removeTarget' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @param  Targ_TargetGroup value
**/
void *Cita_ThesisCitation_RemoveTargetGroup(Cita_ThesisCitation self, Targ_TargetGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeTargetGroup");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'removeTargetGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'removeTargetGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.general.Citation.ThesisCitation
  @param  Cita_ThesisCitation self
  @param  ApiString name
  @param  ApiObject value
**/
void *Cita_ThesisCitation_Set(Cita_ThesisCitation self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cita_ThesisCitation self
  @param  Acco_AccessObject value
**/
void *Cita_ThesisCitation_SetAccess(Cita_ThesisCitation self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setAccess' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiList values
**/
void *Cita_ThesisCitation_SetApplicationData(Cita_ThesisCitation self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.authors

Authors of Citation
  @param  Cita_ThesisCitation self
  @param  ApiList values
**/
void *Cita_ThesisCitation_SetAuthors(Cita_ThesisCitation self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAuthors");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setAuthors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setAuthors' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
void *Cita_ThesisCitation_SetCasAbstractCode(Cita_ThesisCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCasAbstractCode");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setCasAbstractCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setCasAbstractCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.ThesisCitation.city

City where institution 
is located
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
void *Cita_ThesisCitation_SetCity(Cita_ThesisCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCity");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setCity'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setCity' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.ThesisCitation.country

Country where 
institution is located
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
void *Cita_ThesisCitation_SetCountry(Cita_ThesisCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCountry");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setCountry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setCountry' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
void *Cita_ThesisCitation_SetDataLists(Cita_ThesisCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDataLists");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setDataLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setDataLists' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
void *Cita_ThesisCitation_SetDetails(Cita_ThesisCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.doi

DOI identifier of citation
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
void *Cita_ThesisCitation_SetDoi(Cita_ThesisCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDoi");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setDoi'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setDoi' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiList values
**/
void *Cita_ThesisCitation_SetEditors(Cita_ThesisCitation self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setEditors");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setEditors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setEditors' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
void *Cita_ThesisCitation_SetExperiments(Cita_ThesisCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setExperiments' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
void *Cita_ThesisCitation_SetFirstPage(Cita_ThesisCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFirstPage");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setFirstPage'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setFirstPage' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.ThesisCitation.institution

Institution 
where thesis is submitted
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
void *Cita_ThesisCitation_SetInstitution(Cita_ThesisCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setInstitution");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setInstitution'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setInstitution' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiList values
**/
void *Cita_ThesisCitation_SetKeywords(Cita_ThesisCitation self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setKeywords");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setKeywords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setKeywords' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
void *Cita_ThesisCitation_SetLastPage(Cita_ThesisCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastPage");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setLastPage'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setLastPage' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
void *Cita_ThesisCitation_SetMedlineUiCode(Cita_ThesisCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMedlineUiCode");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setMedlineUiCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setMedlineUiCode' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
void *Cita_ThesisCitation_SetMethods(Cita_ThesisCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMethods");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setMethods'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setMethods' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
void *Cita_ThesisCitation_SetMolSystems(Cita_ThesisCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolSystems");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setMolSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setMolSystems' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
void *Cita_ThesisCitation_SetMolecules(Cita_ThesisCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolecules");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setMolecules'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setMolecules' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
void *Cita_ThesisCitation_SetNmrEntries(Cita_ThesisCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrEntries");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setNmrEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setNmrEntries' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiList values
**/
void *Cita_ThesisCitation_SetNmrEntriesPrimary(Cita_ThesisCitation self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrEntriesPrimary");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setNmrEntriesPrimary'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setNmrEntriesPrimary' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
void *Cita_ThesisCitation_SetNmrProbes(Cita_ThesisCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrProbes");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setNmrProbes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setNmrProbes' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
void *Cita_ThesisCitation_SetNmrSpectrometers(Cita_ThesisCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrSpectrometers");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setNmrSpectrometers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setNmrSpectrometers' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
void *Cita_ThesisCitation_SetProtocols(Cita_ThesisCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setProtocols");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setProtocols'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setProtocols' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.pubMedId

pubMed ID
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
void *Cita_ThesisCitation_SetPubMedId(Cita_ThesisCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPubMedId");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setPubMedId'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setPubMedId' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
void *Cita_ThesisCitation_SetRatioShiftReferences(Cita_ThesisCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRatioShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setRatioShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setRatioShiftReferences' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
void *Cita_ThesisCitation_SetSampleConditionSets(Cita_ThesisCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSampleConditionSets");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setSampleConditionSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setSampleConditionSets' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiInteger value
**/
void *Cita_ThesisCitation_SetSerial(Cita_ThesisCitation self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setSerial' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
void *Cita_ThesisCitation_SetShiftReferences(Cita_ThesisCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setShiftReferences' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
void *Cita_ThesisCitation_SetSoftware(Cita_ThesisCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSoftware");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setSoftware'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setSoftware' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.ThesisCitation.stateProvince

State or 
province where institution is located
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
void *Cita_ThesisCitation_SetStateProvince(Cita_ThesisCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStateProvince");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setStateProvince'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setStateProvince' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
void *Cita_ThesisCitation_SetStatus(Cita_ThesisCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStatus");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setStatus'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setStatus' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
void *Cita_ThesisCitation_SetTargetGroups(Cita_ThesisCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTargetGroups");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setTargetGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setTargetGroups' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @param  ApiSet values
**/
void *Cita_ThesisCitation_SetTargets(Cita_ThesisCitation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTargets");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setTargets' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.title

Citation (article) Title
  @param  Cita_ThesisCitation self
  @param  ApiString value
**/
void *Cita_ThesisCitation_SetTitle(Cita_ThesisCitation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTitle");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setTitle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setTitle' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Citation.Citation.year

Year of publication
  @param  Cita_ThesisCitation self
  @param  ApiInteger value
**/
void *Cita_ThesisCitation_SetYear(Cita_ThesisCitation self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setYear");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'setYear'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'setYear' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiList Cita_ThesisCitation_SortedDataLists(Cita_ThesisCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDataLists");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'sortedDataLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'sortedDataLists' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiList Cita_ThesisCitation_SortedExperiments(Cita_ThesisCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExperiments");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'sortedExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'sortedExperiments' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiList Cita_ThesisCitation_SortedMethods(Cita_ThesisCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMethods");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'sortedMethods'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'sortedMethods' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiList Cita_ThesisCitation_SortedMolSystems(Cita_ThesisCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolSystems");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'sortedMolSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'sortedMolSystems' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiList Cita_ThesisCitation_SortedMolecules(Cita_ThesisCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolecules");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'sortedMolecules'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'sortedMolecules' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiList Cita_ThesisCitation_SortedNmrEntries(Cita_ThesisCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrEntries");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'sortedNmrEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'sortedNmrEntries' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiList Cita_ThesisCitation_SortedNmrProbes(Cita_ThesisCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrProbes");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'sortedNmrProbes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'sortedNmrProbes' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiList Cita_ThesisCitation_SortedNmrSpectrometers(Cita_ThesisCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrSpectrometers");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'sortedNmrSpectrometers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'sortedNmrSpectrometers' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiList Cita_ThesisCitation_SortedProtocols(Cita_ThesisCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedProtocols");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'sortedProtocols'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'sortedProtocols' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiList Cita_ThesisCitation_SortedRatioShiftReferences(Cita_ThesisCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRatioShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'sortedRatioShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'sortedRatioShiftReferences' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiList Cita_ThesisCitation_SortedSampleConditionSets(Cita_ThesisCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSampleConditionSets");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'sortedSampleConditionSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'sortedSampleConditionSets' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiList Cita_ThesisCitation_SortedShiftReferences(Cita_ThesisCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'sortedShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'sortedShiftReferences' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiList Cita_ThesisCitation_SortedSoftware(Cita_ThesisCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSoftware");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'sortedSoftware'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'sortedSoftware' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.general.Citation.Citation.targetGroups
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiList Cita_ThesisCitation_SortedTargetGroups(Cita_ThesisCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedTargetGroups");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'sortedTargetGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'sortedTargetGroups' is not callable");
  
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
  @param  Cita_ThesisCitation self
  @returns   the result
**/
ApiList Cita_ThesisCitation_SortedTargets(Cita_ThesisCitation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedTargets");
  
  if (!method)
    return raiseApiException("ccp.general.Citation.ThesisCitation: cannot find method 'sortedTargets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.general.Citation.ThesisCitation: method 'sortedTargets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
