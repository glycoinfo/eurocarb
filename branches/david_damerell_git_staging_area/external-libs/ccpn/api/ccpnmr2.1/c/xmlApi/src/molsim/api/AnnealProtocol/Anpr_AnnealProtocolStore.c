
#include "ccp.h"

/*
  Grouping of AnnealProtocols
*/

/* package molsim.api.AnnealProtocol */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocolStore self
  @param  Impl_ApplicationData value
**/
void *Anpr_AnnealProtocolStore_AddApplicationData(Anpr_AnnealProtocolStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for molsim.AnnealProtocol.AnnealProtocolStore
  @param  Anpr_AnnealProtocolStore self
  @param  ApiBoolean complete
**/
void *Anpr_AnnealProtocolStore_CheckAllValid(Anpr_AnnealProtocolStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for molsim.AnnealProtocol.AnnealProtocolStore
  @param  Anpr_AnnealProtocolStore self
  @param  ApiBoolean complete
**/
void *Anpr_AnnealProtocolStore_CheckValid(Anpr_AnnealProtocolStore self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'checkValid' is not callable");
  
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
  @param  Anpr_AnnealProtocolStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_AnnealProtocolStore_FindAllActiveRepositories(Anpr_AnnealProtocolStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'findAllActiveRepositories' is not callable");
  
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
  @param  Anpr_AnnealProtocolStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_AnnealProtocolStore_FindAllActiveRepositories_keyval0(Anpr_AnnealProtocolStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_AnnealProtocolStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anpr_AnnealProtocolStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_AnnealProtocolStore_FindAllActiveRepositories_keyval1(Anpr_AnnealProtocolStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_AnnealProtocolStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_AnnealProtocolStore_FindAllActiveRepositories_keyval2(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_AnnealProtocolStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_AnnealProtocolStore_FindAllActiveRepositories_keyval3(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_AnnealProtocolStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anpr_AnnealProtocolStore self
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
ApiList Anpr_AnnealProtocolStore_FindAllActiveRepositories_keyval4(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_AnnealProtocolStore_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.AnnealProtocolStore.annealProtocols

child link to 
class AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealProtocolStore_FindAllAnnealProtocols(Anpr_AnnealProtocolStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAnnealProtocols");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'findAllAnnealProtocols'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'findAllAnnealProtocols' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.AnnealProtocolStore.annealProtocols

child link to 
class AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealProtocolStore_FindAllAnnealProtocols_keyval0(Anpr_AnnealProtocolStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_AnnealProtocolStore_FindAllAnnealProtocols(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.AnnealProtocolStore.annealProtocols

child link to 
class AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealProtocolStore_FindAllAnnealProtocols_keyval1(Anpr_AnnealProtocolStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_AnnealProtocolStore_FindAllAnnealProtocols(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.AnnealProtocolStore.annealProtocols

child link to 
class AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealProtocolStore_FindAllAnnealProtocols_keyval2(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_AnnealProtocolStore_FindAllAnnealProtocols(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.AnnealProtocolStore.annealProtocols

child link to 
class AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealProtocolStore_FindAllAnnealProtocols_keyval3(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_AnnealProtocolStore_FindAllAnnealProtocols(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.AnnealProtocolStore.annealProtocols

child link to 
class AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
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
ApiSet Anpr_AnnealProtocolStore_FindAllAnnealProtocols_keyval4(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_AnnealProtocolStore_FindAllAnnealProtocols(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocolStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_AnnealProtocolStore_FindAllApplicationData(Anpr_AnnealProtocolStore self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'findAllApplicationData' is not callable");
  
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
  @param  Anpr_AnnealProtocolStore self
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_AnnealProtocolStore_FindAllApplicationData_keyval0(Anpr_AnnealProtocolStore self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_AnnealProtocolStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocolStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_AnnealProtocolStore_FindAllApplicationData_keyval1(Anpr_AnnealProtocolStore self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_AnnealProtocolStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_AnnealProtocolStore_FindAllApplicationData_keyval2(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_AnnealProtocolStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Anpr_AnnealProtocolStore_FindAllApplicationData_keyval3(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_AnnealProtocolStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocolStore self
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
ApiList Anpr_AnnealProtocolStore_FindAllApplicationData_keyval4(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_AnnealProtocolStore_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.AnnealProtocolStore.refPotentialTerms

child link 
to class RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealProtocolStore_FindAllRefPotentialTerms(Anpr_AnnealProtocolStore self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRefPotentialTerms");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'findAllRefPotentialTerms'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'findAllRefPotentialTerms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.AnnealProtocolStore.refPotentialTerms

child link 
to class RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealProtocolStore_FindAllRefPotentialTerms_keyval0(Anpr_AnnealProtocolStore self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_AnnealProtocolStore_FindAllRefPotentialTerms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.AnnealProtocolStore.refPotentialTerms

child link 
to class RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealProtocolStore_FindAllRefPotentialTerms_keyval1(Anpr_AnnealProtocolStore self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_AnnealProtocolStore_FindAllRefPotentialTerms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.AnnealProtocolStore.refPotentialTerms

child link 
to class RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealProtocolStore_FindAllRefPotentialTerms_keyval2(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_AnnealProtocolStore_FindAllRefPotentialTerms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.AnnealProtocolStore.refPotentialTerms

child link 
to class RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Anpr_AnnealProtocolStore_FindAllRefPotentialTerms_keyval3(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_AnnealProtocolStore_FindAllRefPotentialTerms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
molsim.AnnealProtocol.AnnealProtocolStore.refPotentialTerms

child link 
to class RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
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
ApiSet Anpr_AnnealProtocolStore_FindAllRefPotentialTerms_keyval4(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_AnnealProtocolStore_FindAllRefPotentialTerms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anpr_AnnealProtocolStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Anpr_AnnealProtocolStore_FindFirstActiveRepository(Anpr_AnnealProtocolStore self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'findFirstActiveRepository' is not callable");
  
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
  @param  Anpr_AnnealProtocolStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Anpr_AnnealProtocolStore_FindFirstActiveRepository_keyval0(Anpr_AnnealProtocolStore self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_AnnealProtocolStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anpr_AnnealProtocolStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Anpr_AnnealProtocolStore_FindFirstActiveRepository_keyval1(Anpr_AnnealProtocolStore self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_AnnealProtocolStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Anpr_AnnealProtocolStore_FindFirstActiveRepository_keyval2(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_AnnealProtocolStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Anpr_AnnealProtocolStore_FindFirstActiveRepository_keyval3(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_AnnealProtocolStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Anpr_AnnealProtocolStore self
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
Impl_Repository Anpr_AnnealProtocolStore_FindFirstActiveRepository_keyval4(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_AnnealProtocolStore_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealProtocolStore.annealProtocols

child link to 
class AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anpr_AnnealProtocol Anpr_AnnealProtocolStore_FindFirstAnnealProtocol(Anpr_AnnealProtocolStore self, ApiMap conditions)
{
  
  Anpr_AnnealProtocol obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAnnealProtocol");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'findFirstAnnealProtocol'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'findFirstAnnealProtocol' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealProtocolStore.annealProtocols

child link to 
class AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
  @returns  the first value that satisfies the conditions 
**/
Anpr_AnnealProtocol Anpr_AnnealProtocolStore_FindFirstAnnealProtocol_keyval0(Anpr_AnnealProtocolStore self)
{
  
  Anpr_AnnealProtocol  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_AnnealProtocolStore_FindFirstAnnealProtocol(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealProtocolStore.annealProtocols

child link to 
class AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anpr_AnnealProtocol Anpr_AnnealProtocolStore_FindFirstAnnealProtocol_keyval1(Anpr_AnnealProtocolStore self, char * key, ApiObject value)
{
  
  Anpr_AnnealProtocol  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_AnnealProtocolStore_FindFirstAnnealProtocol(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealProtocolStore.annealProtocols

child link to 
class AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anpr_AnnealProtocol Anpr_AnnealProtocolStore_FindFirstAnnealProtocol_keyval2(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anpr_AnnealProtocol  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_AnnealProtocolStore_FindFirstAnnealProtocol(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealProtocolStore.annealProtocols

child link to 
class AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anpr_AnnealProtocol Anpr_AnnealProtocolStore_FindFirstAnnealProtocol_keyval3(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anpr_AnnealProtocol  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_AnnealProtocolStore_FindFirstAnnealProtocol(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealProtocolStore.annealProtocols

child link to 
class AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
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
Anpr_AnnealProtocol Anpr_AnnealProtocolStore_FindFirstAnnealProtocol_keyval4(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anpr_AnnealProtocol  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_AnnealProtocolStore_FindFirstAnnealProtocol(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocolStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_AnnealProtocolStore_FindFirstApplicationData(Anpr_AnnealProtocolStore self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'findFirstApplicationData' is not callable");
  
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
  @param  Anpr_AnnealProtocolStore self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_AnnealProtocolStore_FindFirstApplicationData_keyval0(Anpr_AnnealProtocolStore self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_AnnealProtocolStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocolStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_AnnealProtocolStore_FindFirstApplicationData_keyval1(Anpr_AnnealProtocolStore self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_AnnealProtocolStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_AnnealProtocolStore_FindFirstApplicationData_keyval2(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_AnnealProtocolStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Anpr_AnnealProtocolStore_FindFirstApplicationData_keyval3(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_AnnealProtocolStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocolStore self
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
Impl_ApplicationData Anpr_AnnealProtocolStore_FindFirstApplicationData_keyval4(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_AnnealProtocolStore_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealProtocolStore.refPotentialTerms

child link 
to class RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Anpr_RefPotentialTerm Anpr_AnnealProtocolStore_FindFirstRefPotentialTerm(Anpr_AnnealProtocolStore self, ApiMap conditions)
{
  
  Anpr_RefPotentialTerm obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRefPotentialTerm");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'findFirstRefPotentialTerm'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'findFirstRefPotentialTerm' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealProtocolStore.refPotentialTerms

child link 
to class RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
  @returns  the first value that satisfies the conditions 
**/
Anpr_RefPotentialTerm Anpr_AnnealProtocolStore_FindFirstRefPotentialTerm_keyval0(Anpr_AnnealProtocolStore self)
{
  
  Anpr_RefPotentialTerm  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Anpr_AnnealProtocolStore_FindFirstRefPotentialTerm(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealProtocolStore.refPotentialTerms

child link 
to class RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Anpr_RefPotentialTerm Anpr_AnnealProtocolStore_FindFirstRefPotentialTerm_keyval1(Anpr_AnnealProtocolStore self, char * key, ApiObject value)
{
  
  Anpr_RefPotentialTerm  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Anpr_AnnealProtocolStore_FindFirstRefPotentialTerm(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealProtocolStore.refPotentialTerms

child link 
to class RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Anpr_RefPotentialTerm Anpr_AnnealProtocolStore_FindFirstRefPotentialTerm_keyval2(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Anpr_RefPotentialTerm  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Anpr_AnnealProtocolStore_FindFirstRefPotentialTerm(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealProtocolStore.refPotentialTerms

child link 
to class RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Anpr_RefPotentialTerm Anpr_AnnealProtocolStore_FindFirstRefPotentialTerm_keyval3(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Anpr_RefPotentialTerm  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Anpr_AnnealProtocolStore_FindFirstRefPotentialTerm(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
molsim.AnnealProtocol.AnnealProtocolStore.refPotentialTerms

child link 
to class RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
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
Anpr_RefPotentialTerm Anpr_AnnealProtocolStore_FindFirstRefPotentialTerm_keyval4(Anpr_AnnealProtocolStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Anpr_RefPotentialTerm  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Anpr_AnnealProtocolStore_FindFirstRefPotentialTerm(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for molsim.AnnealProtocol.AnnealProtocolStore
  @param  Anpr_AnnealProtocolStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Anpr_AnnealProtocolStore_Get(Anpr_AnnealProtocolStore self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
Acco_AccessObject Anpr_AnnealProtocolStore_GetAccess(Anpr_AnnealProtocolStore self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'getAccess' is not callable");
  
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
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
Acco_AccessObject Anpr_AnnealProtocolStore_GetActiveAccess(Anpr_AnnealProtocolStore self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'getActiveAccess' is not callable");
  
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
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
ApiList Anpr_AnnealProtocolStore_GetActiveRepositories(Anpr_AnnealProtocolStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'getActiveRepositories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.AnnealProtocolStore.annealProtocols

child 
link to class AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
ApiSet Anpr_AnnealProtocolStore_GetAnnealProtocols(Anpr_AnnealProtocolStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAnnealProtocols");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'getAnnealProtocols'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'getAnnealProtocols' is not callable");
  
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
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
ApiList Anpr_AnnealProtocolStore_GetApplicationData(Anpr_AnnealProtocolStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for molsim.AnnealProtocol.AnnealProtocolStore
  @param  Anpr_AnnealProtocolStore self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Anpr_AnnealProtocolStore Anpr_AnnealProtocolStore_GetByKey(Anpr_AnnealProtocolStore self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Anpr_AnnealProtocolStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'getByKey' is not callable");
  
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
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
ApiString Anpr_AnnealProtocolStore_GetClassName(Anpr_AnnealProtocolStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'getClassName' is not callable");
  
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
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
ApiString Anpr_AnnealProtocolStore_GetCreatedBy(Anpr_AnnealProtocolStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'getCreatedBy' is not callable");
  
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
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
ApiList Anpr_AnnealProtocolStore_GetFieldNames(Anpr_AnnealProtocolStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for molsim.AnnealProtocol.AnnealProtocolStore
  @param  Anpr_AnnealProtocolStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Anpr_AnnealProtocolStore_GetFullKey(Anpr_AnnealProtocolStore self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'getFullKey' is not callable");
  
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
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
ApiString Anpr_AnnealProtocolStore_GetGuid(Anpr_AnnealProtocolStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'getGuid' is not callable");
  
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
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
ApiBoolean Anpr_AnnealProtocolStore_GetInConstructor(Anpr_AnnealProtocolStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'getInConstructor' is not callable");
  
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
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
ApiBoolean Anpr_AnnealProtocolStore_GetIsDeleted(Anpr_AnnealProtocolStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'getIsDeleted' is not callable");
  
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
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
ApiBoolean Anpr_AnnealProtocolStore_GetIsLoaded(Anpr_AnnealProtocolStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'getIsLoaded' is not callable");
  
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
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
ApiBoolean Anpr_AnnealProtocolStore_GetIsModifiable(Anpr_AnnealProtocolStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'getIsModifiable' is not callable");
  
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
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
ApiBoolean Anpr_AnnealProtocolStore_GetIsModified(Anpr_AnnealProtocolStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'getIsModified' is not callable");
  
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
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
ApiBoolean Anpr_AnnealProtocolStore_GetIsReading(Anpr_AnnealProtocolStore self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'getIsReading' is not callable");
  
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
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
ApiString Anpr_AnnealProtocolStore_GetLastUnlockedBy(Anpr_AnnealProtocolStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'getLastUnlockedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for molsim.AnnealProtocol.AnnealProtocolStore
  @param  Anpr_AnnealProtocolStore self
  @returns  Local object key
**/
ApiObject Anpr_AnnealProtocolStore_GetLocalKey(Anpr_AnnealProtocolStore self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.AnnealProtocolStore.memopsRoot

parent 
link
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
Impl_MemopsRoot Anpr_AnnealProtocolStore_GetMemopsRoot(Anpr_AnnealProtocolStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.AnnealProtocolStore.name

AnnealProtocol 
name.
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
ApiString Anpr_AnnealProtocolStore_GetName(Anpr_AnnealProtocolStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'getName' is not callable");
  
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
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
Impl_PackageLocator Anpr_AnnealProtocolStore_GetPackageLocator(Anpr_AnnealProtocolStore self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'getPackageLocator' is not callable");
  
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
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
ApiString Anpr_AnnealProtocolStore_GetPackageName(Anpr_AnnealProtocolStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'getPackageName' is not callable");
  
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
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
ApiString Anpr_AnnealProtocolStore_GetPackageShortName(Anpr_AnnealProtocolStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for molsim.AnnealProtocol.AnnealProtocolStore.parent

link to parent 
object - synonym for memopsRoot
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
Impl_MemopsRoot Anpr_AnnealProtocolStore_GetParent(Anpr_AnnealProtocolStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'getParent' is not callable");
  
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
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
ApiString Anpr_AnnealProtocolStore_GetQualifiedName(Anpr_AnnealProtocolStore self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
molsim.AnnealProtocol.AnnealProtocolStore.refPotentialTerms

child link 
to class RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
ApiSet Anpr_AnnealProtocolStore_GetRefPotentialTerms(Anpr_AnnealProtocolStore self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefPotentialTerms");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'getRefPotentialTerms'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'getRefPotentialTerms' is not callable");
  
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
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
Impl_MemopsRoot Anpr_AnnealProtocolStore_GetRoot(Anpr_AnnealProtocolStore self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'getRoot' is not callable");
  
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
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
Impl_TopObject Anpr_AnnealProtocolStore_GetTopObject(Anpr_AnnealProtocolStore self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for molsim.AnnealProtocol.AnnealProtocolStore
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anpr_AnnealProtocolStore Anpr_AnnealProtocolStore_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewAnnealProtocolStore(parent, attrlinks);
}

/**
  Constructor for molsim.AnnealProtocol.AnnealProtocolStore
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
Anpr_AnnealProtocolStore Anpr_AnnealProtocolStore_Init_reqd(Impl_MemopsRoot parent, char * name)
{
  
  Anpr_AnnealProtocolStore  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Anpr_AnnealProtocolStore_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create molsim.AnnealProtocol.AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anpr_AnnealProtocol Anpr_AnnealProtocolStore_NewAnnealProtocol(Anpr_AnnealProtocolStore self, ApiMap attrlinks)
{
  
  Anpr_AnnealProtocol obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAnnealProtocol");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'newAnnealProtocol'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'newAnnealProtocol' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create molsim.AnnealProtocol.AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
  @param  char * application
  @param  char * code
  @param  char * name
  @returns  the new object
**/
Anpr_AnnealProtocol Anpr_AnnealProtocolStore_NewAnnealProtocol_reqd(Anpr_AnnealProtocolStore self, char * application, char * code, char * name)
{
  
  Anpr_AnnealProtocol  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__application = ApiString_New(application);
  ApiString api__code = ApiString_New(code);
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "application", api__application);
  PyDict_SetItemString(attrlinks, "code", api__code);
  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Anpr_AnnealProtocolStore_NewAnnealProtocol(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__application);
  Py_DECREF(api__code);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create molsim.AnnealProtocol.RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Anpr_RefPotentialTerm Anpr_AnnealProtocolStore_NewRefPotentialTerm(Anpr_AnnealProtocolStore self, ApiMap attrlinks)
{
  
  Anpr_RefPotentialTerm obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newRefPotentialTerm");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'newRefPotentialTerm'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'newRefPotentialTerm' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create molsim.AnnealProtocol.RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
  @param  char * code
  @param  ApiInteger index
  @returns  the new object
**/
Anpr_RefPotentialTerm Anpr_AnnealProtocolStore_NewRefPotentialTerm_reqd(Anpr_AnnealProtocolStore self, char * code, ApiInteger index)
{
  
  Anpr_RefPotentialTerm  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__code = ApiString_New(code);

  PyDict_SetItemString(attrlinks, "code", api__code);
  PyDict_SetItemString(attrlinks, "index", index);
  
  obj = Anpr_AnnealProtocolStore_NewRefPotentialTerm(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__code);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Anpr_AnnealProtocolStore self
  @param  Impl_ApplicationData value
**/
void *Anpr_AnnealProtocolStore_RemoveApplicationData(Anpr_AnnealProtocolStore self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for molsim.AnnealProtocol.AnnealProtocolStore
  @param  Anpr_AnnealProtocolStore self
  @param  ApiString name
  @param  ApiObject value
**/
void *Anpr_AnnealProtocolStore_Set(Anpr_AnnealProtocolStore self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Anpr_AnnealProtocolStore self
  @param  Acco_AccessObject value
**/
void *Anpr_AnnealProtocolStore_SetAccess(Anpr_AnnealProtocolStore self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'setAccess' is not callable");
  
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
  @param  Anpr_AnnealProtocolStore self
  @param  ApiList values
**/
void *Anpr_AnnealProtocolStore_SetApplicationData(Anpr_AnnealProtocolStore self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Anpr_AnnealProtocolStore self
  @param  ApiString value
**/
void *Anpr_AnnealProtocolStore_SetCreatedBy(Anpr_AnnealProtocolStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'setCreatedBy' is not callable");
  
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
  @param  Anpr_AnnealProtocolStore self
  @param  ApiString value
**/
void *Anpr_AnnealProtocolStore_SetGuid(Anpr_AnnealProtocolStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'setGuid' is not callable");
  
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
  @param  Anpr_AnnealProtocolStore self
  @param  ApiBoolean value
**/
void *Anpr_AnnealProtocolStore_SetIsModifiable(Anpr_AnnealProtocolStore self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'setIsModifiable' is not callable");
  
  args = PyTuple_Pack(1, value);
  
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
  @param  Anpr_AnnealProtocolStore self
  @param  ApiString value
**/
void *Anpr_AnnealProtocolStore_SetLastUnlockedBy(Anpr_AnnealProtocolStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for molsim.AnnealProtocol.AnnealProtocolStore.name

AnnealProtocol 
name.
  @param  Anpr_AnnealProtocolStore self
  @param  ApiString value
**/
void *Anpr_AnnealProtocolStore_SetName(Anpr_AnnealProtocolStore self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
molsim.AnnealProtocol.AnnealProtocolStore.annealProtocols

child link to 
class AnnealProtocol
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
ApiList Anpr_AnnealProtocolStore_SortedAnnealProtocols(Anpr_AnnealProtocolStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAnnealProtocols");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'sortedAnnealProtocols'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'sortedAnnealProtocols' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
molsim.AnnealProtocol.AnnealProtocolStore.refPotentialTerms

child link 
to class RefPotentialTerm
  @param  Anpr_AnnealProtocolStore self
  @returns   the result
**/
ApiList Anpr_AnnealProtocolStore_SortedRefPotentialTerms(Anpr_AnnealProtocolStore self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedRefPotentialTerms");
  
  if (!method)
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: cannot find method 'sortedRefPotentialTerms'");
  if (!PyCallable_Check(method))
    return raiseApiException("molsim.AnnealProtocol.AnnealProtocolStore: method 'sortedRefPotentialTerms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
