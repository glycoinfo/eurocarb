
#include "ccp.h"

/*
  Standard ChemComp, or ChemComp that has a one-letter Code (unique within the molType). In practice one of the twenty standard amino acids or the four standrad DNA or RNA bases
*/

/* package ccp.api.molecule.ChemComp */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_StdChemComp self
  @param  Impl_ApplicationData value
**/
void *Chem_StdChemComp_AddApplicationData(Chem_StdChemComp self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'addApplicationData' is not callable");
  
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
  @param  Chem_StdChemComp self
  @param  ApiString value
**/
void *Chem_StdChemComp_AddCommonName(Chem_StdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addCommonName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'addCommonName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'addCommonName' is not callable");
  
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
  @param  Chem_StdChemComp self
  @param  ApiString value
**/
void *Chem_StdChemComp_AddKeyword(Chem_StdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addKeyword");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'addKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'addKeyword' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.ChemComp.StdChemComp
  @param  Chem_StdChemComp self
  @param  ApiBoolean complete
**/
void *Chem_StdChemComp_CheckAllValid(Chem_StdChemComp self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.ChemComp.StdChemComp
  @param  Chem_StdChemComp self
  @param  ApiBoolean complete
**/
void *Chem_StdChemComp_CheckValid(Chem_StdChemComp self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'checkValid' is not callable");
  
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
  @param  Chem_StdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_StdChemComp_FindAllActiveRepositories(Chem_StdChemComp self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'findAllActiveRepositories' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_StdChemComp_FindAllActiveRepositories_keyval0(Chem_StdChemComp self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_StdChemComp_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_StdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_StdChemComp_FindAllActiveRepositories_keyval1(Chem_StdChemComp self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_StdChemComp_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_StdChemComp_FindAllActiveRepositories_keyval2(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_StdChemComp_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_StdChemComp_FindAllActiveRepositories_keyval3(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_StdChemComp_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_StdChemComp self
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
ApiList Chem_StdChemComp_FindAllActiveRepositories_keyval4(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_StdChemComp_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_StdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_StdChemComp_FindAllApplicationData(Chem_StdChemComp self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'findAllApplicationData' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_StdChemComp_FindAllApplicationData_keyval0(Chem_StdChemComp self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_StdChemComp_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_StdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_StdChemComp_FindAllApplicationData_keyval1(Chem_StdChemComp self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_StdChemComp_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_StdChemComp_FindAllApplicationData_keyval2(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_StdChemComp_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_StdChemComp_FindAllApplicationData_keyval3(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_StdChemComp_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_StdChemComp self
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
ApiList Chem_StdChemComp_FindAllApplicationData_keyval4(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_StdChemComp_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_StdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemAngles(Chem_StdChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemAngles");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'findAllChemAngles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'findAllChemAngles' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemAngles_keyval0(Chem_StdChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_StdChemComp_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_StdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemAngles_keyval1(Chem_StdChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_StdChemComp_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemAngles_keyval2(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_StdChemComp_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemAngles_keyval3(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_StdChemComp_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_StdChemComp self
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
ApiSet Chem_StdChemComp_FindAllChemAngles_keyval4(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_StdChemComp_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_StdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemAtomSets(Chem_StdChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemAtomSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'findAllChemAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'findAllChemAtomSets' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemAtomSets_keyval0(Chem_StdChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_StdChemComp_FindAllChemAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_StdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemAtomSets_keyval1(Chem_StdChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_StdChemComp_FindAllChemAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemAtomSets_keyval2(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_StdChemComp_FindAllChemAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemAtomSets_keyval3(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_StdChemComp_FindAllChemAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_StdChemComp self
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
ApiSet Chem_StdChemComp_FindAllChemAtomSets_keyval4(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_StdChemComp_FindAllChemAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_StdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemAtoms(Chem_StdChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'findAllChemAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'findAllChemAtoms' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemAtoms_keyval0(Chem_StdChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_StdChemComp_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_StdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemAtoms_keyval1(Chem_StdChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_StdChemComp_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemAtoms_keyval2(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_StdChemComp_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemAtoms_keyval3(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_StdChemComp_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_StdChemComp self
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
ApiSet Chem_StdChemComp_FindAllChemAtoms_keyval4(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_StdChemComp_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_StdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemBonds(Chem_StdChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemBonds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'findAllChemBonds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'findAllChemBonds' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemBonds_keyval0(Chem_StdChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_StdChemComp_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_StdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemBonds_keyval1(Chem_StdChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_StdChemComp_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemBonds_keyval2(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_StdChemComp_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemBonds_keyval3(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_StdChemComp_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_StdChemComp self
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
ApiSet Chem_StdChemComp_FindAllChemBonds_keyval4(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_StdChemComp_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_StdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemCompVars(Chem_StdChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'findAllChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'findAllChemCompVars' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemCompVars_keyval0(Chem_StdChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_StdChemComp_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_StdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemCompVars_keyval1(Chem_StdChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_StdChemComp_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemCompVars_keyval2(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_StdChemComp_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemCompVars_keyval3(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_StdChemComp_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_StdChemComp self
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
ApiSet Chem_StdChemComp_FindAllChemCompVars_keyval4(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_StdChemComp_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_StdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemTorsions(Chem_StdChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemTorsions");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'findAllChemTorsions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'findAllChemTorsions' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemTorsions_keyval0(Chem_StdChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_StdChemComp_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_StdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemTorsions_keyval1(Chem_StdChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_StdChemComp_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemTorsions_keyval2(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_StdChemComp_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllChemTorsions_keyval3(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_StdChemComp_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_StdChemComp self
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
ApiSet Chem_StdChemComp_FindAllChemTorsions_keyval4(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_StdChemComp_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to class 
LinkEnd
  @param  Chem_StdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllLinkEnds(Chem_StdChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'findAllLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'findAllLinkEnds' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllLinkEnds_keyval0(Chem_StdChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_StdChemComp_FindAllLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to class 
LinkEnd
  @param  Chem_StdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllLinkEnds_keyval1(Chem_StdChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_StdChemComp_FindAllLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to class 
LinkEnd
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllLinkEnds_keyval2(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_StdChemComp_FindAllLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to class 
LinkEnd
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllLinkEnds_keyval3(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_StdChemComp_FindAllLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to class 
LinkEnd
  @param  Chem_StdChemComp self
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
ApiSet Chem_StdChemComp_FindAllLinkEnds_keyval4(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_StdChemComp_FindAllLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.namingSystems

child link to 
class NamingSystem
  @param  Chem_StdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllNamingSystems(Chem_StdChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNamingSystems");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'findAllNamingSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'findAllNamingSystems' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllNamingSystems_keyval0(Chem_StdChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_StdChemComp_FindAllNamingSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.namingSystems

child link to 
class NamingSystem
  @param  Chem_StdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllNamingSystems_keyval1(Chem_StdChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_StdChemComp_FindAllNamingSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.namingSystems

child link to 
class NamingSystem
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllNamingSystems_keyval2(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_StdChemComp_FindAllNamingSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.namingSystems

child link to 
class NamingSystem
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllNamingSystems_keyval3(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_StdChemComp_FindAllNamingSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.namingSystems

child link to 
class NamingSystem
  @param  Chem_StdChemComp self
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
ApiSet Chem_StdChemComp_FindAllNamingSystems_keyval4(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_StdChemComp_FindAllNamingSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_StdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllResidueTypeProbs(Chem_StdChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResidueTypeProbs");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'findAllResidueTypeProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'findAllResidueTypeProbs' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllResidueTypeProbs_keyval0(Chem_StdChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_StdChemComp_FindAllResidueTypeProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_StdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllResidueTypeProbs_keyval1(Chem_StdChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_StdChemComp_FindAllResidueTypeProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllResidueTypeProbs_keyval2(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_StdChemComp_FindAllResidueTypeProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllResidueTypeProbs_keyval3(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_StdChemComp_FindAllResidueTypeProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_StdChemComp self
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
ApiSet Chem_StdChemComp_FindAllResidueTypeProbs_keyval4(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_StdChemComp_FindAllResidueTypeProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.stereochemistries

child link 
to class Stereochemistry
  @param  Chem_StdChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllStereochemistries(Chem_StdChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllStereochemistries");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'findAllStereochemistries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'findAllStereochemistries' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllStereochemistries_keyval0(Chem_StdChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_StdChemComp_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.stereochemistries

child link 
to class Stereochemistry
  @param  Chem_StdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllStereochemistries_keyval1(Chem_StdChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_StdChemComp_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.stereochemistries

child link 
to class Stereochemistry
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllStereochemistries_keyval2(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_StdChemComp_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.stereochemistries

child link 
to class Stereochemistry
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_StdChemComp_FindAllStereochemistries_keyval3(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_StdChemComp_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.stereochemistries

child link 
to class Stereochemistry
  @param  Chem_StdChemComp self
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
ApiSet Chem_StdChemComp_FindAllStereochemistries_keyval4(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_StdChemComp_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_StdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Chem_StdChemComp_FindFirstActiveRepository(Chem_StdChemComp self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'findFirstActiveRepository' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Chem_StdChemComp_FindFirstActiveRepository_keyval0(Chem_StdChemComp self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_StdChemComp_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_StdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Chem_StdChemComp_FindFirstActiveRepository_keyval1(Chem_StdChemComp self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_StdChemComp_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Chem_StdChemComp_FindFirstActiveRepository_keyval2(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_StdChemComp_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Chem_StdChemComp_FindFirstActiveRepository_keyval3(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_StdChemComp_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_StdChemComp self
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
Impl_Repository Chem_StdChemComp_FindFirstActiveRepository_keyval4(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_StdChemComp_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_StdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_StdChemComp_FindFirstApplicationData(Chem_StdChemComp self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'findFirstApplicationData' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_StdChemComp_FindFirstApplicationData_keyval0(Chem_StdChemComp self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_StdChemComp_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_StdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_StdChemComp_FindFirstApplicationData_keyval1(Chem_StdChemComp self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_StdChemComp_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_StdChemComp_FindFirstApplicationData_keyval2(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_StdChemComp_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_StdChemComp_FindFirstApplicationData_keyval3(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_StdChemComp_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_StdChemComp self
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
Impl_ApplicationData Chem_StdChemComp_FindFirstApplicationData_keyval4(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_StdChemComp_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_StdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_StdChemComp_FindFirstChemAngle(Chem_StdChemComp self, ApiMap conditions)
{
  
  Chem_ChemAngle obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemAngle");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'findFirstChemAngle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'findFirstChemAngle' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_StdChemComp_FindFirstChemAngle_keyval0(Chem_StdChemComp self)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_StdChemComp_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_StdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_StdChemComp_FindFirstChemAngle_keyval1(Chem_StdChemComp self, char * key, ApiObject value)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_StdChemComp_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_StdChemComp_FindFirstChemAngle_keyval2(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_StdChemComp_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_StdChemComp_FindFirstChemAngle_keyval3(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_StdChemComp_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_StdChemComp self
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
Chem_ChemAngle Chem_StdChemComp_FindFirstChemAngle_keyval4(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_StdChemComp_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_StdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_StdChemComp_FindFirstChemAtom(Chem_StdChemComp self, ApiMap conditions)
{
  
  Chem_AbstractChemAtom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'findFirstChemAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'findFirstChemAtom' is not callable");
  
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
  @param  Chem_StdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtomSet Chem_StdChemComp_FindFirstChemAtomSet(Chem_StdChemComp self, ApiMap conditions)
{
  
  Chem_ChemAtomSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemAtomSet");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'findFirstChemAtomSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'findFirstChemAtomSet' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtomSet Chem_StdChemComp_FindFirstChemAtomSet_keyval0(Chem_StdChemComp self)
{
  
  Chem_ChemAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_StdChemComp_FindFirstChemAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_StdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtomSet Chem_StdChemComp_FindFirstChemAtomSet_keyval1(Chem_StdChemComp self, char * key, ApiObject value)
{
  
  Chem_ChemAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_StdChemComp_FindFirstChemAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtomSet Chem_StdChemComp_FindFirstChemAtomSet_keyval2(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_StdChemComp_FindFirstChemAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtomSet Chem_StdChemComp_FindFirstChemAtomSet_keyval3(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_StdChemComp_FindFirstChemAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_StdChemComp self
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
Chem_ChemAtomSet Chem_StdChemComp_FindFirstChemAtomSet_keyval4(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_StdChemComp_FindFirstChemAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_StdChemComp self
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_StdChemComp_FindFirstChemAtom_keyval0(Chem_StdChemComp self)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_StdChemComp_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_StdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_StdChemComp_FindFirstChemAtom_keyval1(Chem_StdChemComp self, char * key, ApiObject value)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_StdChemComp_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_StdChemComp_FindFirstChemAtom_keyval2(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_StdChemComp_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_StdChemComp_FindFirstChemAtom_keyval3(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_StdChemComp_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_StdChemComp self
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
Chem_AbstractChemAtom Chem_StdChemComp_FindFirstChemAtom_keyval4(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_StdChemComp_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_StdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_StdChemComp_FindFirstChemBond(Chem_StdChemComp self, ApiMap conditions)
{
  
  Chem_ChemBond obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemBond");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'findFirstChemBond'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'findFirstChemBond' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_StdChemComp_FindFirstChemBond_keyval0(Chem_StdChemComp self)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_StdChemComp_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_StdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_StdChemComp_FindFirstChemBond_keyval1(Chem_StdChemComp self, char * key, ApiObject value)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_StdChemComp_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_StdChemComp_FindFirstChemBond_keyval2(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_StdChemComp_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_StdChemComp_FindFirstChemBond_keyval3(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_StdChemComp_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_StdChemComp self
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
Chem_ChemBond Chem_StdChemComp_FindFirstChemBond_keyval4(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_StdChemComp_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_StdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_StdChemComp_FindFirstChemCompVar(Chem_StdChemComp self, ApiMap conditions)
{
  
  Chem_ChemCompVar obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemCompVar");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'findFirstChemCompVar'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'findFirstChemCompVar' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_StdChemComp_FindFirstChemCompVar_keyval0(Chem_StdChemComp self)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_StdChemComp_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_StdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_StdChemComp_FindFirstChemCompVar_keyval1(Chem_StdChemComp self, char * key, ApiObject value)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_StdChemComp_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_StdChemComp_FindFirstChemCompVar_keyval2(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_StdChemComp_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_StdChemComp_FindFirstChemCompVar_keyval3(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_StdChemComp_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_StdChemComp self
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
Chem_ChemCompVar Chem_StdChemComp_FindFirstChemCompVar_keyval4(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_StdChemComp_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_StdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_StdChemComp_FindFirstChemTorsion(Chem_StdChemComp self, ApiMap conditions)
{
  
  Chem_ChemTorsion obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemTorsion");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'findFirstChemTorsion'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'findFirstChemTorsion' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_StdChemComp_FindFirstChemTorsion_keyval0(Chem_StdChemComp self)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_StdChemComp_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_StdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_StdChemComp_FindFirstChemTorsion_keyval1(Chem_StdChemComp self, char * key, ApiObject value)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_StdChemComp_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_StdChemComp_FindFirstChemTorsion_keyval2(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_StdChemComp_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_StdChemComp_FindFirstChemTorsion_keyval3(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_StdChemComp_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_StdChemComp self
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
Chem_ChemTorsion Chem_StdChemComp_FindFirstChemTorsion_keyval4(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_StdChemComp_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to 
class LinkEnd
  @param  Chem_StdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_StdChemComp_FindFirstLinkEnd(Chem_StdChemComp self, ApiMap conditions)
{
  
  Chem_LinkEnd obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstLinkEnd");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'findFirstLinkEnd'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'findFirstLinkEnd' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_StdChemComp_FindFirstLinkEnd_keyval0(Chem_StdChemComp self)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_StdChemComp_FindFirstLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to 
class LinkEnd
  @param  Chem_StdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_StdChemComp_FindFirstLinkEnd_keyval1(Chem_StdChemComp self, char * key, ApiObject value)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_StdChemComp_FindFirstLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to 
class LinkEnd
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_StdChemComp_FindFirstLinkEnd_keyval2(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_StdChemComp_FindFirstLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to 
class LinkEnd
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_StdChemComp_FindFirstLinkEnd_keyval3(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_StdChemComp_FindFirstLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to 
class LinkEnd
  @param  Chem_StdChemComp self
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
Chem_LinkEnd Chem_StdChemComp_FindFirstLinkEnd_keyval4(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_StdChemComp_FindFirstLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.namingSystems

child link 
to class NamingSystem
  @param  Chem_StdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_NamingSystem Chem_StdChemComp_FindFirstNamingSystem(Chem_StdChemComp self, ApiMap conditions)
{
  
  Chem_NamingSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNamingSystem");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'findFirstNamingSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'findFirstNamingSystem' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns  the first value that satisfies the conditions 
**/
Chem_NamingSystem Chem_StdChemComp_FindFirstNamingSystem_keyval0(Chem_StdChemComp self)
{
  
  Chem_NamingSystem  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_StdChemComp_FindFirstNamingSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.namingSystems

child link 
to class NamingSystem
  @param  Chem_StdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_NamingSystem Chem_StdChemComp_FindFirstNamingSystem_keyval1(Chem_StdChemComp self, char * key, ApiObject value)
{
  
  Chem_NamingSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_StdChemComp_FindFirstNamingSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.namingSystems

child link 
to class NamingSystem
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_NamingSystem Chem_StdChemComp_FindFirstNamingSystem_keyval2(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_NamingSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_StdChemComp_FindFirstNamingSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.namingSystems

child link 
to class NamingSystem
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_NamingSystem Chem_StdChemComp_FindFirstNamingSystem_keyval3(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_NamingSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_StdChemComp_FindFirstNamingSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.namingSystems

child link 
to class NamingSystem
  @param  Chem_StdChemComp self
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
Chem_NamingSystem Chem_StdChemComp_FindFirstNamingSystem_keyval4(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_NamingSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_StdChemComp_FindFirstNamingSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_StdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueTypeProb Chem_StdChemComp_FindFirstResidueTypeProb(Chem_StdChemComp self, ApiMap conditions)
{
  
  Nmr_ResidueTypeProb obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResidueTypeProb");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'findFirstResidueTypeProb'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'findFirstResidueTypeProb' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueTypeProb Chem_StdChemComp_FindFirstResidueTypeProb_keyval0(Chem_StdChemComp self)
{
  
  Nmr_ResidueTypeProb  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_StdChemComp_FindFirstResidueTypeProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_StdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueTypeProb Chem_StdChemComp_FindFirstResidueTypeProb_keyval1(Chem_StdChemComp self, char * key, ApiObject value)
{
  
  Nmr_ResidueTypeProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_StdChemComp_FindFirstResidueTypeProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueTypeProb Chem_StdChemComp_FindFirstResidueTypeProb_keyval2(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ResidueTypeProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_StdChemComp_FindFirstResidueTypeProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueTypeProb Chem_StdChemComp_FindFirstResidueTypeProb_keyval3(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ResidueTypeProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_StdChemComp_FindFirstResidueTypeProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_StdChemComp self
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
Nmr_ResidueTypeProb Chem_StdChemComp_FindFirstResidueTypeProb_keyval4(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ResidueTypeProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_StdChemComp_FindFirstResidueTypeProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.stereochemistries

child 
link to class Stereochemistry
  @param  Chem_StdChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_StdChemComp_FindFirstStereochemistry(Chem_StdChemComp self, ApiMap conditions)
{
  
  Chem_Stereochemistry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstStereochemistry");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'findFirstStereochemistry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'findFirstStereochemistry' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_StdChemComp_FindFirstStereochemistry_keyval0(Chem_StdChemComp self)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_StdChemComp_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.stereochemistries

child 
link to class Stereochemistry
  @param  Chem_StdChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_StdChemComp_FindFirstStereochemistry_keyval1(Chem_StdChemComp self, char * key, ApiObject value)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_StdChemComp_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.stereochemistries

child 
link to class Stereochemistry
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_StdChemComp_FindFirstStereochemistry_keyval2(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_StdChemComp_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.stereochemistries

child 
link to class Stereochemistry
  @param  Chem_StdChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_StdChemComp_FindFirstStereochemistry_keyval3(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_StdChemComp_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.stereochemistries

child 
link to class Stereochemistry
  @param  Chem_StdChemComp self
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
Chem_Stereochemistry Chem_StdChemComp_FindFirstStereochemistry_keyval4(Chem_StdChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_StdChemComp_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.ChemComp.StdChemComp
  @param  Chem_StdChemComp self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Chem_StdChemComp_Get(Chem_StdChemComp self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_StdChemComp self
  @returns   the result
**/
Acco_AccessObject Chem_StdChemComp_GetAccess(Chem_StdChemComp self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getAccess' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
Acco_AccessObject Chem_StdChemComp_GetActiveAccess(Chem_StdChemComp self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getActiveAccess' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiList Chem_StdChemComp_GetActiveRepositories(Chem_StdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getActiveRepositories' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiList Chem_StdChemComp_GetApplicationData(Chem_StdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getApplicationData' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiString Chem_StdChemComp_GetBaseGlycoCtCode(Chem_StdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBaseGlycoCtCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getBaseGlycoCtCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getBaseGlycoCtCode' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiString Chem_StdChemComp_GetBeilsteinCode(Chem_StdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBeilsteinCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getBeilsteinCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getBeilsteinCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.ChemComp.StdChemComp
  @param  Chem_StdChemComp self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Chem_StdChemComp Chem_StdChemComp_GetByKey(Chem_StdChemComp self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Chem_StdChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.casRegCode

CAS code
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiString Chem_StdChemComp_GetCasRegCode(Chem_StdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCasRegCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getCasRegCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getCasRegCode' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiString Chem_StdChemComp_GetCcpCode(Chem_StdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCcpCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getCcpCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getCcpCode' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiSet Chem_StdChemComp_GetChemAngles(Chem_StdChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAngles");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getChemAngles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getChemAngles' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiSet Chem_StdChemComp_GetChemAtomSets(Chem_StdChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAtomSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getChemAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getChemAtomSets' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiSet Chem_StdChemComp_GetChemAtoms(Chem_StdChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getChemAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getChemAtoms' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiSet Chem_StdChemComp_GetChemBonds(Chem_StdChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemBonds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getChemBonds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getChemBonds' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiSet Chem_StdChemComp_GetChemCompVars(Chem_StdChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getChemCompVars' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiSet Chem_StdChemComp_GetChemTorsions(Chem_StdChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemTorsions");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getChemTorsions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getChemTorsions' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiString Chem_StdChemComp_GetClassName(Chem_StdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for attribute code1Letter.
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiString Chem_StdChemComp_GetCode1Letter(Chem_StdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCode1Letter");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getCode1Letter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getCode1Letter' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiString Chem_StdChemComp_GetCode3Letter(Chem_StdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCode3Letter");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getCode3Letter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getCode3Letter' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiList Chem_StdChemComp_GetCommonNames(Chem_StdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCommonNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getCommonNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getCommonNames' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiString Chem_StdChemComp_GetCreatedBy(Chem_StdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getCreatedBy' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiString Chem_StdChemComp_GetDetails(Chem_StdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getDetails' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiList Chem_StdChemComp_GetFieldNames(Chem_StdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getFieldNames' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiString Chem_StdChemComp_GetGuid(Chem_StdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getGuid' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiBoolean Chem_StdChemComp_GetHasStdChirality(Chem_StdChemComp self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHasStdChirality");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getHasStdChirality'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getHasStdChirality' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiBoolean Chem_StdChemComp_GetInConstructor(Chem_StdChemComp self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getInConstructor' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiBoolean Chem_StdChemComp_GetIsDeleted(Chem_StdChemComp self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getIsDeleted' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiBoolean Chem_StdChemComp_GetIsLinearPolymer(Chem_StdChemComp self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLinearPolymer");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getIsLinearPolymer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getIsLinearPolymer' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiBoolean Chem_StdChemComp_GetIsLoaded(Chem_StdChemComp self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getIsLoaded' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiBoolean Chem_StdChemComp_GetIsModifiable(Chem_StdChemComp self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getIsModifiable' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiBoolean Chem_StdChemComp_GetIsModified(Chem_StdChemComp self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getIsModified' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiBoolean Chem_StdChemComp_GetIsReading(Chem_StdChemComp self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getIsReading' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiList Chem_StdChemComp_GetKeywords(Chem_StdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getKeywords");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getKeywords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getKeywords' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiString Chem_StdChemComp_GetLastUnlockedBy(Chem_StdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getLastUnlockedBy' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiSet Chem_StdChemComp_GetLinkEnds(Chem_StdChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getLinkEnds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.memopsRoot

parent link
  @param  Chem_StdChemComp self
  @returns   the result
**/
Impl_MemopsRoot Chem_StdChemComp_GetMemopsRoot(Chem_StdChemComp self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.merckCode

Merck compound code
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiString Chem_StdChemComp_GetMerckCode(Chem_StdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMerckCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getMerckCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getMerckCode' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiString Chem_StdChemComp_GetMolType(Chem_StdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getMolType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getMolType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.name

name of AbstractChemComp
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiString Chem_StdChemComp_GetName(Chem_StdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getName' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiSet Chem_StdChemComp_GetNamingSystems(Chem_StdChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNamingSystems");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getNamingSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getNamingSystems' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
Impl_PackageLocator Chem_StdChemComp_GetPackageLocator(Chem_StdChemComp self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getPackageLocator' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiString Chem_StdChemComp_GetPackageName(Chem_StdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getPackageName' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiString Chem_StdChemComp_GetPackageShortName(Chem_StdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getPackageShortName' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
Impl_MemopsRoot Chem_StdChemComp_GetParent(Chem_StdChemComp self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getParent' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiString Chem_StdChemComp_GetQualifiedName(Chem_StdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getQualifiedName' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiSet Chem_StdChemComp_GetResidueTypeProbs(Chem_StdChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResidueTypeProbs");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getResidueTypeProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getResidueTypeProbs' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
Impl_MemopsRoot Chem_StdChemComp_GetRoot(Chem_StdChemComp self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getRoot' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiString Chem_StdChemComp_GetSigmaAldrichCode(Chem_StdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSigmaAldrichCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getSigmaAldrichCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getSigmaAldrichCode' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
Chem_StdChemComp Chem_StdChemComp_GetStdChemComp(Chem_StdChemComp self)
{
  
  Chem_StdChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStdChemComp");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getStdChemComp'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getStdChemComp' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.StdChemComp.stdChemCompCode
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiString Chem_StdChemComp_GetStdChemCompCode(Chem_StdChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStdChemCompCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getStdChemCompCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getStdChemCompCode' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiSet Chem_StdChemComp_GetStereochemistries(Chem_StdChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStereochemistries");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getStereochemistries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getStereochemistries' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
Impl_TopObject Chem_StdChemComp_GetTopObject(Chem_StdChemComp self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.ChemComp.StdChemComp
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chem_StdChemComp Chem_StdChemComp_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewStdChemComp(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.ChemComp.StdChemComp
  @param  Impl_MemopsRoot parent
  @param  char * code1Letter
  @param  char * stdChemCompCode
  @returns  the new object
**/
Chem_StdChemComp Chem_StdChemComp_Init_reqd(Impl_MemopsRoot parent, char * code1Letter, char * stdChemCompCode)
{
  
  Chem_StdChemComp  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__code1Letter = ApiString_New(code1Letter);
  ApiString api__stdChemCompCode = ApiString_New(stdChemCompCode);

  PyDict_SetItemString(attrlinks, "code1Letter", api__code1Letter);
  PyDict_SetItemString(attrlinks, "stdChemCompCode", api__stdChemCompCode);
  
  obj = Chem_StdChemComp_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__code1Letter);
  Py_DECREF(api__stdChemCompCode);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_StdChemComp self
  @param  Impl_ApplicationData value
**/
void *Chem_StdChemComp_RemoveApplicationData(Chem_StdChemComp self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'removeApplicationData' is not callable");
  
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
  @param  Chem_StdChemComp self
  @param  ApiString value
**/
void *Chem_StdChemComp_RemoveCommonName(Chem_StdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeCommonName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'removeCommonName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'removeCommonName' is not callable");
  
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
  @param  Chem_StdChemComp self
  @param  ApiString value
**/
void *Chem_StdChemComp_RemoveKeyword(Chem_StdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeKeyword");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'removeKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'removeKeyword' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.ChemComp.StdChemComp
  @param  Chem_StdChemComp self
  @param  ApiString name
  @param  ApiObject value
**/
void *Chem_StdChemComp_Set(Chem_StdChemComp self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_StdChemComp self
  @param  Acco_AccessObject value
**/
void *Chem_StdChemComp_SetAccess(Chem_StdChemComp self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'setAccess' is not callable");
  
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
  @param  Chem_StdChemComp self
  @param  ApiList values
**/
void *Chem_StdChemComp_SetApplicationData(Chem_StdChemComp self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'setApplicationData' is not callable");
  
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
  @param  Chem_StdChemComp self
  @param  ApiString value
**/
void *Chem_StdChemComp_SetBaseGlycoCtCode(Chem_StdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBaseGlycoCtCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'setBaseGlycoCtCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'setBaseGlycoCtCode' is not callable");
  
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
  @param  Chem_StdChemComp self
  @param  ApiString value
**/
void *Chem_StdChemComp_SetBeilsteinCode(Chem_StdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBeilsteinCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'setBeilsteinCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'setBeilsteinCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemComp.casRegCode

CAS code
  @param  Chem_StdChemComp self
  @param  ApiString value
**/
void *Chem_StdChemComp_SetCasRegCode(Chem_StdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCasRegCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'setCasRegCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'setCasRegCode' is not callable");
  
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
  @param  Chem_StdChemComp self
  @param  ApiString value
**/
void *Chem_StdChemComp_SetCcpCode(Chem_StdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCcpCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'setCcpCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'setCcpCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.StdChemComp.code1Letter

One letter code, 
defined only for standard chem comps. For each molType there must be 
only one StdChemComp with a given oneLetterCode. This constraint is not 
checked by the model, as it would entail looping over all ChemComps 
whenever a check was made.
  @param  Chem_StdChemComp self
  @param  ApiString value
**/
void *Chem_StdChemComp_SetCode1Letter(Chem_StdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCode1Letter");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'setCode1Letter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'setCode1Letter' is not callable");
  
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
  @param  Chem_StdChemComp self
  @param  ApiString value
**/
void *Chem_StdChemComp_SetCode3Letter(Chem_StdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCode3Letter");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'setCode3Letter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'setCode3Letter' is not callable");
  
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
  @param  Chem_StdChemComp self
  @param  ApiList values
**/
void *Chem_StdChemComp_SetCommonNames(Chem_StdChemComp self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCommonNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'setCommonNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'setCommonNames' is not callable");
  
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
  @param  Chem_StdChemComp self
  @param  ApiString value
**/
void *Chem_StdChemComp_SetCreatedBy(Chem_StdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'setCreatedBy' is not callable");
  
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
  @param  Chem_StdChemComp self
  @param  ApiString value
**/
void *Chem_StdChemComp_SetDetails(Chem_StdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'setDetails' is not callable");
  
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
  @param  Chem_StdChemComp self
  @param  ApiString value
**/
void *Chem_StdChemComp_SetGuid(Chem_StdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'setGuid' is not callable");
  
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
  @param  Chem_StdChemComp self
  @param  ApiBoolean value
**/
void *Chem_StdChemComp_SetHasStdChirality(Chem_StdChemComp self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setHasStdChirality");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'setHasStdChirality'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'setHasStdChirality' is not callable");
  
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
  @param  Chem_StdChemComp self
  @param  ApiBoolean value
**/
void *Chem_StdChemComp_SetIsModifiable(Chem_StdChemComp self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'setIsModifiable' is not callable");
  
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
  @param  Chem_StdChemComp self
  @param  ApiList values
**/
void *Chem_StdChemComp_SetKeywords(Chem_StdChemComp self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setKeywords");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'setKeywords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'setKeywords' is not callable");
  
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
  @param  Chem_StdChemComp self
  @param  ApiString value
**/
void *Chem_StdChemComp_SetLastUnlockedBy(Chem_StdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemComp.merckCode

Merck compound code
  @param  Chem_StdChemComp self
  @param  ApiString value
**/
void *Chem_StdChemComp_SetMerckCode(Chem_StdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMerckCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'setMerckCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'setMerckCode' is not callable");
  
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
  @param  Chem_StdChemComp self
  @param  ApiString value
**/
void *Chem_StdChemComp_SetMolType(Chem_StdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'setMolType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'setMolType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemComp.name

name of AbstractChemComp
  @param  Chem_StdChemComp self
  @param  ApiString value
**/
void *Chem_StdChemComp_SetName(Chem_StdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'setName' is not callable");
  
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
  @param  Chem_StdChemComp self
  @param  ApiSet values
**/
void *Chem_StdChemComp_SetResidueTypeProbs(Chem_StdChemComp self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResidueTypeProbs");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'setResidueTypeProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'setResidueTypeProbs' is not callable");
  
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
  @param  Chem_StdChemComp self
  @param  ApiString value
**/
void *Chem_StdChemComp_SetSigmaAldrichCode(Chem_StdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSigmaAldrichCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'setSigmaAldrichCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'setSigmaAldrichCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.StdChemComp.stdChemCompCode
  @param  Chem_StdChemComp self
  @param  ApiString value
**/
void *Chem_StdChemComp_SetStdChemCompCode(Chem_StdChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStdChemCompCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'setStdChemCompCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'setStdChemCompCode' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiList Chem_StdChemComp_SortedChemAngles(Chem_StdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemAngles");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'sortedChemAngles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'sortedChemAngles' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiList Chem_StdChemComp_SortedChemAtomSets(Chem_StdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemAtomSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'sortedChemAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'sortedChemAtomSets' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiList Chem_StdChemComp_SortedChemAtoms(Chem_StdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'sortedChemAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'sortedChemAtoms' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiList Chem_StdChemComp_SortedChemBonds(Chem_StdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemBonds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'sortedChemBonds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'sortedChemBonds' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiList Chem_StdChemComp_SortedChemCompVars(Chem_StdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'sortedChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'sortedChemCompVars' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiList Chem_StdChemComp_SortedChemTorsions(Chem_StdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemTorsions");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'sortedChemTorsions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'sortedChemTorsions' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiList Chem_StdChemComp_SortedLinkEnds(Chem_StdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'sortedLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'sortedLinkEnds' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiList Chem_StdChemComp_SortedNamingSystems(Chem_StdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNamingSystems");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'sortedNamingSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'sortedNamingSystems' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiList Chem_StdChemComp_SortedResidueTypeProbs(Chem_StdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResidueTypeProbs");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'sortedResidueTypeProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'sortedResidueTypeProbs' is not callable");
  
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
  @param  Chem_StdChemComp self
  @returns   the result
**/
ApiList Chem_StdChemComp_SortedStereochemistries(Chem_StdChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedStereochemistries");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: cannot find method 'sortedStereochemistries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.StdChemComp: method 'sortedStereochemistries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
