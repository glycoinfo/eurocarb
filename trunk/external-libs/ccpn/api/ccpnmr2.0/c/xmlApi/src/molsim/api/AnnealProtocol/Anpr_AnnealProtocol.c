
#include "ccp.h"

/*
  Annealing protocol - describes an annealing / dynamics simulation in general terms.
*/

/* package molsim.api.AnnealProtocol */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocol self
  @param  Impl_ApplicationData value
**/
void *Anpr_AnnealProtocol_AddApplicationData(Anpr_AnnealProtocol self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for molsim.AnnealProtocol.AnnealProtocol
  @param  Anpr_AnnealProtocol self
  @param  ApiBoolean complete
**/
void *Anpr_AnnealProtocol_CheckAllValid(Anpr_AnnealProtocol self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for molsim.AnnealProtocol.AnnealProtocol
  @param  Anpr_AnnealProtocol self
  @param  ApiBoolean complete
**/
void *Anpr_AnnealProtocol_CheckValid(Anpr_AnnealProtocol self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for molsim.AnnealProtocol.AnnealProtocol.annealStages

child 
link to class AnnealStage
  @param  Anpr_AnnealProtocol self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealProtocol_FindAllAnnealStages(Anpr_AnnealProtocol self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAnnealStages");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'findAllAnnealStages'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'findAllAnnealStages' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for molsim.AnnealProtocol.AnnealProtocol.annealStages

child 
link to class AnnealStage
  @param  Anpr_AnnealProtocol self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealProtocol_FindAllAnnealStages_keyval0(Anpr_AnnealProtocol self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_AnnealProtocol_FindAllAnnealStages(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.AnnealProtocol.AnnealProtocol.annealStages

child 
link to class AnnealStage
  @param  Anpr_AnnealProtocol self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealProtocol_FindAllAnnealStages_keyval1(Anpr_AnnealProtocol self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_AnnealProtocol_FindAllAnnealStages(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.AnnealProtocol.AnnealProtocol.annealStages

child 
link to class AnnealStage
  @param  Anpr_AnnealProtocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealProtocol_FindAllAnnealStages_keyval2(Anpr_AnnealProtocol self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_AnnealProtocol_FindAllAnnealStages(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.AnnealProtocol.AnnealProtocol.annealStages

child 
link to class AnnealStage
  @param  Anpr_AnnealProtocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealProtocol_FindAllAnnealStages_keyval3(Anpr_AnnealProtocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_AnnealProtocol_FindAllAnnealStages(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.AnnealProtocol.AnnealProtocol.annealStages

child 
link to class AnnealStage
  @param  Anpr_AnnealProtocol self
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
ApiSet Anpr_AnnealProtocol_FindAllAnnealStages_keyval4(Anpr_AnnealProtocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_AnnealProtocol_FindAllAnnealStages(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocol self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_AnnealProtocol_FindAllApplicationData(Anpr_AnnealProtocol self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'findAllApplicationData' is not callable");
  
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
  @param  Anpr_AnnealProtocol self
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_AnnealProtocol_FindAllApplicationData_keyval0(Anpr_AnnealProtocol self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_AnnealProtocol_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocol self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_AnnealProtocol_FindAllApplicationData_keyval1(Anpr_AnnealProtocol self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_AnnealProtocol_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_AnnealProtocol_FindAllApplicationData_keyval2(Anpr_AnnealProtocol self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_AnnealProtocol_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_AnnealProtocol_FindAllApplicationData_keyval3(Anpr_AnnealProtocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_AnnealProtocol_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocol self
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
ApiList Anpr_AnnealProtocol_FindAllApplicationData_keyval4(Anpr_AnnealProtocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_AnnealProtocol_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.AnnealProtocol.AnnealProtocol.energyTerms

child link 
to class EnergyTerm
  @param  Anpr_AnnealProtocol self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealProtocol_FindAllEnergyTerms(Anpr_AnnealProtocol self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllEnergyTerms");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'findAllEnergyTerms'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'findAllEnergyTerms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for molsim.AnnealProtocol.AnnealProtocol.energyTerms

child link 
to class EnergyTerm
  @param  Anpr_AnnealProtocol self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealProtocol_FindAllEnergyTerms_keyval0(Anpr_AnnealProtocol self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_AnnealProtocol_FindAllEnergyTerms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.AnnealProtocol.AnnealProtocol.energyTerms

child link 
to class EnergyTerm
  @param  Anpr_AnnealProtocol self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealProtocol_FindAllEnergyTerms_keyval1(Anpr_AnnealProtocol self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_AnnealProtocol_FindAllEnergyTerms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.AnnealProtocol.AnnealProtocol.energyTerms

child link 
to class EnergyTerm
  @param  Anpr_AnnealProtocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealProtocol_FindAllEnergyTerms_keyval2(Anpr_AnnealProtocol self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_AnnealProtocol_FindAllEnergyTerms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.AnnealProtocol.AnnealProtocol.energyTerms

child link 
to class EnergyTerm
  @param  Anpr_AnnealProtocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealProtocol_FindAllEnergyTerms_keyval3(Anpr_AnnealProtocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_AnnealProtocol_FindAllEnergyTerms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.AnnealProtocol.AnnealProtocol.energyTerms

child link 
to class EnergyTerm
  @param  Anpr_AnnealProtocol self
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
ApiSet Anpr_AnnealProtocol_FindAllEnergyTerms_keyval4(Anpr_AnnealProtocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_AnnealProtocol_FindAllEnergyTerms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.AnnealProtocol.AnnealProtocol.runs

NmrSim.Runs that 
use Anneal Protocol
  @param  Anpr_AnnealProtocol self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealProtocol_FindAllRuns(Anpr_AnnealProtocol self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRuns");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'findAllRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'findAllRuns' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for molsim.AnnealProtocol.AnnealProtocol.runs

NmrSim.Runs that 
use Anneal Protocol
  @param  Anpr_AnnealProtocol self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealProtocol_FindAllRuns_keyval0(Anpr_AnnealProtocol self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_AnnealProtocol_FindAllRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.AnnealProtocol.AnnealProtocol.runs

NmrSim.Runs that 
use Anneal Protocol
  @param  Anpr_AnnealProtocol self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealProtocol_FindAllRuns_keyval1(Anpr_AnnealProtocol self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_AnnealProtocol_FindAllRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.AnnealProtocol.AnnealProtocol.runs

NmrSim.Runs that 
use Anneal Protocol
  @param  Anpr_AnnealProtocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealProtocol_FindAllRuns_keyval2(Anpr_AnnealProtocol self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_AnnealProtocol_FindAllRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.AnnealProtocol.AnnealProtocol.runs

NmrSim.Runs that 
use Anneal Protocol
  @param  Anpr_AnnealProtocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealProtocol_FindAllRuns_keyval3(Anpr_AnnealProtocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_AnnealProtocol_FindAllRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for molsim.AnnealProtocol.AnnealProtocol.runs

NmrSim.Runs that 
use Anneal Protocol
  @param  Anpr_AnnealProtocol self
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
ApiSet Anpr_AnnealProtocol_FindAllRuns_keyval4(Anpr_AnnealProtocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_AnnealProtocol_FindAllRuns(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.AnnealProtocol.AnnealProtocol.annealStages

child 
link to class AnnealStage
  @param  Anpr_AnnealProtocol self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anpr_AnnealStage Anpr_AnnealProtocol_FindFirstAnnealStage(Anpr_AnnealProtocol self, ApiMap conditions)
{
  
  Anpr_AnnealStage obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAnnealStage");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'findFirstAnnealStage'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'findFirstAnnealStage' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for molsim.AnnealProtocol.AnnealProtocol.annealStages

child 
link to class AnnealStage
  @param  Anpr_AnnealProtocol self
  @returns  the first value that satisfies the conditions 
**/
Anpr_AnnealStage Anpr_AnnealProtocol_FindFirstAnnealStage_keyval0(Anpr_AnnealProtocol self)
{
  
  Anpr_AnnealStage  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_AnnealProtocol_FindFirstAnnealStage(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.AnnealProtocol.AnnealProtocol.annealStages

child 
link to class AnnealStage
  @param  Anpr_AnnealProtocol self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anpr_AnnealStage Anpr_AnnealProtocol_FindFirstAnnealStage_keyval1(Anpr_AnnealProtocol self, char * key, ApiObject value)
{
  
  Anpr_AnnealStage  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_AnnealProtocol_FindFirstAnnealStage(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.AnnealProtocol.AnnealProtocol.annealStages

child 
link to class AnnealStage
  @param  Anpr_AnnealProtocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anpr_AnnealStage Anpr_AnnealProtocol_FindFirstAnnealStage_keyval2(Anpr_AnnealProtocol self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anpr_AnnealStage  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_AnnealProtocol_FindFirstAnnealStage(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.AnnealProtocol.AnnealProtocol.annealStages

child 
link to class AnnealStage
  @param  Anpr_AnnealProtocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anpr_AnnealStage Anpr_AnnealProtocol_FindFirstAnnealStage_keyval3(Anpr_AnnealProtocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anpr_AnnealStage  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_AnnealProtocol_FindFirstAnnealStage(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.AnnealProtocol.AnnealProtocol.annealStages

child 
link to class AnnealStage
  @param  Anpr_AnnealProtocol self
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
Anpr_AnnealStage Anpr_AnnealProtocol_FindFirstAnnealStage_keyval4(Anpr_AnnealProtocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anpr_AnnealStage  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_AnnealProtocol_FindFirstAnnealStage(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocol self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_AnnealProtocol_FindFirstApplicationData(Anpr_AnnealProtocol self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anpr_AnnealProtocol self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_AnnealProtocol_FindFirstApplicationData_keyval0(Anpr_AnnealProtocol self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_AnnealProtocol_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocol self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_AnnealProtocol_FindFirstApplicationData_keyval1(Anpr_AnnealProtocol self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_AnnealProtocol_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_AnnealProtocol_FindFirstApplicationData_keyval2(Anpr_AnnealProtocol self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_AnnealProtocol_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_AnnealProtocol_FindFirstApplicationData_keyval3(Anpr_AnnealProtocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_AnnealProtocol_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocol self
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
Impl_ApplicationData Anpr_AnnealProtocol_FindFirstApplicationData_keyval4(Anpr_AnnealProtocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_AnnealProtocol_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.AnnealProtocol.AnnealProtocol.energyTerms

child 
link to class EnergyTerm
  @param  Anpr_AnnealProtocol self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anpr_EnergyTerm Anpr_AnnealProtocol_FindFirstEnergyTerm(Anpr_AnnealProtocol self, ApiMap conditions)
{
  
  Anpr_EnergyTerm obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstEnergyTerm");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'findFirstEnergyTerm'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'findFirstEnergyTerm' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for molsim.AnnealProtocol.AnnealProtocol.energyTerms

child 
link to class EnergyTerm
  @param  Anpr_AnnealProtocol self
  @returns  the first value that satisfies the conditions 
**/
Anpr_EnergyTerm Anpr_AnnealProtocol_FindFirstEnergyTerm_keyval0(Anpr_AnnealProtocol self)
{
  
  Anpr_EnergyTerm  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_AnnealProtocol_FindFirstEnergyTerm(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.AnnealProtocol.AnnealProtocol.energyTerms

child 
link to class EnergyTerm
  @param  Anpr_AnnealProtocol self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anpr_EnergyTerm Anpr_AnnealProtocol_FindFirstEnergyTerm_keyval1(Anpr_AnnealProtocol self, char * key, ApiObject value)
{
  
  Anpr_EnergyTerm  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_AnnealProtocol_FindFirstEnergyTerm(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.AnnealProtocol.AnnealProtocol.energyTerms

child 
link to class EnergyTerm
  @param  Anpr_AnnealProtocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anpr_EnergyTerm Anpr_AnnealProtocol_FindFirstEnergyTerm_keyval2(Anpr_AnnealProtocol self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anpr_EnergyTerm  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_AnnealProtocol_FindFirstEnergyTerm(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.AnnealProtocol.AnnealProtocol.energyTerms

child 
link to class EnergyTerm
  @param  Anpr_AnnealProtocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anpr_EnergyTerm Anpr_AnnealProtocol_FindFirstEnergyTerm_keyval3(Anpr_AnnealProtocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anpr_EnergyTerm  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_AnnealProtocol_FindFirstEnergyTerm(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.AnnealProtocol.AnnealProtocol.energyTerms

child 
link to class EnergyTerm
  @param  Anpr_AnnealProtocol self
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
Anpr_EnergyTerm Anpr_AnnealProtocol_FindFirstEnergyTerm_keyval4(Anpr_AnnealProtocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anpr_EnergyTerm  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_AnnealProtocol_FindFirstEnergyTerm(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.AnnealProtocol.AnnealProtocol.runs

NmrSim.Runs 
that use Anneal Protocol
  @param  Anpr_AnnealProtocol self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Anpr_AnnealProtocol_FindFirstRun(Anpr_AnnealProtocol self, ApiMap conditions)
{
  
  Nsim_Run obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRun");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'findFirstRun'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'findFirstRun' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for molsim.AnnealProtocol.AnnealProtocol.runs

NmrSim.Runs 
that use Anneal Protocol
  @param  Anpr_AnnealProtocol self
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Anpr_AnnealProtocol_FindFirstRun_keyval0(Anpr_AnnealProtocol self)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_AnnealProtocol_FindFirstRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.AnnealProtocol.AnnealProtocol.runs

NmrSim.Runs 
that use Anneal Protocol
  @param  Anpr_AnnealProtocol self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Anpr_AnnealProtocol_FindFirstRun_keyval1(Anpr_AnnealProtocol self, char * key, ApiObject value)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_AnnealProtocol_FindFirstRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.AnnealProtocol.AnnealProtocol.runs

NmrSim.Runs 
that use Anneal Protocol
  @param  Anpr_AnnealProtocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Anpr_AnnealProtocol_FindFirstRun_keyval2(Anpr_AnnealProtocol self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_AnnealProtocol_FindFirstRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.AnnealProtocol.AnnealProtocol.runs

NmrSim.Runs 
that use Anneal Protocol
  @param  Anpr_AnnealProtocol self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nsim_Run Anpr_AnnealProtocol_FindFirstRun_keyval3(Anpr_AnnealProtocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_AnnealProtocol_FindFirstRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for molsim.AnnealProtocol.AnnealProtocol.runs

NmrSim.Runs 
that use Anneal Protocol
  @param  Anpr_AnnealProtocol self
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
Nsim_Run Anpr_AnnealProtocol_FindFirstRun_keyval4(Anpr_AnnealProtocol self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nsim_Run  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_AnnealProtocol_FindFirstRun(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for molsim.AnnealProtocol.AnnealProtocol
  @param  Anpr_AnnealProtocol self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anpr_AnnealProtocol_Get(Anpr_AnnealProtocol self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anpr_AnnealProtocol self
  @returns   the result
**/
Acco_AccessObject Anpr_AnnealProtocol_GetAccess(Anpr_AnnealProtocol self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.AnnealProtocol.annealProtocolStore

parent 
link
  @param  Anpr_AnnealProtocol self
  @returns   the result
**/
Anpr_AnnealProtocolStore Anpr_AnnealProtocol_GetAnnealProtocolStore(Anpr_AnnealProtocol self)
{
  
  Anpr_AnnealProtocolStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnnealProtocolStore");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'getAnnealProtocolStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'getAnnealProtocolStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.AnnealProtocol.annealStages

child link to 
class AnnealStage
  @param  Anpr_AnnealProtocol self
  @returns   the result
**/
ApiSet Anpr_AnnealProtocol_GetAnnealStages(Anpr_AnnealProtocol self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnnealStages");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'getAnnealStages'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'getAnnealStages' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.AnnealProtocol.application

Name of 
application that uses the protocol. Part of Object key
  @param  Anpr_AnnealProtocol self
  @returns   the result
**/
ApiString Anpr_AnnealProtocol_GetApplication(Anpr_AnnealProtocol self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplication");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'getApplication'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'getApplication' is not callable");
  
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
  @param  Anpr_AnnealProtocol self
  @returns   the result
**/
ApiList Anpr_AnnealProtocol_GetApplicationData(Anpr_AnnealProtocol self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for molsim.AnnealProtocol.AnnealProtocol
  @param  Anpr_AnnealProtocol self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anpr_AnnealProtocol Anpr_AnnealProtocol_GetByKey(Anpr_AnnealProtocol self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Anpr_AnnealProtocol obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'getByKey' is not callable");
  
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
  @param  Anpr_AnnealProtocol self
  @returns   the result
**/
ApiString Anpr_AnnealProtocol_GetClassName(Anpr_AnnealProtocol self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.AnnealProtocol.code

Application-specific 
name for the protocol. Part of class key.
  @param  Anpr_AnnealProtocol self
  @returns   the result
**/
ApiString Anpr_AnnealProtocol_GetCode(Anpr_AnnealProtocol self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCode");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'getCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'getCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.AnnealProtocol.details

Free text, for 
notes, explanatory comments, etc.
  @param  Anpr_AnnealProtocol self
  @returns   the result
**/
ApiString Anpr_AnnealProtocol_GetDetails(Anpr_AnnealProtocol self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.AnnealProtocol.energyTerms

child link to 
class EnergyTerm
  @param  Anpr_AnnealProtocol self
  @returns   the result
**/
ApiSet Anpr_AnnealProtocol_GetEnergyTerms(Anpr_AnnealProtocol self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEnergyTerms");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'getEnergyTerms'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'getEnergyTerms' is not callable");
  
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
  @param  Anpr_AnnealProtocol self
  @returns   the result
**/
ApiList Anpr_AnnealProtocol_GetFieldNames(Anpr_AnnealProtocol self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for molsim.AnnealProtocol.AnnealProtocol
  @param  Anpr_AnnealProtocol self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anpr_AnnealProtocol_GetFullKey(Anpr_AnnealProtocol self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'getFullKey' is not callable");
  
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
  @param  Anpr_AnnealProtocol self
  @returns   the result
**/
ApiBoolean Anpr_AnnealProtocol_GetInConstructor(Anpr_AnnealProtocol self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'getInConstructor' is not callable");
  
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
  @param  Anpr_AnnealProtocol self
  @returns   the result
**/
ApiBoolean Anpr_AnnealProtocol_GetIsDeleted(Anpr_AnnealProtocol self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for molsim.AnnealProtocol.AnnealProtocol
  @param  Anpr_AnnealProtocol self
  @returns  Local object key
**/
ApiObject Anpr_AnnealProtocol_GetLocalKey(Anpr_AnnealProtocol self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.AnnealProtocol.name

name of 
AnnealProtocol. in human-readable form
  @param  Anpr_AnnealProtocol self
  @returns   the result
**/
ApiString Anpr_AnnealProtocol_GetName(Anpr_AnnealProtocol self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'getName' is not callable");
  
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
  @param  Anpr_AnnealProtocol self
  @returns   the result
**/
ApiString Anpr_AnnealProtocol_GetPackageName(Anpr_AnnealProtocol self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'getPackageName' is not callable");
  
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
  @param  Anpr_AnnealProtocol self
  @returns   the result
**/
ApiString Anpr_AnnealProtocol_GetPackageShortName(Anpr_AnnealProtocol self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.AnnealProtocol.parent

link to parent 
object - synonym for annealProtocolStore
  @param  Anpr_AnnealProtocol self
  @returns   the result
**/
Anpr_AnnealProtocolStore Anpr_AnnealProtocol_GetParent(Anpr_AnnealProtocol self)
{
  
  Anpr_AnnealProtocolStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'getParent' is not callable");
  
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
  @param  Anpr_AnnealProtocol self
  @returns   the result
**/
ApiString Anpr_AnnealProtocol_GetQualifiedName(Anpr_AnnealProtocol self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'getQualifiedName' is not callable");
  
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
  @param  Anpr_AnnealProtocol self
  @returns   the result
**/
Impl_MemopsRoot Anpr_AnnealProtocol_GetRoot(Anpr_AnnealProtocol self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.AnnealProtocol.runs

NmrSim.Runs that use 
Anneal Protocol
  @param  Anpr_AnnealProtocol self
  @returns   the result
**/
ApiSet Anpr_AnnealProtocol_GetRuns(Anpr_AnnealProtocol self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRuns");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'getRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'getRuns' is not callable");
  
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
  @param  Anpr_AnnealProtocol self
  @returns   the result
**/
Impl_TopObject Anpr_AnnealProtocol_GetTopObject(Anpr_AnnealProtocol self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for molsim.AnnealProtocol.AnnealProtocol
  @param  Anpr_AnnealProtocolStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anpr_AnnealProtocol Anpr_AnnealProtocol_Init(Anpr_AnnealProtocolStore parent, ApiMap attrlinks)
{
  
  return Anpr_AnnealProtocolStore_NewAnnealProtocol(parent, attrlinks);
}

/**
  Constructor for molsim.AnnealProtocol.AnnealProtocol
  @param  Anpr_AnnealProtocolStore parent
  @param  char * application
  @param  char * code
  @param  char * name
  @returns  the new object
**/
Anpr_AnnealProtocol Anpr_AnnealProtocol_Init_reqd(Anpr_AnnealProtocolStore parent, char * application, char * code, char * name)
{
  
  Anpr_AnnealProtocol  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__application = ApiString_New(application);
  ApiString api__code = ApiString_New(code);
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "application", api__application);
  PyDict_SetItemString(attrlinks, "code", api__code);
  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Anpr_AnnealProtocol_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__application);
  Py_DECREF(api__code);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create molsim.AnnealProtocol.AnnealStage
  @param  Anpr_AnnealProtocol self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anpr_AnnealStage Anpr_AnnealProtocol_NewAnnealStage(Anpr_AnnealProtocol self, ApiMap attrlinks)
{
  
  Anpr_AnnealStage obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAnnealStage");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'newAnnealStage'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'newAnnealStage' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create molsim.AnnealProtocol.AnnealStage
  @param  Anpr_AnnealProtocol self
  @param  ApiInteger numSteps
  @returns  the new object
**/
Anpr_AnnealStage Anpr_AnnealProtocol_NewAnnealStage_reqd(Anpr_AnnealProtocol self, ApiInteger numSteps)
{
  
  Anpr_AnnealStage  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "numSteps", numSteps);
  
  obj = Anpr_AnnealProtocol_NewAnnealStage(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create molsim.AnnealProtocol.EnergyTerm
  @param  Anpr_AnnealProtocol self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anpr_EnergyTerm Anpr_AnnealProtocol_NewEnergyTerm(Anpr_AnnealProtocol self, ApiMap attrlinks)
{
  
  Anpr_EnergyTerm obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newEnergyTerm");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'newEnergyTerm'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'newEnergyTerm' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create molsim.AnnealProtocol.EnergyTerm
  @param  Anpr_AnnealProtocol self
  @returns  the new object
**/
Anpr_EnergyTerm Anpr_AnnealProtocol_NewEnergyTerm_reqd(Anpr_AnnealProtocol self)
{
  
  Anpr_EnergyTerm  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Anpr_AnnealProtocol_NewEnergyTerm(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocol self
  @param  Impl_ApplicationData value
**/
void *Anpr_AnnealProtocol_RemoveApplicationData(Anpr_AnnealProtocol self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for molsim.AnnealProtocol.AnnealProtocol
  @param  Anpr_AnnealProtocol self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anpr_AnnealProtocol_Set(Anpr_AnnealProtocol self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anpr_AnnealProtocol self
  @param  Acco_AccessObject value
**/
void *Anpr_AnnealProtocol_SetAccess(Anpr_AnnealProtocol self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.AnnealProtocol.application

Name of 
application that uses the protocol. Part of Object key
  @param  Anpr_AnnealProtocol self
  @param  ApiString value
**/
void *Anpr_AnnealProtocol_SetApplication(Anpr_AnnealProtocol self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplication");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'setApplication'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'setApplication' is not callable");
  
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
  @param  Anpr_AnnealProtocol self
  @param  ApiList values
**/
void *Anpr_AnnealProtocol_SetApplicationData(Anpr_AnnealProtocol self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.AnnealProtocol.code

Application-specific 
name for the protocol. Part of class key.
  @param  Anpr_AnnealProtocol self
  @param  ApiString value
**/
void *Anpr_AnnealProtocol_SetCode(Anpr_AnnealProtocol self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCode");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'setCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'setCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.AnnealProtocol.details

Free text, for 
notes, explanatory comments, etc.
  @param  Anpr_AnnealProtocol self
  @param  ApiString value
**/
void *Anpr_AnnealProtocol_SetDetails(Anpr_AnnealProtocol self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.AnnealProtocol.name

name of 
AnnealProtocol. in human-readable form
  @param  Anpr_AnnealProtocol self
  @param  ApiString value
**/
void *Anpr_AnnealProtocol_SetName(Anpr_AnnealProtocol self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.AnnealProtocol.runs

NmrSim.Runs that use 
Anneal Protocol
  @param  Anpr_AnnealProtocol self
  @param  ApiSet values
**/
void *Anpr_AnnealProtocol_SetRuns(Anpr_AnnealProtocol self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRuns");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'setRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'setRuns' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for molsim.AnnealProtocol.AnnealProtocol.annealStages

child link 
to class AnnealStage
  @param  Anpr_AnnealProtocol self
  @returns   the result
**/
ApiList Anpr_AnnealProtocol_SortedAnnealStages(Anpr_AnnealProtocol self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAnnealStages");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'sortedAnnealStages'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'sortedAnnealStages' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for molsim.AnnealProtocol.AnnealProtocol.energyTerms

child link 
to class EnergyTerm
  @param  Anpr_AnnealProtocol self
  @returns   the result
**/
ApiList Anpr_AnnealProtocol_SortedEnergyTerms(Anpr_AnnealProtocol self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedEnergyTerms");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'sortedEnergyTerms'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'sortedEnergyTerms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for molsim.AnnealProtocol.AnnealProtocol.runs

NmrSim.Runs that 
use Anneal Protocol
  @param  Anpr_AnnealProtocol self
  @returns   the result
**/
ApiList Anpr_AnnealProtocol_SortedRuns(Anpr_AnnealProtocol self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRuns");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: cannot find method 'sortedRuns'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocol: method 'sortedRuns' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
