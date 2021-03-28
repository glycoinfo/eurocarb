
#include "ccp.h"

/*
  Description of a reference NMR experiment as defined by its magnetisation transfer pathway. E.g. a 4D HCCH, 3D (H)CCH or HC(C)H, 2D H(C)(C)H and 2D (reduced dimensionality) HC(C)H are seen as the same experiment
*/

/* package ccp.api.nmr.NmrExpPrototype */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_NmrExpPrototype self
  @param  Impl_ApplicationData value
**/
void *Nmrx_NmrExpPrototype_AddApplicationData(Nmrx_NmrExpPrototype self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.nmr.NmrExpPrototype.NmrExpPrototype.keywords

keywords to 
characterise the type and uses of experiment in more detail than 
permitted by 'category'. Examples would be 'protein', 'sidechain', 
'backbone', 'filtered', 'T1', 'RDC', ...
  @param  Nmrx_NmrExpPrototype self
  @param  ApiString value
**/
void *Nmrx_NmrExpPrototype_AddKeyword(Nmrx_NmrExpPrototype self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addKeyword");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'addKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'addKeyword' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.NmrExpPrototype.NmrExpPrototype
  @param  Nmrx_NmrExpPrototype self
  @param  ApiBoolean complete
**/
void *Nmrx_NmrExpPrototype_CheckAllValid(Nmrx_NmrExpPrototype self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.NmrExpPrototype.NmrExpPrototype
  @param  Nmrx_NmrExpPrototype self
  @param  ApiBoolean complete
**/
void *Nmrx_NmrExpPrototype_CheckValid(Nmrx_NmrExpPrototype self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmrx_NmrExpPrototype self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_NmrExpPrototype_FindAllActiveRepositories(Nmrx_NmrExpPrototype self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'findAllActiveRepositories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmrx_NmrExpPrototype self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_NmrExpPrototype_FindAllActiveRepositories_keyval0(Nmrx_NmrExpPrototype self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_NmrExpPrototype_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmrx_NmrExpPrototype self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_NmrExpPrototype_FindAllActiveRepositories_keyval1(Nmrx_NmrExpPrototype self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_NmrExpPrototype_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmrx_NmrExpPrototype self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_NmrExpPrototype_FindAllActiveRepositories_keyval2(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_NmrExpPrototype_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmrx_NmrExpPrototype self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_NmrExpPrototype_FindAllActiveRepositories_keyval3(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_NmrExpPrototype_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmrx_NmrExpPrototype self
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
ApiList Nmrx_NmrExpPrototype_FindAllActiveRepositories_keyval4(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_NmrExpPrototype_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_NmrExpPrototype self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_NmrExpPrototype_FindAllApplicationData(Nmrx_NmrExpPrototype self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmrx_NmrExpPrototype self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_NmrExpPrototype_FindAllApplicationData_keyval0(Nmrx_NmrExpPrototype self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_NmrExpPrototype_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_NmrExpPrototype self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_NmrExpPrototype_FindAllApplicationData_keyval1(Nmrx_NmrExpPrototype self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_NmrExpPrototype_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_NmrExpPrototype self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_NmrExpPrototype_FindAllApplicationData_keyval2(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_NmrExpPrototype_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_NmrExpPrototype self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmrx_NmrExpPrototype_FindAllApplicationData_keyval3(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_NmrExpPrototype_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_NmrExpPrototype self
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
ApiList Nmrx_NmrExpPrototype_FindAllApplicationData_keyval4(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_NmrExpPrototype_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.NmrExpPrototype.atomSites

child 
link to class AtomSite
  @param  Nmrx_NmrExpPrototype self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_NmrExpPrototype_FindAllAtomSites(Nmrx_NmrExpPrototype self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAtomSites");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'findAllAtomSites'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'findAllAtomSites' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.NmrExpPrototype.atomSites

child 
link to class AtomSite
  @param  Nmrx_NmrExpPrototype self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_NmrExpPrototype_FindAllAtomSites_keyval0(Nmrx_NmrExpPrototype self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_NmrExpPrototype_FindAllAtomSites(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.NmrExpPrototype.atomSites

child 
link to class AtomSite
  @param  Nmrx_NmrExpPrototype self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_NmrExpPrototype_FindAllAtomSites_keyval1(Nmrx_NmrExpPrototype self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_NmrExpPrototype_FindAllAtomSites(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.NmrExpPrototype.atomSites

child 
link to class AtomSite
  @param  Nmrx_NmrExpPrototype self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_NmrExpPrototype_FindAllAtomSites_keyval2(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_NmrExpPrototype_FindAllAtomSites(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.NmrExpPrototype.atomSites

child 
link to class AtomSite
  @param  Nmrx_NmrExpPrototype self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_NmrExpPrototype_FindAllAtomSites_keyval3(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_NmrExpPrototype_FindAllAtomSites(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.NmrExpPrototype.atomSites

child 
link to class AtomSite
  @param  Nmrx_NmrExpPrototype self
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
ApiSet Nmrx_NmrExpPrototype_FindAllAtomSites_keyval4(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_NmrExpPrototype_FindAllAtomSites(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.NmrExpPrototype.expGraphs

child 
link to class ExpGraph
  @param  Nmrx_NmrExpPrototype self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_NmrExpPrototype_FindAllExpGraphs(Nmrx_NmrExpPrototype self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExpGraphs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'findAllExpGraphs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'findAllExpGraphs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.NmrExpPrototype.expGraphs

child 
link to class ExpGraph
  @param  Nmrx_NmrExpPrototype self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_NmrExpPrototype_FindAllExpGraphs_keyval0(Nmrx_NmrExpPrototype self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_NmrExpPrototype_FindAllExpGraphs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.NmrExpPrototype.expGraphs

child 
link to class ExpGraph
  @param  Nmrx_NmrExpPrototype self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_NmrExpPrototype_FindAllExpGraphs_keyval1(Nmrx_NmrExpPrototype self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_NmrExpPrototype_FindAllExpGraphs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.NmrExpPrototype.expGraphs

child 
link to class ExpGraph
  @param  Nmrx_NmrExpPrototype self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_NmrExpPrototype_FindAllExpGraphs_keyval2(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_NmrExpPrototype_FindAllExpGraphs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.NmrExpPrototype.expGraphs

child 
link to class ExpGraph
  @param  Nmrx_NmrExpPrototype self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_NmrExpPrototype_FindAllExpGraphs_keyval3(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_NmrExpPrototype_FindAllExpGraphs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.NmrExpPrototype.NmrExpPrototype.expGraphs

child 
link to class ExpGraph
  @param  Nmrx_NmrExpPrototype self
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
ApiSet Nmrx_NmrExpPrototype_FindAllExpGraphs_keyval4(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_NmrExpPrototype_FindAllExpGraphs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.NmrExpPrototype.expMeasurements

child link to 
class ExpMeasurement
  @param  Nmrx_NmrExpPrototype self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_NmrExpPrototype_FindAllExpMeasurements(Nmrx_NmrExpPrototype self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllExpMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'findAllExpMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'findAllExpMeasurements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.NmrExpPrototype.expMeasurements

child link to 
class ExpMeasurement
  @param  Nmrx_NmrExpPrototype self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_NmrExpPrototype_FindAllExpMeasurements_keyval0(Nmrx_NmrExpPrototype self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_NmrExpPrototype_FindAllExpMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.NmrExpPrototype.expMeasurements

child link to 
class ExpMeasurement
  @param  Nmrx_NmrExpPrototype self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_NmrExpPrototype_FindAllExpMeasurements_keyval1(Nmrx_NmrExpPrototype self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_NmrExpPrototype_FindAllExpMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.NmrExpPrototype.expMeasurements

child link to 
class ExpMeasurement
  @param  Nmrx_NmrExpPrototype self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_NmrExpPrototype_FindAllExpMeasurements_keyval2(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_NmrExpPrototype_FindAllExpMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.NmrExpPrototype.expMeasurements

child link to 
class ExpMeasurement
  @param  Nmrx_NmrExpPrototype self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_NmrExpPrototype_FindAllExpMeasurements_keyval3(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_NmrExpPrototype_FindAllExpMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.NmrExpPrototype.expMeasurements

child link to 
class ExpMeasurement
  @param  Nmrx_NmrExpPrototype self
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
ApiSet Nmrx_NmrExpPrototype_FindAllExpMeasurements_keyval4(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_NmrExpPrototype_FindAllExpMeasurements(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.NmrExpPrototype.refExperiments

child link to 
class RefExperiment
  @param  Nmrx_NmrExpPrototype self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_NmrExpPrototype_FindAllRefExperiments(Nmrx_NmrExpPrototype self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRefExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'findAllRefExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'findAllRefExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.NmrExpPrototype.refExperiments

child link to 
class RefExperiment
  @param  Nmrx_NmrExpPrototype self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_NmrExpPrototype_FindAllRefExperiments_keyval0(Nmrx_NmrExpPrototype self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_NmrExpPrototype_FindAllRefExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.NmrExpPrototype.refExperiments

child link to 
class RefExperiment
  @param  Nmrx_NmrExpPrototype self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_NmrExpPrototype_FindAllRefExperiments_keyval1(Nmrx_NmrExpPrototype self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_NmrExpPrototype_FindAllRefExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.NmrExpPrototype.refExperiments

child link to 
class RefExperiment
  @param  Nmrx_NmrExpPrototype self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_NmrExpPrototype_FindAllRefExperiments_keyval2(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_NmrExpPrototype_FindAllRefExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.NmrExpPrototype.refExperiments

child link to 
class RefExperiment
  @param  Nmrx_NmrExpPrototype self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmrx_NmrExpPrototype_FindAllRefExperiments_keyval3(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_NmrExpPrototype_FindAllRefExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.nmr.NmrExpPrototype.NmrExpPrototype.refExperiments

child link to 
class RefExperiment
  @param  Nmrx_NmrExpPrototype self
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
ApiSet Nmrx_NmrExpPrototype_FindAllRefExperiments_keyval4(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_NmrExpPrototype_FindAllRefExperiments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmrx_NmrExpPrototype self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Nmrx_NmrExpPrototype_FindFirstActiveRepository(Nmrx_NmrExpPrototype self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'findFirstActiveRepository' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmrx_NmrExpPrototype self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Nmrx_NmrExpPrototype_FindFirstActiveRepository_keyval0(Nmrx_NmrExpPrototype self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_NmrExpPrototype_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmrx_NmrExpPrototype self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Nmrx_NmrExpPrototype_FindFirstActiveRepository_keyval1(Nmrx_NmrExpPrototype self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_NmrExpPrototype_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmrx_NmrExpPrototype self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Nmrx_NmrExpPrototype_FindFirstActiveRepository_keyval2(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_NmrExpPrototype_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmrx_NmrExpPrototype self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Nmrx_NmrExpPrototype_FindFirstActiveRepository_keyval3(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_NmrExpPrototype_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmrx_NmrExpPrototype self
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
Impl_Repository Nmrx_NmrExpPrototype_FindFirstActiveRepository_keyval4(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_NmrExpPrototype_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_NmrExpPrototype self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_NmrExpPrototype_FindFirstApplicationData(Nmrx_NmrExpPrototype self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmrx_NmrExpPrototype self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_NmrExpPrototype_FindFirstApplicationData_keyval0(Nmrx_NmrExpPrototype self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_NmrExpPrototype_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_NmrExpPrototype self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_NmrExpPrototype_FindFirstApplicationData_keyval1(Nmrx_NmrExpPrototype self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_NmrExpPrototype_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_NmrExpPrototype self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_NmrExpPrototype_FindFirstApplicationData_keyval2(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_NmrExpPrototype_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_NmrExpPrototype self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmrx_NmrExpPrototype_FindFirstApplicationData_keyval3(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_NmrExpPrototype_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_NmrExpPrototype self
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
Impl_ApplicationData Nmrx_NmrExpPrototype_FindFirstApplicationData_keyval4(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_NmrExpPrototype_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.NmrExpPrototype.atomSites

child 
link to class AtomSite
  @param  Nmrx_NmrExpPrototype self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrx_AtomSite Nmrx_NmrExpPrototype_FindFirstAtomSite(Nmrx_NmrExpPrototype self, ApiMap conditions)
{
  
  Nmrx_AtomSite obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAtomSite");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'findFirstAtomSite'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'findFirstAtomSite' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.NmrExpPrototype.atomSites

child 
link to class AtomSite
  @param  Nmrx_NmrExpPrototype self
  @returns  the first value that satisfies the conditions 
**/
Nmrx_AtomSite Nmrx_NmrExpPrototype_FindFirstAtomSite_keyval0(Nmrx_NmrExpPrototype self)
{
  
  Nmrx_AtomSite  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_NmrExpPrototype_FindFirstAtomSite(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.NmrExpPrototype.atomSites

child 
link to class AtomSite
  @param  Nmrx_NmrExpPrototype self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrx_AtomSite Nmrx_NmrExpPrototype_FindFirstAtomSite_keyval1(Nmrx_NmrExpPrototype self, char * key, ApiObject value)
{
  
  Nmrx_AtomSite  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_NmrExpPrototype_FindFirstAtomSite(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.NmrExpPrototype.atomSites

child 
link to class AtomSite
  @param  Nmrx_NmrExpPrototype self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrx_AtomSite Nmrx_NmrExpPrototype_FindFirstAtomSite_keyval2(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrx_AtomSite  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_NmrExpPrototype_FindFirstAtomSite(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.NmrExpPrototype.atomSites

child 
link to class AtomSite
  @param  Nmrx_NmrExpPrototype self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrx_AtomSite Nmrx_NmrExpPrototype_FindFirstAtomSite_keyval3(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrx_AtomSite  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_NmrExpPrototype_FindFirstAtomSite(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.NmrExpPrototype.atomSites

child 
link to class AtomSite
  @param  Nmrx_NmrExpPrototype self
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
Nmrx_AtomSite Nmrx_NmrExpPrototype_FindFirstAtomSite_keyval4(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrx_AtomSite  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_NmrExpPrototype_FindFirstAtomSite(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.NmrExpPrototype.expGraphs

child 
link to class ExpGraph
  @param  Nmrx_NmrExpPrototype self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpGraph Nmrx_NmrExpPrototype_FindFirstExpGraph(Nmrx_NmrExpPrototype self, ApiMap conditions)
{
  
  Nmrx_ExpGraph obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExpGraph");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'findFirstExpGraph'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'findFirstExpGraph' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.NmrExpPrototype.expGraphs

child 
link to class ExpGraph
  @param  Nmrx_NmrExpPrototype self
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpGraph Nmrx_NmrExpPrototype_FindFirstExpGraph_keyval0(Nmrx_NmrExpPrototype self)
{
  
  Nmrx_ExpGraph  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_NmrExpPrototype_FindFirstExpGraph(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.NmrExpPrototype.expGraphs

child 
link to class ExpGraph
  @param  Nmrx_NmrExpPrototype self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpGraph Nmrx_NmrExpPrototype_FindFirstExpGraph_keyval1(Nmrx_NmrExpPrototype self, char * key, ApiObject value)
{
  
  Nmrx_ExpGraph  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_NmrExpPrototype_FindFirstExpGraph(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.NmrExpPrototype.expGraphs

child 
link to class ExpGraph
  @param  Nmrx_NmrExpPrototype self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpGraph Nmrx_NmrExpPrototype_FindFirstExpGraph_keyval2(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrx_ExpGraph  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_NmrExpPrototype_FindFirstExpGraph(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.NmrExpPrototype.expGraphs

child 
link to class ExpGraph
  @param  Nmrx_NmrExpPrototype self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpGraph Nmrx_NmrExpPrototype_FindFirstExpGraph_keyval3(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrx_ExpGraph  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_NmrExpPrototype_FindFirstExpGraph(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.NmrExpPrototype.NmrExpPrototype.expGraphs

child 
link to class ExpGraph
  @param  Nmrx_NmrExpPrototype self
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
Nmrx_ExpGraph Nmrx_NmrExpPrototype_FindFirstExpGraph_keyval4(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrx_ExpGraph  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_NmrExpPrototype_FindFirstExpGraph(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.NmrExpPrototype.expMeasurements

child link to 
class ExpMeasurement
  @param  Nmrx_NmrExpPrototype self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpMeasurement Nmrx_NmrExpPrototype_FindFirstExpMeasurement(Nmrx_NmrExpPrototype self, ApiMap conditions)
{
  
  Nmrx_ExpMeasurement obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstExpMeasurement");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'findFirstExpMeasurement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'findFirstExpMeasurement' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.NmrExpPrototype.expMeasurements

child link to 
class ExpMeasurement
  @param  Nmrx_NmrExpPrototype self
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpMeasurement Nmrx_NmrExpPrototype_FindFirstExpMeasurement_keyval0(Nmrx_NmrExpPrototype self)
{
  
  Nmrx_ExpMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_NmrExpPrototype_FindFirstExpMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.NmrExpPrototype.expMeasurements

child link to 
class ExpMeasurement
  @param  Nmrx_NmrExpPrototype self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpMeasurement Nmrx_NmrExpPrototype_FindFirstExpMeasurement_keyval1(Nmrx_NmrExpPrototype self, char * key, ApiObject value)
{
  
  Nmrx_ExpMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_NmrExpPrototype_FindFirstExpMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.NmrExpPrototype.expMeasurements

child link to 
class ExpMeasurement
  @param  Nmrx_NmrExpPrototype self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpMeasurement Nmrx_NmrExpPrototype_FindFirstExpMeasurement_keyval2(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrx_ExpMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_NmrExpPrototype_FindFirstExpMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.NmrExpPrototype.expMeasurements

child link to 
class ExpMeasurement
  @param  Nmrx_NmrExpPrototype self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrx_ExpMeasurement Nmrx_NmrExpPrototype_FindFirstExpMeasurement_keyval3(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrx_ExpMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_NmrExpPrototype_FindFirstExpMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.NmrExpPrototype.expMeasurements

child link to 
class ExpMeasurement
  @param  Nmrx_NmrExpPrototype self
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
Nmrx_ExpMeasurement Nmrx_NmrExpPrototype_FindFirstExpMeasurement_keyval4(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrx_ExpMeasurement  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_NmrExpPrototype_FindFirstExpMeasurement(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.NmrExpPrototype.refExperiments

child link to 
class RefExperiment
  @param  Nmrx_NmrExpPrototype self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmrx_RefExperiment Nmrx_NmrExpPrototype_FindFirstRefExperiment(Nmrx_NmrExpPrototype self, ApiMap conditions)
{
  
  Nmrx_RefExperiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRefExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'findFirstRefExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'findFirstRefExperiment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.NmrExpPrototype.refExperiments

child link to 
class RefExperiment
  @param  Nmrx_NmrExpPrototype self
  @returns  the first value that satisfies the conditions 
**/
Nmrx_RefExperiment Nmrx_NmrExpPrototype_FindFirstRefExperiment_keyval0(Nmrx_NmrExpPrototype self)
{
  
  Nmrx_RefExperiment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmrx_NmrExpPrototype_FindFirstRefExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.NmrExpPrototype.refExperiments

child link to 
class RefExperiment
  @param  Nmrx_NmrExpPrototype self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmrx_RefExperiment Nmrx_NmrExpPrototype_FindFirstRefExperiment_keyval1(Nmrx_NmrExpPrototype self, char * key, ApiObject value)
{
  
  Nmrx_RefExperiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmrx_NmrExpPrototype_FindFirstRefExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.NmrExpPrototype.refExperiments

child link to 
class RefExperiment
  @param  Nmrx_NmrExpPrototype self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmrx_RefExperiment Nmrx_NmrExpPrototype_FindFirstRefExperiment_keyval2(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmrx_RefExperiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmrx_NmrExpPrototype_FindFirstRefExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.NmrExpPrototype.refExperiments

child link to 
class RefExperiment
  @param  Nmrx_NmrExpPrototype self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmrx_RefExperiment Nmrx_NmrExpPrototype_FindFirstRefExperiment_keyval3(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmrx_RefExperiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmrx_NmrExpPrototype_FindFirstRefExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.nmr.NmrExpPrototype.NmrExpPrototype.refExperiments

child link to 
class RefExperiment
  @param  Nmrx_NmrExpPrototype self
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
Nmrx_RefExperiment Nmrx_NmrExpPrototype_FindFirstRefExperiment_keyval4(Nmrx_NmrExpPrototype self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmrx_RefExperiment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmrx_NmrExpPrototype_FindFirstRefExperiment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.NmrExpPrototype.NmrExpPrototype
  @param  Nmrx_NmrExpPrototype self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmrx_NmrExpPrototype_Get(Nmrx_NmrExpPrototype self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
Acco_AccessObject Nmrx_NmrExpPrototype_GetAccess(Nmrx_NmrExpPrototype self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getAccess' is not callable");
  
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
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
Acco_AccessObject Nmrx_NmrExpPrototype_GetActiveAccess(Nmrx_NmrExpPrototype self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getActiveAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.activeRepositories

Repositories 
on package search path that contains a copy of TopObject
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiList Nmrx_NmrExpPrototype_GetActiveRepositories(Nmrx_NmrExpPrototype self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getActiveRepositories' is not callable");
  
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
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiList Nmrx_NmrExpPrototype_GetApplicationData(Nmrx_NmrExpPrototype self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.NmrExpPrototype.atomSites

child link to 
class AtomSite
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiSet Nmrx_NmrExpPrototype_GetAtomSites(Nmrx_NmrExpPrototype self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtomSites");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getAtomSites'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getAtomSites' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.NmrExpPrototype.NmrExpPrototype
  @param  Nmrx_NmrExpPrototype self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmrx_NmrExpPrototype Nmrx_NmrExpPrototype_GetByKey(Nmrx_NmrExpPrototype self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Nmrx_NmrExpPrototype obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.NmrExpPrototype.category

Experiment 
category. See datatype for details
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiString Nmrx_NmrExpPrototype_GetCategory(Nmrx_NmrExpPrototype self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCategory");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getCategory' is not callable");
  
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
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiString Nmrx_NmrExpPrototype_GetClassName(Nmrx_NmrExpPrototype self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiString Nmrx_NmrExpPrototype_GetCreatedBy(Nmrx_NmrExpPrototype self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getCreatedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.NmrExpPrototype.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiString Nmrx_NmrExpPrototype_GetDetails(Nmrx_NmrExpPrototype self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.NmrExpPrototype.expGraphs

child link to 
class ExpGraph
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiSet Nmrx_NmrExpPrototype_GetExpGraphs(Nmrx_NmrExpPrototype self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpGraphs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getExpGraphs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getExpGraphs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.NmrExpPrototype.expMeasurements

child 
link to class ExpMeasurement
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiSet Nmrx_NmrExpPrototype_GetExpMeasurements(Nmrx_NmrExpPrototype self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getExpMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getExpMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getExpMeasurements' is not callable");
  
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
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiList Nmrx_NmrExpPrototype_GetFieldNames(Nmrx_NmrExpPrototype self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.NmrExpPrototype.NmrExpPrototype
  @param  Nmrx_NmrExpPrototype self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmrx_NmrExpPrototype_GetFullKey(Nmrx_NmrExpPrototype self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiString Nmrx_NmrExpPrototype_GetGuid(Nmrx_NmrExpPrototype self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getGuid' is not callable");
  
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
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiBoolean Nmrx_NmrExpPrototype_GetInConstructor(Nmrx_NmrExpPrototype self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getInConstructor' is not callable");
  
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
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiBoolean Nmrx_NmrExpPrototype_GetIsDeleted(Nmrx_NmrExpPrototype self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.isLoaded

Implementation 
attribute, set automatically. True if the data in the Storage are loaded 
into memory. As data are loaded automatically, this attribute should be 
of interest only for the implementation.
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiBoolean Nmrx_NmrExpPrototype_GetIsLoaded(Nmrx_NmrExpPrototype self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getIsLoaded' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.isModifiable

True if the data 
corresponding to the storage may be modified. If isModifiable is false 
for a given package, attemps to modify the data will raise an error. 
Note that isModifiable can be set to true even if the corresponding file 
is read-only. 

For a Project, this atribute defines whether the 
Implementation package (not the entire project contents) can be 
modified. If the Implementation package is Read-Only, this will prohibit 
many changes in the other packages as well.

This parameter can be 
freely modified by users, so it is not a security feature, but rather a 
protection against accidental changes.
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiBoolean Nmrx_NmrExpPrototype_GetIsModifiable(Nmrx_NmrExpPrototype self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getIsModifiable' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.isModified

Implementation 
attribute. True if the data corresponding to the Storage have been 
modified since being loaded. Serves to indicate which data need to be 
saved.
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiBoolean Nmrx_NmrExpPrototype_GetIsModified(Nmrx_NmrExpPrototype self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getIsModified' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.isReading

Implementation 
attribute, set automatically. True if the data corresponding to the 
Storage are in the process of being read. As data loading is handled 
automatically, this attribute should be relevant only for the 
implementation, or possibly for programmers of multithreaded programs. 
Serves to suppress notifiers and validity checking during reading. Note 
that objects are not valid until the data loading is completed.
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiBoolean Nmrx_NmrExpPrototype_GetIsReading(Nmrx_NmrExpPrototype self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getIsReading' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.NmrExpPrototype.keywords

keywords to 
characterise the type and uses of experiment in more detail than 
permitted by 'category'. Examples would be 'protein', 'sidechain', 
'backbone', 'filtered', 'T1', 'RDC', ...
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiList Nmrx_NmrExpPrototype_GetKeywords(Nmrx_NmrExpPrototype self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getKeywords");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getKeywords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getKeywords' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiString Nmrx_NmrExpPrototype_GetLastUnlockedBy(Nmrx_NmrExpPrototype self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getLastUnlockedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.NmrExpPrototype.NmrExpPrototype
  @param  Nmrx_NmrExpPrototype self
  @returns  Local object key
**/
ApiObject Nmrx_NmrExpPrototype_GetLocalKey(Nmrx_NmrExpPrototype self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.NmrExpPrototype.memopsRoot

parent link
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
Impl_MemopsRoot Nmrx_NmrExpPrototype_GetMemopsRoot(Nmrx_NmrExpPrototype self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.NmrExpPrototype.name

name of experiment 
prototype
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiString Nmrx_NmrExpPrototype_GetName(Nmrx_NmrExpPrototype self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.packageLocator

Package locator 
relevant for TopObject
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
Impl_PackageLocator Nmrx_NmrExpPrototype_GetPackageLocator(Nmrx_NmrExpPrototype self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getPackageLocator' is not callable");
  
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
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiString Nmrx_NmrExpPrototype_GetPackageName(Nmrx_NmrExpPrototype self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getPackageName' is not callable");
  
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
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiString Nmrx_NmrExpPrototype_GetPackageShortName(Nmrx_NmrExpPrototype self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.NmrExpPrototype.parent

link to parent 
object - synonym for memopsRoot
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
Impl_MemopsRoot Nmrx_NmrExpPrototype_GetParent(Nmrx_NmrExpPrototype self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getParent' is not callable");
  
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
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiString Nmrx_NmrExpPrototype_GetQualifiedName(Nmrx_NmrExpPrototype self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.NmrExpPrototype.refExperiments

child 
link to class RefExperiment
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiSet Nmrx_NmrExpPrototype_GetRefExperiments(Nmrx_NmrExpPrototype self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getRefExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getRefExperiments' is not callable");
  
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
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
Impl_MemopsRoot Nmrx_NmrExpPrototype_GetRoot(Nmrx_NmrExpPrototype self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.NmrExpPrototype.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiInteger Nmrx_NmrExpPrototype_GetSerial(Nmrx_NmrExpPrototype self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.NmrExpPrototype.NmrExpPrototype.synonym

Alternative 
name of NmrExpPrototype. Used for experiments with well-established 
non-systematic name.
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiString Nmrx_NmrExpPrototype_GetSynonym(Nmrx_NmrExpPrototype self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSynonym");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getSynonym'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getSynonym' is not callable");
  
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
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
Impl_TopObject Nmrx_NmrExpPrototype_GetTopObject(Nmrx_NmrExpPrototype self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.NmrExpPrototype.NmrExpPrototype
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrx_NmrExpPrototype Nmrx_NmrExpPrototype_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewNmrExpPrototype(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.NmrExpPrototype.NmrExpPrototype
  @param  Impl_MemopsRoot parent
  @param  char * category
  @param  char * name
  @returns  the new object
**/
Nmrx_NmrExpPrototype Nmrx_NmrExpPrototype_Init_reqd(Impl_MemopsRoot parent, char * category, char * name)
{
  
  Nmrx_NmrExpPrototype  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__category = ApiString_New(category);
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "category", api__category);
  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Nmrx_NmrExpPrototype_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__category);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrExpPrototype.AtomSite
  @param  Nmrx_NmrExpPrototype self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrx_AtomSite Nmrx_NmrExpPrototype_NewAtomSite(Nmrx_NmrExpPrototype self, ApiMap attrlinks)
{
  
  Nmrx_AtomSite obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAtomSite");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'newAtomSite'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'newAtomSite' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrExpPrototype.AtomSite
  @param  Nmrx_NmrExpPrototype self
  @param  char * isotopeCode
  @returns  the new object
**/
Nmrx_AtomSite Nmrx_NmrExpPrototype_NewAtomSite_reqd(Nmrx_NmrExpPrototype self, char * isotopeCode)
{
  
  Nmrx_AtomSite  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__isotopeCode = ApiString_New(isotopeCode);

  PyDict_SetItemString(attrlinks, "isotopeCode", api__isotopeCode);
  
  obj = Nmrx_NmrExpPrototype_NewAtomSite(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__isotopeCode);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrExpPrototype.ExpGraph
  @param  Nmrx_NmrExpPrototype self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrx_ExpGraph Nmrx_NmrExpPrototype_NewExpGraph(Nmrx_NmrExpPrototype self, ApiMap attrlinks)
{
  
  Nmrx_ExpGraph obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newExpGraph");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'newExpGraph'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'newExpGraph' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrExpPrototype.ExpGraph
  @param  Nmrx_NmrExpPrototype self
  @returns  the new object
**/
Nmrx_ExpGraph Nmrx_NmrExpPrototype_NewExpGraph_reqd(Nmrx_NmrExpPrototype self)
{
  
  Nmrx_ExpGraph  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmrx_NmrExpPrototype_NewExpGraph(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrExpPrototype.ExpMeasurement
  @param  Nmrx_NmrExpPrototype self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrx_ExpMeasurement Nmrx_NmrExpPrototype_NewExpMeasurement(Nmrx_NmrExpPrototype self, ApiMap attrlinks)
{
  
  Nmrx_ExpMeasurement obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newExpMeasurement");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'newExpMeasurement'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'newExpMeasurement' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrExpPrototype.ExpMeasurement
  @param  Nmrx_NmrExpPrototype self
  @returns  the new object
**/
Nmrx_ExpMeasurement Nmrx_NmrExpPrototype_NewExpMeasurement_reqd(Nmrx_NmrExpPrototype self)
{
  
  Nmrx_ExpMeasurement  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmrx_NmrExpPrototype_NewExpMeasurement(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrExpPrototype.RefExperiment
  @param  Nmrx_NmrExpPrototype self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmrx_RefExperiment Nmrx_NmrExpPrototype_NewRefExperiment(Nmrx_NmrExpPrototype self, ApiMap attrlinks)
{
  
  Nmrx_RefExperiment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newRefExperiment");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'newRefExperiment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'newRefExperiment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.nmr.NmrExpPrototype.RefExperiment
  @param  Nmrx_NmrExpPrototype self
  @returns  the new object
**/
Nmrx_RefExperiment Nmrx_NmrExpPrototype_NewRefExperiment_reqd(Nmrx_NmrExpPrototype self)
{
  
  Nmrx_RefExperiment  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Nmrx_NmrExpPrototype_NewRefExperiment(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrx_NmrExpPrototype self
  @param  Impl_ApplicationData value
**/
void *Nmrx_NmrExpPrototype_RemoveApplicationData(Nmrx_NmrExpPrototype self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.nmr.NmrExpPrototype.NmrExpPrototype.keywords

keywords to 
characterise the type and uses of experiment in more detail than 
permitted by 'category'. Examples would be 'protein', 'sidechain', 
'backbone', 'filtered', 'T1', 'RDC', ...
  @param  Nmrx_NmrExpPrototype self
  @param  ApiString value
**/
void *Nmrx_NmrExpPrototype_RemoveKeyword(Nmrx_NmrExpPrototype self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeKeyword");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'removeKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'removeKeyword' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.NmrExpPrototype.NmrExpPrototype
  @param  Nmrx_NmrExpPrototype self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmrx_NmrExpPrototype_Set(Nmrx_NmrExpPrototype self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrx_NmrExpPrototype self
  @param  Acco_AccessObject value
**/
void *Nmrx_NmrExpPrototype_SetAccess(Nmrx_NmrExpPrototype self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'setAccess' is not callable");
  
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
  @param  Nmrx_NmrExpPrototype self
  @param  ApiList values
**/
void *Nmrx_NmrExpPrototype_SetApplicationData(Nmrx_NmrExpPrototype self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.NmrExpPrototype.category

Experiment 
category. See datatype for details
  @param  Nmrx_NmrExpPrototype self
  @param  ApiString value
**/
void *Nmrx_NmrExpPrototype_SetCategory(Nmrx_NmrExpPrototype self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCategory");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'setCategory'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'setCategory' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Nmrx_NmrExpPrototype self
  @param  ApiString value
**/
void *Nmrx_NmrExpPrototype_SetCreatedBy(Nmrx_NmrExpPrototype self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'setCreatedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.NmrExpPrototype.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmrx_NmrExpPrototype self
  @param  ApiString value
**/
void *Nmrx_NmrExpPrototype_SetDetails(Nmrx_NmrExpPrototype self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Nmrx_NmrExpPrototype self
  @param  ApiString value
**/
void *Nmrx_NmrExpPrototype_SetGuid(Nmrx_NmrExpPrototype self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'setGuid' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.TopObject.isModifiable

True if the data 
corresponding to the storage may be modified. If isModifiable is false 
for a given package, attemps to modify the data will raise an error. 
Note that isModifiable can be set to true even if the corresponding file 
is read-only. 

For a Project, this atribute defines whether the 
Implementation package (not the entire project contents) can be 
modified. If the Implementation package is Read-Only, this will prohibit 
many changes in the other packages as well.

This parameter can be 
freely modified by users, so it is not a security feature, but rather a 
protection against accidental changes.
  @param  Nmrx_NmrExpPrototype self
  @param  ApiBoolean value
**/
void *Nmrx_NmrExpPrototype_SetIsModifiable(Nmrx_NmrExpPrototype self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'setIsModifiable' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.NmrExpPrototype.keywords

keywords to 
characterise the type and uses of experiment in more detail than 
permitted by 'category'. Examples would be 'protein', 'sidechain', 
'backbone', 'filtered', 'T1', 'RDC', ...
  @param  Nmrx_NmrExpPrototype self
  @param  ApiList values
**/
void *Nmrx_NmrExpPrototype_SetKeywords(Nmrx_NmrExpPrototype self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setKeywords");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'setKeywords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'setKeywords' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Nmrx_NmrExpPrototype self
  @param  ApiString value
**/
void *Nmrx_NmrExpPrototype_SetLastUnlockedBy(Nmrx_NmrExpPrototype self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.NmrExpPrototype.name

name of experiment 
prototype
  @param  Nmrx_NmrExpPrototype self
  @param  ApiString value
**/
void *Nmrx_NmrExpPrototype_SetName(Nmrx_NmrExpPrototype self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.NmrExpPrototype.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrx_NmrExpPrototype self
  @param  ApiInteger value
**/
void *Nmrx_NmrExpPrototype_SetSerial(Nmrx_NmrExpPrototype self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.NmrExpPrototype.NmrExpPrototype.synonym

Alternative 
name of NmrExpPrototype. Used for experiments with well-established 
non-systematic name.
  @param  Nmrx_NmrExpPrototype self
  @param  ApiString value
**/
void *Nmrx_NmrExpPrototype_SetSynonym(Nmrx_NmrExpPrototype self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSynonym");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'setSynonym'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'setSynonym' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrExpPrototype.NmrExpPrototype.atomSites

child link 
to class AtomSite
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiList Nmrx_NmrExpPrototype_SortedAtomSites(Nmrx_NmrExpPrototype self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAtomSites");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'sortedAtomSites'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'sortedAtomSites' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrExpPrototype.NmrExpPrototype.expGraphs

child link 
to class ExpGraph
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiList Nmrx_NmrExpPrototype_SortedExpGraphs(Nmrx_NmrExpPrototype self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExpGraphs");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'sortedExpGraphs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'sortedExpGraphs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.nmr.NmrExpPrototype.NmrExpPrototype.expMeasurements

child link to 
class ExpMeasurement
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiList Nmrx_NmrExpPrototype_SortedExpMeasurements(Nmrx_NmrExpPrototype self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedExpMeasurements");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'sortedExpMeasurements'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'sortedExpMeasurements' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.NmrExpPrototype.NmrExpPrototype.refExperiments

child 
link to class RefExperiment
  @param  Nmrx_NmrExpPrototype self
  @returns   the result
**/
ApiList Nmrx_NmrExpPrototype_SortedRefExperiments(Nmrx_NmrExpPrototype self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRefExperiments");
  
  if (!method)
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: cannot find method 'sortedRefExperiments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.NmrExpPrototype.NmrExpPrototype: method 'sortedRefExperiments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
