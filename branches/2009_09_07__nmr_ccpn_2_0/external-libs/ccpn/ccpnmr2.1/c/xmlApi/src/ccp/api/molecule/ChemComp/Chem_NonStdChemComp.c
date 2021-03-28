
#include "ccp.h"

/*
  ChemComp that is not a standard ChemComp, but may or may not be derived from one.
*/

/* package ccp.api.molecule.ChemComp */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NonStdChemComp self
  @param  Impl_ApplicationData value
**/
void *Chem_NonStdChemComp_AddApplicationData(Chem_NonStdChemComp self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.molecule.ChemComp.ChemComp.commonNames

Common names of 
ChemComp
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
void *Chem_NonStdChemComp_AddCommonName(Chem_NonStdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addCommonName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'addCommonName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'addCommonName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.molecule.ChemComp.ChemComp.keywords

Keywords for searching 
ChemComp. E.g. 'saccharide', ...
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
void *Chem_NonStdChemComp_AddKeyword(Chem_NonStdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addKeyword");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'addKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'addKeyword' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.ChemComp.NonStdChemComp
  @param  Chem_NonStdChemComp self
  @param  ApiBoolean complete
**/
void *Chem_NonStdChemComp_CheckAllValid(Chem_NonStdChemComp self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.ChemComp.NonStdChemComp
  @param  Chem_NonStdChemComp self
  @param  ApiBoolean complete
**/
void *Chem_NonStdChemComp_CheckValid(Chem_NonStdChemComp self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'checkValid' is not callable");
  
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
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_NonStdChemComp_FindAllActiveRepositories(Chem_NonStdChemComp self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'findAllActiveRepositories' is not callable");
  
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
  @param  Chem_NonStdChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_NonStdChemComp_FindAllActiveRepositories_keyval0(Chem_NonStdChemComp self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NonStdChemComp_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_NonStdChemComp_FindAllActiveRepositories_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NonStdChemComp_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_NonStdChemComp_FindAllActiveRepositories_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NonStdChemComp_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_NonStdChemComp_FindAllActiveRepositories_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NonStdChemComp_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_NonStdChemComp self
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
ApiList Chem_NonStdChemComp_FindAllActiveRepositories_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NonStdChemComp_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_NonStdChemComp_FindAllApplicationData(Chem_NonStdChemComp self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'findAllApplicationData' is not callable");
  
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
  @param  Chem_NonStdChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_NonStdChemComp_FindAllApplicationData_keyval0(Chem_NonStdChemComp self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NonStdChemComp_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_NonStdChemComp_FindAllApplicationData_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NonStdChemComp_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_NonStdChemComp_FindAllApplicationData_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NonStdChemComp_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_NonStdChemComp_FindAllApplicationData_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NonStdChemComp_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NonStdChemComp self
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
ApiList Chem_NonStdChemComp_FindAllApplicationData_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NonStdChemComp_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemAngles(Chem_NonStdChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemAngles");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'findAllChemAngles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'findAllChemAngles' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_NonStdChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemAngles_keyval0(Chem_NonStdChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NonStdChemComp_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemAngles_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NonStdChemComp_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemAngles_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NonStdChemComp_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemAngles_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NonStdChemComp_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_NonStdChemComp self
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
ApiSet Chem_NonStdChemComp_FindAllChemAngles_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NonStdChemComp_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemAtomSets(Chem_NonStdChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemAtomSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'findAllChemAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'findAllChemAtomSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_NonStdChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemAtomSets_keyval0(Chem_NonStdChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NonStdChemComp_FindAllChemAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemAtomSets_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NonStdChemComp_FindAllChemAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemAtomSets_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NonStdChemComp_FindAllChemAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemAtomSets_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NonStdChemComp_FindAllChemAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_NonStdChemComp self
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
ApiSet Chem_NonStdChemComp_FindAllChemAtomSets_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NonStdChemComp_FindAllChemAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemAtoms(Chem_NonStdChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'findAllChemAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'findAllChemAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_NonStdChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemAtoms_keyval0(Chem_NonStdChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NonStdChemComp_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemAtoms_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NonStdChemComp_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemAtoms_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NonStdChemComp_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemAtoms_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NonStdChemComp_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_NonStdChemComp self
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
ApiSet Chem_NonStdChemComp_FindAllChemAtoms_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NonStdChemComp_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemBonds(Chem_NonStdChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemBonds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'findAllChemBonds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'findAllChemBonds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_NonStdChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemBonds_keyval0(Chem_NonStdChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NonStdChemComp_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemBonds_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NonStdChemComp_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemBonds_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NonStdChemComp_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemBonds_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NonStdChemComp_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_NonStdChemComp self
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
ApiSet Chem_NonStdChemComp_FindAllChemBonds_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NonStdChemComp_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemCompVars(Chem_NonStdChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'findAllChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'findAllChemCompVars' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_NonStdChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemCompVars_keyval0(Chem_NonStdChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NonStdChemComp_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemCompVars_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NonStdChemComp_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemCompVars_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NonStdChemComp_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemCompVars_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NonStdChemComp_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_NonStdChemComp self
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
ApiSet Chem_NonStdChemComp_FindAllChemCompVars_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NonStdChemComp_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemTorsions(Chem_NonStdChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemTorsions");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'findAllChemTorsions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'findAllChemTorsions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_NonStdChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemTorsions_keyval0(Chem_NonStdChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NonStdChemComp_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemTorsions_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NonStdChemComp_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemTorsions_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NonStdChemComp_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllChemTorsions_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NonStdChemComp_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_NonStdChemComp self
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
ApiSet Chem_NonStdChemComp_FindAllChemTorsions_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NonStdChemComp_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to class 
LinkEnd
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllLinkEnds(Chem_NonStdChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'findAllLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'findAllLinkEnds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to class 
LinkEnd
  @param  Chem_NonStdChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllLinkEnds_keyval0(Chem_NonStdChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NonStdChemComp_FindAllLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to class 
LinkEnd
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllLinkEnds_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NonStdChemComp_FindAllLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to class 
LinkEnd
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllLinkEnds_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NonStdChemComp_FindAllLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to class 
LinkEnd
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllLinkEnds_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NonStdChemComp_FindAllLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to class 
LinkEnd
  @param  Chem_NonStdChemComp self
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
ApiSet Chem_NonStdChemComp_FindAllLinkEnds_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NonStdChemComp_FindAllLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.namingSystems

child link to 
class NamingSystem
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllNamingSystems(Chem_NonStdChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNamingSystems");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'findAllNamingSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'findAllNamingSystems' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.namingSystems

child link to 
class NamingSystem
  @param  Chem_NonStdChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllNamingSystems_keyval0(Chem_NonStdChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NonStdChemComp_FindAllNamingSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.namingSystems

child link to 
class NamingSystem
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllNamingSystems_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NonStdChemComp_FindAllNamingSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.namingSystems

child link to 
class NamingSystem
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllNamingSystems_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NonStdChemComp_FindAllNamingSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.namingSystems

child link to 
class NamingSystem
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllNamingSystems_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NonStdChemComp_FindAllNamingSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.namingSystems

child link to 
class NamingSystem
  @param  Chem_NonStdChemComp self
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
ApiSet Chem_NonStdChemComp_FindAllNamingSystems_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NonStdChemComp_FindAllNamingSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllResidueTypeProbs(Chem_NonStdChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResidueTypeProbs");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'findAllResidueTypeProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'findAllResidueTypeProbs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllResidueTypeProbs_keyval0(Chem_NonStdChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NonStdChemComp_FindAllResidueTypeProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllResidueTypeProbs_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NonStdChemComp_FindAllResidueTypeProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllResidueTypeProbs_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NonStdChemComp_FindAllResidueTypeProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllResidueTypeProbs_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NonStdChemComp_FindAllResidueTypeProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
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
ApiSet Chem_NonStdChemComp_FindAllResidueTypeProbs_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NonStdChemComp_FindAllResidueTypeProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.stereochemistries

child link 
to class Stereochemistry
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllStereochemistries(Chem_NonStdChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllStereochemistries");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'findAllStereochemistries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'findAllStereochemistries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.stereochemistries

child link 
to class Stereochemistry
  @param  Chem_NonStdChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllStereochemistries_keyval0(Chem_NonStdChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NonStdChemComp_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.stereochemistries

child link 
to class Stereochemistry
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllStereochemistries_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NonStdChemComp_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.stereochemistries

child link 
to class Stereochemistry
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllStereochemistries_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NonStdChemComp_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.stereochemistries

child link 
to class Stereochemistry
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_NonStdChemComp_FindAllStereochemistries_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NonStdChemComp_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.stereochemistries

child link 
to class Stereochemistry
  @param  Chem_NonStdChemComp self
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
ApiSet Chem_NonStdChemComp_FindAllStereochemistries_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NonStdChemComp_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Chem_NonStdChemComp_FindFirstActiveRepository(Chem_NonStdChemComp self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'findFirstActiveRepository' is not callable");
  
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
  @param  Chem_NonStdChemComp self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Chem_NonStdChemComp_FindFirstActiveRepository_keyval0(Chem_NonStdChemComp self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NonStdChemComp_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Chem_NonStdChemComp_FindFirstActiveRepository_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NonStdChemComp_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Chem_NonStdChemComp_FindFirstActiveRepository_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NonStdChemComp_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Chem_NonStdChemComp_FindFirstActiveRepository_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NonStdChemComp_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_NonStdChemComp self
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
Impl_Repository Chem_NonStdChemComp_FindFirstActiveRepository_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NonStdChemComp_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_NonStdChemComp_FindFirstApplicationData(Chem_NonStdChemComp self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'findFirstApplicationData' is not callable");
  
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
  @param  Chem_NonStdChemComp self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_NonStdChemComp_FindFirstApplicationData_keyval0(Chem_NonStdChemComp self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NonStdChemComp_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_NonStdChemComp_FindFirstApplicationData_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NonStdChemComp_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_NonStdChemComp_FindFirstApplicationData_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NonStdChemComp_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_NonStdChemComp_FindFirstApplicationData_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NonStdChemComp_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NonStdChemComp self
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
Impl_ApplicationData Chem_NonStdChemComp_FindFirstApplicationData_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NonStdChemComp_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_NonStdChemComp_FindFirstChemAngle(Chem_NonStdChemComp self, ApiMap conditions)
{
  
  Chem_ChemAngle obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemAngle");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'findFirstChemAngle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'findFirstChemAngle' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_NonStdChemComp self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_NonStdChemComp_FindFirstChemAngle_keyval0(Chem_NonStdChemComp self)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NonStdChemComp_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_NonStdChemComp_FindFirstChemAngle_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NonStdChemComp_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_NonStdChemComp_FindFirstChemAngle_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NonStdChemComp_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_NonStdChemComp_FindFirstChemAngle_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NonStdChemComp_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_NonStdChemComp self
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
Chem_ChemAngle Chem_NonStdChemComp_FindFirstChemAngle_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NonStdChemComp_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_NonStdChemComp_FindFirstChemAtom(Chem_NonStdChemComp self, ApiMap conditions)
{
  
  Chem_AbstractChemAtom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'findFirstChemAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'findFirstChemAtom' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtomSet Chem_NonStdChemComp_FindFirstChemAtomSet(Chem_NonStdChemComp self, ApiMap conditions)
{
  
  Chem_ChemAtomSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemAtomSet");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'findFirstChemAtomSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'findFirstChemAtomSet' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_NonStdChemComp self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtomSet Chem_NonStdChemComp_FindFirstChemAtomSet_keyval0(Chem_NonStdChemComp self)
{
  
  Chem_ChemAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NonStdChemComp_FindFirstChemAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtomSet Chem_NonStdChemComp_FindFirstChemAtomSet_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value)
{
  
  Chem_ChemAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NonStdChemComp_FindFirstChemAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtomSet Chem_NonStdChemComp_FindFirstChemAtomSet_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NonStdChemComp_FindFirstChemAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtomSet Chem_NonStdChemComp_FindFirstChemAtomSet_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NonStdChemComp_FindFirstChemAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_NonStdChemComp self
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
Chem_ChemAtomSet Chem_NonStdChemComp_FindFirstChemAtomSet_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NonStdChemComp_FindFirstChemAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_NonStdChemComp self
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_NonStdChemComp_FindFirstChemAtom_keyval0(Chem_NonStdChemComp self)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NonStdChemComp_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_NonStdChemComp_FindFirstChemAtom_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NonStdChemComp_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_NonStdChemComp_FindFirstChemAtom_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NonStdChemComp_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_NonStdChemComp_FindFirstChemAtom_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NonStdChemComp_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_NonStdChemComp self
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
Chem_AbstractChemAtom Chem_NonStdChemComp_FindFirstChemAtom_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NonStdChemComp_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_NonStdChemComp_FindFirstChemBond(Chem_NonStdChemComp self, ApiMap conditions)
{
  
  Chem_ChemBond obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemBond");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'findFirstChemBond'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'findFirstChemBond' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_NonStdChemComp self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_NonStdChemComp_FindFirstChemBond_keyval0(Chem_NonStdChemComp self)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NonStdChemComp_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_NonStdChemComp_FindFirstChemBond_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NonStdChemComp_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_NonStdChemComp_FindFirstChemBond_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NonStdChemComp_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_NonStdChemComp_FindFirstChemBond_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NonStdChemComp_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_NonStdChemComp self
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
Chem_ChemBond Chem_NonStdChemComp_FindFirstChemBond_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NonStdChemComp_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_NonStdChemComp_FindFirstChemCompVar(Chem_NonStdChemComp self, ApiMap conditions)
{
  
  Chem_ChemCompVar obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemCompVar");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'findFirstChemCompVar'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'findFirstChemCompVar' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_NonStdChemComp self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_NonStdChemComp_FindFirstChemCompVar_keyval0(Chem_NonStdChemComp self)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NonStdChemComp_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_NonStdChemComp_FindFirstChemCompVar_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NonStdChemComp_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_NonStdChemComp_FindFirstChemCompVar_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NonStdChemComp_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_NonStdChemComp_FindFirstChemCompVar_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NonStdChemComp_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_NonStdChemComp self
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
Chem_ChemCompVar Chem_NonStdChemComp_FindFirstChemCompVar_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NonStdChemComp_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_NonStdChemComp_FindFirstChemTorsion(Chem_NonStdChemComp self, ApiMap conditions)
{
  
  Chem_ChemTorsion obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemTorsion");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'findFirstChemTorsion'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'findFirstChemTorsion' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_NonStdChemComp self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_NonStdChemComp_FindFirstChemTorsion_keyval0(Chem_NonStdChemComp self)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NonStdChemComp_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_NonStdChemComp_FindFirstChemTorsion_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NonStdChemComp_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_NonStdChemComp_FindFirstChemTorsion_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NonStdChemComp_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_NonStdChemComp_FindFirstChemTorsion_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NonStdChemComp_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_NonStdChemComp self
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
Chem_ChemTorsion Chem_NonStdChemComp_FindFirstChemTorsion_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NonStdChemComp_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to 
class LinkEnd
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_NonStdChemComp_FindFirstLinkEnd(Chem_NonStdChemComp self, ApiMap conditions)
{
  
  Chem_LinkEnd obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstLinkEnd");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'findFirstLinkEnd'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'findFirstLinkEnd' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to 
class LinkEnd
  @param  Chem_NonStdChemComp self
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_NonStdChemComp_FindFirstLinkEnd_keyval0(Chem_NonStdChemComp self)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NonStdChemComp_FindFirstLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to 
class LinkEnd
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_NonStdChemComp_FindFirstLinkEnd_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NonStdChemComp_FindFirstLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to 
class LinkEnd
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_NonStdChemComp_FindFirstLinkEnd_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NonStdChemComp_FindFirstLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to 
class LinkEnd
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_NonStdChemComp_FindFirstLinkEnd_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NonStdChemComp_FindFirstLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to 
class LinkEnd
  @param  Chem_NonStdChemComp self
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
Chem_LinkEnd Chem_NonStdChemComp_FindFirstLinkEnd_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NonStdChemComp_FindFirstLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.namingSystems

child link 
to class NamingSystem
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_NamingSystem Chem_NonStdChemComp_FindFirstNamingSystem(Chem_NonStdChemComp self, ApiMap conditions)
{
  
  Chem_NamingSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNamingSystem");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'findFirstNamingSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'findFirstNamingSystem' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.namingSystems

child link 
to class NamingSystem
  @param  Chem_NonStdChemComp self
  @returns  the first value that satisfies the conditions 
**/
Chem_NamingSystem Chem_NonStdChemComp_FindFirstNamingSystem_keyval0(Chem_NonStdChemComp self)
{
  
  Chem_NamingSystem  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NonStdChemComp_FindFirstNamingSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.namingSystems

child link 
to class NamingSystem
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_NamingSystem Chem_NonStdChemComp_FindFirstNamingSystem_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value)
{
  
  Chem_NamingSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NonStdChemComp_FindFirstNamingSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.namingSystems

child link 
to class NamingSystem
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_NamingSystem Chem_NonStdChemComp_FindFirstNamingSystem_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_NamingSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NonStdChemComp_FindFirstNamingSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.namingSystems

child link 
to class NamingSystem
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_NamingSystem Chem_NonStdChemComp_FindFirstNamingSystem_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_NamingSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NonStdChemComp_FindFirstNamingSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.namingSystems

child link 
to class NamingSystem
  @param  Chem_NonStdChemComp self
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
Chem_NamingSystem Chem_NonStdChemComp_FindFirstNamingSystem_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_NamingSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NonStdChemComp_FindFirstNamingSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueTypeProb Chem_NonStdChemComp_FindFirstResidueTypeProb(Chem_NonStdChemComp self, ApiMap conditions)
{
  
  Nmr_ResidueTypeProb obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResidueTypeProb");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'findFirstResidueTypeProb'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'findFirstResidueTypeProb' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueTypeProb Chem_NonStdChemComp_FindFirstResidueTypeProb_keyval0(Chem_NonStdChemComp self)
{
  
  Nmr_ResidueTypeProb  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NonStdChemComp_FindFirstResidueTypeProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueTypeProb Chem_NonStdChemComp_FindFirstResidueTypeProb_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value)
{
  
  Nmr_ResidueTypeProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NonStdChemComp_FindFirstResidueTypeProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueTypeProb Chem_NonStdChemComp_FindFirstResidueTypeProb_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ResidueTypeProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NonStdChemComp_FindFirstResidueTypeProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueTypeProb Chem_NonStdChemComp_FindFirstResidueTypeProb_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ResidueTypeProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NonStdChemComp_FindFirstResidueTypeProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
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
Nmr_ResidueTypeProb Chem_NonStdChemComp_FindFirstResidueTypeProb_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ResidueTypeProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NonStdChemComp_FindFirstResidueTypeProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.stereochemistries

child 
link to class Stereochemistry
  @param  Chem_NonStdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_NonStdChemComp_FindFirstStereochemistry(Chem_NonStdChemComp self, ApiMap conditions)
{
  
  Chem_Stereochemistry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstStereochemistry");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'findFirstStereochemistry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'findFirstStereochemistry' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.stereochemistries

child 
link to class Stereochemistry
  @param  Chem_NonStdChemComp self
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_NonStdChemComp_FindFirstStereochemistry_keyval0(Chem_NonStdChemComp self)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_NonStdChemComp_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.stereochemistries

child 
link to class Stereochemistry
  @param  Chem_NonStdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_NonStdChemComp_FindFirstStereochemistry_keyval1(Chem_NonStdChemComp self, char * key, ApiObject value)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_NonStdChemComp_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.stereochemistries

child 
link to class Stereochemistry
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_NonStdChemComp_FindFirstStereochemistry_keyval2(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_NonStdChemComp_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.stereochemistries

child 
link to class Stereochemistry
  @param  Chem_NonStdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_NonStdChemComp_FindFirstStereochemistry_keyval3(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_NonStdChemComp_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.stereochemistries

child 
link to class Stereochemistry
  @param  Chem_NonStdChemComp self
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
Chem_Stereochemistry Chem_NonStdChemComp_FindFirstStereochemistry_keyval4(Chem_NonStdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_NonStdChemComp_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.ChemComp.NonStdChemComp
  @param  Chem_NonStdChemComp self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Chem_NonStdChemComp_Get(Chem_NonStdChemComp self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
Acco_AccessObject Chem_NonStdChemComp_GetAccess(Chem_NonStdChemComp self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getAccess' is not callable");
  
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
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
Acco_AccessObject Chem_NonStdChemComp_GetActiveAccess(Chem_NonStdChemComp self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getActiveAccess' is not callable");
  
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
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiList Chem_NonStdChemComp_GetActiveRepositories(Chem_NonStdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getActiveRepositories' is not callable");
  
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
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiList Chem_NonStdChemComp_GetApplicationData(Chem_NonStdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.baseGlycoCtCode

base glycoCT 
description code. For carbohydrates. The full glycoCtCode is only 
defined at the ChemCompVar level, but htis gives the base code that is 
exanded on in the vars.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiString Chem_NonStdChemComp_GetBaseGlycoCtCode(Chem_NonStdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBaseGlycoCtCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getBaseGlycoCtCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getBaseGlycoCtCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.beilsteinCode

Beilstein compound 
code
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiString Chem_NonStdChemComp_GetBeilsteinCode(Chem_NonStdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBeilsteinCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getBeilsteinCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getBeilsteinCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.ChemComp.NonStdChemComp
  @param  Chem_NonStdChemComp self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Chem_NonStdChemComp Chem_NonStdChemComp_GetByKey(Chem_NonStdChemComp self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Chem_NonStdChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.casRegCode

CAS code
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiString Chem_NonStdChemComp_GetCasRegCode(Chem_NonStdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCasRegCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getCasRegCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getCasRegCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.ccpCode

ccp Code of ChemComp. 
Part of the class key
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiString Chem_NonStdChemComp_GetCcpCode(Chem_NonStdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCcpCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getCcpCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getCcpCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to class 
ChemAngle
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiSet Chem_NonStdChemComp_GetChemAngles(Chem_NonStdChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAngles");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getChemAngles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getChemAngles' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to class 
ChemAtomSet
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiSet Chem_NonStdChemComp_GetChemAtomSets(Chem_NonStdChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAtomSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getChemAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getChemAtomSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to class 
AbstractChemAtom
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiSet Chem_NonStdChemComp_GetChemAtoms(Chem_NonStdChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getChemAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getChemAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to class 
ChemBond
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiSet Chem_NonStdChemComp_GetChemBonds(Chem_NonStdChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemBonds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getChemBonds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getChemBonds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to class 
ChemCompVar
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiSet Chem_NonStdChemComp_GetChemCompVars(Chem_NonStdChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getChemCompVars' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to class 
ChemTorsion
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiSet Chem_NonStdChemComp_GetChemTorsions(Chem_NonStdChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemTorsions");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getChemTorsions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getChemTorsions' is not callable");
  
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
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiString Chem_NonStdChemComp_GetClassName(Chem_NonStdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute code1Letter
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiString Chem_NonStdChemComp_GetCode1Letter(Chem_NonStdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCode1Letter");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getCode1Letter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getCode1Letter' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.code3Letter

PDB three letter 
code of ChemComp.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiString Chem_NonStdChemComp_GetCode3Letter(Chem_NonStdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCode3Letter");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getCode3Letter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getCode3Letter' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.commonNames

Common names of 
ChemComp
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiList Chem_NonStdChemComp_GetCommonNames(Chem_NonStdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCommonNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getCommonNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getCommonNames' is not callable");
  
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
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiString Chem_NonStdChemComp_GetCreatedBy(Chem_NonStdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getCreatedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.details

Free text, for notes, 
explanatory comments, etc.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiString Chem_NonStdChemComp_GetDetails(Chem_NonStdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getDetails' is not callable");
  
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
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiList Chem_NonStdChemComp_GetFieldNames(Chem_NonStdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiString Chem_NonStdChemComp_GetGuid(Chem_NonStdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getGuid' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.hasStdChirality

Does ChemComp 
have standard chirality? Serves to flag molecules containing ChemComps 
with non-standard chirality, such as D amino acids. Note that the 
attribute may not be set, for cases where no standard is defined.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiBoolean Chem_NonStdChemComp_GetHasStdChirality(Chem_NonStdChemComp self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHasStdChirality");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getHasStdChirality'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getHasStdChirality' is not callable");
  
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
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiBoolean Chem_NonStdChemComp_GetInConstructor(Chem_NonStdChemComp self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getInConstructor' is not callable");
  
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
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiBoolean Chem_NonStdChemComp_GetIsDeleted(Chem_NonStdChemComp self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.isLinearPolymer

Is ChemComp a 
component of a linear polymer?
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiBoolean Chem_NonStdChemComp_GetIsLinearPolymer(Chem_NonStdChemComp self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLinearPolymer");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getIsLinearPolymer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getIsLinearPolymer' is not callable");
  
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
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiBoolean Chem_NonStdChemComp_GetIsLoaded(Chem_NonStdChemComp self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getIsLoaded' is not callable");
  
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
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiBoolean Chem_NonStdChemComp_GetIsModifiable(Chem_NonStdChemComp self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getIsModifiable' is not callable");
  
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
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiBoolean Chem_NonStdChemComp_GetIsModified(Chem_NonStdChemComp self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getIsModified' is not callable");
  
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
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiBoolean Chem_NonStdChemComp_GetIsReading(Chem_NonStdChemComp self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getIsReading' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.keywords

Keywords for searching 
ChemComp. E.g. 'saccharide', ...
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiList Chem_NonStdChemComp_GetKeywords(Chem_NonStdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getKeywords");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getKeywords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getKeywords' is not callable");
  
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
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiString Chem_NonStdChemComp_GetLastUnlockedBy(Chem_NonStdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getLastUnlockedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to class 
LinkEnd
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiSet Chem_NonStdChemComp_GetLinkEnds(Chem_NonStdChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getLinkEnds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.memopsRoot

parent link
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
Impl_MemopsRoot Chem_NonStdChemComp_GetMemopsRoot(Chem_NonStdChemComp self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.merckCode

Merck compound code
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiString Chem_NonStdChemComp_GetMerckCode(Chem_NonStdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMerckCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getMerckCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getMerckCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.molType

molecule Type of 
ChemComp (part of the class key)
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiString Chem_NonStdChemComp_GetMolType(Chem_NonStdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getMolType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getMolType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.name

name of AbstractChemComp
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiString Chem_NonStdChemComp_GetName(Chem_NonStdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.namingSystems

child link to 
class NamingSystem
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiSet Chem_NonStdChemComp_GetNamingSystems(Chem_NonStdChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNamingSystems");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getNamingSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getNamingSystems' is not callable");
  
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
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
Impl_PackageLocator Chem_NonStdChemComp_GetPackageLocator(Chem_NonStdChemComp self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getPackageLocator' is not callable");
  
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
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiString Chem_NonStdChemComp_GetPackageName(Chem_NonStdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getPackageName' is not callable");
  
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
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiString Chem_NonStdChemComp_GetPackageShortName(Chem_NonStdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.parent

link to parent object - 
synonym for memopsRoot
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
Impl_MemopsRoot Chem_NonStdChemComp_GetParent(Chem_NonStdChemComp self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getParent' is not callable");
  
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
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiString Chem_NonStdChemComp_GetQualifiedName(Chem_NonStdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiSet Chem_NonStdChemComp_GetResidueTypeProbs(Chem_NonStdChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResidueTypeProbs");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getResidueTypeProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getResidueTypeProbs' is not callable");
  
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
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
Impl_MemopsRoot Chem_NonStdChemComp_GetRoot(Chem_NonStdChemComp self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.sigmaAldrichCode

SigmaAldrich 
compound code
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiString Chem_NonStdChemComp_GetSigmaAldrichCode(Chem_NonStdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSigmaAldrichCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getSigmaAldrichCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getSigmaAldrichCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.stdChemComp

Standard ChemComp 
corresponding to ChemComp. If ChemComp is a StdChemComp points to the 
ChemComp itself.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
Chem_StdChemComp Chem_NonStdChemComp_GetStdChemComp(Chem_NonStdChemComp self)
{
  
  Chem_StdChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStdChemComp");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getStdChemComp'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getStdChemComp' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.NonStdChemComp.stdChemCompCode
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiString Chem_NonStdChemComp_GetStdChemCompCode(Chem_NonStdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStdChemCompCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getStdChemCompCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getStdChemCompCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.stereochemistries

child link to 
class Stereochemistry
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiSet Chem_NonStdChemComp_GetStereochemistries(Chem_NonStdChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStereochemistries");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getStereochemistries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getStereochemistries' is not callable");
  
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
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
Impl_TopObject Chem_NonStdChemComp_GetTopObject(Chem_NonStdChemComp self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.ChemComp.NonStdChemComp
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chem_NonStdChemComp Chem_NonStdChemComp_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewNonStdChemComp(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.ChemComp.NonStdChemComp
  @param  Impl_MemopsRoot parent
  @returns  the new object
**/
Chem_NonStdChemComp Chem_NonStdChemComp_Init_reqd(Impl_MemopsRoot parent)
{
  
  Chem_NonStdChemComp  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Chem_NonStdChemComp_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_NonStdChemComp self
  @param  Impl_ApplicationData value
**/
void *Chem_NonStdChemComp_RemoveApplicationData(Chem_NonStdChemComp self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.molecule.ChemComp.ChemComp.commonNames

Common names of 
ChemComp
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
void *Chem_NonStdChemComp_RemoveCommonName(Chem_NonStdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeCommonName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'removeCommonName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'removeCommonName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.molecule.ChemComp.ChemComp.keywords

Keywords for 
searching ChemComp. E.g. 'saccharide', ...
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
void *Chem_NonStdChemComp_RemoveKeyword(Chem_NonStdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeKeyword");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'removeKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'removeKeyword' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.ChemComp.NonStdChemComp
  @param  Chem_NonStdChemComp self
  @param  ApiString name
  @param  ApiObject value
**/
void *Chem_NonStdChemComp_Set(Chem_NonStdChemComp self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_NonStdChemComp self
  @param  Acco_AccessObject value
**/
void *Chem_NonStdChemComp_SetAccess(Chem_NonStdChemComp self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'setAccess' is not callable");
  
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
  @param  Chem_NonStdChemComp self
  @param  ApiList values
**/
void *Chem_NonStdChemComp_SetApplicationData(Chem_NonStdChemComp self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemComp.baseGlycoCtCode

base glycoCT 
description code. For carbohydrates. The full glycoCtCode is only 
defined at the ChemCompVar level, but htis gives the base code that is 
exanded on in the vars.
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
void *Chem_NonStdChemComp_SetBaseGlycoCtCode(Chem_NonStdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBaseGlycoCtCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'setBaseGlycoCtCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'setBaseGlycoCtCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemComp.beilsteinCode

Beilstein compound 
code
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
void *Chem_NonStdChemComp_SetBeilsteinCode(Chem_NonStdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBeilsteinCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'setBeilsteinCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'setBeilsteinCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemComp.casRegCode

CAS code
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
void *Chem_NonStdChemComp_SetCasRegCode(Chem_NonStdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCasRegCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'setCasRegCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'setCasRegCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemComp.ccpCode

ccp Code of ChemComp. 
Part of the class key
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
void *Chem_NonStdChemComp_SetCcpCode(Chem_NonStdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCcpCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'setCcpCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'setCcpCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemComp.code3Letter

PDB three letter 
code of ChemComp.
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
void *Chem_NonStdChemComp_SetCode3Letter(Chem_NonStdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCode3Letter");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'setCode3Letter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'setCode3Letter' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemComp.commonNames

Common names of 
ChemComp
  @param  Chem_NonStdChemComp self
  @param  ApiList values
**/
void *Chem_NonStdChemComp_SetCommonNames(Chem_NonStdChemComp self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCommonNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'setCommonNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'setCommonNames' is not callable");
  
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
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
void *Chem_NonStdChemComp_SetCreatedBy(Chem_NonStdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'setCreatedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemComp.details

Free text, for notes, 
explanatory comments, etc.
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
void *Chem_NonStdChemComp_SetDetails(Chem_NonStdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'setDetails' is not callable");
  
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
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
void *Chem_NonStdChemComp_SetGuid(Chem_NonStdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'setGuid' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemComp.hasStdChirality

Does ChemComp 
have standard chirality? Serves to flag molecules containing ChemComps 
with non-standard chirality, such as D amino acids. Note that the 
attribute may not be set, for cases where no standard is defined.
  @param  Chem_NonStdChemComp self
  @param  ApiBoolean value
**/
void *Chem_NonStdChemComp_SetHasStdChirality(Chem_NonStdChemComp self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setHasStdChirality");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'setHasStdChirality'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'setHasStdChirality' is not callable");
  
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
  @param  Chem_NonStdChemComp self
  @param  ApiBoolean value
**/
void *Chem_NonStdChemComp_SetIsModifiable(Chem_NonStdChemComp self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'setIsModifiable' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemComp.keywords

Keywords for searching 
ChemComp. E.g. 'saccharide', ...
  @param  Chem_NonStdChemComp self
  @param  ApiList values
**/
void *Chem_NonStdChemComp_SetKeywords(Chem_NonStdChemComp self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setKeywords");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'setKeywords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'setKeywords' is not callable");
  
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
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
void *Chem_NonStdChemComp_SetLastUnlockedBy(Chem_NonStdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemComp.merckCode

Merck compound code
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
void *Chem_NonStdChemComp_SetMerckCode(Chem_NonStdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMerckCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'setMerckCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'setMerckCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemComp.molType

molecule Type of 
ChemComp (part of the class key)
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
void *Chem_NonStdChemComp_SetMolType(Chem_NonStdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'setMolType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'setMolType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemComp.name

name of AbstractChemComp
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
void *Chem_NonStdChemComp_SetName(Chem_NonStdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
  @param  ApiSet values
**/
void *Chem_NonStdChemComp_SetResidueTypeProbs(Chem_NonStdChemComp self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResidueTypeProbs");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'setResidueTypeProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'setResidueTypeProbs' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemComp.sigmaAldrichCode

SigmaAldrich 
compound code
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
void *Chem_NonStdChemComp_SetSigmaAldrichCode(Chem_NonStdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSigmaAldrichCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'setSigmaAldrichCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'setSigmaAldrichCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.NonStdChemComp.stdChemCompCode
  @param  Chem_NonStdChemComp self
  @param  ApiString value
**/
void *Chem_NonStdChemComp_SetStdChemCompCode(Chem_NonStdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStdChemCompCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'setStdChemCompCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'setStdChemCompCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiList Chem_NonStdChemComp_SortedChemAngles(Chem_NonStdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemAngles");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'sortedChemAngles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'sortedChemAngles' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiList Chem_NonStdChemComp_SortedChemAtomSets(Chem_NonStdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemAtomSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'sortedChemAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'sortedChemAtomSets' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to class 
AbstractChemAtom
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiList Chem_NonStdChemComp_SortedChemAtoms(Chem_NonStdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'sortedChemAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'sortedChemAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to class 
ChemBond
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiList Chem_NonStdChemComp_SortedChemBonds(Chem_NonStdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemBonds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'sortedChemBonds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'sortedChemBonds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiList Chem_NonStdChemComp_SortedChemCompVars(Chem_NonStdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'sortedChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'sortedChemCompVars' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiList Chem_NonStdChemComp_SortedChemTorsions(Chem_NonStdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemTorsions");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'sortedChemTorsions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'sortedChemTorsions' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to class 
LinkEnd
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiList Chem_NonStdChemComp_SortedLinkEnds(Chem_NonStdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'sortedLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'sortedLinkEnds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.ChemComp.ChemComp.namingSystems

child link to 
class NamingSystem
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiList Chem_NonStdChemComp_SortedNamingSystems(Chem_NonStdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNamingSystems");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'sortedNamingSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'sortedNamingSystems' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiList Chem_NonStdChemComp_SortedResidueTypeProbs(Chem_NonStdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResidueTypeProbs");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'sortedResidueTypeProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'sortedResidueTypeProbs' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.ChemComp.ChemComp.stereochemistries

child link 
to class Stereochemistry
  @param  Chem_NonStdChemComp self
  @returns   the result
**/
ApiList Chem_NonStdChemComp_SortedStereochemistries(Chem_NonStdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedStereochemistries");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: cannot find method 'sortedStereochemistries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.NonStdChemComp: method 'sortedStereochemistries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
