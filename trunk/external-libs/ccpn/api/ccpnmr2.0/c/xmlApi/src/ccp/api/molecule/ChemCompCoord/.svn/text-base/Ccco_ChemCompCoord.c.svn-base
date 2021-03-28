
#include "ccp.h"

/*
  Default or reference ChemComp coordinates
*/

/* package ccp.api.molecule.ChemCompCoord */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompCoord self
  @param  Impl_ApplicationData value
**/
void *Ccco_ChemCompCoord_AddApplicationData(Ccco_ChemCompCoord self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.ChemCompCoord.ChemCompCoord
  @param  Ccco_ChemCompCoord self
  @param  ApiBoolean complete
**/
void *Ccco_ChemCompCoord_CheckAllValid(Ccco_ChemCompCoord self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.ChemCompCoord.ChemCompCoord
  @param  Ccco_ChemCompCoord self
  @param  ApiBoolean complete
**/
void *Ccco_ChemCompCoord_CheckValid(Ccco_ChemCompCoord self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'checkValid' is not callable");
  
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
  @param  Ccco_ChemCompCoord self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Ccco_ChemCompCoord_FindAllActiveRepositories(Ccco_ChemCompCoord self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'findAllActiveRepositories' is not callable");
  
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
  @param  Ccco_ChemCompCoord self
  @returns  all value that satisfy the conditions 
**/
ApiList Ccco_ChemCompCoord_FindAllActiveRepositories_keyval0(Ccco_ChemCompCoord self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccco_ChemCompCoord_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccco_ChemCompCoord self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Ccco_ChemCompCoord_FindAllActiveRepositories_keyval1(Ccco_ChemCompCoord self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccco_ChemCompCoord_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Ccco_ChemCompCoord_FindAllActiveRepositories_keyval2(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccco_ChemCompCoord_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Ccco_ChemCompCoord_FindAllActiveRepositories_keyval3(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccco_ChemCompCoord_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccco_ChemCompCoord self
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
ApiList Ccco_ChemCompCoord_FindAllActiveRepositories_keyval4(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccco_ChemCompCoord_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompCoord self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Ccco_ChemCompCoord_FindAllApplicationData(Ccco_ChemCompCoord self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'findAllApplicationData' is not callable");
  
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
  @param  Ccco_ChemCompCoord self
  @returns  all value that satisfy the conditions 
**/
ApiList Ccco_ChemCompCoord_FindAllApplicationData_keyval0(Ccco_ChemCompCoord self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccco_ChemCompCoord_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompCoord self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Ccco_ChemCompCoord_FindAllApplicationData_keyval1(Ccco_ChemCompCoord self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccco_ChemCompCoord_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Ccco_ChemCompCoord_FindAllApplicationData_keyval2(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccco_ChemCompCoord_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Ccco_ChemCompCoord_FindAllApplicationData_keyval3(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccco_ChemCompCoord_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompCoord self
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
ApiList Ccco_ChemCompCoord_FindAllApplicationData_keyval4(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccco_ChemCompCoord_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemAtomCoords

child link to 
class ChemAtomCoord
  @param  Ccco_ChemCompCoord self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccco_ChemCompCoord_FindAllChemAtomCoords(Ccco_ChemCompCoord self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemAtomCoords");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'findAllChemAtomCoords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'findAllChemAtomCoords' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemAtomCoords

child link to 
class ChemAtomCoord
  @param  Ccco_ChemCompCoord self
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccco_ChemCompCoord_FindAllChemAtomCoords_keyval0(Ccco_ChemCompCoord self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccco_ChemCompCoord_FindAllChemAtomCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemAtomCoords

child link to 
class ChemAtomCoord
  @param  Ccco_ChemCompCoord self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccco_ChemCompCoord_FindAllChemAtomCoords_keyval1(Ccco_ChemCompCoord self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccco_ChemCompCoord_FindAllChemAtomCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemAtomCoords

child link to 
class ChemAtomCoord
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccco_ChemCompCoord_FindAllChemAtomCoords_keyval2(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccco_ChemCompCoord_FindAllChemAtomCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemAtomCoords

child link to 
class ChemAtomCoord
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccco_ChemCompCoord_FindAllChemAtomCoords_keyval3(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccco_ChemCompCoord_FindAllChemAtomCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemAtomCoords

child link to 
class ChemAtomCoord
  @param  Ccco_ChemCompCoord self
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
ApiSet Ccco_ChemCompCoord_FindAllChemAtomCoords_keyval4(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccco_ChemCompCoord_FindAllChemAtomCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemCompVarCoords

child link 
to class ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccco_ChemCompCoord_FindAllChemCompVarCoords(Ccco_ChemCompCoord self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemCompVarCoords");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'findAllChemCompVarCoords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'findAllChemCompVarCoords' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemCompVarCoords

child link 
to class ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccco_ChemCompCoord_FindAllChemCompVarCoords_keyval0(Ccco_ChemCompCoord self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccco_ChemCompCoord_FindAllChemCompVarCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemCompVarCoords

child link 
to class ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccco_ChemCompCoord_FindAllChemCompVarCoords_keyval1(Ccco_ChemCompCoord self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccco_ChemCompCoord_FindAllChemCompVarCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemCompVarCoords

child link 
to class ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccco_ChemCompCoord_FindAllChemCompVarCoords_keyval2(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccco_ChemCompCoord_FindAllChemCompVarCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemCompVarCoords

child link 
to class ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccco_ChemCompCoord_FindAllChemCompVarCoords_keyval3(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccco_ChemCompCoord_FindAllChemCompVarCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemCompVarCoords

child link 
to class ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
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
ApiSet Ccco_ChemCompCoord_FindAllChemCompVarCoords_keyval4(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccco_ChemCompCoord_FindAllChemCompVarCoords(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccco_ChemCompCoord self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Ccco_ChemCompCoord_FindFirstActiveRepository(Ccco_ChemCompCoord self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'findFirstActiveRepository' is not callable");
  
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
  @param  Ccco_ChemCompCoord self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Ccco_ChemCompCoord_FindFirstActiveRepository_keyval0(Ccco_ChemCompCoord self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccco_ChemCompCoord_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccco_ChemCompCoord self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Ccco_ChemCompCoord_FindFirstActiveRepository_keyval1(Ccco_ChemCompCoord self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccco_ChemCompCoord_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Ccco_ChemCompCoord_FindFirstActiveRepository_keyval2(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccco_ChemCompCoord_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Ccco_ChemCompCoord_FindFirstActiveRepository_keyval3(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccco_ChemCompCoord_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Ccco_ChemCompCoord self
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
Impl_Repository Ccco_ChemCompCoord_FindFirstActiveRepository_keyval4(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccco_ChemCompCoord_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompCoord self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccco_ChemCompCoord_FindFirstApplicationData(Ccco_ChemCompCoord self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'findFirstApplicationData' is not callable");
  
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
  @param  Ccco_ChemCompCoord self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccco_ChemCompCoord_FindFirstApplicationData_keyval0(Ccco_ChemCompCoord self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccco_ChemCompCoord_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompCoord self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccco_ChemCompCoord_FindFirstApplicationData_keyval1(Ccco_ChemCompCoord self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccco_ChemCompCoord_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccco_ChemCompCoord_FindFirstApplicationData_keyval2(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccco_ChemCompCoord_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccco_ChemCompCoord_FindFirstApplicationData_keyval3(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccco_ChemCompCoord_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompCoord self
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
Impl_ApplicationData Ccco_ChemCompCoord_FindFirstApplicationData_keyval4(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccco_ChemCompCoord_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemAtomCoords

child link to 
class ChemAtomCoord
  @param  Ccco_ChemCompCoord self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Ccco_ChemAtomCoord Ccco_ChemCompCoord_FindFirstChemAtomCoord(Ccco_ChemCompCoord self, ApiMap conditions)
{
  
  Ccco_ChemAtomCoord obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemAtomCoord");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'findFirstChemAtomCoord'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'findFirstChemAtomCoord' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemAtomCoords

child link to 
class ChemAtomCoord
  @param  Ccco_ChemCompCoord self
  @returns  the first value that satisfies the conditions 
**/
Ccco_ChemAtomCoord Ccco_ChemCompCoord_FindFirstChemAtomCoord_keyval0(Ccco_ChemCompCoord self)
{
  
  Ccco_ChemAtomCoord  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccco_ChemCompCoord_FindFirstChemAtomCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemAtomCoords

child link to 
class ChemAtomCoord
  @param  Ccco_ChemCompCoord self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Ccco_ChemAtomCoord Ccco_ChemCompCoord_FindFirstChemAtomCoord_keyval1(Ccco_ChemCompCoord self, char * key, ApiObject value)
{
  
  Ccco_ChemAtomCoord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccco_ChemCompCoord_FindFirstChemAtomCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemAtomCoords

child link to 
class ChemAtomCoord
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Ccco_ChemAtomCoord Ccco_ChemCompCoord_FindFirstChemAtomCoord_keyval2(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Ccco_ChemAtomCoord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccco_ChemCompCoord_FindFirstChemAtomCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemAtomCoords

child link to 
class ChemAtomCoord
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Ccco_ChemAtomCoord Ccco_ChemCompCoord_FindFirstChemAtomCoord_keyval3(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Ccco_ChemAtomCoord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccco_ChemCompCoord_FindFirstChemAtomCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemAtomCoords

child link to 
class ChemAtomCoord
  @param  Ccco_ChemCompCoord self
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
Ccco_ChemAtomCoord Ccco_ChemCompCoord_FindFirstChemAtomCoord_keyval4(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Ccco_ChemAtomCoord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccco_ChemCompCoord_FindFirstChemAtomCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemCompVarCoords

child link 
to class ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Ccco_ChemCompVarCoord Ccco_ChemCompCoord_FindFirstChemCompVarCoord(Ccco_ChemCompCoord self, ApiMap conditions)
{
  
  Ccco_ChemCompVarCoord obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemCompVarCoord");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'findFirstChemCompVarCoord'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'findFirstChemCompVarCoord' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemCompVarCoords

child link 
to class ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
  @returns  the first value that satisfies the conditions 
**/
Ccco_ChemCompVarCoord Ccco_ChemCompCoord_FindFirstChemCompVarCoord_keyval0(Ccco_ChemCompCoord self)
{
  
  Ccco_ChemCompVarCoord  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccco_ChemCompCoord_FindFirstChemCompVarCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemCompVarCoords

child link 
to class ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Ccco_ChemCompVarCoord Ccco_ChemCompCoord_FindFirstChemCompVarCoord_keyval1(Ccco_ChemCompCoord self, char * key, ApiObject value)
{
  
  Ccco_ChemCompVarCoord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccco_ChemCompCoord_FindFirstChemCompVarCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemCompVarCoords

child link 
to class ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Ccco_ChemCompVarCoord Ccco_ChemCompCoord_FindFirstChemCompVarCoord_keyval2(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Ccco_ChemCompVarCoord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccco_ChemCompCoord_FindFirstChemCompVarCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemCompVarCoords

child link 
to class ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Ccco_ChemCompVarCoord Ccco_ChemCompCoord_FindFirstChemCompVarCoord_keyval3(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Ccco_ChemCompVarCoord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccco_ChemCompCoord_FindFirstChemCompVarCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemCompVarCoords

child link 
to class ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
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
Ccco_ChemCompVarCoord Ccco_ChemCompCoord_FindFirstChemCompVarCoord_keyval4(Ccco_ChemCompCoord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Ccco_ChemCompVarCoord  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccco_ChemCompCoord_FindFirstChemCompVarCoord(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.ChemCompCoord.ChemCompCoord
  @param  Ccco_ChemCompCoord self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Ccco_ChemCompCoord_Get(Ccco_ChemCompCoord self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
Acco_AccessObject Ccco_ChemCompCoord_GetAccess(Ccco_ChemCompCoord self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getAccess' is not callable");
  
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
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
ApiList Ccco_ChemCompCoord_GetActiveRepositories(Ccco_ChemCompCoord self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getActiveRepositories' is not callable");
  
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
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
ApiList Ccco_ChemCompCoord_GetApplicationData(Ccco_ChemCompCoord self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.ChemCompCoord.ChemCompCoord
  @param  Ccco_ChemCompCoord self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Ccco_ChemCompCoord Ccco_ChemCompCoord_GetByKey(Ccco_ChemCompCoord self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Ccco_ChemCompCoord obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompCoord.ChemCompCoord.ccpCode

ccpCode of 
ChemComp the coordinates apply to.
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
ApiString Ccco_ChemCompCoord_GetCcpCode(Ccco_ChemCompCoord self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCcpCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getCcpCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getCcpCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompCoord.ChemCompCoord.chemAtomCoords

child 
link to class ChemAtomCoord
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
ApiSet Ccco_ChemCompCoord_GetChemAtomCoords(Ccco_ChemCompCoord self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAtomCoords");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getChemAtomCoords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getChemAtomCoords' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link chemComp
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
Chem_ChemComp Ccco_ChemCompCoord_GetChemComp(Ccco_ChemCompCoord self)
{
  
  Chem_ChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemComp");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getChemComp'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getChemComp' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemCompVarCoords

child link 
to class ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
ApiSet Ccco_ChemCompCoord_GetChemCompVarCoords(Ccco_ChemCompCoord self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompVarCoords");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getChemCompVarCoords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getChemCompVarCoords' is not callable");
  
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
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
ApiString Ccco_ChemCompCoord_GetClassName(Ccco_ChemCompCoord self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getClassName' is not callable");
  
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
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
ApiString Ccco_ChemCompCoord_GetCreatedBy(Ccco_ChemCompCoord self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getCreatedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompCoord.ChemCompCoord.details

Free text, for 
notes, explanatory comments, etc.
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
ApiString Ccco_ChemCompCoord_GetDetails(Ccco_ChemCompCoord self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getDetails' is not callable");
  
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
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
ApiList Ccco_ChemCompCoord_GetFieldNames(Ccco_ChemCompCoord self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.ChemCompCoord.ChemCompCoord
  @param  Ccco_ChemCompCoord self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Ccco_ChemCompCoord_GetFullKey(Ccco_ChemCompCoord self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getFullKey' is not callable");
  
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
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
ApiString Ccco_ChemCompCoord_GetGuid(Ccco_ChemCompCoord self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getGuid' is not callable");
  
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
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
ApiBoolean Ccco_ChemCompCoord_GetInConstructor(Ccco_ChemCompCoord self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getInConstructor' is not callable");
  
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
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
ApiBoolean Ccco_ChemCompCoord_GetIsDeleted(Ccco_ChemCompCoord self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getIsDeleted' is not callable");
  
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
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
ApiBoolean Ccco_ChemCompCoord_GetIsLoaded(Ccco_ChemCompCoord self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getIsLoaded' is not callable");
  
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
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
ApiBoolean Ccco_ChemCompCoord_GetIsModifiable(Ccco_ChemCompCoord self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getIsModifiable' is not callable");
  
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
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
ApiBoolean Ccco_ChemCompCoord_GetIsModified(Ccco_ChemCompCoord self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getIsModified' is not callable");
  
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
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
ApiBoolean Ccco_ChemCompCoord_GetIsReading(Ccco_ChemCompCoord self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getIsReading' is not callable");
  
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
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
ApiString Ccco_ChemCompCoord_GetLastUnlockedBy(Ccco_ChemCompCoord self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getLastUnlockedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.ChemCompCoord.ChemCompCoord
  @param  Ccco_ChemCompCoord self
  @returns  Local object key
**/
ApiObject Ccco_ChemCompCoord_GetLocalKey(Ccco_ChemCompCoord self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompCoord.ChemCompCoord.memopsRoot

parent link
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
Impl_MemopsRoot Ccco_ChemCompCoord_GetMemopsRoot(Ccco_ChemCompCoord self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompCoord.ChemCompCoord.molType

molType of 
ChemComp the coordinates apply to.
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
ApiString Ccco_ChemCompCoord_GetMolType(Ccco_ChemCompCoord self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getMolType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getMolType' is not callable");
  
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
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
Impl_PackageLocator Ccco_ChemCompCoord_GetPackageLocator(Ccco_ChemCompCoord self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getPackageLocator' is not callable");
  
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
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
ApiString Ccco_ChemCompCoord_GetPackageName(Ccco_ChemCompCoord self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getPackageName' is not callable");
  
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
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
ApiString Ccco_ChemCompCoord_GetPackageShortName(Ccco_ChemCompCoord self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompCoord.ChemCompCoord.parent

link to parent 
object - synonym for memopsRoot
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
Impl_MemopsRoot Ccco_ChemCompCoord_GetParent(Ccco_ChemCompCoord self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getParent' is not callable");
  
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
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
ApiString Ccco_ChemCompCoord_GetQualifiedName(Ccco_ChemCompCoord self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getQualifiedName' is not callable");
  
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
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
Impl_MemopsRoot Ccco_ChemCompCoord_GetRoot(Ccco_ChemCompCoord self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompCoord.ChemCompCoord.sourceName

Source and 
version for the data. Could be a database, a dynamics program, ...).
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
ApiString Ccco_ChemCompCoord_GetSourceName(Ccco_ChemCompCoord self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSourceName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getSourceName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getSourceName' is not callable");
  
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
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
Impl_TopObject Ccco_ChemCompCoord_GetTopObject(Ccco_ChemCompCoord self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.ChemCompCoord.ChemCompCoord
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Ccco_ChemCompCoord Ccco_ChemCompCoord_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewChemCompCoord(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.ChemCompCoord.ChemCompCoord
  @param  Impl_MemopsRoot parent
  @param  char * ccpCode
  @param  char * molType
  @param  char * sourceName
  @returns  the new object
**/
Ccco_ChemCompCoord Ccco_ChemCompCoord_Init_reqd(Impl_MemopsRoot parent, char * ccpCode, char * molType, char * sourceName)
{
  
  Ccco_ChemCompCoord  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__ccpCode = ApiString_New(ccpCode);
  ApiString api__molType = ApiString_New(molType);
  ApiString api__sourceName = ApiString_New(sourceName);

  PyDict_SetItemString(attrlinks, "ccpCode", api__ccpCode);
  PyDict_SetItemString(attrlinks, "molType", api__molType);
  PyDict_SetItemString(attrlinks, "sourceName", api__sourceName);
  
  obj = Ccco_ChemCompCoord_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__ccpCode);
  Py_DECREF(api__molType);
  Py_DECREF(api__sourceName);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemCompCoord.ChemAtomCoord
  @param  Ccco_ChemCompCoord self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Ccco_ChemAtomCoord Ccco_ChemCompCoord_NewChemAtomCoord(Ccco_ChemCompCoord self, ApiMap attrlinks)
{
  
  Ccco_ChemAtomCoord obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newChemAtomCoord");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'newChemAtomCoord'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'newChemAtomCoord' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemCompCoord.ChemAtomCoord
  @param  Ccco_ChemCompCoord self
  @param  char * name
  @returns  the new object
**/
Ccco_ChemAtomCoord Ccco_ChemCompCoord_NewChemAtomCoord_reqd(Ccco_ChemCompCoord self, char * name)
{
  
  Ccco_ChemAtomCoord  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Ccco_ChemCompCoord_NewChemAtomCoord(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemCompCoord.ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Ccco_ChemCompVarCoord Ccco_ChemCompCoord_NewChemCompVarCoord(Ccco_ChemCompCoord self, ApiMap attrlinks)
{
  
  Ccco_ChemCompVarCoord obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newChemCompVarCoord");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'newChemCompVarCoord'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'newChemCompVarCoord' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemCompCoord.ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
  @returns  the new object
**/
Ccco_ChemCompVarCoord Ccco_ChemCompCoord_NewChemCompVarCoord_reqd(Ccco_ChemCompCoord self)
{
  
  Ccco_ChemCompVarCoord  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Ccco_ChemCompCoord_NewChemCompVarCoord(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccco_ChemCompCoord self
  @param  Impl_ApplicationData value
**/
void *Ccco_ChemCompCoord_RemoveApplicationData(Ccco_ChemCompCoord self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.ChemCompCoord.ChemCompCoord
  @param  Ccco_ChemCompCoord self
  @param  ApiString name
  @param  ApiObject value
**/
void *Ccco_ChemCompCoord_Set(Ccco_ChemCompCoord self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Ccco_ChemCompCoord self
  @param  Acco_AccessObject value
**/
void *Ccco_ChemCompCoord_SetAccess(Ccco_ChemCompCoord self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'setAccess' is not callable");
  
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
  @param  Ccco_ChemCompCoord self
  @param  ApiList values
**/
void *Ccco_ChemCompCoord_SetApplicationData(Ccco_ChemCompCoord self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemCompCoord.ChemCompCoord.ccpCode

ccpCode of 
ChemComp the coordinates apply to.
  @param  Ccco_ChemCompCoord self
  @param  ApiString value
**/
void *Ccco_ChemCompCoord_SetCcpCode(Ccco_ChemCompCoord self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCcpCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'setCcpCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'setCcpCode' is not callable");
  
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
  @param  Ccco_ChemCompCoord self
  @param  ApiString value
**/
void *Ccco_ChemCompCoord_SetCreatedBy(Ccco_ChemCompCoord self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'setCreatedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemCompCoord.ChemCompCoord.details

Free text, for 
notes, explanatory comments, etc.
  @param  Ccco_ChemCompCoord self
  @param  ApiString value
**/
void *Ccco_ChemCompCoord_SetDetails(Ccco_ChemCompCoord self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'setDetails' is not callable");
  
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
  @param  Ccco_ChemCompCoord self
  @param  ApiString value
**/
void *Ccco_ChemCompCoord_SetGuid(Ccco_ChemCompCoord self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'setGuid' is not callable");
  
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
  @param  Ccco_ChemCompCoord self
  @param  ApiBoolean value
**/
void *Ccco_ChemCompCoord_SetIsModifiable(Ccco_ChemCompCoord self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'setIsModifiable' is not callable");
  
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
  @param  Ccco_ChemCompCoord self
  @param  ApiString value
**/
void *Ccco_ChemCompCoord_SetLastUnlockedBy(Ccco_ChemCompCoord self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemCompCoord.ChemCompCoord.molType

molType of 
ChemComp the coordinates apply to.
  @param  Ccco_ChemCompCoord self
  @param  ApiString value
**/
void *Ccco_ChemCompCoord_SetMolType(Ccco_ChemCompCoord self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'setMolType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'setMolType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemCompCoord.ChemCompCoord.sourceName

Source and 
version for the data. Could be a database, a dynamics program, ...).
  @param  Ccco_ChemCompCoord self
  @param  ApiString value
**/
void *Ccco_ChemCompCoord_SetSourceName(Ccco_ChemCompCoord self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSourceName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'setSourceName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'setSourceName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemAtomCoords

child link to 
class ChemAtomCoord
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
ApiList Ccco_ChemCompCoord_SortedChemAtomCoords(Ccco_ChemCompCoord self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemAtomCoords");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'sortedChemAtomCoords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'sortedChemAtomCoords' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.ChemCompCoord.ChemCompCoord.chemCompVarCoords

child link 
to class ChemCompVarCoord
  @param  Ccco_ChemCompCoord self
  @returns   the result
**/
ApiList Ccco_ChemCompCoord_SortedChemCompVarCoords(Ccco_ChemCompCoord self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemCompVarCoords");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: cannot find method 'sortedChemCompVarCoords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCoord.ChemCompCoord: method 'sortedChemCompVarCoords' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
