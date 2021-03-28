
#include "ccp.h"

/*
  ChemComp for which you are describing partial charges etc.
*/

/* package ccp.api.molecule.ChemCompCharge */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemCompCharge self
  @param  Impl_ApplicationData value
**/
void *Ccca_ChemCompCharge_AddApplicationData(Ccca_ChemCompCharge self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.ChemCompCharge.ChemCompCharge
  @param  Ccca_ChemCompCharge self
  @param  ApiBoolean complete
**/
void *Ccca_ChemCompCharge_CheckAllValid(Ccca_ChemCompCharge self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.ChemCompCharge.ChemCompCharge
  @param  Ccca_ChemCompCharge self
  @param  ApiBoolean complete
**/
void *Ccca_ChemCompCharge_CheckValid(Ccca_ChemCompCharge self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'checkValid' is not callable");
  
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
  @param  Ccca_ChemCompCharge self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Ccca_ChemCompCharge_FindAllActiveRepositories(Ccca_ChemCompCharge self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'findAllActiveRepositories' is not callable");
  
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
  @param  Ccca_ChemCompCharge self
  @returns  all value that satisfy the conditions 
**/
ApiList Ccca_ChemCompCharge_FindAllActiveRepositories_keyval0(Ccca_ChemCompCharge self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccca_ChemCompCharge_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccca_ChemCompCharge self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Ccca_ChemCompCharge_FindAllActiveRepositories_keyval1(Ccca_ChemCompCharge self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccca_ChemCompCharge_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccca_ChemCompCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Ccca_ChemCompCharge_FindAllActiveRepositories_keyval2(Ccca_ChemCompCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccca_ChemCompCharge_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccca_ChemCompCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Ccca_ChemCompCharge_FindAllActiveRepositories_keyval3(Ccca_ChemCompCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccca_ChemCompCharge_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccca_ChemCompCharge self
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
ApiList Ccca_ChemCompCharge_FindAllActiveRepositories_keyval4(Ccca_ChemCompCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccca_ChemCompCharge_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemCompCharge self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Ccca_ChemCompCharge_FindAllApplicationData(Ccca_ChemCompCharge self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'findAllApplicationData' is not callable");
  
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
  @param  Ccca_ChemCompCharge self
  @returns  all value that satisfy the conditions 
**/
ApiList Ccca_ChemCompCharge_FindAllApplicationData_keyval0(Ccca_ChemCompCharge self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccca_ChemCompCharge_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemCompCharge self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Ccca_ChemCompCharge_FindAllApplicationData_keyval1(Ccca_ChemCompCharge self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccca_ChemCompCharge_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemCompCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Ccca_ChemCompCharge_FindAllApplicationData_keyval2(Ccca_ChemCompCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccca_ChemCompCharge_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemCompCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Ccca_ChemCompCharge_FindAllApplicationData_keyval3(Ccca_ChemCompCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccca_ChemCompCharge_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemCompCharge self
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
ApiList Ccca_ChemCompCharge_FindAllApplicationData_keyval4(Ccca_ChemCompCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccca_ChemCompCharge_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemCompCharge.chemAtomCharges

child link 
to class ChemAtomCharge
  @param  Ccca_ChemCompCharge self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccca_ChemCompCharge_FindAllChemAtomCharges(Ccca_ChemCompCharge self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemAtomCharges");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'findAllChemAtomCharges'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'findAllChemAtomCharges' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemCompCharge.chemAtomCharges

child link 
to class ChemAtomCharge
  @param  Ccca_ChemCompCharge self
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccca_ChemCompCharge_FindAllChemAtomCharges_keyval0(Ccca_ChemCompCharge self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccca_ChemCompCharge_FindAllChemAtomCharges(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemCompCharge.chemAtomCharges

child link 
to class ChemAtomCharge
  @param  Ccca_ChemCompCharge self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccca_ChemCompCharge_FindAllChemAtomCharges_keyval1(Ccca_ChemCompCharge self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccca_ChemCompCharge_FindAllChemAtomCharges(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemCompCharge.chemAtomCharges

child link 
to class ChemAtomCharge
  @param  Ccca_ChemCompCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccca_ChemCompCharge_FindAllChemAtomCharges_keyval2(Ccca_ChemCompCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccca_ChemCompCharge_FindAllChemAtomCharges(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemCompCharge.chemAtomCharges

child link 
to class ChemAtomCharge
  @param  Ccca_ChemCompCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccca_ChemCompCharge_FindAllChemAtomCharges_keyval3(Ccca_ChemCompCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccca_ChemCompCharge_FindAllChemAtomCharges(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemCompCharge.chemAtomCharges

child link 
to class ChemAtomCharge
  @param  Ccca_ChemCompCharge self
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
ApiSet Ccca_ChemCompCharge_FindAllChemAtomCharges_keyval4(Ccca_ChemCompCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccca_ChemCompCharge_FindAllChemAtomCharges(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemCompCharge.chemCompVarCharges

child 
link to class ChemCompVarCharge
  @param  Ccca_ChemCompCharge self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccca_ChemCompCharge_FindAllChemCompVarCharges(Ccca_ChemCompCharge self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemCompVarCharges");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'findAllChemCompVarCharges'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'findAllChemCompVarCharges' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemCompCharge.chemCompVarCharges

child 
link to class ChemCompVarCharge
  @param  Ccca_ChemCompCharge self
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccca_ChemCompCharge_FindAllChemCompVarCharges_keyval0(Ccca_ChemCompCharge self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccca_ChemCompCharge_FindAllChemCompVarCharges(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemCompCharge.chemCompVarCharges

child 
link to class ChemCompVarCharge
  @param  Ccca_ChemCompCharge self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccca_ChemCompCharge_FindAllChemCompVarCharges_keyval1(Ccca_ChemCompCharge self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccca_ChemCompCharge_FindAllChemCompVarCharges(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemCompCharge.chemCompVarCharges

child 
link to class ChemCompVarCharge
  @param  Ccca_ChemCompCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccca_ChemCompCharge_FindAllChemCompVarCharges_keyval2(Ccca_ChemCompCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccca_ChemCompCharge_FindAllChemCompVarCharges(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemCompCharge.chemCompVarCharges

child 
link to class ChemCompVarCharge
  @param  Ccca_ChemCompCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccca_ChemCompCharge_FindAllChemCompVarCharges_keyval3(Ccca_ChemCompCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccca_ChemCompCharge_FindAllChemCompVarCharges(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemCompCharge.chemCompVarCharges

child 
link to class ChemCompVarCharge
  @param  Ccca_ChemCompCharge self
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
ApiSet Ccca_ChemCompCharge_FindAllChemCompVarCharges_keyval4(Ccca_ChemCompCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccca_ChemCompCharge_FindAllChemCompVarCharges(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccca_ChemCompCharge self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Ccca_ChemCompCharge_FindFirstActiveRepository(Ccca_ChemCompCharge self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'findFirstActiveRepository' is not callable");
  
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
  @param  Ccca_ChemCompCharge self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Ccca_ChemCompCharge_FindFirstActiveRepository_keyval0(Ccca_ChemCompCharge self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccca_ChemCompCharge_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccca_ChemCompCharge self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Ccca_ChemCompCharge_FindFirstActiveRepository_keyval1(Ccca_ChemCompCharge self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccca_ChemCompCharge_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccca_ChemCompCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Ccca_ChemCompCharge_FindFirstActiveRepository_keyval2(Ccca_ChemCompCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccca_ChemCompCharge_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccca_ChemCompCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Ccca_ChemCompCharge_FindFirstActiveRepository_keyval3(Ccca_ChemCompCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccca_ChemCompCharge_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccca_ChemCompCharge self
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
Impl_Repository Ccca_ChemCompCharge_FindFirstActiveRepository_keyval4(Ccca_ChemCompCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccca_ChemCompCharge_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemCompCharge self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccca_ChemCompCharge_FindFirstApplicationData(Ccca_ChemCompCharge self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'findFirstApplicationData' is not callable");
  
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
  @param  Ccca_ChemCompCharge self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccca_ChemCompCharge_FindFirstApplicationData_keyval0(Ccca_ChemCompCharge self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccca_ChemCompCharge_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemCompCharge self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccca_ChemCompCharge_FindFirstApplicationData_keyval1(Ccca_ChemCompCharge self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccca_ChemCompCharge_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemCompCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccca_ChemCompCharge_FindFirstApplicationData_keyval2(Ccca_ChemCompCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccca_ChemCompCharge_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemCompCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccca_ChemCompCharge_FindFirstApplicationData_keyval3(Ccca_ChemCompCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccca_ChemCompCharge_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemCompCharge self
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
Impl_ApplicationData Ccca_ChemCompCharge_FindFirstApplicationData_keyval4(Ccca_ChemCompCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccca_ChemCompCharge_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemCompCharge.chemAtomCharges

child link 
to class ChemAtomCharge
  @param  Ccca_ChemCompCharge self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Ccca_ChemAtomCharge Ccca_ChemCompCharge_FindFirstChemAtomCharge(Ccca_ChemCompCharge self, ApiMap conditions)
{
  
  Ccca_ChemAtomCharge obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemAtomCharge");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'findFirstChemAtomCharge'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'findFirstChemAtomCharge' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemCompCharge.chemAtomCharges

child link 
to class ChemAtomCharge
  @param  Ccca_ChemCompCharge self
  @returns  the first value that satisfies the conditions 
**/
Ccca_ChemAtomCharge Ccca_ChemCompCharge_FindFirstChemAtomCharge_keyval0(Ccca_ChemCompCharge self)
{
  
  Ccca_ChemAtomCharge  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccca_ChemCompCharge_FindFirstChemAtomCharge(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemCompCharge.chemAtomCharges

child link 
to class ChemAtomCharge
  @param  Ccca_ChemCompCharge self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Ccca_ChemAtomCharge Ccca_ChemCompCharge_FindFirstChemAtomCharge_keyval1(Ccca_ChemCompCharge self, char * key, ApiObject value)
{
  
  Ccca_ChemAtomCharge  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccca_ChemCompCharge_FindFirstChemAtomCharge(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemCompCharge.chemAtomCharges

child link 
to class ChemAtomCharge
  @param  Ccca_ChemCompCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Ccca_ChemAtomCharge Ccca_ChemCompCharge_FindFirstChemAtomCharge_keyval2(Ccca_ChemCompCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Ccca_ChemAtomCharge  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccca_ChemCompCharge_FindFirstChemAtomCharge(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemCompCharge.chemAtomCharges

child link 
to class ChemAtomCharge
  @param  Ccca_ChemCompCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Ccca_ChemAtomCharge Ccca_ChemCompCharge_FindFirstChemAtomCharge_keyval3(Ccca_ChemCompCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Ccca_ChemAtomCharge  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccca_ChemCompCharge_FindFirstChemAtomCharge(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemCompCharge.chemAtomCharges

child link 
to class ChemAtomCharge
  @param  Ccca_ChemCompCharge self
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
Ccca_ChemAtomCharge Ccca_ChemCompCharge_FindFirstChemAtomCharge_keyval4(Ccca_ChemCompCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Ccca_ChemAtomCharge  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccca_ChemCompCharge_FindFirstChemAtomCharge(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemCompCharge.chemCompVarCharges

child 
link to class ChemCompVarCharge
  @param  Ccca_ChemCompCharge self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Ccca_ChemCompVarCharge Ccca_ChemCompCharge_FindFirstChemCompVarCharge(Ccca_ChemCompCharge self, ApiMap conditions)
{
  
  Ccca_ChemCompVarCharge obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemCompVarCharge");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'findFirstChemCompVarCharge'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'findFirstChemCompVarCharge' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemCompCharge.chemCompVarCharges

child 
link to class ChemCompVarCharge
  @param  Ccca_ChemCompCharge self
  @returns  the first value that satisfies the conditions 
**/
Ccca_ChemCompVarCharge Ccca_ChemCompCharge_FindFirstChemCompVarCharge_keyval0(Ccca_ChemCompCharge self)
{
  
  Ccca_ChemCompVarCharge  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccca_ChemCompCharge_FindFirstChemCompVarCharge(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemCompCharge.chemCompVarCharges

child 
link to class ChemCompVarCharge
  @param  Ccca_ChemCompCharge self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Ccca_ChemCompVarCharge Ccca_ChemCompCharge_FindFirstChemCompVarCharge_keyval1(Ccca_ChemCompCharge self, char * key, ApiObject value)
{
  
  Ccca_ChemCompVarCharge  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccca_ChemCompCharge_FindFirstChemCompVarCharge(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemCompCharge.chemCompVarCharges

child 
link to class ChemCompVarCharge
  @param  Ccca_ChemCompCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Ccca_ChemCompVarCharge Ccca_ChemCompCharge_FindFirstChemCompVarCharge_keyval2(Ccca_ChemCompCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Ccca_ChemCompVarCharge  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccca_ChemCompCharge_FindFirstChemCompVarCharge(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemCompCharge.chemCompVarCharges

child 
link to class ChemCompVarCharge
  @param  Ccca_ChemCompCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Ccca_ChemCompVarCharge Ccca_ChemCompCharge_FindFirstChemCompVarCharge_keyval3(Ccca_ChemCompCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Ccca_ChemCompVarCharge  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccca_ChemCompCharge_FindFirstChemCompVarCharge(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemCompCharge.chemCompVarCharges

child 
link to class ChemCompVarCharge
  @param  Ccca_ChemCompCharge self
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
Ccca_ChemCompVarCharge Ccca_ChemCompCharge_FindFirstChemCompVarCharge_keyval4(Ccca_ChemCompCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Ccca_ChemCompVarCharge  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccca_ChemCompCharge_FindFirstChemCompVarCharge(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.ChemCompCharge.ChemCompCharge
  @param  Ccca_ChemCompCharge self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Ccca_ChemCompCharge_Get(Ccca_ChemCompCharge self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
Acco_AccessObject Ccca_ChemCompCharge_GetAccess(Ccca_ChemCompCharge self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getAccess' is not callable");
  
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
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
ApiList Ccca_ChemCompCharge_GetActiveRepositories(Ccca_ChemCompCharge self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getActiveRepositories' is not callable");
  
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
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
ApiList Ccca_ChemCompCharge_GetApplicationData(Ccca_ChemCompCharge self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.ChemCompCharge.ChemCompCharge
  @param  Ccca_ChemCompCharge self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Ccca_ChemCompCharge Ccca_ChemCompCharge_GetByKey(Ccca_ChemCompCharge self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Ccca_ChemCompCharge obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompCharge.ChemCompCharge.ccpCode

ccpCode for 
ChemComp
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
ApiString Ccca_ChemCompCharge_GetCcpCode(Ccca_ChemCompCharge self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCcpCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getCcpCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getCcpCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.ChemCompCharge.ChemCompCharge.chemAtomCharges

child link 
to class ChemAtomCharge
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
ApiSet Ccca_ChemCompCharge_GetChemAtomCharges(Ccca_ChemCompCharge self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAtomCharges");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getChemAtomCharges'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getChemAtomCharges' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link chemComp
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
Chem_ChemComp Ccca_ChemCompCharge_GetChemComp(Ccca_ChemCompCharge self)
{
  
  Chem_ChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemComp");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getChemComp'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getChemComp' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.ChemCompCharge.ChemCompCharge.chemCompVarCharges

child 
link to class ChemCompVarCharge
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
ApiSet Ccca_ChemCompCharge_GetChemCompVarCharges(Ccca_ChemCompCharge self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompVarCharges");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getChemCompVarCharges'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getChemCompVarCharges' is not callable");
  
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
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
ApiString Ccca_ChemCompCharge_GetClassName(Ccca_ChemCompCharge self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getClassName' is not callable");
  
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
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
ApiString Ccca_ChemCompCharge_GetCreatedBy(Ccca_ChemCompCharge self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getCreatedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompCharge.ChemCompCharge.details

Free text, 
for notes, explanatory comments, etc.
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
ApiString Ccca_ChemCompCharge_GetDetails(Ccca_ChemCompCharge self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getDetails' is not callable");
  
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
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
ApiList Ccca_ChemCompCharge_GetFieldNames(Ccca_ChemCompCharge self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.ChemCompCharge.ChemCompCharge
  @param  Ccca_ChemCompCharge self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Ccca_ChemCompCharge_GetFullKey(Ccca_ChemCompCharge self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getFullKey' is not callable");
  
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
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
ApiString Ccca_ChemCompCharge_GetGuid(Ccca_ChemCompCharge self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getGuid' is not callable");
  
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
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
ApiBoolean Ccca_ChemCompCharge_GetInConstructor(Ccca_ChemCompCharge self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getInConstructor' is not callable");
  
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
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
ApiBoolean Ccca_ChemCompCharge_GetIsDeleted(Ccca_ChemCompCharge self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getIsDeleted' is not callable");
  
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
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
ApiBoolean Ccca_ChemCompCharge_GetIsLoaded(Ccca_ChemCompCharge self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getIsLoaded' is not callable");
  
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
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
ApiBoolean Ccca_ChemCompCharge_GetIsModifiable(Ccca_ChemCompCharge self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getIsModifiable' is not callable");
  
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
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
ApiBoolean Ccca_ChemCompCharge_GetIsModified(Ccca_ChemCompCharge self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getIsModified' is not callable");
  
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
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
ApiBoolean Ccca_ChemCompCharge_GetIsReading(Ccca_ChemCompCharge self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getIsReading' is not callable");
  
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
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
ApiString Ccca_ChemCompCharge_GetLastUnlockedBy(Ccca_ChemCompCharge self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getLastUnlockedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.ChemCompCharge.ChemCompCharge
  @param  Ccca_ChemCompCharge self
  @returns  Local object key
**/
ApiObject Ccca_ChemCompCharge_GetLocalKey(Ccca_ChemCompCharge self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompCharge.ChemCompCharge.memopsRoot

parent 
link
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
Impl_MemopsRoot Ccca_ChemCompCharge_GetMemopsRoot(Ccca_ChemCompCharge self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompCharge.ChemCompCharge.molType

molType of 
ChemComp
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
ApiString Ccca_ChemCompCharge_GetMolType(Ccca_ChemCompCharge self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getMolType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getMolType' is not callable");
  
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
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
Impl_PackageLocator Ccca_ChemCompCharge_GetPackageLocator(Ccca_ChemCompCharge self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getPackageLocator' is not callable");
  
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
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
ApiString Ccca_ChemCompCharge_GetPackageName(Ccca_ChemCompCharge self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getPackageName' is not callable");
  
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
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
ApiString Ccca_ChemCompCharge_GetPackageShortName(Ccca_ChemCompCharge self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompCharge.ChemCompCharge.parent

link to 
parent object - synonym for memopsRoot
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
Impl_MemopsRoot Ccca_ChemCompCharge_GetParent(Ccca_ChemCompCharge self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getParent' is not callable");
  
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
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
ApiString Ccca_ChemCompCharge_GetQualifiedName(Ccca_ChemCompCharge self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getQualifiedName' is not callable");
  
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
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
Impl_MemopsRoot Ccca_ChemCompCharge_GetRoot(Ccca_ChemCompCharge self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompCharge.ChemCompCharge.sourceName

Name of 
information source for partial charges
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
ApiString Ccca_ChemCompCharge_GetSourceName(Ccca_ChemCompCharge self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSourceName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getSourceName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getSourceName' is not callable");
  
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
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
Impl_TopObject Ccca_ChemCompCharge_GetTopObject(Ccca_ChemCompCharge self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.ChemCompCharge.ChemCompCharge
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Ccca_ChemCompCharge Ccca_ChemCompCharge_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewChemCompCharge(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.ChemCompCharge.ChemCompCharge
  @param  Impl_MemopsRoot parent
  @param  char * ccpCode
  @param  char * molType
  @param  char * sourceName
  @returns  the new object
**/
Ccca_ChemCompCharge Ccca_ChemCompCharge_Init_reqd(Impl_MemopsRoot parent, char * ccpCode, char * molType, char * sourceName)
{
  
  Ccca_ChemCompCharge  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__ccpCode = ApiString_New(ccpCode);
  ApiString api__molType = ApiString_New(molType);
  ApiString api__sourceName = ApiString_New(sourceName);

  PyDict_SetItemString(attrlinks, "ccpCode", api__ccpCode);
  PyDict_SetItemString(attrlinks, "molType", api__molType);
  PyDict_SetItemString(attrlinks, "sourceName", api__sourceName);
  
  obj = Ccca_ChemCompCharge_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__ccpCode);
  Py_DECREF(api__molType);
  Py_DECREF(api__sourceName);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemCompCharge.ChemAtomCharge
  @param  Ccca_ChemCompCharge self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Ccca_ChemAtomCharge Ccca_ChemCompCharge_NewChemAtomCharge(Ccca_ChemCompCharge self, ApiMap attrlinks)
{
  
  Ccca_ChemAtomCharge obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newChemAtomCharge");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'newChemAtomCharge'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'newChemAtomCharge' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemCompCharge.ChemAtomCharge
  @param  Ccca_ChemCompCharge self
  @param  ApiSet chemCompVarCharges
  @param  char * name
  @param  float partialCharge
  @param  ApiInteger subType
  @returns  the new object
**/
Ccca_ChemAtomCharge Ccca_ChemCompCharge_NewChemAtomCharge_reqd(Ccca_ChemCompCharge self, ApiSet chemCompVarCharges, char * name, float partialCharge, ApiInteger subType)
{
  
  Ccca_ChemAtomCharge  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);
  ApiFloat api__partialCharge = ApiFloat_New(partialCharge);

  PyDict_SetItemString(attrlinks, "chemCompVarCharges", chemCompVarCharges);
  PyDict_SetItemString(attrlinks, "name", api__name);
  PyDict_SetItemString(attrlinks, "partialCharge", api__partialCharge);
  PyDict_SetItemString(attrlinks, "subType", subType);
  
  obj = Ccca_ChemCompCharge_NewChemAtomCharge(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  Py_DECREF(api__partialCharge);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemCompCharge.ChemCompVarCharge
  @param  Ccca_ChemCompCharge self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Ccca_ChemCompVarCharge Ccca_ChemCompCharge_NewChemCompVarCharge(Ccca_ChemCompCharge self, ApiMap attrlinks)
{
  
  Ccca_ChemCompVarCharge obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newChemCompVarCharge");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'newChemCompVarCharge'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'newChemCompVarCharge' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemCompCharge.ChemCompVarCharge
  @param  Ccca_ChemCompCharge self
  @returns  the new object
**/
Ccca_ChemCompVarCharge Ccca_ChemCompCharge_NewChemCompVarCharge_reqd(Ccca_ChemCompCharge self)
{
  
  Ccca_ChemCompVarCharge  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Ccca_ChemCompCharge_NewChemCompVarCharge(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemCompCharge self
  @param  Impl_ApplicationData value
**/
void *Ccca_ChemCompCharge_RemoveApplicationData(Ccca_ChemCompCharge self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.ChemCompCharge.ChemCompCharge
  @param  Ccca_ChemCompCharge self
  @param  ApiString name
  @param  ApiObject value
**/
void *Ccca_ChemCompCharge_Set(Ccca_ChemCompCharge self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Ccca_ChemCompCharge self
  @param  Acco_AccessObject value
**/
void *Ccca_ChemCompCharge_SetAccess(Ccca_ChemCompCharge self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'setAccess' is not callable");
  
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
  @param  Ccca_ChemCompCharge self
  @param  ApiList values
**/
void *Ccca_ChemCompCharge_SetApplicationData(Ccca_ChemCompCharge self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemCompCharge.ChemCompCharge.ccpCode

ccpCode for 
ChemComp
  @param  Ccca_ChemCompCharge self
  @param  ApiString value
**/
void *Ccca_ChemCompCharge_SetCcpCode(Ccca_ChemCompCharge self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCcpCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'setCcpCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'setCcpCode' is not callable");
  
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
  @param  Ccca_ChemCompCharge self
  @param  ApiString value
**/
void *Ccca_ChemCompCharge_SetCreatedBy(Ccca_ChemCompCharge self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'setCreatedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemCompCharge.ChemCompCharge.details

Free text, 
for notes, explanatory comments, etc.
  @param  Ccca_ChemCompCharge self
  @param  ApiString value
**/
void *Ccca_ChemCompCharge_SetDetails(Ccca_ChemCompCharge self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'setDetails' is not callable");
  
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
  @param  Ccca_ChemCompCharge self
  @param  ApiString value
**/
void *Ccca_ChemCompCharge_SetGuid(Ccca_ChemCompCharge self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'setGuid' is not callable");
  
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
  @param  Ccca_ChemCompCharge self
  @param  ApiBoolean value
**/
void *Ccca_ChemCompCharge_SetIsModifiable(Ccca_ChemCompCharge self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'setIsModifiable' is not callable");
  
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
  @param  Ccca_ChemCompCharge self
  @param  ApiString value
**/
void *Ccca_ChemCompCharge_SetLastUnlockedBy(Ccca_ChemCompCharge self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemCompCharge.ChemCompCharge.molType

molType of 
ChemComp
  @param  Ccca_ChemCompCharge self
  @param  ApiString value
**/
void *Ccca_ChemCompCharge_SetMolType(Ccca_ChemCompCharge self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'setMolType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'setMolType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemCompCharge.ChemCompCharge.sourceName

Name of 
information source for partial charges
  @param  Ccca_ChemCompCharge self
  @param  ApiString value
**/
void *Ccca_ChemCompCharge_SetSourceName(Ccca_ChemCompCharge self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSourceName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'setSourceName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'setSourceName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.ChemCompCharge.ChemCompCharge.chemAtomCharges

child link 
to class ChemAtomCharge
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
ApiList Ccca_ChemCompCharge_SortedChemAtomCharges(Ccca_ChemCompCharge self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemAtomCharges");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'sortedChemAtomCharges'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'sortedChemAtomCharges' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.ChemCompCharge.ChemCompCharge.chemCompVarCharges

child 
link to class ChemCompVarCharge
  @param  Ccca_ChemCompCharge self
  @returns   the result
**/
ApiList Ccca_ChemCompCharge_SortedChemCompVarCharges(Ccca_ChemCompCharge self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemCompVarCharges");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: cannot find method 'sortedChemCompVarCharges'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemCompCharge: method 'sortedChemCompVarCharges' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
