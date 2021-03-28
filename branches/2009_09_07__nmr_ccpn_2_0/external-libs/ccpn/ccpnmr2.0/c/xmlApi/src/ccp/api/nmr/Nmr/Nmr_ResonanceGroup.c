
#include "ccp.h"

/*
  Group of Resonances belonging within the same Residue. Serves to organise Resonances that have not yet been assigned, and to set Residue types, (sequential) neighbours, Residues and their probabilities for an entire group without necesarily assigning the individual Resonances. Coherence between ResonanceGroup (probable) assignments and assignments of Resonances to Atoms are not checked by the API software. In case of conflicts the assignment of the Resonance should take precedence over any information carried by the ResonanceGroup, in accordance with the status of the ResonanceGroup as a vehicle for tentative assignments.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResonanceGroup self
  @param  Impl_ApplicationData value
**/
void *Nmr_ResonanceGroup_AddApplicationData(Nmr_ResonanceGroup self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.ResonanceGroup.chains

Chains to which 
ResonanceGroup may belong
  @param  Nmr_ResonanceGroup self
  @param  Mols_Chain value
**/
void *Nmr_ResonanceGroup_AddChain(Nmr_ResonanceGroup self, Mols_Chain value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addChain");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'addChain'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'addChain' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.Nmr.ResonanceGroup.resonances

Resonances belonging to 
ResonanceGroup. This link overrides any conflicting ResonanceProbs.
  @param  Nmr_ResonanceGroup self
  @param  Nmr_Resonance value
**/
void *Nmr_ResonanceGroup_AddResonance(Nmr_ResonanceGroup self, Nmr_Resonance value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'addResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'addResonance' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @param  ApiBoolean complete
**/
void *Nmr_ResonanceGroup_CheckAllValid(Nmr_ResonanceGroup self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @param  ApiBoolean complete
**/
void *Nmr_ResonanceGroup_CheckValid(Nmr_ResonanceGroup self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'checkValid' is not callable");
  
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
  @param  Nmr_ResonanceGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ResonanceGroup_FindAllApplicationData(Nmr_ResonanceGroup self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_ResonanceGroup self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ResonanceGroup_FindAllApplicationData_keyval0(Nmr_ResonanceGroup self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ResonanceGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResonanceGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ResonanceGroup_FindAllApplicationData_keyval1(Nmr_ResonanceGroup self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ResonanceGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ResonanceGroup_FindAllApplicationData_keyval2(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ResonanceGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_ResonanceGroup_FindAllApplicationData_keyval3(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ResonanceGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResonanceGroup self
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
ApiList Nmr_ResonanceGroup_FindAllApplicationData_keyval4(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ResonanceGroup_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ResonanceGroup.chains

Chains to which 
ResonanceGroup may belong
  @param  Nmr_ResonanceGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllChains(Nmr_ResonanceGroup self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChains");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'findAllChains'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'findAllChains' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ResonanceGroup.chains

Chains to which 
ResonanceGroup may belong
  @param  Nmr_ResonanceGroup self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllChains_keyval0(Nmr_ResonanceGroup self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ResonanceGroup_FindAllChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ResonanceGroup.chains

Chains to which 
ResonanceGroup may belong
  @param  Nmr_ResonanceGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllChains_keyval1(Nmr_ResonanceGroup self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ResonanceGroup_FindAllChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ResonanceGroup.chains

Chains to which 
ResonanceGroup may belong
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllChains_keyval2(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ResonanceGroup_FindAllChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ResonanceGroup.chains

Chains to which 
ResonanceGroup may belong
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllChains_keyval3(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ResonanceGroup_FindAllChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ResonanceGroup.chains

Chains to which 
ResonanceGroup may belong
  @param  Nmr_ResonanceGroup self
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
ApiSet Nmr_ResonanceGroup_FindAllChains_keyval4(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ResonanceGroup_FindAllChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.ResonanceGroup.fromResonanceGroups

ResonanceGroupProbs 
describing linking probabilities to this Resonance
  @param  Nmr_ResonanceGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllFromResonanceGroups(Nmr_ResonanceGroup self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllFromResonanceGroups");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'findAllFromResonanceGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'findAllFromResonanceGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.ResonanceGroup.fromResonanceGroups

ResonanceGroupProbs 
describing linking probabilities to this Resonance
  @param  Nmr_ResonanceGroup self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllFromResonanceGroups_keyval0(Nmr_ResonanceGroup self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ResonanceGroup_FindAllFromResonanceGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.ResonanceGroup.fromResonanceGroups

ResonanceGroupProbs 
describing linking probabilities to this Resonance
  @param  Nmr_ResonanceGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllFromResonanceGroups_keyval1(Nmr_ResonanceGroup self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ResonanceGroup_FindAllFromResonanceGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.ResonanceGroup.fromResonanceGroups

ResonanceGroupProbs 
describing linking probabilities to this Resonance
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllFromResonanceGroups_keyval2(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ResonanceGroup_FindAllFromResonanceGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.ResonanceGroup.fromResonanceGroups

ResonanceGroupProbs 
describing linking probabilities to this Resonance
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllFromResonanceGroups_keyval3(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ResonanceGroup_FindAllFromResonanceGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.ResonanceGroup.fromResonanceGroups

ResonanceGroupProbs 
describing linking probabilities to this Resonance
  @param  Nmr_ResonanceGroup self
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
ApiSet Nmr_ResonanceGroup_FindAllFromResonanceGroups_keyval4(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ResonanceGroup_FindAllFromResonanceGroups(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ResonanceGroup.residueProbs

ResidueProbs 
describing residues that probably correspond to the ResonanceGroup.
  @param  Nmr_ResonanceGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllResidueProbs(Nmr_ResonanceGroup self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResidueProbs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'findAllResidueProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'findAllResidueProbs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ResonanceGroup.residueProbs

ResidueProbs 
describing residues that probably correspond to the ResonanceGroup.
  @param  Nmr_ResonanceGroup self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllResidueProbs_keyval0(Nmr_ResonanceGroup self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ResonanceGroup_FindAllResidueProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ResonanceGroup.residueProbs

ResidueProbs 
describing residues that probably correspond to the ResonanceGroup.
  @param  Nmr_ResonanceGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllResidueProbs_keyval1(Nmr_ResonanceGroup self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ResonanceGroup_FindAllResidueProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ResonanceGroup.residueProbs

ResidueProbs 
describing residues that probably correspond to the ResonanceGroup.
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllResidueProbs_keyval2(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ResonanceGroup_FindAllResidueProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ResonanceGroup.residueProbs

ResidueProbs 
describing residues that probably correspond to the ResonanceGroup.
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllResidueProbs_keyval3(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ResonanceGroup_FindAllResidueProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ResonanceGroup.residueProbs

ResidueProbs 
describing residues that probably correspond to the ResonanceGroup.
  @param  Nmr_ResonanceGroup self
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
ApiSet Nmr_ResonanceGroup_FindAllResidueProbs_keyval4(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ResonanceGroup_FindAllResidueProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.ResonanceGroup.residueTypeProbs

ResidueTypeProbs describing 
probable ChemComp types of ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllResidueTypeProbs(Nmr_ResonanceGroup self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResidueTypeProbs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'findAllResidueTypeProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'findAllResidueTypeProbs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.ResonanceGroup.residueTypeProbs

ResidueTypeProbs describing 
probable ChemComp types of ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllResidueTypeProbs_keyval0(Nmr_ResonanceGroup self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ResonanceGroup_FindAllResidueTypeProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.ResonanceGroup.residueTypeProbs

ResidueTypeProbs describing 
probable ChemComp types of ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllResidueTypeProbs_keyval1(Nmr_ResonanceGroup self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ResonanceGroup_FindAllResidueTypeProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.ResonanceGroup.residueTypeProbs

ResidueTypeProbs describing 
probable ChemComp types of ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllResidueTypeProbs_keyval2(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ResonanceGroup_FindAllResidueTypeProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.ResonanceGroup.residueTypeProbs

ResidueTypeProbs describing 
probable ChemComp types of ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllResidueTypeProbs_keyval3(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ResonanceGroup_FindAllResidueTypeProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.ResonanceGroup.residueTypeProbs

ResidueTypeProbs describing 
probable ChemComp types of ResonanceGroup
  @param  Nmr_ResonanceGroup self
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
ApiSet Nmr_ResonanceGroup_FindAllResidueTypeProbs_keyval4(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ResonanceGroup_FindAllResidueTypeProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.ResonanceGroup.resonanceGroupProbs

ResonanceGroupProbs 
describing probable links from (owned by) this ResonanceGroup.
  @param  Nmr_ResonanceGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllResonanceGroupProbs(Nmr_ResonanceGroup self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResonanceGroupProbs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'findAllResonanceGroupProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'findAllResonanceGroupProbs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.ResonanceGroup.resonanceGroupProbs

ResonanceGroupProbs 
describing probable links from (owned by) this ResonanceGroup.
  @param  Nmr_ResonanceGroup self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllResonanceGroupProbs_keyval0(Nmr_ResonanceGroup self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ResonanceGroup_FindAllResonanceGroupProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.ResonanceGroup.resonanceGroupProbs

ResonanceGroupProbs 
describing probable links from (owned by) this ResonanceGroup.
  @param  Nmr_ResonanceGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllResonanceGroupProbs_keyval1(Nmr_ResonanceGroup self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ResonanceGroup_FindAllResonanceGroupProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.ResonanceGroup.resonanceGroupProbs

ResonanceGroupProbs 
describing probable links from (owned by) this ResonanceGroup.
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllResonanceGroupProbs_keyval2(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ResonanceGroup_FindAllResonanceGroupProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.ResonanceGroup.resonanceGroupProbs

ResonanceGroupProbs 
describing probable links from (owned by) this ResonanceGroup.
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllResonanceGroupProbs_keyval3(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ResonanceGroup_FindAllResonanceGroupProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.Nmr.ResonanceGroup.resonanceGroupProbs

ResonanceGroupProbs 
describing probable links from (owned by) this ResonanceGroup.
  @param  Nmr_ResonanceGroup self
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
ApiSet Nmr_ResonanceGroup_FindAllResonanceGroupProbs_keyval4(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ResonanceGroup_FindAllResonanceGroupProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ResonanceGroup.resonanceProbs

ResonanceProbs 
describing Resonances that have a probability of belonging to this 
ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllResonanceProbs(Nmr_ResonanceGroup self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResonanceProbs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'findAllResonanceProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'findAllResonanceProbs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ResonanceGroup.resonanceProbs

ResonanceProbs 
describing Resonances that have a probability of belonging to this 
ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllResonanceProbs_keyval0(Nmr_ResonanceGroup self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ResonanceGroup_FindAllResonanceProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ResonanceGroup.resonanceProbs

ResonanceProbs 
describing Resonances that have a probability of belonging to this 
ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllResonanceProbs_keyval1(Nmr_ResonanceGroup self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ResonanceGroup_FindAllResonanceProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ResonanceGroup.resonanceProbs

ResonanceProbs 
describing Resonances that have a probability of belonging to this 
ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllResonanceProbs_keyval2(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ResonanceGroup_FindAllResonanceProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ResonanceGroup.resonanceProbs

ResonanceProbs 
describing Resonances that have a probability of belonging to this 
ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllResonanceProbs_keyval3(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ResonanceGroup_FindAllResonanceProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ResonanceGroup.resonanceProbs

ResonanceProbs 
describing Resonances that have a probability of belonging to this 
ResonanceGroup
  @param  Nmr_ResonanceGroup self
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
ApiSet Nmr_ResonanceGroup_FindAllResonanceProbs_keyval4(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ResonanceGroup_FindAllResonanceProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ResonanceGroup.resonances

Resonances belonging 
to ResonanceGroup. This link overrides any conflicting ResonanceProbs.
  @param  Nmr_ResonanceGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllResonances(Nmr_ResonanceGroup self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'findAllResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'findAllResonances' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ResonanceGroup.resonances

Resonances belonging 
to ResonanceGroup. This link overrides any conflicting ResonanceProbs.
  @param  Nmr_ResonanceGroup self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllResonances_keyval0(Nmr_ResonanceGroup self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ResonanceGroup_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ResonanceGroup.resonances

Resonances belonging 
to ResonanceGroup. This link overrides any conflicting ResonanceProbs.
  @param  Nmr_ResonanceGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllResonances_keyval1(Nmr_ResonanceGroup self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ResonanceGroup_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ResonanceGroup.resonances

Resonances belonging 
to ResonanceGroup. This link overrides any conflicting ResonanceProbs.
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllResonances_keyval2(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ResonanceGroup_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ResonanceGroup.resonances

Resonances belonging 
to ResonanceGroup. This link overrides any conflicting ResonanceProbs.
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_ResonanceGroup_FindAllResonances_keyval3(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ResonanceGroup_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.ResonanceGroup.resonances

Resonances belonging 
to ResonanceGroup. This link overrides any conflicting ResonanceProbs.
  @param  Nmr_ResonanceGroup self
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
ApiSet Nmr_ResonanceGroup_FindAllResonances_keyval4(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ResonanceGroup_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResonanceGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ResonanceGroup_FindFirstApplicationData(Nmr_ResonanceGroup self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_ResonanceGroup self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ResonanceGroup_FindFirstApplicationData_keyval0(Nmr_ResonanceGroup self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ResonanceGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResonanceGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ResonanceGroup_FindFirstApplicationData_keyval1(Nmr_ResonanceGroup self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ResonanceGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ResonanceGroup_FindFirstApplicationData_keyval2(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ResonanceGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_ResonanceGroup_FindFirstApplicationData_keyval3(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ResonanceGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResonanceGroup self
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
Impl_ApplicationData Nmr_ResonanceGroup_FindFirstApplicationData_keyval4(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ResonanceGroup_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ResonanceGroup.chains

Chains to which 
ResonanceGroup may belong
  @param  Nmr_ResonanceGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mols_Chain Nmr_ResonanceGroup_FindFirstChain(Nmr_ResonanceGroup self, ApiMap conditions)
{
  
  Mols_Chain obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChain");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'findFirstChain'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'findFirstChain' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ResonanceGroup.chains

Chains to which 
ResonanceGroup may belong
  @param  Nmr_ResonanceGroup self
  @returns  the first value that satisfies the conditions 
**/
Mols_Chain Nmr_ResonanceGroup_FindFirstChain_keyval0(Nmr_ResonanceGroup self)
{
  
  Mols_Chain  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ResonanceGroup_FindFirstChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ResonanceGroup.chains

Chains to which 
ResonanceGroup may belong
  @param  Nmr_ResonanceGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mols_Chain Nmr_ResonanceGroup_FindFirstChain_keyval1(Nmr_ResonanceGroup self, char * key, ApiObject value)
{
  
  Mols_Chain  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ResonanceGroup_FindFirstChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ResonanceGroup.chains

Chains to which 
ResonanceGroup may belong
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mols_Chain Nmr_ResonanceGroup_FindFirstChain_keyval2(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mols_Chain  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ResonanceGroup_FindFirstChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ResonanceGroup.chains

Chains to which 
ResonanceGroup may belong
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mols_Chain Nmr_ResonanceGroup_FindFirstChain_keyval3(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mols_Chain  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ResonanceGroup_FindFirstChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ResonanceGroup.chains

Chains to which 
ResonanceGroup may belong
  @param  Nmr_ResonanceGroup self
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
Mols_Chain Nmr_ResonanceGroup_FindFirstChain_keyval4(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mols_Chain  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ResonanceGroup_FindFirstChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.ResonanceGroup.fromResonanceGroups

ResonanceGroupProbs 
describing linking probabilities to this Resonance
  @param  Nmr_ResonanceGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceGroupProb Nmr_ResonanceGroup_FindFirstFromResonanceGroup(Nmr_ResonanceGroup self, ApiMap conditions)
{
  
  Nmr_ResonanceGroupProb obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstFromResonanceGroup");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'findFirstFromResonanceGroup'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'findFirstFromResonanceGroup' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.ResonanceGroup.fromResonanceGroups

ResonanceGroupProbs 
describing linking probabilities to this Resonance
  @param  Nmr_ResonanceGroup self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceGroupProb Nmr_ResonanceGroup_FindFirstFromResonanceGroup_keyval0(Nmr_ResonanceGroup self)
{
  
  Nmr_ResonanceGroupProb  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ResonanceGroup_FindFirstFromResonanceGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.ResonanceGroup.fromResonanceGroups

ResonanceGroupProbs 
describing linking probabilities to this Resonance
  @param  Nmr_ResonanceGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceGroupProb Nmr_ResonanceGroup_FindFirstFromResonanceGroup_keyval1(Nmr_ResonanceGroup self, char * key, ApiObject value)
{
  
  Nmr_ResonanceGroupProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ResonanceGroup_FindFirstFromResonanceGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.ResonanceGroup.fromResonanceGroups

ResonanceGroupProbs 
describing linking probabilities to this Resonance
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceGroupProb Nmr_ResonanceGroup_FindFirstFromResonanceGroup_keyval2(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ResonanceGroupProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ResonanceGroup_FindFirstFromResonanceGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.ResonanceGroup.fromResonanceGroups

ResonanceGroupProbs 
describing linking probabilities to this Resonance
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceGroupProb Nmr_ResonanceGroup_FindFirstFromResonanceGroup_keyval3(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ResonanceGroupProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ResonanceGroup_FindFirstFromResonanceGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.ResonanceGroup.fromResonanceGroups

ResonanceGroupProbs 
describing linking probabilities to this Resonance
  @param  Nmr_ResonanceGroup self
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
Nmr_ResonanceGroupProb Nmr_ResonanceGroup_FindFirstFromResonanceGroup_keyval4(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ResonanceGroupProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ResonanceGroup_FindFirstFromResonanceGroup(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ResonanceGroup.residueProbs

ResidueProbs 
describing residues that probably correspond to the ResonanceGroup.
  @param  Nmr_ResonanceGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueProb Nmr_ResonanceGroup_FindFirstResidueProb(Nmr_ResonanceGroup self, ApiMap conditions)
{
  
  Nmr_ResidueProb obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResidueProb");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'findFirstResidueProb'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'findFirstResidueProb' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ResonanceGroup.residueProbs

ResidueProbs 
describing residues that probably correspond to the ResonanceGroup.
  @param  Nmr_ResonanceGroup self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueProb Nmr_ResonanceGroup_FindFirstResidueProb_keyval0(Nmr_ResonanceGroup self)
{
  
  Nmr_ResidueProb  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ResonanceGroup_FindFirstResidueProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ResonanceGroup.residueProbs

ResidueProbs 
describing residues that probably correspond to the ResonanceGroup.
  @param  Nmr_ResonanceGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueProb Nmr_ResonanceGroup_FindFirstResidueProb_keyval1(Nmr_ResonanceGroup self, char * key, ApiObject value)
{
  
  Nmr_ResidueProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ResonanceGroup_FindFirstResidueProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ResonanceGroup.residueProbs

ResidueProbs 
describing residues that probably correspond to the ResonanceGroup.
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueProb Nmr_ResonanceGroup_FindFirstResidueProb_keyval2(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ResidueProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ResonanceGroup_FindFirstResidueProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ResonanceGroup.residueProbs

ResidueProbs 
describing residues that probably correspond to the ResonanceGroup.
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueProb Nmr_ResonanceGroup_FindFirstResidueProb_keyval3(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ResidueProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ResonanceGroup_FindFirstResidueProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ResonanceGroup.residueProbs

ResidueProbs 
describing residues that probably correspond to the ResonanceGroup.
  @param  Nmr_ResonanceGroup self
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
Nmr_ResidueProb Nmr_ResonanceGroup_FindFirstResidueProb_keyval4(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ResidueProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ResonanceGroup_FindFirstResidueProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.ResonanceGroup.residueTypeProbs

ResidueTypeProbs describing 
probable ChemComp types of ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueTypeProb Nmr_ResonanceGroup_FindFirstResidueTypeProb(Nmr_ResonanceGroup self, ApiMap conditions)
{
  
  Nmr_ResidueTypeProb obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResidueTypeProb");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'findFirstResidueTypeProb'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'findFirstResidueTypeProb' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.ResonanceGroup.residueTypeProbs

ResidueTypeProbs describing 
probable ChemComp types of ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueTypeProb Nmr_ResonanceGroup_FindFirstResidueTypeProb_keyval0(Nmr_ResonanceGroup self)
{
  
  Nmr_ResidueTypeProb  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ResonanceGroup_FindFirstResidueTypeProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.ResonanceGroup.residueTypeProbs

ResidueTypeProbs describing 
probable ChemComp types of ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueTypeProb Nmr_ResonanceGroup_FindFirstResidueTypeProb_keyval1(Nmr_ResonanceGroup self, char * key, ApiObject value)
{
  
  Nmr_ResidueTypeProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ResonanceGroup_FindFirstResidueTypeProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.ResonanceGroup.residueTypeProbs

ResidueTypeProbs describing 
probable ChemComp types of ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueTypeProb Nmr_ResonanceGroup_FindFirstResidueTypeProb_keyval2(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ResidueTypeProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ResonanceGroup_FindFirstResidueTypeProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.ResonanceGroup.residueTypeProbs

ResidueTypeProbs describing 
probable ChemComp types of ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueTypeProb Nmr_ResonanceGroup_FindFirstResidueTypeProb_keyval3(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ResidueTypeProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ResonanceGroup_FindFirstResidueTypeProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.ResonanceGroup.residueTypeProbs

ResidueTypeProbs describing 
probable ChemComp types of ResonanceGroup
  @param  Nmr_ResonanceGroup self
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
Nmr_ResidueTypeProb Nmr_ResonanceGroup_FindFirstResidueTypeProb_keyval4(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ResidueTypeProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ResonanceGroup_FindFirstResidueTypeProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ResonanceGroup.resonances

Resonances 
belonging to ResonanceGroup. This link overrides any conflicting 
ResonanceProbs.
  @param  Nmr_ResonanceGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_ResonanceGroup_FindFirstResonance(Nmr_ResonanceGroup self, ApiMap conditions)
{
  
  Nmr_Resonance obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'findFirstResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'findFirstResonance' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.ResonanceGroup.resonanceGroupProbs

ResonanceGroupProbs 
describing probable links from (owned by) this ResonanceGroup.
  @param  Nmr_ResonanceGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceGroupProb Nmr_ResonanceGroup_FindFirstResonanceGroupProb(Nmr_ResonanceGroup self, ApiMap conditions)
{
  
  Nmr_ResonanceGroupProb obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResonanceGroupProb");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'findFirstResonanceGroupProb'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'findFirstResonanceGroupProb' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.ResonanceGroup.resonanceGroupProbs

ResonanceGroupProbs 
describing probable links from (owned by) this ResonanceGroup.
  @param  Nmr_ResonanceGroup self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceGroupProb Nmr_ResonanceGroup_FindFirstResonanceGroupProb_keyval0(Nmr_ResonanceGroup self)
{
  
  Nmr_ResonanceGroupProb  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ResonanceGroup_FindFirstResonanceGroupProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.ResonanceGroup.resonanceGroupProbs

ResonanceGroupProbs 
describing probable links from (owned by) this ResonanceGroup.
  @param  Nmr_ResonanceGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceGroupProb Nmr_ResonanceGroup_FindFirstResonanceGroupProb_keyval1(Nmr_ResonanceGroup self, char * key, ApiObject value)
{
  
  Nmr_ResonanceGroupProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ResonanceGroup_FindFirstResonanceGroupProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.ResonanceGroup.resonanceGroupProbs

ResonanceGroupProbs 
describing probable links from (owned by) this ResonanceGroup.
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceGroupProb Nmr_ResonanceGroup_FindFirstResonanceGroupProb_keyval2(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ResonanceGroupProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ResonanceGroup_FindFirstResonanceGroupProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.ResonanceGroup.resonanceGroupProbs

ResonanceGroupProbs 
describing probable links from (owned by) this ResonanceGroup.
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceGroupProb Nmr_ResonanceGroup_FindFirstResonanceGroupProb_keyval3(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ResonanceGroupProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ResonanceGroup_FindFirstResonanceGroupProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.Nmr.ResonanceGroup.resonanceGroupProbs

ResonanceGroupProbs 
describing probable links from (owned by) this ResonanceGroup.
  @param  Nmr_ResonanceGroup self
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
Nmr_ResonanceGroupProb Nmr_ResonanceGroup_FindFirstResonanceGroupProb_keyval4(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ResonanceGroupProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ResonanceGroup_FindFirstResonanceGroupProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ResonanceGroup.resonanceProbs

ResonanceProbs 
describing Resonances that have a probability of belonging to this 
ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceProb Nmr_ResonanceGroup_FindFirstResonanceProb(Nmr_ResonanceGroup self, ApiMap conditions)
{
  
  Nmr_ResonanceProb obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResonanceProb");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'findFirstResonanceProb'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'findFirstResonanceProb' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ResonanceGroup.resonanceProbs

ResonanceProbs 
describing Resonances that have a probability of belonging to this 
ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceProb Nmr_ResonanceGroup_FindFirstResonanceProb_keyval0(Nmr_ResonanceGroup self)
{
  
  Nmr_ResonanceProb  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ResonanceGroup_FindFirstResonanceProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ResonanceGroup.resonanceProbs

ResonanceProbs 
describing Resonances that have a probability of belonging to this 
ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceProb Nmr_ResonanceGroup_FindFirstResonanceProb_keyval1(Nmr_ResonanceGroup self, char * key, ApiObject value)
{
  
  Nmr_ResonanceProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ResonanceGroup_FindFirstResonanceProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ResonanceGroup.resonanceProbs

ResonanceProbs 
describing Resonances that have a probability of belonging to this 
ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceProb Nmr_ResonanceGroup_FindFirstResonanceProb_keyval2(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ResonanceProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ResonanceGroup_FindFirstResonanceProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ResonanceGroup.resonanceProbs

ResonanceProbs 
describing Resonances that have a probability of belonging to this 
ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResonanceProb Nmr_ResonanceGroup_FindFirstResonanceProb_keyval3(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ResonanceProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ResonanceGroup_FindFirstResonanceProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ResonanceGroup.resonanceProbs

ResonanceProbs 
describing Resonances that have a probability of belonging to this 
ResonanceGroup
  @param  Nmr_ResonanceGroup self
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
Nmr_ResonanceProb Nmr_ResonanceGroup_FindFirstResonanceProb_keyval4(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ResonanceProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ResonanceGroup_FindFirstResonanceProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ResonanceGroup.resonances

Resonances 
belonging to ResonanceGroup. This link overrides any conflicting 
ResonanceProbs.
  @param  Nmr_ResonanceGroup self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_ResonanceGroup_FindFirstResonance_keyval0(Nmr_ResonanceGroup self)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_ResonanceGroup_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ResonanceGroup.resonances

Resonances 
belonging to ResonanceGroup. This link overrides any conflicting 
ResonanceProbs.
  @param  Nmr_ResonanceGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_ResonanceGroup_FindFirstResonance_keyval1(Nmr_ResonanceGroup self, char * key, ApiObject value)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_ResonanceGroup_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ResonanceGroup.resonances

Resonances 
belonging to ResonanceGroup. This link overrides any conflicting 
ResonanceProbs.
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_ResonanceGroup_FindFirstResonance_keyval2(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_ResonanceGroup_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ResonanceGroup.resonances

Resonances 
belonging to ResonanceGroup. This link overrides any conflicting 
ResonanceProbs.
  @param  Nmr_ResonanceGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_ResonanceGroup_FindFirstResonance_keyval3(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_ResonanceGroup_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.ResonanceGroup.resonances

Resonances 
belonging to ResonanceGroup. This link overrides any conflicting 
ResonanceProbs.
  @param  Nmr_ResonanceGroup self
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
Nmr_Resonance Nmr_ResonanceGroup_FindFirstResonance_keyval4(Nmr_ResonanceGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_ResonanceGroup_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_ResonanceGroup_Get(Nmr_ResonanceGroup self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
Acco_AccessObject Nmr_ResonanceGroup_GetAccess(Nmr_ResonanceGroup self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getAccess' is not callable");
  
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
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiList Nmr_ResonanceGroup_GetApplicationData(Nmr_ResonanceGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_ResonanceGroup Nmr_ResonanceGroup_GetByKey(Nmr_ResonanceGroup self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_ResonanceGroup obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ResonanceGroup.ccpCode

ccpCode ('threeLetterCode') 
identifying the ChemComp giving the type of the ResonanceGroup. Used as 
a key in deriving the link chemComp.
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiString Nmr_ResonanceGroup_GetCcpCode(Nmr_ResonanceGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCcpCode");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getCcpCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getCcpCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ResonanceGroup.chains

Chains to which 
ResonanceGroup may belong
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiSet Nmr_ResonanceGroup_GetChains(Nmr_ResonanceGroup self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChains");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getChains'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getChains' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link chemComp
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
Chem_ChemComp Nmr_ResonanceGroup_GetChemComp(Nmr_ResonanceGroup self)
{
  
  Chem_ChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemComp");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getChemComp'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getChemComp' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link chemCompVar
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
Chem_ChemCompVar Nmr_ResonanceGroup_GetChemCompVar(Nmr_ResonanceGroup self)
{
  
  Chem_ChemCompVar obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompVar");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getChemCompVar'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getChemCompVar' is not callable");
  
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
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiString Nmr_ResonanceGroup_GetClassName(Nmr_ResonanceGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ResonanceGroup.descriptor

String describing the 
precise form of the ChemCompVar giving the type of the ResonanceGroup. 
Used as a key in deriving the link chemCompVar.
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiString Nmr_ResonanceGroup_GetDescriptor(Nmr_ResonanceGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDescriptor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getDescriptor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getDescriptor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ResonanceGroup.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiString Nmr_ResonanceGroup_GetDetails(Nmr_ResonanceGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getDetails' is not callable");
  
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
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiList Nmr_ResonanceGroup_GetFieldNames(Nmr_ResonanceGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.Nmr.ResonanceGroup.fromResonanceGroups

ResonanceGroupProbs 
describing linking probabilities to this Resonance
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiSet Nmr_ResonanceGroup_GetFromResonanceGroups(Nmr_ResonanceGroup self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFromResonanceGroups");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getFromResonanceGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getFromResonanceGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_ResonanceGroup_GetFullKey(Nmr_ResonanceGroup self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getFullKey' is not callable");
  
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
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiBoolean Nmr_ResonanceGroup_GetInConstructor(Nmr_ResonanceGroup self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiBoolean Nmr_ResonanceGroup_GetIsDeleted(Nmr_ResonanceGroup self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ResonanceGroup.linking

String describing the 
linking of the ChemComp giving the type of the ResonanceGroup. Used as a 
key in deriving the link chemCompVar.
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiString Nmr_ResonanceGroup_GetLinking(Nmr_ResonanceGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLinking");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getLinking'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getLinking' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @returns  Local object key
**/
ApiObject Nmr_ResonanceGroup_GetLocalKey(Nmr_ResonanceGroup self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ResonanceGroup.molType

String describing the 
molecule type of the ChemComp giving the type of the ResonanceGroup. 
Used as a key in deriving the link chemComp.
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiString Nmr_ResonanceGroup_GetMolType(Nmr_ResonanceGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolType");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getMolType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getMolType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ResonanceGroup.name

Name of ResonanceGroup. Freely 
modifiable.
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiString Nmr_ResonanceGroup_GetName(Nmr_ResonanceGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ResonanceGroup.nmrProject

parent link
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
Nmr_NmrProject Nmr_ResonanceGroup_GetNmrProject(Nmr_ResonanceGroup self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrProject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getNmrProject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getNmrProject' is not callable");
  
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
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiString Nmr_ResonanceGroup_GetPackageName(Nmr_ResonanceGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getPackageName' is not callable");
  
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
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiString Nmr_ResonanceGroup_GetPackageShortName(Nmr_ResonanceGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ResonanceGroup.parent

link to parent object - 
synonym for nmrProject
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
Nmr_NmrProject Nmr_ResonanceGroup_GetParent(Nmr_ResonanceGroup self)
{
  
  Nmr_NmrProject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getParent' is not callable");
  
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
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiString Nmr_ResonanceGroup_GetQualifiedName(Nmr_ResonanceGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ResonanceGroup.residue

Residue to which 
ResonanceGroup definitely belongs. In case of conflict, this link 
overrides conflicting ResidueType or Residue probabilities.
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
Mols_Residue Nmr_ResonanceGroup_GetResidue(Nmr_ResonanceGroup self)
{
  
  Mols_Residue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResidue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getResidue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ResonanceGroup.residueProbs

ResidueProbs describing 
residues that probably correspond to the ResonanceGroup.
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiSet Nmr_ResonanceGroup_GetResidueProbs(Nmr_ResonanceGroup self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResidueProbs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getResidueProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getResidueProbs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ResonanceGroup.residueTypeProbs

ResidueTypeProbs 
describing probable ChemComp types of ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiSet Nmr_ResonanceGroup_GetResidueTypeProbs(Nmr_ResonanceGroup self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResidueTypeProbs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getResidueTypeProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getResidueTypeProbs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.nmr.Nmr.ResonanceGroup.resonanceGroupProbs

ResonanceGroupProbs 
describing probable links from (owned by) this ResonanceGroup.
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiSet Nmr_ResonanceGroup_GetResonanceGroupProbs(Nmr_ResonanceGroup self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonanceGroupProbs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getResonanceGroupProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getResonanceGroupProbs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ResonanceGroup.resonanceProbs

ResonanceProbs 
describing Resonances that have a probability of belonging to this 
ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiSet Nmr_ResonanceGroup_GetResonanceProbs(Nmr_ResonanceGroup self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonanceProbs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getResonanceProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getResonanceProbs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ResonanceGroup.resonances

Resonances belonging to 
ResonanceGroup. This link overrides any conflicting ResonanceProbs.
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiSet Nmr_ResonanceGroup_GetResonances(Nmr_ResonanceGroup self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getResonances' is not callable");
  
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
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
Impl_MemopsRoot Nmr_ResonanceGroup_GetRoot(Nmr_ResonanceGroup self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ResonanceGroup.secStrucCode

Code for secondary 
structure assigned to ResonanceGroup.
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiString Nmr_ResonanceGroup_GetSecStrucCode(Nmr_ResonanceGroup self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSecStrucCode");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getSecStrucCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getSecStrucCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.ResonanceGroup.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiInteger Nmr_ResonanceGroup_GetSerial(Nmr_ResonanceGroup self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getSerial' is not callable");
  
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
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
Impl_TopObject Nmr_ResonanceGroup_GetTopObject(Nmr_ResonanceGroup self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.ResonanceGroup
  @param  Nmr_NmrProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_ResonanceGroup Nmr_ResonanceGroup_Init(Nmr_NmrProject parent, ApiMap attrlinks)
{
  
  return Nmr_NmrProject_NewResonanceGroup(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.ResonanceGroup
  @param  Nmr_NmrProject parent
  @returns  the new object
**/
Nmr_ResonanceGroup Nmr_ResonanceGroup_Init_reqd(Nmr_NmrProject parent)
{
  
  Nmr_ResonanceGroup  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmr_ResonanceGroup_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ResidueProb
  @param  Nmr_ResonanceGroup self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_ResidueProb Nmr_ResonanceGroup_NewResidueProb(Nmr_ResonanceGroup self, ApiMap attrlinks)
{
  
  Nmr_ResidueProb obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newResidueProb");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'newResidueProb'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'newResidueProb' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ResidueProb
  @param  Nmr_ResonanceGroup self
  @param  Mols_Residue possibility
  @returns  the new object
**/
Nmr_ResidueProb Nmr_ResonanceGroup_NewResidueProb_reqd(Nmr_ResonanceGroup self, Mols_Residue possibility)
{
  
  Nmr_ResidueProb  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "possibility", possibility);
  
  obj = Nmr_ResonanceGroup_NewResidueProb(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ResidueTypeProb
  @param  Nmr_ResonanceGroup self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_ResidueTypeProb Nmr_ResonanceGroup_NewResidueTypeProb(Nmr_ResonanceGroup self, ApiMap attrlinks)
{
  
  Nmr_ResidueTypeProb obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newResidueTypeProb");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'newResidueTypeProb'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'newResidueTypeProb' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ResidueTypeProb
  @param  Nmr_ResonanceGroup self
  @param  Chem_ChemComp possibility
  @returns  the new object
**/
Nmr_ResidueTypeProb Nmr_ResonanceGroup_NewResidueTypeProb_reqd(Nmr_ResonanceGroup self, Chem_ChemComp possibility)
{
  
  Nmr_ResidueTypeProb  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "possibility", possibility);
  
  obj = Nmr_ResonanceGroup_NewResidueTypeProb(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ResonanceGroupProb
  @param  Nmr_ResonanceGroup self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_ResonanceGroupProb Nmr_ResonanceGroup_NewResonanceGroupProb(Nmr_ResonanceGroup self, ApiMap attrlinks)
{
  
  Nmr_ResonanceGroupProb obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newResonanceGroupProb");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'newResonanceGroupProb'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'newResonanceGroupProb' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.Nmr.ResonanceGroupProb
  @param  Nmr_ResonanceGroup self
  @param  char * linkType
  @param  Nmr_ResonanceGroup possibility
  @returns  the new object
**/
Nmr_ResonanceGroupProb Nmr_ResonanceGroup_NewResonanceGroupProb_reqd(Nmr_ResonanceGroup self, char * linkType, Nmr_ResonanceGroup possibility)
{
  
  Nmr_ResonanceGroupProb  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__linkType = ApiString_New(linkType);

  PyDict_SetItemString(attrlinks, "linkType", api__linkType);
  PyDict_SetItemString(attrlinks, "possibility", possibility);
  
  obj = Nmr_ResonanceGroup_NewResonanceGroupProb(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__linkType);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ResonanceGroup self
  @param  Impl_ApplicationData value
**/
void *Nmr_ResonanceGroup_RemoveApplicationData(Nmr_ResonanceGroup self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.ResonanceGroup.chains

Chains to which 
ResonanceGroup may belong
  @param  Nmr_ResonanceGroup self
  @param  Mols_Chain value
**/
void *Nmr_ResonanceGroup_RemoveChain(Nmr_ResonanceGroup self, Mols_Chain value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeChain");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'removeChain'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'removeChain' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.Nmr.ResonanceGroup.resonances

Resonances belonging 
to ResonanceGroup. This link overrides any conflicting ResonanceProbs.
  @param  Nmr_ResonanceGroup self
  @param  Nmr_Resonance value
**/
void *Nmr_ResonanceGroup_RemoveResonance(Nmr_ResonanceGroup self, Nmr_Resonance value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'removeResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'removeResonance' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_ResonanceGroup_Set(Nmr_ResonanceGroup self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ResonanceGroup self
  @param  Acco_AccessObject value
**/
void *Nmr_ResonanceGroup_SetAccess(Nmr_ResonanceGroup self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'setAccess' is not callable");
  
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
  @param  Nmr_ResonanceGroup self
  @param  ApiList values
**/
void *Nmr_ResonanceGroup_SetApplicationData(Nmr_ResonanceGroup self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ResonanceGroup.ccpCode

ccpCode ('threeLetterCode') 
identifying the ChemComp giving the type of the ResonanceGroup. Used as 
a key in deriving the link chemComp.
  @param  Nmr_ResonanceGroup self
  @param  ApiString value
**/
void *Nmr_ResonanceGroup_SetCcpCode(Nmr_ResonanceGroup self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCcpCode");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'setCcpCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'setCcpCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ResonanceGroup.chains

Chains to which 
ResonanceGroup may belong
  @param  Nmr_ResonanceGroup self
  @param  ApiSet values
**/
void *Nmr_ResonanceGroup_SetChains(Nmr_ResonanceGroup self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChains");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'setChains'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'setChains' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ResonanceGroup.descriptor

String describing the 
precise form of the ChemCompVar giving the type of the ResonanceGroup. 
Used as a key in deriving the link chemCompVar.
  @param  Nmr_ResonanceGroup self
  @param  ApiString value
**/
void *Nmr_ResonanceGroup_SetDescriptor(Nmr_ResonanceGroup self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDescriptor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'setDescriptor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'setDescriptor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ResonanceGroup.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_ResonanceGroup self
  @param  ApiString value
**/
void *Nmr_ResonanceGroup_SetDetails(Nmr_ResonanceGroup self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.nmr.Nmr.ResonanceGroup.fromResonanceGroups

ResonanceGroupProbs 
describing linking probabilities to this Resonance
  @param  Nmr_ResonanceGroup self
  @param  ApiSet values
**/
void *Nmr_ResonanceGroup_SetFromResonanceGroups(Nmr_ResonanceGroup self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFromResonanceGroups");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'setFromResonanceGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'setFromResonanceGroups' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ResonanceGroup.linking

String describing the 
linking of the ChemComp giving the type of the ResonanceGroup. Used as a 
key in deriving the link chemCompVar.
  @param  Nmr_ResonanceGroup self
  @param  ApiString value
**/
void *Nmr_ResonanceGroup_SetLinking(Nmr_ResonanceGroup self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLinking");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'setLinking'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'setLinking' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ResonanceGroup.molType

String describing the 
molecule type of the ChemComp giving the type of the ResonanceGroup. 
Used as a key in deriving the link chemComp.
  @param  Nmr_ResonanceGroup self
  @param  ApiString value
**/
void *Nmr_ResonanceGroup_SetMolType(Nmr_ResonanceGroup self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolType");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'setMolType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'setMolType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ResonanceGroup.name

Name of ResonanceGroup. Freely 
modifiable.
  @param  Nmr_ResonanceGroup self
  @param  ApiString value
**/
void *Nmr_ResonanceGroup_SetName(Nmr_ResonanceGroup self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ResonanceGroup.residue

Residue to which 
ResonanceGroup definitely belongs. In case of conflict, this link 
overrides conflicting ResidueType or Residue probabilities.
  @param  Nmr_ResonanceGroup self
  @param  Mols_Residue value
**/
void *Nmr_ResonanceGroup_SetResidue(Nmr_ResonanceGroup self, Mols_Residue value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResidue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'setResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'setResidue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ResonanceGroup.resonanceProbs

ResonanceProbs 
describing Resonances that have a probability of belonging to this 
ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @param  ApiSet values
**/
void *Nmr_ResonanceGroup_SetResonanceProbs(Nmr_ResonanceGroup self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResonanceProbs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'setResonanceProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'setResonanceProbs' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ResonanceGroup.resonances

Resonances belonging to 
ResonanceGroup. This link overrides any conflicting ResonanceProbs.
  @param  Nmr_ResonanceGroup self
  @param  ApiSet values
**/
void *Nmr_ResonanceGroup_SetResonances(Nmr_ResonanceGroup self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'setResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'setResonances' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ResonanceGroup.secStrucCode

Code for secondary 
structure assigned to ResonanceGroup.
  @param  Nmr_ResonanceGroup self
  @param  ApiString value
**/
void *Nmr_ResonanceGroup_SetSecStrucCode(Nmr_ResonanceGroup self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSecStrucCode");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'setSecStrucCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'setSecStrucCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.ResonanceGroup.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_ResonanceGroup self
  @param  ApiInteger value
**/
void *Nmr_ResonanceGroup_SetSerial(Nmr_ResonanceGroup self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.ResonanceGroup.chains

Chains to which 
ResonanceGroup may belong
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiList Nmr_ResonanceGroup_SortedChains(Nmr_ResonanceGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChains");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'sortedChains'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'sortedChains' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.Nmr.ResonanceGroup.fromResonanceGroups

ResonanceGroupProbs 
describing linking probabilities to this Resonance
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiList Nmr_ResonanceGroup_SortedFromResonanceGroups(Nmr_ResonanceGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedFromResonanceGroups");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'sortedFromResonanceGroups'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'sortedFromResonanceGroups' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.ResonanceGroup.residueProbs

ResidueProbs 
describing residues that probably correspond to the ResonanceGroup.
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiList Nmr_ResonanceGroup_SortedResidueProbs(Nmr_ResonanceGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResidueProbs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'sortedResidueProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'sortedResidueProbs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.ResonanceGroup.residueTypeProbs

ResidueTypeProbs 
describing probable ChemComp types of ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiList Nmr_ResonanceGroup_SortedResidueTypeProbs(Nmr_ResonanceGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResidueTypeProbs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'sortedResidueTypeProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'sortedResidueTypeProbs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.Nmr.ResonanceGroup.resonanceGroupProbs

ResonanceGroupProbs 
describing probable links from (owned by) this ResonanceGroup.
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiList Nmr_ResonanceGroup_SortedResonanceGroupProbs(Nmr_ResonanceGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResonanceGroupProbs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'sortedResonanceGroupProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'sortedResonanceGroupProbs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.ResonanceGroup.resonanceProbs

ResonanceProbs 
describing Resonances that have a probability of belonging to this 
ResonanceGroup
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiList Nmr_ResonanceGroup_SortedResonanceProbs(Nmr_ResonanceGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResonanceProbs");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'sortedResonanceProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'sortedResonanceProbs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.ResonanceGroup.resonances

Resonances belonging 
to ResonanceGroup. This link overrides any conflicting ResonanceProbs.
  @param  Nmr_ResonanceGroup self
  @returns   the result
**/
ApiList Nmr_ResonanceGroup_SortedResonances(Nmr_ResonanceGroup self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: cannot find method 'sortedResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.ResonanceGroup: method 'sortedResonances' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
