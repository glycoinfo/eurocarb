
#include "ccp.h"

/*
  Deposition (entry) for deposition into BMRB (NB may be used also for other depositions?).
*/

/* package ccp.api.nmr.NmrEntry */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Entry self
  @param  Impl_ApplicationData value
**/
void *Entr_Entry_AddApplicationData(Entr_Entry self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
  @param  Affi_Person value
**/
void *Entr_Entry_AddAuthor(Entr_Entry self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addAuthor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'addAuthor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'addAuthor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for entry
  @param  Entr_Entry self
  @param  Affi_Person value
**/
void *Entr_Entry_AddContactPerson(Entr_Entry self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addContactPerson");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'addContactPerson'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'addContactPerson' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.NmrEntry.Entry.derivedDataLists

Derived Nmr data lists 
relevant for Entry
  @param  Entr_Entry self
  @param  Nmr_DerivedDataList value
**/
void *Entr_Entry_AddDerivedDataList(Entr_Entry self, Nmr_DerivedDataList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addDerivedDataList");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'addDerivedDataList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'addDerivedDataList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments included in 
Entry
  @param  Entr_Entry self
  @param  Nmr_Experiment value
**/
void *Entr_Entry_AddExperiment(Entr_Entry self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'addExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'addExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.NmrEntry.Entry.keywords

Keywords for searching on Entry
  @param  Entr_Entry self
  @param  ApiString value
**/
void *Entr_Entry_AddKeyword(Entr_Entry self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addKeyword");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'addKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'addKeyword' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.NmrEntry.Entry.laboratories

Research groups originating 
the entry
  @param  Entr_Entry self
  @param  Affi_Group value
**/
void *Entr_Entry_AddLaboratory(Entr_Entry self, Affi_Group value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addLaboratory");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'addLaboratory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'addLaboratory' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @param  Nmr_AbstractMeasurementList value
**/
void *Entr_Entry_AddMeasurementList(Entr_Entry self, Nmr_AbstractMeasurementList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addMeasurementList");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'addMeasurementList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'addMeasurementList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @param  Cita_Citation value
**/
void *Entr_Entry_AddOtherCitation(Entr_Entry self, Cita_Citation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addOtherCitation");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'addOtherCitation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'addOtherCitation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.NmrEntry.Entry.peakLists

Nmr.Peaklists that are part of 
Entry
  @param  Entr_Entry self
  @param  Nmr_PeakList value
**/
void *Entr_Entry_AddPeakList(Entr_Entry self, Nmr_PeakList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPeakList");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'addPeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'addPeakList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.NmrEntry.Entry.software

software used for analysis in 
entry
  @param  Entr_Entry self
  @param  Meth_Software value
**/
void *Entr_Entry_AddSoftware(Entr_Entry self, Meth_Software value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addSoftware");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'addSoftware'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'addSoftware' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses 
being deposited in entry.
  @param  Entr_Entry self
  @param  Nmr_StructureAnalysis value
**/
void *Entr_Entry_AddStructureAnalysis(Entr_Entry self, Nmr_StructureAnalysis value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addStructureAnalysis");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'addStructureAnalysis'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'addStructureAnalysis' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @param  Nmr_StructureGeneration value
**/
void *Entr_Entry_AddStructureGeneration(Entr_Entry self, Nmr_StructureGeneration value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addStructureGeneration");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'addStructureGeneration'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'addStructureGeneration' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of structures 
included in Entry.
  @param  Entr_Entry self
  @param  Mols_StructureGroup value
**/
void *Entr_Entry_AddStructureGroup(Entr_Entry self, Mols_StructureGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addStructureGroup");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'addStructureGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'addStructureGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrEntry.Entry
  @param  Entr_Entry self
  @param  ApiBoolean complete
**/
void *Entr_Entry_CheckAllValid(Entr_Entry self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrEntry.Entry
  @param  Entr_Entry self
  @param  ApiBoolean complete
**/
void *Entr_Entry_CheckValid(Entr_Entry self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'checkValid' is not callable");
  
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
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Entr_Entry_FindAllApplicationData(Entr_Entry self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findAllApplicationData' is not callable");
  
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
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
ApiList Entr_Entry_FindAllApplicationData_keyval0(Entr_Entry self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Entr_Entry_FindAllApplicationData_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Entr_Entry_FindAllApplicationData_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Entr_Entry_FindAllApplicationData_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Entry self
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
ApiList Entr_Entry_FindAllApplicationData_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Entr_Entry_FindAllAuthors(Entr_Entry self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAuthors");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findAllAuthors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findAllAuthors' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
ApiList Entr_Entry_FindAllAuthors_keyval0(Entr_Entry self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindAllAuthors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Entr_Entry_FindAllAuthors_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindAllAuthors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Entr_Entry_FindAllAuthors_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindAllAuthors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Entr_Entry_FindAllAuthors_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindAllAuthors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
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
ApiList Entr_Entry_FindAllAuthors_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindAllAuthors(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for 
entry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllContactPersons(Entr_Entry self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllContactPersons");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findAllContactPersons'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findAllContactPersons' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for 
entry
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllContactPersons_keyval0(Entr_Entry self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindAllContactPersons(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for 
entry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllContactPersons_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindAllContactPersons(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for 
entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllContactPersons_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindAllContactPersons(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for 
entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllContactPersons_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindAllContactPersons(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for 
entry
  @param  Entr_Entry self
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
ApiSet Entr_Entry_FindAllContactPersons_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindAllContactPersons(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.derivedDataLists

Derived Nmr data 
lists relevant for Entry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllDerivedDataLists(Entr_Entry self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDerivedDataLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findAllDerivedDataLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findAllDerivedDataLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.derivedDataLists

Derived Nmr data 
lists relevant for Entry
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllDerivedDataLists_keyval0(Entr_Entry self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindAllDerivedDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.derivedDataLists

Derived Nmr data 
lists relevant for Entry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllDerivedDataLists_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindAllDerivedDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.derivedDataLists

Derived Nmr data 
lists relevant for Entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllDerivedDataLists_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindAllDerivedDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.derivedDataLists

Derived Nmr data 
lists relevant for Entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllDerivedDataLists_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindAllDerivedDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.derivedDataLists

Derived Nmr data 
lists relevant for Entry
  @param  Entr_Entry self
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
ApiSet Entr_Entry_FindAllDerivedDataLists_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindAllDerivedDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.entryMolecules

child link to class 
EntryMolecule
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllEntryMolecules(Entr_Entry self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllEntryMolecules");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findAllEntryMolecules'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findAllEntryMolecules' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.entryMolecules

child link to class 
EntryMolecule
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllEntryMolecules_keyval0(Entr_Entry self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindAllEntryMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.entryMolecules

child link to class 
EntryMolecule
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllEntryMolecules_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindAllEntryMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.entryMolecules

child link to class 
EntryMolecule
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllEntryMolecules_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindAllEntryMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.entryMolecules

child link to class 
EntryMolecule
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllEntryMolecules_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindAllEntryMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.entryMolecules

child link to class 
EntryMolecule
  @param  Entr_Entry self
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
ApiSet Entr_Entry_FindAllEntryMolecules_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindAllEntryMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments included 
in Entry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllExperiments(Entr_Entry self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findAllExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findAllExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments included 
in Entry
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllExperiments_keyval0(Entr_Entry self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments included 
in Entry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllExperiments_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments included 
in Entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllExperiments_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments included 
in Entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllExperiments_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments included 
in Entry
  @param  Entr_Entry self
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
ApiSet Entr_Entry_FindAllExperiments_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindAllExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.laboratories

Research groups 
originating the entry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllLaboratories(Entr_Entry self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllLaboratories");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findAllLaboratories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findAllLaboratories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.laboratories

Research groups 
originating the entry
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllLaboratories_keyval0(Entr_Entry self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindAllLaboratories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.laboratories

Research groups 
originating the entry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllLaboratories_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindAllLaboratories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.laboratories

Research groups 
originating the entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllLaboratories_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindAllLaboratories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.laboratories

Research groups 
originating the entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllLaboratories_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindAllLaboratories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.laboratories

Research groups 
originating the entry
  @param  Entr_Entry self
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
ApiSet Entr_Entry_FindAllLaboratories_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindAllLaboratories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllMeasurementLists(Entr_Entry self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMeasurementLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findAllMeasurementLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findAllMeasurementLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllMeasurementLists_keyval0(Entr_Entry self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindAllMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllMeasurementLists_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindAllMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllMeasurementLists_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindAllMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllMeasurementLists_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindAllMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
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
ApiSet Entr_Entry_FindAllMeasurementLists_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindAllMeasurementLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.nmrProbes

Nmr Probes used for 
Experiments for this entry - convenience link
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllNmrProbes(Entr_Entry self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrProbes");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findAllNmrProbes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findAllNmrProbes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.nmrProbes

Nmr Probes used for 
Experiments for this entry - convenience link
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllNmrProbes_keyval0(Entr_Entry self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindAllNmrProbes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.nmrProbes

Nmr Probes used for 
Experiments for this entry - convenience link
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllNmrProbes_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindAllNmrProbes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.nmrProbes

Nmr Probes used for 
Experiments for this entry - convenience link
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllNmrProbes_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindAllNmrProbes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.nmrProbes

Nmr Probes used for 
Experiments for this entry - convenience link
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllNmrProbes_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindAllNmrProbes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.nmrProbes

Nmr Probes used for 
Experiments for this entry - convenience link
  @param  Entr_Entry self
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
ApiSet Entr_Entry_FindAllNmrProbes_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindAllNmrProbes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.nmrSpectrometers

Nmr Spectrometers 
used for experiments in this entry (convenience link)
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllNmrSpectrometers(Entr_Entry self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrSpectrometers");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findAllNmrSpectrometers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findAllNmrSpectrometers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.nmrSpectrometers

Nmr Spectrometers 
used for experiments in this entry (convenience link)
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllNmrSpectrometers_keyval0(Entr_Entry self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindAllNmrSpectrometers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.nmrSpectrometers

Nmr Spectrometers 
used for experiments in this entry (convenience link)
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllNmrSpectrometers_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindAllNmrSpectrometers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.nmrSpectrometers

Nmr Spectrometers 
used for experiments in this entry (convenience link)
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllNmrSpectrometers_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindAllNmrSpectrometers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.nmrSpectrometers

Nmr Spectrometers 
used for experiments in this entry (convenience link)
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllNmrSpectrometers_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindAllNmrSpectrometers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.nmrSpectrometers

Nmr Spectrometers 
used for experiments in this entry (convenience link)
  @param  Entr_Entry self
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
ApiSet Entr_Entry_FindAllNmrSpectrometers_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindAllNmrSpectrometers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllOtherCitations(Entr_Entry self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllOtherCitations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findAllOtherCitations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findAllOtherCitations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllOtherCitations_keyval0(Entr_Entry self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindAllOtherCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllOtherCitations_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindAllOtherCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllOtherCitations_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindAllOtherCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllOtherCitations_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindAllOtherCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
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
ApiSet Entr_Entry_FindAllOtherCitations_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindAllOtherCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.peakLists

Nmr.Peaklists that are 
part of Entry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllPeakLists(Entr_Entry self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeakLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findAllPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findAllPeakLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.peakLists

Nmr.Peaklists that are 
part of Entry
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllPeakLists_keyval0(Entr_Entry self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindAllPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.peakLists

Nmr.Peaklists that are 
part of Entry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllPeakLists_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindAllPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.peakLists

Nmr.Peaklists that are 
part of Entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllPeakLists_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindAllPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.peakLists

Nmr.Peaklists that are 
part of Entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllPeakLists_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindAllPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.peakLists

Nmr.Peaklists that are 
part of Entry
  @param  Entr_Entry self
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
ApiSet Entr_Entry_FindAllPeakLists_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindAllPeakLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.relatedEntries

child link to class 
RelatedEntry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllRelatedEntries(Entr_Entry self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRelatedEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findAllRelatedEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findAllRelatedEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.relatedEntries

child link to class 
RelatedEntry
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllRelatedEntries_keyval0(Entr_Entry self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindAllRelatedEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.relatedEntries

child link to class 
RelatedEntry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllRelatedEntries_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindAllRelatedEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.relatedEntries

child link to class 
RelatedEntry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllRelatedEntries_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindAllRelatedEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.relatedEntries

child link to class 
RelatedEntry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllRelatedEntries_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindAllRelatedEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.relatedEntries

child link to class 
RelatedEntry
  @param  Entr_Entry self
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
ApiSet Entr_Entry_FindAllRelatedEntries_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindAllRelatedEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.software

software used for analysis 
in entry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllSoftware(Entr_Entry self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllSoftware");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findAllSoftware'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findAllSoftware' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.software

software used for analysis 
in entry
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllSoftware_keyval0(Entr_Entry self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindAllSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.software

software used for analysis 
in entry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllSoftware_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindAllSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.software

software used for analysis 
in entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllSoftware_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindAllSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.software

software used for analysis 
in entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllSoftware_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindAllSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.software

software used for analysis 
in entry
  @param  Entr_Entry self
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
ApiSet Entr_Entry_FindAllSoftware_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindAllSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses 
being deposited in entry.
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllStructureAnalyses(Entr_Entry self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllStructureAnalyses");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findAllStructureAnalyses'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findAllStructureAnalyses' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses 
being deposited in entry.
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllStructureAnalyses_keyval0(Entr_Entry self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindAllStructureAnalyses(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses 
being deposited in entry.
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllStructureAnalyses_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindAllStructureAnalyses(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses 
being deposited in entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllStructureAnalyses_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindAllStructureAnalyses(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses 
being deposited in entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllStructureAnalyses_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindAllStructureAnalyses(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses 
being deposited in entry.
  @param  Entr_Entry self
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
ApiSet Entr_Entry_FindAllStructureAnalyses_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindAllStructureAnalyses(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllStructureGenerations(Entr_Entry self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllStructureGenerations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findAllStructureGenerations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findAllStructureGenerations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllStructureGenerations_keyval0(Entr_Entry self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindAllStructureGenerations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllStructureGenerations_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindAllStructureGenerations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllStructureGenerations_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindAllStructureGenerations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllStructureGenerations_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindAllStructureGenerations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
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
ApiSet Entr_Entry_FindAllStructureGenerations_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindAllStructureGenerations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of structures 
included in Entry.
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllStructureGroups(Entr_Entry self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllStructureGroups");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findAllStructureGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findAllStructureGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of structures 
included in Entry.
  @param  Entr_Entry self
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllStructureGroups_keyval0(Entr_Entry self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindAllStructureGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of structures 
included in Entry.
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllStructureGroups_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindAllStructureGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of structures 
included in Entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllStructureGroups_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindAllStructureGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of structures 
included in Entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Entr_Entry_FindAllStructureGroups_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindAllStructureGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of structures 
included in Entry.
  @param  Entr_Entry self
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
ApiSet Entr_Entry_FindAllStructureGroups_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindAllStructureGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Entr_Entry_FindFirstApplicationData(Entr_Entry self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findFirstApplicationData' is not callable");
  
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
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Entr_Entry_FindFirstApplicationData_keyval0(Entr_Entry self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Entr_Entry_FindFirstApplicationData_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Entr_Entry_FindFirstApplicationData_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Entr_Entry_FindFirstApplicationData_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Entry self
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
Impl_ApplicationData Entr_Entry_FindFirstApplicationData_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Entr_Entry_FindFirstAuthor(Entr_Entry self, ApiMap conditions)
{
  
  Affi_Person obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAuthor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findFirstAuthor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findFirstAuthor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Entr_Entry_FindFirstAuthor_keyval0(Entr_Entry self)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindFirstAuthor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Entr_Entry_FindFirstAuthor_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindFirstAuthor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Entr_Entry_FindFirstAuthor_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindFirstAuthor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Entr_Entry_FindFirstAuthor_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindFirstAuthor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
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
Affi_Person Entr_Entry_FindFirstAuthor_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindFirstAuthor(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for 
entry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Entr_Entry_FindFirstContactPerson(Entr_Entry self, ApiMap conditions)
{
  
  Affi_Person obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstContactPerson");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findFirstContactPerson'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findFirstContactPerson' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for 
entry
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Entr_Entry_FindFirstContactPerson_keyval0(Entr_Entry self)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindFirstContactPerson(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for 
entry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Entr_Entry_FindFirstContactPerson_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindFirstContactPerson(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for 
entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Entr_Entry_FindFirstContactPerson_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindFirstContactPerson(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for 
entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Affi_Person Entr_Entry_FindFirstContactPerson_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindFirstContactPerson(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for 
entry
  @param  Entr_Entry self
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
Affi_Person Entr_Entry_FindFirstContactPerson_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Affi_Person  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindFirstContactPerson(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.derivedDataLists

Derived Nmr data 
lists relevant for Entry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_DerivedDataList Entr_Entry_FindFirstDerivedDataList(Entr_Entry self, ApiMap conditions)
{
  
  Nmr_DerivedDataList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDerivedDataList");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findFirstDerivedDataList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findFirstDerivedDataList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.derivedDataLists

Derived Nmr data 
lists relevant for Entry
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
Nmr_DerivedDataList Entr_Entry_FindFirstDerivedDataList_keyval0(Entr_Entry self)
{
  
  Nmr_DerivedDataList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindFirstDerivedDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.derivedDataLists

Derived Nmr data 
lists relevant for Entry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_DerivedDataList Entr_Entry_FindFirstDerivedDataList_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  Nmr_DerivedDataList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindFirstDerivedDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.derivedDataLists

Derived Nmr data 
lists relevant for Entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_DerivedDataList Entr_Entry_FindFirstDerivedDataList_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_DerivedDataList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindFirstDerivedDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.derivedDataLists

Derived Nmr data 
lists relevant for Entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_DerivedDataList Entr_Entry_FindFirstDerivedDataList_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_DerivedDataList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindFirstDerivedDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.derivedDataLists

Derived Nmr data 
lists relevant for Entry
  @param  Entr_Entry self
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
Nmr_DerivedDataList Entr_Entry_FindFirstDerivedDataList_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_DerivedDataList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindFirstDerivedDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.entryMolecules

child link to class 
EntryMolecule
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Entr_EntryMolecule Entr_Entry_FindFirstEntryMolecule(Entr_Entry self, ApiMap conditions)
{
  
  Entr_EntryMolecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstEntryMolecule");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findFirstEntryMolecule'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findFirstEntryMolecule' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.entryMolecules

child link to class 
EntryMolecule
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
Entr_EntryMolecule Entr_Entry_FindFirstEntryMolecule_keyval0(Entr_Entry self)
{
  
  Entr_EntryMolecule  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindFirstEntryMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.entryMolecules

child link to class 
EntryMolecule
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Entr_EntryMolecule Entr_Entry_FindFirstEntryMolecule_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  Entr_EntryMolecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindFirstEntryMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.entryMolecules

child link to class 
EntryMolecule
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Entr_EntryMolecule Entr_Entry_FindFirstEntryMolecule_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Entr_EntryMolecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindFirstEntryMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.entryMolecules

child link to class 
EntryMolecule
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Entr_EntryMolecule Entr_Entry_FindFirstEntryMolecule_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Entr_EntryMolecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindFirstEntryMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.entryMolecules

child link to class 
EntryMolecule
  @param  Entr_Entry self
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
Entr_EntryMolecule Entr_Entry_FindFirstEntryMolecule_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Entr_EntryMolecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindFirstEntryMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments 
included in Entry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Entr_Entry_FindFirstExperiment(Entr_Entry self, ApiMap conditions)
{
  
  Nmr_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findFirstExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findFirstExperiment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments 
included in Entry
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Entr_Entry_FindFirstExperiment_keyval0(Entr_Entry self)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments 
included in Entry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Entr_Entry_FindFirstExperiment_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments 
included in Entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Entr_Entry_FindFirstExperiment_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments 
included in Entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Entr_Entry_FindFirstExperiment_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments 
included in Entry
  @param  Entr_Entry self
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
Nmr_Experiment Entr_Entry_FindFirstExperiment_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindFirstExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.laboratories

Research groups 
originating the entry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Affi_Group Entr_Entry_FindFirstLaboratory(Entr_Entry self, ApiMap conditions)
{
  
  Affi_Group obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstLaboratory");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findFirstLaboratory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findFirstLaboratory' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.laboratories

Research groups 
originating the entry
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
Affi_Group Entr_Entry_FindFirstLaboratory_keyval0(Entr_Entry self)
{
  
  Affi_Group  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindFirstLaboratory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.laboratories

Research groups 
originating the entry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Affi_Group Entr_Entry_FindFirstLaboratory_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  Affi_Group  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindFirstLaboratory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.laboratories

Research groups 
originating the entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Affi_Group Entr_Entry_FindFirstLaboratory_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Affi_Group  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindFirstLaboratory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.laboratories

Research groups 
originating the entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Affi_Group Entr_Entry_FindFirstLaboratory_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Affi_Group  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindFirstLaboratory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.laboratories

Research groups 
originating the entry
  @param  Entr_Entry self
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
Affi_Group Entr_Entry_FindFirstLaboratory_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Affi_Group  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindFirstLaboratory(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Entr_Entry_FindFirstMeasurementList(Entr_Entry self, ApiMap conditions)
{
  
  Nmr_AbstractMeasurementList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMeasurementList");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findFirstMeasurementList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findFirstMeasurementList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Entr_Entry_FindFirstMeasurementList_keyval0(Entr_Entry self)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindFirstMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Entr_Entry_FindFirstMeasurementList_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindFirstMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Entr_Entry_FindFirstMeasurementList_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindFirstMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_AbstractMeasurementList Entr_Entry_FindFirstMeasurementList_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindFirstMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
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
Nmr_AbstractMeasurementList Entr_Entry_FindFirstMeasurementList_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_AbstractMeasurementList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindFirstMeasurementList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.nmrProbes

Nmr Probes used for 
Experiments for this entry - convenience link
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrProbe Entr_Entry_FindFirstNmrProbe(Entr_Entry self, ApiMap conditions)
{
  
  Inst_NmrProbe obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrProbe");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findFirstNmrProbe'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findFirstNmrProbe' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.nmrProbes

Nmr Probes used for 
Experiments for this entry - convenience link
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrProbe Entr_Entry_FindFirstNmrProbe_keyval0(Entr_Entry self)
{
  
  Inst_NmrProbe  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindFirstNmrProbe(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.nmrProbes

Nmr Probes used for 
Experiments for this entry - convenience link
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrProbe Entr_Entry_FindFirstNmrProbe_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  Inst_NmrProbe  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindFirstNmrProbe(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.nmrProbes

Nmr Probes used for 
Experiments for this entry - convenience link
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrProbe Entr_Entry_FindFirstNmrProbe_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Inst_NmrProbe  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindFirstNmrProbe(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.nmrProbes

Nmr Probes used for 
Experiments for this entry - convenience link
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrProbe Entr_Entry_FindFirstNmrProbe_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Inst_NmrProbe  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindFirstNmrProbe(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.nmrProbes

Nmr Probes used for 
Experiments for this entry - convenience link
  @param  Entr_Entry self
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
Inst_NmrProbe Entr_Entry_FindFirstNmrProbe_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Inst_NmrProbe  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindFirstNmrProbe(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.nmrSpectrometers

Nmr Spectrometers 
used for experiments in this entry (convenience link)
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrSpectrometer Entr_Entry_FindFirstNmrSpectrometer(Entr_Entry self, ApiMap conditions)
{
  
  Inst_NmrSpectrometer obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrSpectrometer");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findFirstNmrSpectrometer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findFirstNmrSpectrometer' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.nmrSpectrometers

Nmr Spectrometers 
used for experiments in this entry (convenience link)
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrSpectrometer Entr_Entry_FindFirstNmrSpectrometer_keyval0(Entr_Entry self)
{
  
  Inst_NmrSpectrometer  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindFirstNmrSpectrometer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.nmrSpectrometers

Nmr Spectrometers 
used for experiments in this entry (convenience link)
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrSpectrometer Entr_Entry_FindFirstNmrSpectrometer_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  Inst_NmrSpectrometer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindFirstNmrSpectrometer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.nmrSpectrometers

Nmr Spectrometers 
used for experiments in this entry (convenience link)
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrSpectrometer Entr_Entry_FindFirstNmrSpectrometer_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Inst_NmrSpectrometer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindFirstNmrSpectrometer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.nmrSpectrometers

Nmr Spectrometers 
used for experiments in this entry (convenience link)
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Inst_NmrSpectrometer Entr_Entry_FindFirstNmrSpectrometer_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Inst_NmrSpectrometer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindFirstNmrSpectrometer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.nmrSpectrometers

Nmr Spectrometers 
used for experiments in this entry (convenience link)
  @param  Entr_Entry self
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
Inst_NmrSpectrometer Entr_Entry_FindFirstNmrSpectrometer_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Inst_NmrSpectrometer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindFirstNmrSpectrometer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Entr_Entry_FindFirstOtherCitation(Entr_Entry self, ApiMap conditions)
{
  
  Cita_Citation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstOtherCitation");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findFirstOtherCitation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findFirstOtherCitation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Entr_Entry_FindFirstOtherCitation_keyval0(Entr_Entry self)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindFirstOtherCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Entr_Entry_FindFirstOtherCitation_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindFirstOtherCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Entr_Entry_FindFirstOtherCitation_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindFirstOtherCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Entr_Entry_FindFirstOtherCitation_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindFirstOtherCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
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
Cita_Citation Entr_Entry_FindFirstOtherCitation_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindFirstOtherCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.peakLists

Nmr.Peaklists that are 
part of Entry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Entr_Entry_FindFirstPeakList(Entr_Entry self, ApiMap conditions)
{
  
  Nmr_PeakList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeakList");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findFirstPeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findFirstPeakList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.peakLists

Nmr.Peaklists that are 
part of Entry
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Entr_Entry_FindFirstPeakList_keyval0(Entr_Entry self)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindFirstPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.peakLists

Nmr.Peaklists that are 
part of Entry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Entr_Entry_FindFirstPeakList_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindFirstPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.peakLists

Nmr.Peaklists that are 
part of Entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Entr_Entry_FindFirstPeakList_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindFirstPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.peakLists

Nmr.Peaklists that are 
part of Entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_PeakList Entr_Entry_FindFirstPeakList_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindFirstPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.peakLists

Nmr.Peaklists that are 
part of Entry
  @param  Entr_Entry self
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
Nmr_PeakList Entr_Entry_FindFirstPeakList_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_PeakList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindFirstPeakList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.relatedEntries

child link to class 
RelatedEntry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Entr_RelatedEntry Entr_Entry_FindFirstRelatedEntry(Entr_Entry self, ApiMap conditions)
{
  
  Entr_RelatedEntry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRelatedEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findFirstRelatedEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findFirstRelatedEntry' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.relatedEntries

child link to class 
RelatedEntry
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
Entr_RelatedEntry Entr_Entry_FindFirstRelatedEntry_keyval0(Entr_Entry self)
{
  
  Entr_RelatedEntry  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindFirstRelatedEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.relatedEntries

child link to class 
RelatedEntry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Entr_RelatedEntry Entr_Entry_FindFirstRelatedEntry_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  Entr_RelatedEntry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindFirstRelatedEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.relatedEntries

child link to class 
RelatedEntry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Entr_RelatedEntry Entr_Entry_FindFirstRelatedEntry_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Entr_RelatedEntry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindFirstRelatedEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.relatedEntries

child link to class 
RelatedEntry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Entr_RelatedEntry Entr_Entry_FindFirstRelatedEntry_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Entr_RelatedEntry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindFirstRelatedEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.relatedEntries

child link to class 
RelatedEntry
  @param  Entr_Entry self
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
Entr_RelatedEntry Entr_Entry_FindFirstRelatedEntry_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Entr_RelatedEntry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindFirstRelatedEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.software

software used for 
analysis in entry
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Meth_Software Entr_Entry_FindFirstSoftware(Entr_Entry self, ApiMap conditions)
{
  
  Meth_Software obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstSoftware");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findFirstSoftware'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findFirstSoftware' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.software

software used for 
analysis in entry
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
Meth_Software Entr_Entry_FindFirstSoftware_keyval0(Entr_Entry self)
{
  
  Meth_Software  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindFirstSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.software

software used for 
analysis in entry
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Meth_Software Entr_Entry_FindFirstSoftware_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  Meth_Software  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindFirstSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.software

software used for 
analysis in entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Meth_Software Entr_Entry_FindFirstSoftware_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Meth_Software  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindFirstSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.software

software used for 
analysis in entry
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Meth_Software Entr_Entry_FindFirstSoftware_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Meth_Software  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindFirstSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.software

software used for 
analysis in entry
  @param  Entr_Entry self
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
Meth_Software Entr_Entry_FindFirstSoftware_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Meth_Software  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindFirstSoftware(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses being 
deposited in entry.
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureAnalysis Entr_Entry_FindFirstStructureAnalysis(Entr_Entry self, ApiMap conditions)
{
  
  Nmr_StructureAnalysis obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstStructureAnalysis");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findFirstStructureAnalysis'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findFirstStructureAnalysis' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses being 
deposited in entry.
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureAnalysis Entr_Entry_FindFirstStructureAnalysis_keyval0(Entr_Entry self)
{
  
  Nmr_StructureAnalysis  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindFirstStructureAnalysis(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses being 
deposited in entry.
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureAnalysis Entr_Entry_FindFirstStructureAnalysis_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  Nmr_StructureAnalysis  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindFirstStructureAnalysis(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses being 
deposited in entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureAnalysis Entr_Entry_FindFirstStructureAnalysis_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_StructureAnalysis  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindFirstStructureAnalysis(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses being 
deposited in entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureAnalysis Entr_Entry_FindFirstStructureAnalysis_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_StructureAnalysis  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindFirstStructureAnalysis(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses being 
deposited in entry.
  @param  Entr_Entry self
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
Nmr_StructureAnalysis Entr_Entry_FindFirstStructureAnalysis_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_StructureAnalysis  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindFirstStructureAnalysis(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureGeneration Entr_Entry_FindFirstStructureGeneration(Entr_Entry self, ApiMap conditions)
{
  
  Nmr_StructureGeneration obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstStructureGeneration");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findFirstStructureGeneration'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findFirstStructureGeneration' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureGeneration Entr_Entry_FindFirstStructureGeneration_keyval0(Entr_Entry self)
{
  
  Nmr_StructureGeneration  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindFirstStructureGeneration(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureGeneration Entr_Entry_FindFirstStructureGeneration_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  Nmr_StructureGeneration  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindFirstStructureGeneration(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureGeneration Entr_Entry_FindFirstStructureGeneration_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_StructureGeneration  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindFirstStructureGeneration(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_StructureGeneration Entr_Entry_FindFirstStructureGeneration_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_StructureGeneration  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindFirstStructureGeneration(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
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
Nmr_StructureGeneration Entr_Entry_FindFirstStructureGeneration_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_StructureGeneration  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindFirstStructureGeneration(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of 
structures included in Entry.
  @param  Entr_Entry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mols_StructureGroup Entr_Entry_FindFirstStructureGroup(Entr_Entry self, ApiMap conditions)
{
  
  Mols_StructureGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstStructureGroup");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'findFirstStructureGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'findFirstStructureGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of 
structures included in Entry.
  @param  Entr_Entry self
  @returns  the first value that satisfies the conditions 
**/
Mols_StructureGroup Entr_Entry_FindFirstStructureGroup_keyval0(Entr_Entry self)
{
  
  Mols_StructureGroup  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Entr_Entry_FindFirstStructureGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of 
structures included in Entry.
  @param  Entr_Entry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mols_StructureGroup Entr_Entry_FindFirstStructureGroup_keyval1(Entr_Entry self, char * key, ApiObject value)
{
  
  Mols_StructureGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Entr_Entry_FindFirstStructureGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of 
structures included in Entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mols_StructureGroup Entr_Entry_FindFirstStructureGroup_keyval2(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mols_StructureGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Entr_Entry_FindFirstStructureGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of 
structures included in Entry.
  @param  Entr_Entry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mols_StructureGroup Entr_Entry_FindFirstStructureGroup_keyval3(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mols_StructureGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Entr_Entry_FindFirstStructureGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of 
structures included in Entry.
  @param  Entr_Entry self
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
Mols_StructureGroup Entr_Entry_FindFirstStructureGroup_keyval4(Entr_Entry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mols_StructureGroup  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Entr_Entry_FindFirstStructureGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrEntry.Entry
  @param  Entr_Entry self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Entr_Entry_Get(Entr_Entry self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Entr_Entry self
  @returns   the result
**/
Acco_AccessObject Entr_Entry_GetAccess(Entr_Entry self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getAccess' is not callable");
  
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
  @param  Entr_Entry self
  @returns   the result
**/
Acco_AccessObject Entr_Entry_GetActiveAccess(Entr_Entry self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getActiveAccess' is not callable");
  
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
  @param  Entr_Entry self
  @returns   the result
**/
ApiList Entr_Entry_GetApplicationData(Entr_Entry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
  @returns   the result
**/
ApiList Entr_Entry_GetAuthors(Entr_Entry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAuthors");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getAuthors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getAuthors' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Entry.bmrbProcessing

BioMagResBank processing 
information
  @param  Entr_Entry self
  @returns   the result
**/
ApiString Entr_Entry_GetBmrbProcessing(Entr_Entry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBmrbProcessing");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getBmrbProcessing'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getBmrbProcessing' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrEntry.Entry
  @param  Entr_Entry self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Entr_Entry Entr_Entry_GetByKey(Entr_Entry self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Entr_Entry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getByKey' is not callable");
  
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
  @param  Entr_Entry self
  @returns   the result
**/
ApiString Entr_Entry_GetClassName(Entr_Entry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for entry
  @param  Entr_Entry self
  @returns   the result
**/
ApiSet Entr_Entry_GetContactPersons(Entr_Entry self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getContactPersons");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getContactPersons'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getContactPersons' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Entry.derivedDataLists

Derived Nmr data lists 
relevant for Entry
  @param  Entr_Entry self
  @returns   the result
**/
ApiSet Entr_Entry_GetDerivedDataLists(Entr_Entry self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDerivedDataLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getDerivedDataLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getDerivedDataLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Entry.details

Free text, for notes, 
explanatory comments, etc.
  @param  Entr_Entry self
  @returns   the result
**/
ApiString Entr_Entry_GetDetails(Entr_Entry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Entry.entryMolecules

child link to class 
EntryMolecule
  @param  Entr_Entry self
  @returns   the result
**/
ApiSet Entr_Entry_GetEntryMolecules(Entr_Entry self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEntryMolecules");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getEntryMolecules'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getEntryMolecules' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Entry.entryType

Type of NMR study in the entry
  @param  Entr_Entry self
  @returns   the result
**/
ApiString Entr_Entry_GetEntryType(Entr_Entry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEntryType");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getEntryType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getEntryType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Entry.experimentListDetails

Commens etc. to 
experiment list
  @param  Entr_Entry self
  @returns   the result
**/
ApiString Entr_Entry_GetExperimentListDetails(Entr_Entry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperimentListDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getExperimentListDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getExperimentListDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments included in 
Entry
  @param  Entr_Entry self
  @returns   the result
**/
ApiSet Entr_Entry_GetExperiments(Entr_Entry self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getExperiments' is not callable");
  
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
  @param  Entr_Entry self
  @returns   the result
**/
ApiList Entr_Entry_GetFieldNames(Entr_Entry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.NmrEntry.Entry
  @param  Entr_Entry self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Entr_Entry_GetFullKey(Entr_Entry self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getFullKey' is not callable");
  
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
  @param  Entr_Entry self
  @returns   the result
**/
ApiBoolean Entr_Entry_GetInConstructor(Entr_Entry self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getInConstructor' is not callable");
  
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
  @param  Entr_Entry self
  @returns   the result
**/
ApiBoolean Entr_Entry_GetIsDeleted(Entr_Entry self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Entry.keywords

Keywords for searching on Entry
  @param  Entr_Entry self
  @returns   the result
**/
ApiList Entr_Entry_GetKeywords(Entr_Entry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getKeywords");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getKeywords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getKeywords' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Entry.laboratories

Research groups originating 
the entry
  @param  Entr_Entry self
  @returns   the result
**/
ApiSet Entr_Entry_GetLaboratories(Entr_Entry self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLaboratories");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getLaboratories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getLaboratories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.NmrEntry.Entry
  @param  Entr_Entry self
  @returns  Local object key
**/
ApiObject Entr_Entry_GetLocalKey(Entr_Entry self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @returns   the result
**/
ApiSet Entr_Entry_GetMeasurementLists(Entr_Entry self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMeasurementLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getMeasurementLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getMeasurementLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Entry.molSystem

MolSystem definign the entry
  @param  Entr_Entry self
  @returns   the result
**/
Mols_MolSystem Entr_Entry_GetMolSystem(Entr_Entry self)
{
  
  Mols_MolSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolSystem");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getMolSystem' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Entry.name

name of Entry
  @param  Entr_Entry self
  @returns   the result
**/
ApiString Entr_Entry_GetName(Entr_Entry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Entry.nmrEntryStore

parent link
  @param  Entr_Entry self
  @returns   the result
**/
Entr_NmrEntryStore Entr_Entry_GetNmrEntryStore(Entr_Entry self)
{
  
  Entr_NmrEntryStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrEntryStore");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getNmrEntryStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getNmrEntryStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link nmrProbes
  @param  Entr_Entry self
  @returns   the result
**/
ApiSet Entr_Entry_GetNmrProbes(Entr_Entry self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrProbes");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getNmrProbes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getNmrProbes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link nmrSpectrometers
  @param  Entr_Entry self
  @returns   the result
**/
ApiSet Entr_Entry_GetNmrSpectrometers(Entr_Entry self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrSpectrometers");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getNmrSpectrometers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getNmrSpectrometers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @returns   the result
**/
ApiSet Entr_Entry_GetOtherCitations(Entr_Entry self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOtherCitations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getOtherCitations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getOtherCitations' is not callable");
  
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
  @param  Entr_Entry self
  @returns   the result
**/
ApiString Entr_Entry_GetPackageName(Entr_Entry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getPackageName' is not callable");
  
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
  @param  Entr_Entry self
  @returns   the result
**/
ApiString Entr_Entry_GetPackageShortName(Entr_Entry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Entry.parent

link to parent object - synonym 
for nmrEntryStore
  @param  Entr_Entry self
  @returns   the result
**/
Entr_NmrEntryStore Entr_Entry_GetParent(Entr_Entry self)
{
  
  Entr_NmrEntryStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Entry.peakLists

Nmr.Peaklists that are part of 
Entry
  @param  Entr_Entry self
  @returns   the result
**/
ApiSet Entr_Entry_GetPeakLists(Entr_Entry self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeakLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getPeakLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Entry.primaryCitation

Primary citation for 
BMRB entry
  @param  Entr_Entry self
  @returns   the result
**/
Cita_Citation Entr_Entry_GetPrimaryCitation(Entr_Entry self)
{
  
  Cita_Citation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPrimaryCitation");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getPrimaryCitation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getPrimaryCitation' is not callable");
  
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
  @param  Entr_Entry self
  @returns   the result
**/
ApiString Entr_Entry_GetQualifiedName(Entr_Entry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Entry.relatedEntries

child link to class 
RelatedEntry
  @param  Entr_Entry self
  @returns   the result
**/
ApiSet Entr_Entry_GetRelatedEntries(Entr_Entry self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRelatedEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getRelatedEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getRelatedEntries' is not callable");
  
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
  @param  Entr_Entry self
  @returns   the result
**/
Impl_MemopsRoot Entr_Entry_GetRoot(Entr_Entry self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Entry.software

software used for analysis in 
entry
  @param  Entr_Entry self
  @returns   the result
**/
ApiSet Entr_Entry_GetSoftware(Entr_Entry self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSoftware");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getSoftware'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getSoftware' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses 
being deposited in entry.
  @param  Entr_Entry self
  @returns   the result
**/
ApiSet Entr_Entry_GetStructureAnalyses(Entr_Entry self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStructureAnalyses");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getStructureAnalyses'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getStructureAnalyses' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @returns   the result
**/
ApiSet Entr_Entry_GetStructureGenerations(Entr_Entry self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStructureGenerations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getStructureGenerations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getStructureGenerations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of structures 
included in Entry.
  @param  Entr_Entry self
  @returns   the result
**/
ApiSet Entr_Entry_GetStructureGroups(Entr_Entry self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStructureGroups");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getStructureGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getStructureGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Entry.study

Study that Entry is part of
  @param  Entr_Entry self
  @returns   the result
**/
Entr_Study Entr_Entry_GetStudy(Entr_Entry self)
{
  
  Entr_Study obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStudy");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getStudy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getStudy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrEntry.Entry.title

Official title of Entry
  @param  Entr_Entry self
  @returns   the result
**/
ApiString Entr_Entry_GetTitle(Entr_Entry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTitle");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getTitle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getTitle' is not callable");
  
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
  @param  Entr_Entry self
  @returns   the result
**/
Impl_TopObject Entr_Entry_GetTopObject(Entr_Entry self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrEntry.Entry
  @param  Entr_NmrEntryStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Entr_Entry Entr_Entry_Init(Entr_NmrEntryStore parent, ApiMap attrlinks)
{
  
  return Entr_NmrEntryStore_NewEntry(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrEntry.Entry
  @param  Entr_NmrEntryStore parent
  @param  char * name
  @returns  the new object
**/
Entr_Entry Entr_Entry_Init_reqd(Entr_NmrEntryStore parent, char * name)
{
  
  Entr_Entry  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Entr_Entry_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrEntry.EntryMolecule
  @param  Entr_Entry self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Entr_EntryMolecule Entr_Entry_NewEntryMolecule(Entr_Entry self, ApiMap attrlinks)
{
  
  Entr_EntryMolecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newEntryMolecule");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'newEntryMolecule'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'newEntryMolecule' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrEntry.EntryMolecule
  @param  Entr_Entry self
  @param  Mole_Molecule molecule
  @param  char * productionMethod
  @returns  the new object
**/
Entr_EntryMolecule Entr_Entry_NewEntryMolecule_reqd(Entr_Entry self, Mole_Molecule molecule, char * productionMethod)
{
  
  Entr_EntryMolecule  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__productionMethod = ApiString_New(productionMethod);

  PyDict_SetItemString(attrlinks, "molecule", molecule);
  PyDict_SetItemString(attrlinks, "productionMethod", api__productionMethod);
  
  obj = Entr_Entry_NewEntryMolecule(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__productionMethod);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrEntry.RelatedEntry
  @param  Entr_Entry self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Entr_RelatedEntry Entr_Entry_NewRelatedEntry(Entr_Entry self, ApiMap attrlinks)
{
  
  Entr_RelatedEntry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newRelatedEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'newRelatedEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'newRelatedEntry' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrEntry.RelatedEntry
  @param  Entr_Entry self
  @param  char * dbCode
  @returns  the new object
**/
Entr_RelatedEntry Entr_Entry_NewRelatedEntry_reqd(Entr_Entry self, char * dbCode)
{
  
  Entr_RelatedEntry  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__dbCode = ApiString_New(dbCode);

  PyDict_SetItemString(attrlinks, "dbCode", api__dbCode);
  
  obj = Entr_Entry_NewRelatedEntry(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__dbCode);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_Entry self
  @param  Impl_ApplicationData value
**/
void *Entr_Entry_RemoveApplicationData(Entr_Entry self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
  @param  Affi_Person value
**/
void *Entr_Entry_RemoveAuthor(Entr_Entry self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeAuthor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'removeAuthor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'removeAuthor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for 
entry
  @param  Entr_Entry self
  @param  Affi_Person value
**/
void *Entr_Entry_RemoveContactPerson(Entr_Entry self, Affi_Person value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeContactPerson");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'removeContactPerson'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'removeContactPerson' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.NmrEntry.Entry.derivedDataLists

Derived Nmr data 
lists relevant for Entry
  @param  Entr_Entry self
  @param  Nmr_DerivedDataList value
**/
void *Entr_Entry_RemoveDerivedDataList(Entr_Entry self, Nmr_DerivedDataList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeDerivedDataList");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'removeDerivedDataList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'removeDerivedDataList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments included 
in Entry
  @param  Entr_Entry self
  @param  Nmr_Experiment value
**/
void *Entr_Entry_RemoveExperiment(Entr_Entry self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'removeExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'removeExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.NmrEntry.Entry.keywords

Keywords for searching on 
Entry
  @param  Entr_Entry self
  @param  ApiString value
**/
void *Entr_Entry_RemoveKeyword(Entr_Entry self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeKeyword");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'removeKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'removeKeyword' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.NmrEntry.Entry.laboratories

Research groups 
originating the entry
  @param  Entr_Entry self
  @param  Affi_Group value
**/
void *Entr_Entry_RemoveLaboratory(Entr_Entry self, Affi_Group value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeLaboratory");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'removeLaboratory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'removeLaboratory' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @param  Nmr_AbstractMeasurementList value
**/
void *Entr_Entry_RemoveMeasurementList(Entr_Entry self, Nmr_AbstractMeasurementList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeMeasurementList");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'removeMeasurementList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'removeMeasurementList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @param  Cita_Citation value
**/
void *Entr_Entry_RemoveOtherCitation(Entr_Entry self, Cita_Citation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeOtherCitation");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'removeOtherCitation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'removeOtherCitation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.NmrEntry.Entry.peakLists

Nmr.Peaklists that are part 
of Entry
  @param  Entr_Entry self
  @param  Nmr_PeakList value
**/
void *Entr_Entry_RemovePeakList(Entr_Entry self, Nmr_PeakList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePeakList");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'removePeakList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'removePeakList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.NmrEntry.Entry.software

software used for analysis 
in entry
  @param  Entr_Entry self
  @param  Meth_Software value
**/
void *Entr_Entry_RemoveSoftware(Entr_Entry self, Meth_Software value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeSoftware");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'removeSoftware'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'removeSoftware' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses 
being deposited in entry.
  @param  Entr_Entry self
  @param  Nmr_StructureAnalysis value
**/
void *Entr_Entry_RemoveStructureAnalysis(Entr_Entry self, Nmr_StructureAnalysis value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeStructureAnalysis");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'removeStructureAnalysis'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'removeStructureAnalysis' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @param  Nmr_StructureGeneration value
**/
void *Entr_Entry_RemoveStructureGeneration(Entr_Entry self, Nmr_StructureGeneration value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeStructureGeneration");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'removeStructureGeneration'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'removeStructureGeneration' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of structures 
included in Entry.
  @param  Entr_Entry self
  @param  Mols_StructureGroup value
**/
void *Entr_Entry_RemoveStructureGroup(Entr_Entry self, Mols_StructureGroup value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeStructureGroup");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'removeStructureGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'removeStructureGroup' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrEntry.Entry
  @param  Entr_Entry self
  @param  ApiString name
  @param  ApiObject value
**/
void *Entr_Entry_Set(Entr_Entry self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Entr_Entry self
  @param  Acco_AccessObject value
**/
void *Entr_Entry_SetAccess(Entr_Entry self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'setAccess' is not callable");
  
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
  @param  Entr_Entry self
  @param  ApiList values
**/
void *Entr_Entry_SetApplicationData(Entr_Entry self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.Entry.authors

Authors of entry.
  @param  Entr_Entry self
  @param  ApiList values
**/
void *Entr_Entry_SetAuthors(Entr_Entry self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAuthors");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'setAuthors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'setAuthors' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.Entry.bmrbProcessing

BioMagResBank processing 
information
  @param  Entr_Entry self
  @param  ApiString value
**/
void *Entr_Entry_SetBmrbProcessing(Entr_Entry self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBmrbProcessing");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'setBmrbProcessing'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'setBmrbProcessing' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for entry
  @param  Entr_Entry self
  @param  ApiSet values
**/
void *Entr_Entry_SetContactPersons(Entr_Entry self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setContactPersons");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'setContactPersons'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'setContactPersons' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.Entry.derivedDataLists

Derived Nmr data lists 
relevant for Entry
  @param  Entr_Entry self
  @param  ApiSet values
**/
void *Entr_Entry_SetDerivedDataLists(Entr_Entry self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDerivedDataLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'setDerivedDataLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'setDerivedDataLists' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.Entry.details

Free text, for notes, 
explanatory comments, etc.
  @param  Entr_Entry self
  @param  ApiString value
**/
void *Entr_Entry_SetDetails(Entr_Entry self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.Entry.entryType

Type of NMR study in the entry
  @param  Entr_Entry self
  @param  ApiString value
**/
void *Entr_Entry_SetEntryType(Entr_Entry self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setEntryType");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'setEntryType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'setEntryType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.Entry.experimentListDetails

Commens etc. to 
experiment list
  @param  Entr_Entry self
  @param  ApiString value
**/
void *Entr_Entry_SetExperimentListDetails(Entr_Entry self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperimentListDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'setExperimentListDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'setExperimentListDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments included in 
Entry
  @param  Entr_Entry self
  @param  ApiSet values
**/
void *Entr_Entry_SetExperiments(Entr_Entry self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'setExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'setExperiments' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.Entry.keywords

Keywords for searching on Entry
  @param  Entr_Entry self
  @param  ApiList values
**/
void *Entr_Entry_SetKeywords(Entr_Entry self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setKeywords");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'setKeywords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'setKeywords' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.Entry.laboratories

Research groups originating 
the entry
  @param  Entr_Entry self
  @param  ApiSet values
**/
void *Entr_Entry_SetLaboratories(Entr_Entry self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLaboratories");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'setLaboratories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'setLaboratories' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @param  ApiSet values
**/
void *Entr_Entry_SetMeasurementLists(Entr_Entry self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMeasurementLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'setMeasurementLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'setMeasurementLists' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.Entry.molSystem

MolSystem definign the entry
  @param  Entr_Entry self
  @param  Mols_MolSystem value
**/
void *Entr_Entry_SetMolSystem(Entr_Entry self, Mols_MolSystem value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolSystem");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'setMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'setMolSystem' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.Entry.name

name of Entry
  @param  Entr_Entry self
  @param  ApiString value
**/
void *Entr_Entry_SetName(Entr_Entry self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @param  ApiSet values
**/
void *Entr_Entry_SetOtherCitations(Entr_Entry self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOtherCitations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'setOtherCitations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'setOtherCitations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.Entry.peakLists

Nmr.Peaklists that are part of 
Entry
  @param  Entr_Entry self
  @param  ApiSet values
**/
void *Entr_Entry_SetPeakLists(Entr_Entry self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeakLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'setPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'setPeakLists' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.Entry.primaryCitation

Primary citation for 
BMRB entry
  @param  Entr_Entry self
  @param  Cita_Citation value
**/
void *Entr_Entry_SetPrimaryCitation(Entr_Entry self, Cita_Citation value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPrimaryCitation");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'setPrimaryCitation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'setPrimaryCitation' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.Entry.software

software used for analysis in 
entry
  @param  Entr_Entry self
  @param  ApiSet values
**/
void *Entr_Entry_SetSoftware(Entr_Entry self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSoftware");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'setSoftware'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'setSoftware' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses 
being deposited in entry.
  @param  Entr_Entry self
  @param  ApiSet values
**/
void *Entr_Entry_SetStructureAnalyses(Entr_Entry self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStructureAnalyses");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'setStructureAnalyses'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'setStructureAnalyses' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @param  ApiSet values
**/
void *Entr_Entry_SetStructureGenerations(Entr_Entry self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStructureGenerations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'setStructureGenerations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'setStructureGenerations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of structures 
included in Entry.
  @param  Entr_Entry self
  @param  ApiSet values
**/
void *Entr_Entry_SetStructureGroups(Entr_Entry self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStructureGroups");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'setStructureGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'setStructureGroups' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.Entry.study

Study that Entry is part of
  @param  Entr_Entry self
  @param  Entr_Study value
**/
void *Entr_Entry_SetStudy(Entr_Entry self, Entr_Study value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStudy");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'setStudy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'setStudy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrEntry.Entry.title

Official title of Entry
  @param  Entr_Entry self
  @param  ApiString value
**/
void *Entr_Entry_SetTitle(Entr_Entry self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTitle");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'setTitle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'setTitle' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrEntry.Entry.contactPersons

Contact persons for 
entry
  @param  Entr_Entry self
  @returns   the result
**/
ApiList Entr_Entry_SortedContactPersons(Entr_Entry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedContactPersons");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'sortedContactPersons'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'sortedContactPersons' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrEntry.Entry.derivedDataLists

Derived Nmr data 
lists relevant for Entry
  @param  Entr_Entry self
  @returns   the result
**/
ApiList Entr_Entry_SortedDerivedDataLists(Entr_Entry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDerivedDataLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'sortedDerivedDataLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'sortedDerivedDataLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrEntry.Entry.entryMolecules

child link to class 
EntryMolecule
  @param  Entr_Entry self
  @returns   the result
**/
ApiList Entr_Entry_SortedEntryMolecules(Entr_Entry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedEntryMolecules");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'sortedEntryMolecules'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'sortedEntryMolecules' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrEntry.Entry.experiments

Nmr Experiments included 
in Entry
  @param  Entr_Entry self
  @returns   the result
**/
ApiList Entr_Entry_SortedExperiments(Entr_Entry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'sortedExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'sortedExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrEntry.Entry.laboratories

Research groups 
originating the entry
  @param  Entr_Entry self
  @returns   the result
**/
ApiList Entr_Entry_SortedLaboratories(Entr_Entry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedLaboratories");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'sortedLaboratories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'sortedLaboratories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrEntry.Entry.measurementLists

Measurement lists 
included  in Entry
  @param  Entr_Entry self
  @returns   the result
**/
ApiList Entr_Entry_SortedMeasurementLists(Entr_Entry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMeasurementLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'sortedMeasurementLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'sortedMeasurementLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrEntry.Entry.nmrProbes

Nmr Probes used for 
Experiments for this entry - convenience link
  @param  Entr_Entry self
  @returns   the result
**/
ApiList Entr_Entry_SortedNmrProbes(Entr_Entry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrProbes");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'sortedNmrProbes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'sortedNmrProbes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrEntry.Entry.nmrSpectrometers

Nmr Spectrometers 
used for experiments in this entry (convenience link)
  @param  Entr_Entry self
  @returns   the result
**/
ApiList Entr_Entry_SortedNmrSpectrometers(Entr_Entry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrSpectrometers");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'sortedNmrSpectrometers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'sortedNmrSpectrometers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrEntry.Entry.otherCitations

Other (non-primary) 
citations for entry
  @param  Entr_Entry self
  @returns   the result
**/
ApiList Entr_Entry_SortedOtherCitations(Entr_Entry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedOtherCitations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'sortedOtherCitations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'sortedOtherCitations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrEntry.Entry.peakLists

Nmr.Peaklists that are part 
of Entry
  @param  Entr_Entry self
  @returns   the result
**/
ApiList Entr_Entry_SortedPeakLists(Entr_Entry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeakLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'sortedPeakLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'sortedPeakLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrEntry.Entry.relatedEntries

child link to class 
RelatedEntry
  @param  Entr_Entry self
  @returns   the result
**/
ApiList Entr_Entry_SortedRelatedEntries(Entr_Entry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRelatedEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'sortedRelatedEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'sortedRelatedEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrEntry.Entry.software

software used for analysis 
in entry
  @param  Entr_Entry self
  @returns   the result
**/
ApiList Entr_Entry_SortedSoftware(Entr_Entry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedSoftware");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'sortedSoftware'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'sortedSoftware' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrEntry.Entry.structureAnalyses

StructureAnalyses 
being deposited in entry.
  @param  Entr_Entry self
  @returns   the result
**/
ApiList Entr_Entry_SortedStructureAnalyses(Entr_Entry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedStructureAnalyses");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'sortedStructureAnalyses'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'sortedStructureAnalyses' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.NmrEntry.Entry.structureGenerations

StructureGenerations being 
deposited in entry.
  @param  Entr_Entry self
  @returns   the result
**/
ApiList Entr_Entry_SortedStructureGenerations(Entr_Entry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedStructureGenerations");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'sortedStructureGenerations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'sortedStructureGenerations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrEntry.Entry.structureGroups

Groups of structures 
included in Entry.
  @param  Entr_Entry self
  @returns   the result
**/
ApiList Entr_Entry_SortedStructureGroups(Entr_Entry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedStructureGroups");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrEntry.Entry: cannot find method 'sortedStructureGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrEntry.Entry: method 'sortedStructureGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
