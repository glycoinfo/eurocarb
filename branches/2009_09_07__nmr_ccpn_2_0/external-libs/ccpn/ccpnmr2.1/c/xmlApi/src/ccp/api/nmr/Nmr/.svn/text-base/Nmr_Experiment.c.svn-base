
#include "ccp.h"

/*
  A description of an NMR experiment. This corresponds to a single collection of data and so is roughly equivalent to a single Bruker expName/n or a Varian .. directory. The data model contains no description of either a generic experiment or a combination of pulse sequence, sample, conditions and so on that may be recorded several times.
  
  Creating an Experiment autiomatically creates the
  correct number of ExpDims as well.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Experiment self
  @param  Impl_ApplicationData value
**/
void *Nmr_Experiment_AddApplicationData(Nmr_Experiment self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid for 
Experiment. There can be several, seeing that there may be measurements 
of different types.
  @param  Nmr_Experiment self
  @param  Nmr_DataList value
**/
void *Nmr_Experiment_AddDataList(Nmr_Experiment self, Nmr_DataList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addDataList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'addDataList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'addDataList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which the 
current Experiment is derived
  @param  Nmr_Experiment self
  @param  Nmr_Experiment value
**/
void *Nmr_Experiment_AddDerivedFrom(Nmr_Experiment self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addDerivedFrom");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'addDerivedFrom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'addDerivedFrom' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are derived 
from the data in this one.
  @param  Nmr_Experiment self
  @param  Nmr_Experiment value
**/
void *Nmr_Experiment_AddDerivedTo(Nmr_Experiment self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addDerivedTo");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'addDerivedTo'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'addDerivedTo' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr Experiment
  @param  Nmr_Experiment self
  @param  Entr_Entry value
**/
void *Nmr_Experiment_AddEntry(Nmr_Experiment self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'addEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'addEntry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures that 
describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @param  Lmol_LabeledMixture value
**/
void *Nmr_Experiment_AddLabeledMixture(Nmr_Experiment self, Lmol_LabeledMixture value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addLabeledMixture");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'addLabeledMixture'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'addLabeledMixture' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @param  Mols_MolSystem value
**/
void *Nmr_Experiment_AddMolSystem(Nmr_Experiment self, Mols_MolSystem value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addMolSystem");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'addMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'addMolSystem' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series that 
involve experiment
  @param  Nmr_Experiment self
  @param  Nmr_NmrExpSeries value
**/
void *Nmr_Experiment_AddNmrExpSeries(Nmr_Experiment self, Nmr_NmrExpSeries value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addNmrExpSeries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'addNmrExpSeries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'addNmrExpSeries' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references used 
for Experiment
  @param  Nmr_Experiment self
  @param  Nmr_ShiftReference value
**/
void *Nmr_Experiment_AddShiftReference(Nmr_Experiment self, Nmr_ShiftReference value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addShiftReference");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'addShiftReference'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'addShiftReference' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.Experiment
  @param  Nmr_Experiment self
  @param  ApiBoolean complete
**/
void *Nmr_Experiment_CheckAllValid(Nmr_Experiment self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.Experiment
  @param  Nmr_Experiment self
  @param  ApiBoolean complete
**/
void *Nmr_Experiment_CheckValid(Nmr_Experiment self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'checkValid' is not callable");
  
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
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_Experiment_FindAllApplicationData(Nmr_Experiment self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_Experiment self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_Experiment_FindAllApplicationData_keyval0(Nmr_Experiment self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Experiment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_Experiment_FindAllApplicationData_keyval1(Nmr_Experiment self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Experiment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_Experiment_FindAllApplicationData_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Experiment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_Experiment_FindAllApplicationData_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Experiment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Experiment self
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
ApiList Nmr_Experiment_FindAllApplicationData_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Experiment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.citations

Citation for NMR 
experiment pulse sequence.
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllCitations(Nmr_Experiment self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllCitations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'findAllCitations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'findAllCitations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.citations

Citation for NMR 
experiment pulse sequence.
  @param  Nmr_Experiment self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllCitations_keyval0(Nmr_Experiment self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Experiment_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.citations

Citation for NMR 
experiment pulse sequence.
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllCitations_keyval1(Nmr_Experiment self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Experiment_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.citations

Citation for NMR 
experiment pulse sequence.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllCitations_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Experiment_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.citations

Citation for NMR 
experiment pulse sequence.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllCitations_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Experiment_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.citations

Citation for NMR 
experiment pulse sequence.
  @param  Nmr_Experiment self
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
ApiSet Nmr_Experiment_FindAllCitations_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Experiment_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid 
for Experiment. There can be several, seeing that there may be 
measurements of different types.
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllDataLists(Nmr_Experiment self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDataLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'findAllDataLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'findAllDataLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid 
for Experiment. There can be several, seeing that there may be 
measurements of different types.
  @param  Nmr_Experiment self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllDataLists_keyval0(Nmr_Experiment self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Experiment_FindAllDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid 
for Experiment. There can be several, seeing that there may be 
measurements of different types.
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllDataLists_keyval1(Nmr_Experiment self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Experiment_FindAllDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid 
for Experiment. There can be several, seeing that there may be 
measurements of different types.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllDataLists_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Experiment_FindAllDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid 
for Experiment. There can be several, seeing that there may be 
measurements of different types.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllDataLists_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Experiment_FindAllDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid 
for Experiment. There can be several, seeing that there may be 
measurements of different types.
  @param  Nmr_Experiment self
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
ApiSet Nmr_Experiment_FindAllDataLists_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Experiment_FindAllDataLists(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.dataSources

child link
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllDataSources(Nmr_Experiment self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDataSources");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'findAllDataSources'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'findAllDataSources' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.dataSources

child link
  @param  Nmr_Experiment self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllDataSources_keyval0(Nmr_Experiment self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Experiment_FindAllDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.dataSources

child link
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllDataSources_keyval1(Nmr_Experiment self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Experiment_FindAllDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.dataSources

child link
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllDataSources_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Experiment_FindAllDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.dataSources

child link
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllDataSources_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Experiment_FindAllDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.dataSources

child link
  @param  Nmr_Experiment self
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
ApiSet Nmr_Experiment_FindAllDataSources_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Experiment_FindAllDataSources(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which 
the current Experiment is derived
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllDerivedFrom(Nmr_Experiment self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDerivedFrom");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'findAllDerivedFrom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'findAllDerivedFrom' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which 
the current Experiment is derived
  @param  Nmr_Experiment self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllDerivedFrom_keyval0(Nmr_Experiment self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Experiment_FindAllDerivedFrom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which 
the current Experiment is derived
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllDerivedFrom_keyval1(Nmr_Experiment self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Experiment_FindAllDerivedFrom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which 
the current Experiment is derived
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllDerivedFrom_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Experiment_FindAllDerivedFrom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which 
the current Experiment is derived
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllDerivedFrom_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Experiment_FindAllDerivedFrom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which 
the current Experiment is derived
  @param  Nmr_Experiment self
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
ApiSet Nmr_Experiment_FindAllDerivedFrom_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Experiment_FindAllDerivedFrom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are 
derived from the data in this one.
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllDerivedTo(Nmr_Experiment self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDerivedTo");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'findAllDerivedTo'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'findAllDerivedTo' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are 
derived from the data in this one.
  @param  Nmr_Experiment self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllDerivedTo_keyval0(Nmr_Experiment self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Experiment_FindAllDerivedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are 
derived from the data in this one.
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllDerivedTo_keyval1(Nmr_Experiment self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Experiment_FindAllDerivedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are 
derived from the data in this one.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllDerivedTo_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Experiment_FindAllDerivedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are 
derived from the data in this one.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllDerivedTo_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Experiment_FindAllDerivedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are 
derived from the data in this one.
  @param  Nmr_Experiment self
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
ApiSet Nmr_Experiment_FindAllDerivedTo_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Experiment_FindAllDerivedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr 
Experiment
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllEntries(Nmr_Experiment self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'findAllEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'findAllEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr 
Experiment
  @param  Nmr_Experiment self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllEntries_keyval0(Nmr_Experiment self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Experiment_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr 
Experiment
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllEntries_keyval1(Nmr_Experiment self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Experiment_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr 
Experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllEntries_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Experiment_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr 
Experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllEntries_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Experiment_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr 
Experiment
  @param  Nmr_Experiment self
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
ApiSet Nmr_Experiment_FindAllEntries_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Experiment_FindAllEntries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.expChainStates

child link to class 
ExpChainState
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllExpChainStates(Nmr_Experiment self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExpChainStates");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'findAllExpChainStates'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'findAllExpChainStates' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.expChainStates

child link to class 
ExpChainState
  @param  Nmr_Experiment self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllExpChainStates_keyval0(Nmr_Experiment self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Experiment_FindAllExpChainStates(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.expChainStates

child link to class 
ExpChainState
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllExpChainStates_keyval1(Nmr_Experiment self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Experiment_FindAllExpChainStates(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.expChainStates

child link to class 
ExpChainState
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllExpChainStates_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Experiment_FindAllExpChainStates(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.expChainStates

child link to class 
ExpChainState
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllExpChainStates_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Experiment_FindAllExpChainStates(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.expChainStates

child link to class 
ExpChainState
  @param  Nmr_Experiment self
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
ApiSet Nmr_Experiment_FindAllExpChainStates_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Experiment_FindAllExpChainStates(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.expDims

child link
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllExpDims(Nmr_Experiment self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExpDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'findAllExpDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'findAllExpDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.expDims

child link
  @param  Nmr_Experiment self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllExpDims_keyval0(Nmr_Experiment self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Experiment_FindAllExpDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.expDims

child link
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllExpDims_keyval1(Nmr_Experiment self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Experiment_FindAllExpDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.expDims

child link
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllExpDims_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Experiment_FindAllExpDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.expDims

child link
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllExpDims_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Experiment_FindAllExpDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.expDims

child link
  @param  Nmr_Experiment self
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
ApiSet Nmr_Experiment_FindAllExpDims_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Experiment_FindAllExpDims(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.expTransfers

child link to class 
ExpTransfer
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllExpTransfers(Nmr_Experiment self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExpTransfers");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'findAllExpTransfers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'findAllExpTransfers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.expTransfers

child link to class 
ExpTransfer
  @param  Nmr_Experiment self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllExpTransfers_keyval0(Nmr_Experiment self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Experiment_FindAllExpTransfers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.expTransfers

child link to class 
ExpTransfer
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllExpTransfers_keyval1(Nmr_Experiment self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Experiment_FindAllExpTransfers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.expTransfers

child link to class 
ExpTransfer
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllExpTransfers_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Experiment_FindAllExpTransfers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.expTransfers

child link to class 
ExpTransfer
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllExpTransfers_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Experiment_FindAllExpTransfers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.expTransfers

child link to class 
ExpTransfer
  @param  Nmr_Experiment self
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
ApiSet Nmr_Experiment_FindAllExpTransfers_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Experiment_FindAllExpTransfers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures that 
describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllLabeledMixtures(Nmr_Experiment self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllLabeledMixtures");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'findAllLabeledMixtures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'findAllLabeledMixtures' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures that 
describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllLabeledMixtures_keyval0(Nmr_Experiment self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Experiment_FindAllLabeledMixtures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures that 
describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllLabeledMixtures_keyval1(Nmr_Experiment self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Experiment_FindAllLabeledMixtures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures that 
describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllLabeledMixtures_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Experiment_FindAllLabeledMixtures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures that 
describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllLabeledMixtures_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Experiment_FindAllLabeledMixtures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures that 
describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
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
ApiSet Nmr_Experiment_FindAllLabeledMixtures_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Experiment_FindAllLabeledMixtures(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllMolSystems(Nmr_Experiment self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolSystems");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'findAllMolSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'findAllMolSystems' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllMolSystems_keyval0(Nmr_Experiment self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Experiment_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllMolSystems_keyval1(Nmr_Experiment self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Experiment_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllMolSystems_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Experiment_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllMolSystems_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Experiment_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
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
ApiSet Nmr_Experiment_FindAllMolSystems_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Experiment_FindAllMolSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series that 
involve experiment
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllNmrExpSeries(Nmr_Experiment self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNmrExpSeries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'findAllNmrExpSeries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'findAllNmrExpSeries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series that 
involve experiment
  @param  Nmr_Experiment self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllNmrExpSeries_keyval0(Nmr_Experiment self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Experiment_FindAllNmrExpSeries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series that 
involve experiment
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllNmrExpSeries_keyval1(Nmr_Experiment self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Experiment_FindAllNmrExpSeries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series that 
involve experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllNmrExpSeries_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Experiment_FindAllNmrExpSeries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series that 
involve experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllNmrExpSeries_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Experiment_FindAllNmrExpSeries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series that 
involve experiment
  @param  Nmr_Experiment self
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
ApiSet Nmr_Experiment_FindAllNmrExpSeries_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Experiment_FindAllNmrExpSeries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references 
used for Experiment
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllShiftReferences(Nmr_Experiment self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'findAllShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'findAllShiftReferences' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references 
used for Experiment
  @param  Nmr_Experiment self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllShiftReferences_keyval0(Nmr_Experiment self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Experiment_FindAllShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references 
used for Experiment
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllShiftReferences_keyval1(Nmr_Experiment self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Experiment_FindAllShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references 
used for Experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllShiftReferences_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Experiment_FindAllShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references 
used for Experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_Experiment_FindAllShiftReferences_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Experiment_FindAllShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references 
used for Experiment
  @param  Nmr_Experiment self
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
ApiSet Nmr_Experiment_FindAllShiftReferences_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Experiment_FindAllShiftReferences(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_Experiment_FindFirstApplicationData(Nmr_Experiment self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_Experiment self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_Experiment_FindFirstApplicationData_keyval0(Nmr_Experiment self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Experiment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_Experiment_FindFirstApplicationData_keyval1(Nmr_Experiment self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Experiment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_Experiment_FindFirstApplicationData_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Experiment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_Experiment_FindFirstApplicationData_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Experiment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Experiment self
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
Impl_ApplicationData Nmr_Experiment_FindFirstApplicationData_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Experiment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.citations

Citation for NMR 
experiment pulse sequence.
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Nmr_Experiment_FindFirstCitation(Nmr_Experiment self, ApiMap conditions)
{
  
  Cita_Citation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstCitation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'findFirstCitation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'findFirstCitation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.citations

Citation for NMR 
experiment pulse sequence.
  @param  Nmr_Experiment self
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Nmr_Experiment_FindFirstCitation_keyval0(Nmr_Experiment self)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Experiment_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.citations

Citation for NMR 
experiment pulse sequence.
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Nmr_Experiment_FindFirstCitation_keyval1(Nmr_Experiment self, char * key, ApiObject value)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Experiment_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.citations

Citation for NMR 
experiment pulse sequence.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Nmr_Experiment_FindFirstCitation_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Experiment_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.citations

Citation for NMR 
experiment pulse sequence.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Nmr_Experiment_FindFirstCitation_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Experiment_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.citations

Citation for NMR 
experiment pulse sequence.
  @param  Nmr_Experiment self
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
Cita_Citation Nmr_Experiment_FindFirstCitation_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Experiment_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid 
for Experiment. There can be several, seeing that there may be 
measurements of different types.
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataList Nmr_Experiment_FindFirstDataList(Nmr_Experiment self, ApiMap conditions)
{
  
  Nmr_DataList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDataList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'findFirstDataList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'findFirstDataList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid 
for Experiment. There can be several, seeing that there may be 
measurements of different types.
  @param  Nmr_Experiment self
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataList Nmr_Experiment_FindFirstDataList_keyval0(Nmr_Experiment self)
{
  
  Nmr_DataList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Experiment_FindFirstDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid 
for Experiment. There can be several, seeing that there may be 
measurements of different types.
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataList Nmr_Experiment_FindFirstDataList_keyval1(Nmr_Experiment self, char * key, ApiObject value)
{
  
  Nmr_DataList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Experiment_FindFirstDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid 
for Experiment. There can be several, seeing that there may be 
measurements of different types.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataList Nmr_Experiment_FindFirstDataList_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_DataList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Experiment_FindFirstDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid 
for Experiment. There can be several, seeing that there may be 
measurements of different types.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataList Nmr_Experiment_FindFirstDataList_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_DataList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Experiment_FindFirstDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid 
for Experiment. There can be several, seeing that there may be 
measurements of different types.
  @param  Nmr_Experiment self
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
Nmr_DataList Nmr_Experiment_FindFirstDataList_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_DataList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Experiment_FindFirstDataList(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.dataSources

child link
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Nmr_Experiment_FindFirstDataSource(Nmr_Experiment self, ApiMap conditions)
{
  
  Nmr_DataSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDataSource");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'findFirstDataSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'findFirstDataSource' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.dataSources

child link
  @param  Nmr_Experiment self
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Nmr_Experiment_FindFirstDataSource_keyval0(Nmr_Experiment self)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Experiment_FindFirstDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.dataSources

child link
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Nmr_Experiment_FindFirstDataSource_keyval1(Nmr_Experiment self, char * key, ApiObject value)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Experiment_FindFirstDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.dataSources

child link
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Nmr_Experiment_FindFirstDataSource_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Experiment_FindFirstDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.dataSources

child link
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_DataSource Nmr_Experiment_FindFirstDataSource_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Experiment_FindFirstDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.dataSources

child link
  @param  Nmr_Experiment self
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
Nmr_DataSource Nmr_Experiment_FindFirstDataSource_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_DataSource  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Experiment_FindFirstDataSource(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which 
the current Experiment is derived
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_Experiment_FindFirstDerivedFrom(Nmr_Experiment self, ApiMap conditions)
{
  
  Nmr_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDerivedFrom");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'findFirstDerivedFrom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'findFirstDerivedFrom' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which 
the current Experiment is derived
  @param  Nmr_Experiment self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_Experiment_FindFirstDerivedFrom_keyval0(Nmr_Experiment self)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Experiment_FindFirstDerivedFrom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which 
the current Experiment is derived
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_Experiment_FindFirstDerivedFrom_keyval1(Nmr_Experiment self, char * key, ApiObject value)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Experiment_FindFirstDerivedFrom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which 
the current Experiment is derived
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_Experiment_FindFirstDerivedFrom_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Experiment_FindFirstDerivedFrom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which 
the current Experiment is derived
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_Experiment_FindFirstDerivedFrom_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Experiment_FindFirstDerivedFrom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which 
the current Experiment is derived
  @param  Nmr_Experiment self
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
Nmr_Experiment Nmr_Experiment_FindFirstDerivedFrom_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Experiment_FindFirstDerivedFrom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are 
derived from the data in this one.
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_Experiment_FindFirstDerivedTo(Nmr_Experiment self, ApiMap conditions)
{
  
  Nmr_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDerivedTo");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'findFirstDerivedTo'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'findFirstDerivedTo' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are 
derived from the data in this one.
  @param  Nmr_Experiment self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_Experiment_FindFirstDerivedTo_keyval0(Nmr_Experiment self)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Experiment_FindFirstDerivedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are 
derived from the data in this one.
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_Experiment_FindFirstDerivedTo_keyval1(Nmr_Experiment self, char * key, ApiObject value)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Experiment_FindFirstDerivedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are 
derived from the data in this one.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_Experiment_FindFirstDerivedTo_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Experiment_FindFirstDerivedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are 
derived from the data in this one.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Experiment Nmr_Experiment_FindFirstDerivedTo_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Experiment_FindFirstDerivedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are 
derived from the data in this one.
  @param  Nmr_Experiment self
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
Nmr_Experiment Nmr_Experiment_FindFirstDerivedTo_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Experiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Experiment_FindFirstDerivedTo(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr 
Experiment
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_Experiment_FindFirstEntry(Nmr_Experiment self, ApiMap conditions)
{
  
  Entr_Entry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'findFirstEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'findFirstEntry' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr 
Experiment
  @param  Nmr_Experiment self
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_Experiment_FindFirstEntry_keyval0(Nmr_Experiment self)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Experiment_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr 
Experiment
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_Experiment_FindFirstEntry_keyval1(Nmr_Experiment self, char * key, ApiObject value)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Experiment_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr 
Experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_Experiment_FindFirstEntry_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Experiment_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr 
Experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Entr_Entry Nmr_Experiment_FindFirstEntry_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Experiment_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr 
Experiment
  @param  Nmr_Experiment self
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
Entr_Entry Nmr_Experiment_FindFirstEntry_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Entr_Entry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Experiment_FindFirstEntry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expChainStates

child link to class 
ExpChainState
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpChainState Nmr_Experiment_FindFirstExpChainState(Nmr_Experiment self, ApiMap conditions)
{
  
  Nmr_ExpChainState obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExpChainState");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'findFirstExpChainState'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'findFirstExpChainState' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expChainStates

child link to class 
ExpChainState
  @param  Nmr_Experiment self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpChainState Nmr_Experiment_FindFirstExpChainState_keyval0(Nmr_Experiment self)
{
  
  Nmr_ExpChainState  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Experiment_FindFirstExpChainState(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expChainStates

child link to class 
ExpChainState
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpChainState Nmr_Experiment_FindFirstExpChainState_keyval1(Nmr_Experiment self, char * key, ApiObject value)
{
  
  Nmr_ExpChainState  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Experiment_FindFirstExpChainState(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expChainStates

child link to class 
ExpChainState
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpChainState Nmr_Experiment_FindFirstExpChainState_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ExpChainState  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Experiment_FindFirstExpChainState(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expChainStates

child link to class 
ExpChainState
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpChainState Nmr_Experiment_FindFirstExpChainState_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ExpChainState  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Experiment_FindFirstExpChainState(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expChainStates

child link to class 
ExpChainState
  @param  Nmr_Experiment self
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
Nmr_ExpChainState Nmr_Experiment_FindFirstExpChainState_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ExpChainState  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Experiment_FindFirstExpChainState(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expDims

child link
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpDim Nmr_Experiment_FindFirstExpDim(Nmr_Experiment self, ApiMap conditions)
{
  
  Nmr_ExpDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExpDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'findFirstExpDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'findFirstExpDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expDims

child link
  @param  Nmr_Experiment self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpDim Nmr_Experiment_FindFirstExpDim_keyval0(Nmr_Experiment self)
{
  
  Nmr_ExpDim  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Experiment_FindFirstExpDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expDims

child link
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpDim Nmr_Experiment_FindFirstExpDim_keyval1(Nmr_Experiment self, char * key, ApiObject value)
{
  
  Nmr_ExpDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Experiment_FindFirstExpDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expDims

child link
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpDim Nmr_Experiment_FindFirstExpDim_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ExpDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Experiment_FindFirstExpDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expDims

child link
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpDim Nmr_Experiment_FindFirstExpDim_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ExpDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Experiment_FindFirstExpDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expDims

child link
  @param  Nmr_Experiment self
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
Nmr_ExpDim Nmr_Experiment_FindFirstExpDim_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ExpDim  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Experiment_FindFirstExpDim(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expTransfers

child link to class 
ExpTransfer
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpTransfer Nmr_Experiment_FindFirstExpTransfer(Nmr_Experiment self, ApiMap conditions)
{
  
  Nmr_ExpTransfer obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExpTransfer");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'findFirstExpTransfer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'findFirstExpTransfer' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expTransfers

child link to class 
ExpTransfer
  @param  Nmr_Experiment self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpTransfer Nmr_Experiment_FindFirstExpTransfer_keyval0(Nmr_Experiment self)
{
  
  Nmr_ExpTransfer  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Experiment_FindFirstExpTransfer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expTransfers

child link to class 
ExpTransfer
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpTransfer Nmr_Experiment_FindFirstExpTransfer_keyval1(Nmr_Experiment self, char * key, ApiObject value)
{
  
  Nmr_ExpTransfer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Experiment_FindFirstExpTransfer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expTransfers

child link to class 
ExpTransfer
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpTransfer Nmr_Experiment_FindFirstExpTransfer_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ExpTransfer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Experiment_FindFirstExpTransfer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expTransfers

child link to class 
ExpTransfer
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ExpTransfer Nmr_Experiment_FindFirstExpTransfer_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ExpTransfer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Experiment_FindFirstExpTransfer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.expTransfers

child link to class 
ExpTransfer
  @param  Nmr_Experiment self
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
Nmr_ExpTransfer Nmr_Experiment_FindFirstExpTransfer_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ExpTransfer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Experiment_FindFirstExpTransfer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures 
that describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Lmol_LabeledMixture Nmr_Experiment_FindFirstLabeledMixture(Nmr_Experiment self, ApiMap conditions)
{
  
  Lmol_LabeledMixture obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstLabeledMixture");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'findFirstLabeledMixture'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'findFirstLabeledMixture' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures 
that describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @returns  the first value that satisfies the conditions 
**/
Lmol_LabeledMixture Nmr_Experiment_FindFirstLabeledMixture_keyval0(Nmr_Experiment self)
{
  
  Lmol_LabeledMixture  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Experiment_FindFirstLabeledMixture(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures 
that describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Lmol_LabeledMixture Nmr_Experiment_FindFirstLabeledMixture_keyval1(Nmr_Experiment self, char * key, ApiObject value)
{
  
  Lmol_LabeledMixture  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Experiment_FindFirstLabeledMixture(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures 
that describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Lmol_LabeledMixture Nmr_Experiment_FindFirstLabeledMixture_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Lmol_LabeledMixture  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Experiment_FindFirstLabeledMixture(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures 
that describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Lmol_LabeledMixture Nmr_Experiment_FindFirstLabeledMixture_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Lmol_LabeledMixture  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Experiment_FindFirstLabeledMixture(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures 
that describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
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
Lmol_LabeledMixture Nmr_Experiment_FindFirstLabeledMixture_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Lmol_LabeledMixture  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Experiment_FindFirstLabeledMixture(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Nmr_Experiment_FindFirstMolSystem(Nmr_Experiment self, ApiMap conditions)
{
  
  Mols_MolSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolSystem");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'findFirstMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'findFirstMolSystem' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Nmr_Experiment_FindFirstMolSystem_keyval0(Nmr_Experiment self)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Experiment_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Nmr_Experiment_FindFirstMolSystem_keyval1(Nmr_Experiment self, char * key, ApiObject value)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Experiment_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Nmr_Experiment_FindFirstMolSystem_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Experiment_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mols_MolSystem Nmr_Experiment_FindFirstMolSystem_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Experiment_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
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
Mols_MolSystem Nmr_Experiment_FindFirstMolSystem_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mols_MolSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Experiment_FindFirstMolSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series 
that involve experiment
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_NmrExpSeries Nmr_Experiment_FindFirstNmrExpSeries(Nmr_Experiment self, ApiMap conditions)
{
  
  Nmr_NmrExpSeries obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNmrExpSeries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'findFirstNmrExpSeries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'findFirstNmrExpSeries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series 
that involve experiment
  @param  Nmr_Experiment self
  @returns  the first value that satisfies the conditions 
**/
Nmr_NmrExpSeries Nmr_Experiment_FindFirstNmrExpSeries_keyval0(Nmr_Experiment self)
{
  
  Nmr_NmrExpSeries  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Experiment_FindFirstNmrExpSeries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series 
that involve experiment
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_NmrExpSeries Nmr_Experiment_FindFirstNmrExpSeries_keyval1(Nmr_Experiment self, char * key, ApiObject value)
{
  
  Nmr_NmrExpSeries  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Experiment_FindFirstNmrExpSeries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series 
that involve experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_NmrExpSeries Nmr_Experiment_FindFirstNmrExpSeries_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_NmrExpSeries  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Experiment_FindFirstNmrExpSeries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series 
that involve experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_NmrExpSeries Nmr_Experiment_FindFirstNmrExpSeries_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_NmrExpSeries  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Experiment_FindFirstNmrExpSeries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series 
that involve experiment
  @param  Nmr_Experiment self
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
Nmr_NmrExpSeries Nmr_Experiment_FindFirstNmrExpSeries_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_NmrExpSeries  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Experiment_FindFirstNmrExpSeries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references 
used for Experiment
  @param  Nmr_Experiment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Nmr_Experiment_FindFirstShiftReference(Nmr_Experiment self, ApiMap conditions)
{
  
  Nmr_ShiftReference obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstShiftReference");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'findFirstShiftReference'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'findFirstShiftReference' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references 
used for Experiment
  @param  Nmr_Experiment self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Nmr_Experiment_FindFirstShiftReference_keyval0(Nmr_Experiment self)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_Experiment_FindFirstShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references 
used for Experiment
  @param  Nmr_Experiment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Nmr_Experiment_FindFirstShiftReference_keyval1(Nmr_Experiment self, char * key, ApiObject value)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_Experiment_FindFirstShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references 
used for Experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Nmr_Experiment_FindFirstShiftReference_keyval2(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_Experiment_FindFirstShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references 
used for Experiment
  @param  Nmr_Experiment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ShiftReference Nmr_Experiment_FindFirstShiftReference_keyval3(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_Experiment_FindFirstShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references 
used for Experiment
  @param  Nmr_Experiment self
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
Nmr_ShiftReference Nmr_Experiment_FindFirstShiftReference_keyval4(Nmr_Experiment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ShiftReference  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_Experiment_FindFirstShiftReference(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.Experiment
  @param  Nmr_Experiment self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_Experiment_Get(Nmr_Experiment self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_Experiment self
  @returns   the result
**/
Acco_AccessObject Nmr_Experiment_GetAccess(Nmr_Experiment self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getAccess' is not callable");
  
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
  @param  Nmr_Experiment self
  @returns   the result
**/
Acco_AccessObject Nmr_Experiment_GetActiveAccess(Nmr_Experiment self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getActiveAccess' is not callable");
  
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
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiList Nmr_Experiment_GetApplicationData(Nmr_Experiment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.Experiment
  @param  Nmr_Experiment self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_Experiment Nmr_Experiment_GetByKey(Nmr_Experiment self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_Experiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.citations

Citation for NMR experiment 
pulse sequence.
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiSet Nmr_Experiment_GetCitations(Nmr_Experiment self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCitations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getCitations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getCitations' is not callable");
  
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
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiString Nmr_Experiment_GetClassName(Nmr_Experiment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid for 
Experiment. There can be several, seeing that there may be measurements 
of different types.
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiSet Nmr_Experiment_GetDataLists(Nmr_Experiment self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getDataLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getDataLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.dataSources

child link
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiSet Nmr_Experiment_GetDataSources(Nmr_Experiment self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDataSources");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getDataSources'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getDataSources' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.date

Date experiment was acquired 
(starting date).
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiString Nmr_Experiment_GetDate(Nmr_Experiment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDate");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getDate' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.derivationMethod

Method used to derive 
Experiment - only meaningful for Experiments where derivedFrom is not 
empty
  @param  Nmr_Experiment self
  @returns   the result
**/
Meth_Method Nmr_Experiment_GetDerivationMethod(Nmr_Experiment self)
{
  
  Meth_Method obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDerivationMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getDerivationMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getDerivationMethod' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which the 
current Experiment is derived
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiSet Nmr_Experiment_GetDerivedFrom(Nmr_Experiment self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDerivedFrom");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getDerivedFrom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getDerivedFrom' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are derived 
from the data in this one.
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiSet Nmr_Experiment_GetDerivedTo(Nmr_Experiment self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDerivedTo");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getDerivedTo'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getDerivedTo' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiString Nmr_Experiment_GetDetails(Nmr_Experiment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.dipolarRelaxList

Dipole-diploe 
relaxation list valid for Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
Nmr_DipolarRelaxList Nmr_Experiment_GetDipolarRelaxList(Nmr_Experiment self)
{
  
  Nmr_DipolarRelaxList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDipolarRelaxList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getDipolarRelaxList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getDipolarRelaxList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiSet Nmr_Experiment_GetEntries(Nmr_Experiment self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.expChainStates

child link to class 
ExpChainState
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiSet Nmr_Experiment_GetExpChainStates(Nmr_Experiment self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpChainStates");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getExpChainStates'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getExpChainStates' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.expDims

child link
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiSet Nmr_Experiment_GetExpDims(Nmr_Experiment self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getExpDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getExpDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.expTransfers

child link to class 
ExpTransfer
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiSet Nmr_Experiment_GetExpTransfers(Nmr_Experiment self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpTransfers");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getExpTransfers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getExpTransfers' is not callable");
  
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
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiList Nmr_Experiment_GetFieldNames(Nmr_Experiment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.Experiment
  @param  Nmr_Experiment self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_Experiment_GetFullKey(Nmr_Experiment self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.hExchProtectionList

Hydrogen exchange 
protection factor list valid for experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
Nmr_HExchProtectionList Nmr_Experiment_GetHExchProtectionList(Nmr_Experiment self)
{
  
  Nmr_HExchProtectionList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHExchProtectionList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getHExchProtectionList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getHExchProtectionList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.hExchRateList

Hydrogen exchange rate 
list valid for experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
Nmr_HExchRateList Nmr_Experiment_GetHExchRateList(Nmr_Experiment self)
{
  
  Nmr_HExchRateList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHExchRateList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getHExchRateList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getHExchRateList' is not callable");
  
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
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiBoolean Nmr_Experiment_GetInConstructor(Nmr_Experiment self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiBoolean Nmr_Experiment_GetIsDeleted(Nmr_Experiment self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.isotropicS2List

isotroisc order 
parameter list valid for Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
Nmr_IsotropicS2List Nmr_Experiment_GetIsotropicS2List(Nmr_Experiment self)
{
  
  Nmr_IsotropicS2List obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsotropicS2List");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getIsotropicS2List'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getIsotropicS2List' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.jCouplingList

JcouplingList valid for 
Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
Nmr_JCouplingList Nmr_Experiment_GetJCouplingList(Nmr_Experiment self)
{
  
  Nmr_JCouplingList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getJCouplingList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getJCouplingList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getJCouplingList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures that 
describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiSet Nmr_Experiment_GetLabeledMixtures(Nmr_Experiment self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLabeledMixtures");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getLabeledMixtures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getLabeledMixtures' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.Experiment
  @param  Nmr_Experiment self
  @returns  Local object key
**/
ApiObject Nmr_Experiment_GetLocalKey(Nmr_Experiment self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiSet Nmr_Experiment_GetMolSystems(Nmr_Experiment self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolSystems");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getMolSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getMolSystems' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.name

name of Experiment, freely chosen 
and modifiable.
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiString Nmr_Experiment_GetName(Nmr_Experiment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series that 
involve experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiSet Nmr_Experiment_GetNmrExpSeries(Nmr_Experiment self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrExpSeries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getNmrExpSeries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getNmrExpSeries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.nmrProject

parent link
  @param  Nmr_Experiment self
  @returns   the result
**/
Nmr_NmrProject Nmr_Experiment_GetNmrProject(Nmr_Experiment self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrProject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getNmrProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getNmrProject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.nmrTubeType

text field describing NMR 
tube type. E.g. "Shigemi 10mm"
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiString Nmr_Experiment_GetNmrTubeType(Nmr_Experiment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrTubeType");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getNmrTubeType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getNmrTubeType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.noeList

List of homonuclear NOEs for 
experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
Nmr_NoeList Nmr_Experiment_GetNoeList(Nmr_Experiment self)
{
  
  Nmr_NoeList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNoeList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getNoeList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getNoeList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.numDim

number of dimensions.
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiInteger Nmr_Experiment_GetNumDim(Nmr_Experiment self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNumDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getNumDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getNumDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.numScans

Number of transients averaged 
per data point. A single scan for a complex point counts as numScans 1, 
not 2.
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiInteger Nmr_Experiment_GetNumScans(Nmr_Experiment self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNumScans");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getNumScans'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getNumScans' is not callable");
  
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
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiString Nmr_Experiment_GetPackageName(Nmr_Experiment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getPackageName' is not callable");
  
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
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiString Nmr_Experiment_GetPackageShortName(Nmr_Experiment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.parent

link to parent object - synonym 
for nmrProject
  @param  Nmr_Experiment self
  @returns   the result
**/
Nmr_NmrProject Nmr_Experiment_GetParent(Nmr_Experiment self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.pkaList

pKa list valid for Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
Nmr_PkaList Nmr_Experiment_GetPkaList(Nmr_Experiment self)
{
  
  Nmr_PkaList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPkaList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getPkaList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getPkaList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.probe

Probe used for acquiring 
experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
Inst_NmrProbe Nmr_Experiment_GetProbe(Nmr_Experiment self)
{
  
  Inst_NmrProbe obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getProbe");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getProbe'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getProbe' is not callable");
  
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
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiString Nmr_Experiment_GetQualifiedName(Nmr_Experiment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.rawData

DataSource containing raw 
unprocessed data for experiment.
  @param  Nmr_Experiment self
  @returns   the result
**/
Nmr_DataSource Nmr_Experiment_GetRawData(Nmr_Experiment self)
{
  
  Nmr_DataSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRawData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getRawData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getRawData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.rdcList

List of Reduced Dipolar 
Couplings for Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
Nmr_RdcList Nmr_Experiment_GetRdcList(Nmr_Experiment self)
{
  
  Nmr_RdcList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRdcList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getRdcList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getRdcList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.refExperiment

Reference experiment 
corresponding to Experiment.
  @param  Nmr_Experiment self
  @returns   the result
**/
Nmrx_RefExperiment Nmr_Experiment_GetRefExperiment(Nmr_Experiment self)
{
  
  Nmrx_RefExperiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getRefExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getRefExperiment' is not callable");
  
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
  @param  Nmr_Experiment self
  @returns   the result
**/
Impl_MemopsRoot Nmr_Experiment_GetRoot(Nmr_Experiment self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.sample

Sample on which experiment is 
carried out.
  @param  Nmr_Experiment self
  @returns   the result
**/
Sam_Sample Nmr_Experiment_GetSample(Nmr_Experiment self)
{
  
  Sam_Sample obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSample");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getSample' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.sampleConditionSet

Set of sample 
conditions that apply to an experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
Nmr_SampleConditionSet Nmr_Experiment_GetSampleConditionSet(Nmr_Experiment self)
{
  
  Nmr_SampleConditionSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSampleConditionSet");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getSampleConditionSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getSampleConditionSet' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.sampleState

State of sample during 
experiment.
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiString Nmr_Experiment_GetSampleState(Nmr_Experiment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSampleState");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getSampleState'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getSampleState' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.sampleVolume

Sample volume
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiFloat Nmr_Experiment_GetSampleVolume(Nmr_Experiment self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSampleVolume");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getSampleVolume'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getSampleVolume' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.serial

Serial number of object. Serves 
as object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiInteger Nmr_Experiment_GetSerial(Nmr_Experiment self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.shiftAnisotropyList

ShiftAnisotropyList 
valid for Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
Nmr_ShiftAnisotropyList Nmr_Experiment_GetShiftAnisotropyList(Nmr_Experiment self)
{
  
  Nmr_ShiftAnisotropyList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getShiftAnisotropyList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getShiftAnisotropyList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getShiftAnisotropyList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.shiftDifferenceList

Chemical shift 
difference list relevant for Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
Nmr_ShiftDifferenceList Nmr_Experiment_GetShiftDifferenceList(Nmr_Experiment self)
{
  
  Nmr_ShiftDifferenceList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getShiftDifferenceList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getShiftDifferenceList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getShiftDifferenceList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.shiftList

Chemical shift list relevant 
for Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
Nmr_ShiftList Nmr_Experiment_GetShiftList(Nmr_Experiment self)
{
  
  Nmr_ShiftList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getShiftList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getShiftList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getShiftList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references used 
for Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiSet Nmr_Experiment_GetShiftReferences(Nmr_Experiment self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getShiftReferences' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.spectralDensityList

List of spectral 
densities valid for Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
Nmr_SpectralDensityList Nmr_Experiment_GetSpectralDensityList(Nmr_Experiment self)
{
  
  Nmr_SpectralDensityList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSpectralDensityList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getSpectralDensityList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getSpectralDensityList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.spectrometer

Spectrometer used for 
Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
Inst_NmrSpectrometer Nmr_Experiment_GetSpectrometer(Nmr_Experiment self)
{
  
  Inst_NmrSpectrometer obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSpectrometer");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getSpectrometer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getSpectrometer' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.spinningAngle

NMR tube spinning angle 
(in degrees) relative to the magnet bore axis.
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiFloat Nmr_Experiment_GetSpinningAngle(Nmr_Experiment self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSpinningAngle");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getSpinningAngle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getSpinningAngle' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.spinningRate

NMR tube spinning rate (in 
Hz)
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiFloat Nmr_Experiment_GetSpinningRate(Nmr_Experiment self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSpinningRate");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getSpinningRate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getSpinningRate' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.t1List

T1 measurement list valid for 
Experiment.
  @param  Nmr_Experiment self
  @returns   the result
**/
Nmr_T1List Nmr_Experiment_GetT1List(Nmr_Experiment self)
{
  
  Nmr_T1List obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getT1List");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getT1List'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getT1List' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.t1rhoList

List of T1rho relaxation valid 
for Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
Nmr_T1rhoList Nmr_Experiment_GetT1rhoList(Nmr_Experiment self)
{
  
  Nmr_T1rhoList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getT1rhoList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getT1rhoList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getT1rhoList' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.t2List

T2 list valid for Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
Nmr_T2List Nmr_Experiment_GetT2List(Nmr_Experiment self)
{
  
  Nmr_T2List obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getT2List");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getT2List'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getT2List' is not callable");
  
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
  @param  Nmr_Experiment self
  @returns   the result
**/
Impl_TopObject Nmr_Experiment_GetTopObject(Nmr_Experiment self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.Experiment.volumeUnit

Unit for sample volume.
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiString Nmr_Experiment_GetVolumeUnit(Nmr_Experiment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getVolumeUnit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'getVolumeUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'getVolumeUnit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.Experiment
  @param  Nmr_NmrProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_Experiment Nmr_Experiment_Init(Nmr_NmrProject parent, ApiMap attrlinks)
{
  
  return Nmr_NmrProject_NewExperiment(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.Experiment
  @param  Nmr_NmrProject parent
  @param  char * name
  @param  ApiInteger numDim
  @returns  the new object
**/
Nmr_Experiment Nmr_Experiment_Init_reqd(Nmr_NmrProject parent, char * name, ApiInteger numDim)
{
  
  Nmr_Experiment  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  PyDict_SetItemString(attrlinks, "numDim", numDim);
  
  obj = Nmr_Experiment_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.DataSource
  @param  Nmr_Experiment self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_DataSource Nmr_Experiment_NewDataSource(Nmr_Experiment self, ApiMap attrlinks)
{
  
  Nmr_DataSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newDataSource");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'newDataSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'newDataSource' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.DataSource
  @param  Nmr_Experiment self
  @param  char * dataType
  @param  char * name
  @param  ApiInteger numDim
  @returns  the new object
**/
Nmr_DataSource Nmr_Experiment_NewDataSource_reqd(Nmr_Experiment self, char * dataType, char * name, ApiInteger numDim)
{
  
  Nmr_DataSource  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__dataType = ApiString_New(dataType);
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "dataType", api__dataType);
  PyDict_SetItemString(attrlinks, "name", api__name);
  PyDict_SetItemString(attrlinks, "numDim", numDim);
  
  obj = Nmr_Experiment_NewDataSource(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__dataType);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ExpChainState
  @param  Nmr_Experiment self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_ExpChainState Nmr_Experiment_NewExpChainState(Nmr_Experiment self, ApiMap attrlinks)
{
  
  Nmr_ExpChainState obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newExpChainState");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'newExpChainState'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'newExpChainState' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ExpChainState
  @param  Nmr_Experiment self
  @param  Nmr_ChainState chainState
  @returns  the new object
**/
Nmr_ExpChainState Nmr_Experiment_NewExpChainState_reqd(Nmr_Experiment self, Nmr_ChainState chainState)
{
  
  Nmr_ExpChainState  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "chainState", chainState);
  
  obj = Nmr_Experiment_NewExpChainState(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ExpDim
  @param  Nmr_Experiment self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_ExpDim Nmr_Experiment_NewExpDim(Nmr_Experiment self, ApiMap attrlinks)
{
  
  Nmr_ExpDim obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newExpDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'newExpDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'newExpDim' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ExpDim
  @param  Nmr_Experiment self
  @param  ApiInteger dim
  @returns  the new object
**/
Nmr_ExpDim Nmr_Experiment_NewExpDim_reqd(Nmr_Experiment self, ApiInteger dim)
{
  
  Nmr_ExpDim  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "dim", dim);
  
  obj = Nmr_Experiment_NewExpDim(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ExpTransfer
  @param  Nmr_Experiment self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_ExpTransfer Nmr_Experiment_NewExpTransfer(Nmr_Experiment self, ApiMap attrlinks)
{
  
  Nmr_ExpTransfer obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newExpTransfer");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'newExpTransfer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'newExpTransfer' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ExpTransfer
  @param  Nmr_Experiment self
  @param  ApiSet expDimRefs
  @returns  the new object
**/
Nmr_ExpTransfer Nmr_Experiment_NewExpTransfer_reqd(Nmr_Experiment self, ApiSet expDimRefs)
{
  
  Nmr_ExpTransfer  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "expDimRefs", expDimRefs);
  
  obj = Nmr_Experiment_NewExpTransfer(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_Experiment self
  @param  Impl_ApplicationData value
**/
void *Nmr_Experiment_RemoveApplicationData(Nmr_Experiment self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid for 
Experiment. There can be several, seeing that there may be measurements 
of different types.
  @param  Nmr_Experiment self
  @param  Nmr_DataList value
**/
void *Nmr_Experiment_RemoveDataList(Nmr_Experiment self, Nmr_DataList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeDataList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'removeDataList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'removeDataList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which 
the current Experiment is derived
  @param  Nmr_Experiment self
  @param  Nmr_Experiment value
**/
void *Nmr_Experiment_RemoveDerivedFrom(Nmr_Experiment self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeDerivedFrom");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'removeDerivedFrom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'removeDerivedFrom' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are 
derived from the data in this one.
  @param  Nmr_Experiment self
  @param  Nmr_Experiment value
**/
void *Nmr_Experiment_RemoveDerivedTo(Nmr_Experiment self, Nmr_Experiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeDerivedTo");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'removeDerivedTo'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'removeDerivedTo' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr 
Experiment
  @param  Nmr_Experiment self
  @param  Entr_Entry value
**/
void *Nmr_Experiment_RemoveEntry(Nmr_Experiment self, Entr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeEntry");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'removeEntry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'removeEntry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures that 
describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @param  Lmol_LabeledMixture value
**/
void *Nmr_Experiment_RemoveLabeledMixture(Nmr_Experiment self, Lmol_LabeledMixture value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeLabeledMixture");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'removeLabeledMixture'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'removeLabeledMixture' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @param  Mols_MolSystem value
**/
void *Nmr_Experiment_RemoveMolSystem(Nmr_Experiment self, Mols_MolSystem value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeMolSystem");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'removeMolSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'removeMolSystem' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series that 
involve experiment
  @param  Nmr_Experiment self
  @param  Nmr_NmrExpSeries value
**/
void *Nmr_Experiment_RemoveNmrExpSeries(Nmr_Experiment self, Nmr_NmrExpSeries value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeNmrExpSeries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'removeNmrExpSeries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'removeNmrExpSeries' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references used 
for Experiment
  @param  Nmr_Experiment self
  @param  Nmr_ShiftReference value
**/
void *Nmr_Experiment_RemoveShiftReference(Nmr_Experiment self, Nmr_ShiftReference value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeShiftReference");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'removeShiftReference'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'removeShiftReference' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.Experiment
  @param  Nmr_Experiment self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_Experiment_Set(Nmr_Experiment self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_Experiment self
  @param  Acco_AccessObject value
**/
void *Nmr_Experiment_SetAccess(Nmr_Experiment self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setAccess' is not callable");
  
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
  @param  Nmr_Experiment self
  @param  ApiList values
**/
void *Nmr_Experiment_SetApplicationData(Nmr_Experiment self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.citations

Citation for NMR experiment 
pulse sequence.
  @param  Nmr_Experiment self
  @param  ApiSet values
**/
void *Nmr_Experiment_SetCitations(Nmr_Experiment self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCitations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setCitations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setCitations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid for 
Experiment. There can be several, seeing that there may be measurements 
of different types.
  @param  Nmr_Experiment self
  @param  ApiSet values
**/
void *Nmr_Experiment_SetDataLists(Nmr_Experiment self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDataLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setDataLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setDataLists' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.date

Date experiment was acquired 
(starting date).
  @param  Nmr_Experiment self
  @param  ApiString value
**/
void *Nmr_Experiment_SetDate(Nmr_Experiment self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDate");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setDate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setDate' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.derivationMethod

Method used to derive 
Experiment - only meaningful for Experiments where derivedFrom is not 
empty
  @param  Nmr_Experiment self
  @param  Meth_Method value
**/
void *Nmr_Experiment_SetDerivationMethod(Nmr_Experiment self, Meth_Method value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDerivationMethod");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setDerivationMethod'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setDerivationMethod' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which the 
current Experiment is derived
  @param  Nmr_Experiment self
  @param  ApiSet values
**/
void *Nmr_Experiment_SetDerivedFrom(Nmr_Experiment self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDerivedFrom");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setDerivedFrom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setDerivedFrom' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are derived 
from the data in this one.
  @param  Nmr_Experiment self
  @param  ApiSet values
**/
void *Nmr_Experiment_SetDerivedTo(Nmr_Experiment self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDerivedTo");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setDerivedTo'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setDerivedTo' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_Experiment self
  @param  ApiString value
**/
void *Nmr_Experiment_SetDetails(Nmr_Experiment self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.dipolarRelaxList

Dipole-diploe 
relaxation list valid for Experiment
  @param  Nmr_Experiment self
  @param  Nmr_DipolarRelaxList value
**/
void *Nmr_Experiment_SetDipolarRelaxList(Nmr_Experiment self, Nmr_DipolarRelaxList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDipolarRelaxList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setDipolarRelaxList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setDipolarRelaxList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr Experiment
  @param  Nmr_Experiment self
  @param  ApiSet values
**/
void *Nmr_Experiment_SetEntries(Nmr_Experiment self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setEntries' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.hExchProtectionList

Hydrogen exchange 
protection factor list valid for experiment
  @param  Nmr_Experiment self
  @param  Nmr_HExchProtectionList value
**/
void *Nmr_Experiment_SetHExchProtectionList(Nmr_Experiment self, Nmr_HExchProtectionList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setHExchProtectionList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setHExchProtectionList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setHExchProtectionList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.hExchRateList

Hydrogen exchange rate 
list valid for experiment
  @param  Nmr_Experiment self
  @param  Nmr_HExchRateList value
**/
void *Nmr_Experiment_SetHExchRateList(Nmr_Experiment self, Nmr_HExchRateList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setHExchRateList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setHExchRateList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setHExchRateList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.isotropicS2List

isotroisc order 
parameter list valid for Experiment
  @param  Nmr_Experiment self
  @param  Nmr_IsotropicS2List value
**/
void *Nmr_Experiment_SetIsotropicS2List(Nmr_Experiment self, Nmr_IsotropicS2List value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsotropicS2List");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setIsotropicS2List'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setIsotropicS2List' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.jCouplingList

JcouplingList valid for 
Experiment
  @param  Nmr_Experiment self
  @param  Nmr_JCouplingList value
**/
void *Nmr_Experiment_SetJCouplingList(Nmr_Experiment self, Nmr_JCouplingList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setJCouplingList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setJCouplingList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setJCouplingList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures that 
describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @param  ApiSet values
**/
void *Nmr_Experiment_SetLabeledMixtures(Nmr_Experiment self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLabeledMixtures");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setLabeledMixtures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setLabeledMixtures' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @param  ApiSet values
**/
void *Nmr_Experiment_SetMolSystems(Nmr_Experiment self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolSystems");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setMolSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setMolSystems' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.name

name of Experiment, freely chosen 
and modifiable.
  @param  Nmr_Experiment self
  @param  ApiString value
**/
void *Nmr_Experiment_SetName(Nmr_Experiment self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series that 
involve experiment
  @param  Nmr_Experiment self
  @param  ApiSet values
**/
void *Nmr_Experiment_SetNmrExpSeries(Nmr_Experiment self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrExpSeries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setNmrExpSeries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setNmrExpSeries' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.nmrTubeType

text field describing NMR 
tube type. E.g. "Shigemi 10mm"
  @param  Nmr_Experiment self
  @param  ApiString value
**/
void *Nmr_Experiment_SetNmrTubeType(Nmr_Experiment self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrTubeType");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setNmrTubeType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setNmrTubeType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.noeList

List of homonuclear NOEs for 
experiment
  @param  Nmr_Experiment self
  @param  Nmr_NoeList value
**/
void *Nmr_Experiment_SetNoeList(Nmr_Experiment self, Nmr_NoeList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNoeList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setNoeList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setNoeList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.numDim

number of dimensions.
  @param  Nmr_Experiment self
  @param  ApiInteger value
**/
void *Nmr_Experiment_SetNumDim(Nmr_Experiment self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNumDim");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setNumDim'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setNumDim' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.numScans

Number of transients averaged 
per data point. A single scan for a complex point counts as numScans 1, 
not 2.
  @param  Nmr_Experiment self
  @param  ApiInteger value
**/
void *Nmr_Experiment_SetNumScans(Nmr_Experiment self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNumScans");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setNumScans'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setNumScans' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.pkaList

pKa list valid for Experiment
  @param  Nmr_Experiment self
  @param  Nmr_PkaList value
**/
void *Nmr_Experiment_SetPkaList(Nmr_Experiment self, Nmr_PkaList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPkaList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setPkaList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setPkaList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.probe

Probe used for acquiring 
experiment
  @param  Nmr_Experiment self
  @param  Inst_NmrProbe value
**/
void *Nmr_Experiment_SetProbe(Nmr_Experiment self, Inst_NmrProbe value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setProbe");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setProbe'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setProbe' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.rawData

DataSource containing raw 
unprocessed data for experiment.
  @param  Nmr_Experiment self
  @param  Nmr_DataSource value
**/
void *Nmr_Experiment_SetRawData(Nmr_Experiment self, Nmr_DataSource value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRawData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setRawData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setRawData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.rdcList

List of Reduced Dipolar 
Couplings for Experiment
  @param  Nmr_Experiment self
  @param  Nmr_RdcList value
**/
void *Nmr_Experiment_SetRdcList(Nmr_Experiment self, Nmr_RdcList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRdcList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setRdcList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setRdcList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.refExperiment

Reference experiment 
corresponding to Experiment.
  @param  Nmr_Experiment self
  @param  Nmrx_RefExperiment value
**/
void *Nmr_Experiment_SetRefExperiment(Nmr_Experiment self, Nmrx_RefExperiment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setRefExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setRefExperiment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.sample

Sample on which experiment is 
carried out.
  @param  Nmr_Experiment self
  @param  Sam_Sample value
**/
void *Nmr_Experiment_SetSample(Nmr_Experiment self, Sam_Sample value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSample");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setSample'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setSample' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.sampleConditionSet

Set of sample 
conditions that apply to an experiment
  @param  Nmr_Experiment self
  @param  Nmr_SampleConditionSet value
**/
void *Nmr_Experiment_SetSampleConditionSet(Nmr_Experiment self, Nmr_SampleConditionSet value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSampleConditionSet");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setSampleConditionSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setSampleConditionSet' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.sampleState

State of sample during 
experiment.
  @param  Nmr_Experiment self
  @param  ApiString value
**/
void *Nmr_Experiment_SetSampleState(Nmr_Experiment self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSampleState");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setSampleState'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setSampleState' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.sampleVolume

Sample volume
  @param  Nmr_Experiment self
  @param  ApiFloat value
**/
void *Nmr_Experiment_SetSampleVolume(Nmr_Experiment self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSampleVolume");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setSampleVolume'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setSampleVolume' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.serial

Serial number of object. Serves 
as object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_Experiment self
  @param  ApiInteger value
**/
void *Nmr_Experiment_SetSerial(Nmr_Experiment self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.shiftAnisotropyList

ShiftAnisotropyList 
valid for Experiment
  @param  Nmr_Experiment self
  @param  Nmr_ShiftAnisotropyList value
**/
void *Nmr_Experiment_SetShiftAnisotropyList(Nmr_Experiment self, Nmr_ShiftAnisotropyList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setShiftAnisotropyList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setShiftAnisotropyList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setShiftAnisotropyList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.shiftDifferenceList

Chemical shift 
difference list relevant for Experiment
  @param  Nmr_Experiment self
  @param  Nmr_ShiftDifferenceList value
**/
void *Nmr_Experiment_SetShiftDifferenceList(Nmr_Experiment self, Nmr_ShiftDifferenceList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setShiftDifferenceList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setShiftDifferenceList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setShiftDifferenceList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.shiftList

Chemical shift list relevant 
for Experiment
  @param  Nmr_Experiment self
  @param  Nmr_ShiftList value
**/
void *Nmr_Experiment_SetShiftList(Nmr_Experiment self, Nmr_ShiftList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setShiftList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setShiftList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setShiftList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references used 
for Experiment
  @param  Nmr_Experiment self
  @param  ApiSet values
**/
void *Nmr_Experiment_SetShiftReferences(Nmr_Experiment self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setShiftReferences' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.spectralDensityList

List of spectral 
densities valid for Experiment
  @param  Nmr_Experiment self
  @param  Nmr_SpectralDensityList value
**/
void *Nmr_Experiment_SetSpectralDensityList(Nmr_Experiment self, Nmr_SpectralDensityList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSpectralDensityList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setSpectralDensityList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setSpectralDensityList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.spectrometer

Spectrometer used for 
Experiment
  @param  Nmr_Experiment self
  @param  Inst_NmrSpectrometer value
**/
void *Nmr_Experiment_SetSpectrometer(Nmr_Experiment self, Inst_NmrSpectrometer value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSpectrometer");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setSpectrometer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setSpectrometer' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.spinningAngle

NMR tube spinning angle 
(in degrees) relative to the magnet bore axis.
  @param  Nmr_Experiment self
  @param  ApiFloat value
**/
void *Nmr_Experiment_SetSpinningAngle(Nmr_Experiment self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSpinningAngle");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setSpinningAngle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setSpinningAngle' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.spinningRate

NMR tube spinning rate (in 
Hz)
  @param  Nmr_Experiment self
  @param  ApiFloat value
**/
void *Nmr_Experiment_SetSpinningRate(Nmr_Experiment self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSpinningRate");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setSpinningRate'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setSpinningRate' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.t1List

T1 measurement list valid for 
Experiment.
  @param  Nmr_Experiment self
  @param  Nmr_T1List value
**/
void *Nmr_Experiment_SetT1List(Nmr_Experiment self, Nmr_T1List value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setT1List");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setT1List'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setT1List' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.t1rhoList

List of T1rho relaxation valid 
for Experiment
  @param  Nmr_Experiment self
  @param  Nmr_T1rhoList value
**/
void *Nmr_Experiment_SetT1rhoList(Nmr_Experiment self, Nmr_T1rhoList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setT1rhoList");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setT1rhoList'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setT1rhoList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.t2List

T2 list valid for Experiment
  @param  Nmr_Experiment self
  @param  Nmr_T2List value
**/
void *Nmr_Experiment_SetT2List(Nmr_Experiment self, Nmr_T2List value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setT2List");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setT2List'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setT2List' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.Experiment.volumeUnit

Unit for sample volume.
  @param  Nmr_Experiment self
  @param  ApiString value
**/
void *Nmr_Experiment_SetVolumeUnit(Nmr_Experiment self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setVolumeUnit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'setVolumeUnit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'setVolumeUnit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Experiment.citations

Citation for NMR experiment 
pulse sequence.
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiList Nmr_Experiment_SortedCitations(Nmr_Experiment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedCitations");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'sortedCitations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'sortedCitations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Experiment.dataLists

measurement lists valid for 
Experiment. There can be several, seeing that there may be measurements 
of different types.
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiList Nmr_Experiment_SortedDataLists(Nmr_Experiment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDataLists");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'sortedDataLists'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'sortedDataLists' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Experiment.dataSources

child link
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiList Nmr_Experiment_SortedDataSources(Nmr_Experiment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDataSources");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'sortedDataSources'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'sortedDataSources' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Experiment.derivedFrom

Experiments from which 
the current Experiment is derived
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiList Nmr_Experiment_SortedDerivedFrom(Nmr_Experiment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDerivedFrom");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'sortedDerivedFrom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'sortedDerivedFrom' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Experiment.derivedTo

Experiments that are 
derived from the data in this one.
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiList Nmr_Experiment_SortedDerivedTo(Nmr_Experiment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDerivedTo");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'sortedDerivedTo'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'sortedDerivedTo' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Experiment.entries

Bmrb Entries for Nmr 
Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiList Nmr_Experiment_SortedEntries(Nmr_Experiment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedEntries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'sortedEntries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'sortedEntries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Experiment.expChainStates

child link to class 
ExpChainState
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiList Nmr_Experiment_SortedExpChainStates(Nmr_Experiment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExpChainStates");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'sortedExpChainStates'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'sortedExpChainStates' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Experiment.expDims

child link
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiList Nmr_Experiment_SortedExpDims(Nmr_Experiment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExpDims");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'sortedExpDims'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'sortedExpDims' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Experiment.expTransfers

child link to class 
ExpTransfer
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiList Nmr_Experiment_SortedExpTransfers(Nmr_Experiment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExpTransfers");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'sortedExpTransfers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'sortedExpTransfers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Experiment.labeledMixtures

LabeledMixtures that 
describe molecules for Experiment. There should be only one 
LabeledMixture for every Molecule, but the constraint is not currently 
enforced.
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiList Nmr_Experiment_SortedLabeledMixtures(Nmr_Experiment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedLabeledMixtures");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'sortedLabeledMixtures'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'sortedLabeledMixtures' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Experiment.molSystems

MolSystems involved in 
Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiList Nmr_Experiment_SortedMolSystems(Nmr_Experiment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolSystems");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'sortedMolSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'sortedMolSystems' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Experiment.nmrExpSeries

Experiment series that 
involve experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiList Nmr_Experiment_SortedNmrExpSeries(Nmr_Experiment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNmrExpSeries");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'sortedNmrExpSeries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'sortedNmrExpSeries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.Experiment.shiftReferences

Shift references used 
for Experiment
  @param  Nmr_Experiment self
  @returns   the result
**/
ApiList Nmr_Experiment_SortedShiftReferences(Nmr_Experiment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedShiftReferences");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.Experiment: cannot find method 'sortedShiftReferences'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.Experiment: method 'sortedShiftReferences' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
