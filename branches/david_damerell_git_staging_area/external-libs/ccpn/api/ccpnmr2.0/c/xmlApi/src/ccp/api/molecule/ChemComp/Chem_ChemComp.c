
#include "ccp.h"

/*
  Chemical Component. E.g. GLU (glutamate). Describes the topology of templates that serve as building block for molecules. The ChemComp holds information valid for all toploigical variants, as well as all Atoms, Bonds, Angles etc. for the different ChemCompVars (e.g. 'start','protonated'; 'end','deprotonated', etc.). For this reason the Atoms, Bonds etc. linked to do not form a consistent set. 
*/

/* package ccp.api.molecule.ChemComp */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemComp self
  @param  Impl_ApplicationData value
**/
void *Chem_ChemComp_AddApplicationData(Chem_ChemComp self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'addApplicationData' is not callable");
  
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
  @param  Chem_ChemComp self
  @param  ApiString value
**/
void *Chem_ChemComp_AddCommonName(Chem_ChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addCommonName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'addCommonName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'addCommonName' is not callable");
  
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
  @param  Chem_ChemComp self
  @param  ApiString value
**/
void *Chem_ChemComp_AddKeyword(Chem_ChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addKeyword");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'addKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'addKeyword' is not callable");
  
  args = PyTuple_Pack(1, value);
  
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
  @param  Chem_ChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemComp_FindAllActiveRepositories(Chem_ChemComp self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'findAllActiveRepositories' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemComp_FindAllActiveRepositories_keyval0(Chem_ChemComp self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemComp_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_ChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemComp_FindAllActiveRepositories_keyval1(Chem_ChemComp self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemComp_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemComp_FindAllActiveRepositories_keyval2(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemComp_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemComp_FindAllActiveRepositories_keyval3(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemComp_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_ChemComp self
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
ApiList Chem_ChemComp_FindAllActiveRepositories_keyval4(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemComp_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemComp_FindAllApplicationData(Chem_ChemComp self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'findAllApplicationData' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemComp_FindAllApplicationData_keyval0(Chem_ChemComp self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemComp_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemComp_FindAllApplicationData_keyval1(Chem_ChemComp self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemComp_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemComp_FindAllApplicationData_keyval2(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemComp_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_ChemComp_FindAllApplicationData_keyval3(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemComp_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemComp self
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
ApiList Chem_ChemComp_FindAllApplicationData_keyval4(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemComp_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_ChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemAngles(Chem_ChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemAngles");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'findAllChemAngles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'findAllChemAngles' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemAngles_keyval0(Chem_ChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemComp_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_ChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemAngles_keyval1(Chem_ChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemComp_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemAngles_keyval2(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemComp_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemAngles_keyval3(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemComp_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_ChemComp self
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
ApiSet Chem_ChemComp_FindAllChemAngles_keyval4(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemComp_FindAllChemAngles(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_ChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemAtomSets(Chem_ChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemAtomSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'findAllChemAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'findAllChemAtomSets' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemAtomSets_keyval0(Chem_ChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemComp_FindAllChemAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_ChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemAtomSets_keyval1(Chem_ChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemComp_FindAllChemAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemAtomSets_keyval2(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemComp_FindAllChemAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemAtomSets_keyval3(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemComp_FindAllChemAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_ChemComp self
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
ApiSet Chem_ChemComp_FindAllChemAtomSets_keyval4(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemComp_FindAllChemAtomSets(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_ChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemAtoms(Chem_ChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'findAllChemAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'findAllChemAtoms' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemAtoms_keyval0(Chem_ChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemComp_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_ChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemAtoms_keyval1(Chem_ChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemComp_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemAtoms_keyval2(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemComp_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemAtoms_keyval3(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemComp_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_ChemComp self
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
ApiSet Chem_ChemComp_FindAllChemAtoms_keyval4(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemComp_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_ChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemBonds(Chem_ChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemBonds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'findAllChemBonds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'findAllChemBonds' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemBonds_keyval0(Chem_ChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemComp_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_ChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemBonds_keyval1(Chem_ChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemComp_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemBonds_keyval2(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemComp_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemBonds_keyval3(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemComp_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_ChemComp self
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
ApiSet Chem_ChemComp_FindAllChemBonds_keyval4(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemComp_FindAllChemBonds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_ChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemCompVars(Chem_ChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'findAllChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'findAllChemCompVars' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemCompVars_keyval0(Chem_ChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemComp_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_ChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemCompVars_keyval1(Chem_ChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemComp_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemCompVars_keyval2(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemComp_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemCompVars_keyval3(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemComp_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_ChemComp self
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
ApiSet Chem_ChemComp_FindAllChemCompVars_keyval4(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemComp_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_ChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemTorsions(Chem_ChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemTorsions");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'findAllChemTorsions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'findAllChemTorsions' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemTorsions_keyval0(Chem_ChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemComp_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_ChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemTorsions_keyval1(Chem_ChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemComp_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemTorsions_keyval2(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemComp_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllChemTorsions_keyval3(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemComp_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_ChemComp self
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
ApiSet Chem_ChemComp_FindAllChemTorsions_keyval4(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemComp_FindAllChemTorsions(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to class 
LinkEnd
  @param  Chem_ChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllLinkEnds(Chem_ChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'findAllLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'findAllLinkEnds' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllLinkEnds_keyval0(Chem_ChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemComp_FindAllLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to class 
LinkEnd
  @param  Chem_ChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllLinkEnds_keyval1(Chem_ChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemComp_FindAllLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to class 
LinkEnd
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllLinkEnds_keyval2(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemComp_FindAllLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to class 
LinkEnd
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllLinkEnds_keyval3(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemComp_FindAllLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to class 
LinkEnd
  @param  Chem_ChemComp self
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
ApiSet Chem_ChemComp_FindAllLinkEnds_keyval4(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemComp_FindAllLinkEnds(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.namingSystems

child link to 
class NamingSystem
  @param  Chem_ChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllNamingSystems(Chem_ChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllNamingSystems");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'findAllNamingSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'findAllNamingSystems' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllNamingSystems_keyval0(Chem_ChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemComp_FindAllNamingSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.namingSystems

child link to 
class NamingSystem
  @param  Chem_ChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllNamingSystems_keyval1(Chem_ChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemComp_FindAllNamingSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.namingSystems

child link to 
class NamingSystem
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllNamingSystems_keyval2(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemComp_FindAllNamingSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.namingSystems

child link to 
class NamingSystem
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllNamingSystems_keyval3(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemComp_FindAllNamingSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.namingSystems

child link to 
class NamingSystem
  @param  Chem_ChemComp self
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
ApiSet Chem_ChemComp_FindAllNamingSystems_keyval4(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemComp_FindAllNamingSystems(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_ChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllResidueTypeProbs(Chem_ChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResidueTypeProbs");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'findAllResidueTypeProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'findAllResidueTypeProbs' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllResidueTypeProbs_keyval0(Chem_ChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemComp_FindAllResidueTypeProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_ChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllResidueTypeProbs_keyval1(Chem_ChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemComp_FindAllResidueTypeProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllResidueTypeProbs_keyval2(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemComp_FindAllResidueTypeProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllResidueTypeProbs_keyval3(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemComp_FindAllResidueTypeProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_ChemComp self
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
ApiSet Chem_ChemComp_FindAllResidueTypeProbs_keyval4(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemComp_FindAllResidueTypeProbs(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.stereochemistries

child link 
to class Stereochemistry
  @param  Chem_ChemComp self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllStereochemistries(Chem_ChemComp self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllStereochemistries");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'findAllStereochemistries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'findAllStereochemistries' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllStereochemistries_keyval0(Chem_ChemComp self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemComp_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.stereochemistries

child link 
to class Stereochemistry
  @param  Chem_ChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllStereochemistries_keyval1(Chem_ChemComp self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemComp_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.stereochemistries

child link 
to class Stereochemistry
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllStereochemistries_keyval2(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemComp_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.stereochemistries

child link 
to class Stereochemistry
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_ChemComp_FindAllStereochemistries_keyval3(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemComp_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.ChemComp.stereochemistries

child link 
to class Stereochemistry
  @param  Chem_ChemComp self
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
ApiSet Chem_ChemComp_FindAllStereochemistries_keyval4(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemComp_FindAllStereochemistries(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_ChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Chem_ChemComp_FindFirstActiveRepository(Chem_ChemComp self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'findFirstActiveRepository' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Chem_ChemComp_FindFirstActiveRepository_keyval0(Chem_ChemComp self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemComp_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_ChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Chem_ChemComp_FindFirstActiveRepository_keyval1(Chem_ChemComp self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemComp_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Chem_ChemComp_FindFirstActiveRepository_keyval2(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemComp_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Chem_ChemComp_FindFirstActiveRepository_keyval3(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemComp_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chem_ChemComp self
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
Impl_Repository Chem_ChemComp_FindFirstActiveRepository_keyval4(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemComp_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_ChemComp_FindFirstApplicationData(Chem_ChemComp self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'findFirstApplicationData' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_ChemComp_FindFirstApplicationData_keyval0(Chem_ChemComp self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemComp_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_ChemComp_FindFirstApplicationData_keyval1(Chem_ChemComp self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemComp_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_ChemComp_FindFirstApplicationData_keyval2(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemComp_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_ChemComp_FindFirstApplicationData_keyval3(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemComp_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemComp self
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
Impl_ApplicationData Chem_ChemComp_FindFirstApplicationData_keyval4(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemComp_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_ChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_ChemComp_FindFirstChemAngle(Chem_ChemComp self, ApiMap conditions)
{
  
  Chem_ChemAngle obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemAngle");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'findFirstChemAngle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'findFirstChemAngle' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_ChemComp_FindFirstChemAngle_keyval0(Chem_ChemComp self)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemComp_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_ChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_ChemComp_FindFirstChemAngle_keyval1(Chem_ChemComp self, char * key, ApiObject value)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemComp_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_ChemComp_FindFirstChemAngle_keyval2(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemComp_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAngle Chem_ChemComp_FindFirstChemAngle_keyval3(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemComp_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_ChemComp self
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
Chem_ChemAngle Chem_ChemComp_FindFirstChemAngle_keyval4(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemAngle  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemComp_FindFirstChemAngle(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_ChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_ChemComp_FindFirstChemAtom(Chem_ChemComp self, ApiMap conditions)
{
  
  Chem_AbstractChemAtom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'findFirstChemAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'findFirstChemAtom' is not callable");
  
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
  @param  Chem_ChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtomSet Chem_ChemComp_FindFirstChemAtomSet(Chem_ChemComp self, ApiMap conditions)
{
  
  Chem_ChemAtomSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemAtomSet");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'findFirstChemAtomSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'findFirstChemAtomSet' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtomSet Chem_ChemComp_FindFirstChemAtomSet_keyval0(Chem_ChemComp self)
{
  
  Chem_ChemAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemComp_FindFirstChemAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_ChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtomSet Chem_ChemComp_FindFirstChemAtomSet_keyval1(Chem_ChemComp self, char * key, ApiObject value)
{
  
  Chem_ChemAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemComp_FindFirstChemAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtomSet Chem_ChemComp_FindFirstChemAtomSet_keyval2(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemComp_FindFirstChemAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemAtomSet Chem_ChemComp_FindFirstChemAtomSet_keyval3(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemComp_FindFirstChemAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtomSets

child link to 
class ChemAtomSet
  @param  Chem_ChemComp self
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
Chem_ChemAtomSet Chem_ChemComp_FindFirstChemAtomSet_keyval4(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemAtomSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemComp_FindFirstChemAtomSet(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_ChemComp self
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_ChemComp_FindFirstChemAtom_keyval0(Chem_ChemComp self)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemComp_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_ChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_ChemComp_FindFirstChemAtom_keyval1(Chem_ChemComp self, char * key, ApiObject value)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemComp_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_ChemComp_FindFirstChemAtom_keyval2(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemComp_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_ChemComp_FindFirstChemAtom_keyval3(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemComp_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemAtoms

child link to 
class AbstractChemAtom
  @param  Chem_ChemComp self
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
Chem_AbstractChemAtom Chem_ChemComp_FindFirstChemAtom_keyval4(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemComp_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_ChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_ChemComp_FindFirstChemBond(Chem_ChemComp self, ApiMap conditions)
{
  
  Chem_ChemBond obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemBond");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'findFirstChemBond'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'findFirstChemBond' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_ChemComp_FindFirstChemBond_keyval0(Chem_ChemComp self)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemComp_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_ChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_ChemComp_FindFirstChemBond_keyval1(Chem_ChemComp self, char * key, ApiObject value)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemComp_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_ChemComp_FindFirstChemBond_keyval2(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemComp_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemBond Chem_ChemComp_FindFirstChemBond_keyval3(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemComp_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemBonds

child link to 
class ChemBond
  @param  Chem_ChemComp self
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
Chem_ChemBond Chem_ChemComp_FindFirstChemBond_keyval4(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemBond  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemComp_FindFirstChemBond(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_ChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_ChemComp_FindFirstChemCompVar(Chem_ChemComp self, ApiMap conditions)
{
  
  Chem_ChemCompVar obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemCompVar");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'findFirstChemCompVar'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'findFirstChemCompVar' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_ChemComp_FindFirstChemCompVar_keyval0(Chem_ChemComp self)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemComp_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_ChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_ChemComp_FindFirstChemCompVar_keyval1(Chem_ChemComp self, char * key, ApiObject value)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemComp_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_ChemComp_FindFirstChemCompVar_keyval2(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemComp_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_ChemComp_FindFirstChemCompVar_keyval3(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemComp_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemCompVars

child link to 
class ChemCompVar
  @param  Chem_ChemComp self
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
Chem_ChemCompVar Chem_ChemComp_FindFirstChemCompVar_keyval4(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemComp_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_ChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_ChemComp_FindFirstChemTorsion(Chem_ChemComp self, ApiMap conditions)
{
  
  Chem_ChemTorsion obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemTorsion");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'findFirstChemTorsion'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'findFirstChemTorsion' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_ChemComp_FindFirstChemTorsion_keyval0(Chem_ChemComp self)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemComp_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_ChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_ChemComp_FindFirstChemTorsion_keyval1(Chem_ChemComp self, char * key, ApiObject value)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemComp_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_ChemComp_FindFirstChemTorsion_keyval2(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemComp_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemTorsion Chem_ChemComp_FindFirstChemTorsion_keyval3(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemComp_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.chemTorsions

child link to 
class ChemTorsion
  @param  Chem_ChemComp self
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
Chem_ChemTorsion Chem_ChemComp_FindFirstChemTorsion_keyval4(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemTorsion  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemComp_FindFirstChemTorsion(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to 
class LinkEnd
  @param  Chem_ChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_ChemComp_FindFirstLinkEnd(Chem_ChemComp self, ApiMap conditions)
{
  
  Chem_LinkEnd obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstLinkEnd");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'findFirstLinkEnd'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'findFirstLinkEnd' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_ChemComp_FindFirstLinkEnd_keyval0(Chem_ChemComp self)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemComp_FindFirstLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to 
class LinkEnd
  @param  Chem_ChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_ChemComp_FindFirstLinkEnd_keyval1(Chem_ChemComp self, char * key, ApiObject value)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemComp_FindFirstLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to 
class LinkEnd
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_ChemComp_FindFirstLinkEnd_keyval2(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemComp_FindFirstLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to 
class LinkEnd
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_LinkEnd Chem_ChemComp_FindFirstLinkEnd_keyval3(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemComp_FindFirstLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.linkEnds

child link to 
class LinkEnd
  @param  Chem_ChemComp self
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
Chem_LinkEnd Chem_ChemComp_FindFirstLinkEnd_keyval4(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_LinkEnd  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemComp_FindFirstLinkEnd(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.namingSystems

child link 
to class NamingSystem
  @param  Chem_ChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_NamingSystem Chem_ChemComp_FindFirstNamingSystem(Chem_ChemComp self, ApiMap conditions)
{
  
  Chem_NamingSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstNamingSystem");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'findFirstNamingSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'findFirstNamingSystem' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns  the first value that satisfies the conditions 
**/
Chem_NamingSystem Chem_ChemComp_FindFirstNamingSystem_keyval0(Chem_ChemComp self)
{
  
  Chem_NamingSystem  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemComp_FindFirstNamingSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.namingSystems

child link 
to class NamingSystem
  @param  Chem_ChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_NamingSystem Chem_ChemComp_FindFirstNamingSystem_keyval1(Chem_ChemComp self, char * key, ApiObject value)
{
  
  Chem_NamingSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemComp_FindFirstNamingSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.namingSystems

child link 
to class NamingSystem
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_NamingSystem Chem_ChemComp_FindFirstNamingSystem_keyval2(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_NamingSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemComp_FindFirstNamingSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.namingSystems

child link 
to class NamingSystem
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_NamingSystem Chem_ChemComp_FindFirstNamingSystem_keyval3(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_NamingSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemComp_FindFirstNamingSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.namingSystems

child link 
to class NamingSystem
  @param  Chem_ChemComp self
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
Chem_NamingSystem Chem_ChemComp_FindFirstNamingSystem_keyval4(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_NamingSystem  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemComp_FindFirstNamingSystem(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_ChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueTypeProb Chem_ChemComp_FindFirstResidueTypeProb(Chem_ChemComp self, ApiMap conditions)
{
  
  Nmr_ResidueTypeProb obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResidueTypeProb");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'findFirstResidueTypeProb'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'findFirstResidueTypeProb' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueTypeProb Chem_ChemComp_FindFirstResidueTypeProb_keyval0(Chem_ChemComp self)
{
  
  Nmr_ResidueTypeProb  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemComp_FindFirstResidueTypeProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_ChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueTypeProb Chem_ChemComp_FindFirstResidueTypeProb_keyval1(Chem_ChemComp self, char * key, ApiObject value)
{
  
  Nmr_ResidueTypeProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemComp_FindFirstResidueTypeProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueTypeProb Chem_ChemComp_FindFirstResidueTypeProb_keyval2(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_ResidueTypeProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemComp_FindFirstResidueTypeProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_ResidueTypeProb Chem_ChemComp_FindFirstResidueTypeProb_keyval3(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_ResidueTypeProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemComp_FindFirstResidueTypeProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemComp.ChemComp.residueTypeProbs

ResidueTypeProb 
describing ResonanceGroups with a probability of corresponding to this 
ChemComp.
  @param  Chem_ChemComp self
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
Nmr_ResidueTypeProb Chem_ChemComp_FindFirstResidueTypeProb_keyval4(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_ResidueTypeProb  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemComp_FindFirstResidueTypeProb(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.stereochemistries

child 
link to class Stereochemistry
  @param  Chem_ChemComp self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_ChemComp_FindFirstStereochemistry(Chem_ChemComp self, ApiMap conditions)
{
  
  Chem_Stereochemistry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstStereochemistry");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'findFirstStereochemistry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'findFirstStereochemistry' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_ChemComp_FindFirstStereochemistry_keyval0(Chem_ChemComp self)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_ChemComp_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.stereochemistries

child 
link to class Stereochemistry
  @param  Chem_ChemComp self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_ChemComp_FindFirstStereochemistry_keyval1(Chem_ChemComp self, char * key, ApiObject value)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_ChemComp_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.stereochemistries

child 
link to class Stereochemistry
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_ChemComp_FindFirstStereochemistry_keyval2(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_ChemComp_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.stereochemistries

child 
link to class Stereochemistry
  @param  Chem_ChemComp self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_Stereochemistry Chem_ChemComp_FindFirstStereochemistry_keyval3(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_ChemComp_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.ChemComp.stereochemistries

child 
link to class Stereochemistry
  @param  Chem_ChemComp self
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
Chem_Stereochemistry Chem_ChemComp_FindFirstStereochemistry_keyval4(Chem_ChemComp self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_Stereochemistry  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_ChemComp_FindFirstStereochemistry(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_ChemComp self
  @returns   the result
**/
Acco_AccessObject Chem_ChemComp_GetAccess(Chem_ChemComp self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getAccess' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiList Chem_ChemComp_GetActiveRepositories(Chem_ChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getActiveRepositories' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiList Chem_ChemComp_GetApplicationData(Chem_ChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getApplicationData' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiString Chem_ChemComp_GetBaseGlycoCtCode(Chem_ChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBaseGlycoCtCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getBaseGlycoCtCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getBaseGlycoCtCode' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiString Chem_ChemComp_GetBeilsteinCode(Chem_ChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBeilsteinCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getBeilsteinCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getBeilsteinCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.ChemComp.ChemComp
  @param  Chem_ChemComp self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Chem_ChemComp Chem_ChemComp_GetByKey(Chem_ChemComp self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Chem_ChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.casRegCode

CAS code
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiString Chem_ChemComp_GetCasRegCode(Chem_ChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCasRegCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getCasRegCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getCasRegCode' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiString Chem_ChemComp_GetCcpCode(Chem_ChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCcpCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getCcpCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getCcpCode' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiSet Chem_ChemComp_GetChemAngles(Chem_ChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAngles");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getChemAngles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getChemAngles' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiSet Chem_ChemComp_GetChemAtomSets(Chem_ChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAtomSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getChemAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getChemAtomSets' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiSet Chem_ChemComp_GetChemAtoms(Chem_ChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getChemAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getChemAtoms' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiSet Chem_ChemComp_GetChemBonds(Chem_ChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemBonds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getChemBonds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getChemBonds' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiSet Chem_ChemComp_GetChemCompVars(Chem_ChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getChemCompVars' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiSet Chem_ChemComp_GetChemTorsions(Chem_ChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemTorsions");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getChemTorsions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getChemTorsions' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiString Chem_ChemComp_GetClassName(Chem_ChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for code1Letter attribute
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiString Chem_ChemComp_GetCode1Letter(Chem_ChemComp self)
{
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.code3Letter

PDB three letter 
code of ChemComp.
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiString Chem_ChemComp_GetCode3Letter(Chem_ChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCode3Letter");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getCode3Letter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getCode3Letter' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiList Chem_ChemComp_GetCommonNames(Chem_ChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCommonNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getCommonNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getCommonNames' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiString Chem_ChemComp_GetCreatedBy(Chem_ChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getCreatedBy' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiString Chem_ChemComp_GetDetails(Chem_ChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getDetails' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiList Chem_ChemComp_GetFieldNames(Chem_ChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.ChemComp.ChemComp
  @param  Chem_ChemComp self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Chem_ChemComp_GetFullKey(Chem_ChemComp self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getFullKey' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiString Chem_ChemComp_GetGuid(Chem_ChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getGuid' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiBoolean Chem_ChemComp_GetHasStdChirality(Chem_ChemComp self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHasStdChirality");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getHasStdChirality'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getHasStdChirality' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiBoolean Chem_ChemComp_GetInConstructor(Chem_ChemComp self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getInConstructor' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiBoolean Chem_ChemComp_GetIsDeleted(Chem_ChemComp self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link isLinearPolymer
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiBoolean Chem_ChemComp_GetIsLinearPolymer(Chem_ChemComp self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLinearPolymer");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getIsLinearPolymer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getIsLinearPolymer' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiBoolean Chem_ChemComp_GetIsLoaded(Chem_ChemComp self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getIsLoaded' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiBoolean Chem_ChemComp_GetIsModifiable(Chem_ChemComp self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getIsModifiable' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiBoolean Chem_ChemComp_GetIsModified(Chem_ChemComp self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getIsModified' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiBoolean Chem_ChemComp_GetIsReading(Chem_ChemComp self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getIsReading' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiList Chem_ChemComp_GetKeywords(Chem_ChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getKeywords");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getKeywords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getKeywords' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiString Chem_ChemComp_GetLastUnlockedBy(Chem_ChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getLastUnlockedBy' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiSet Chem_ChemComp_GetLinkEnds(Chem_ChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getLinkEnds' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.ChemComp.ChemComp
  @param  Chem_ChemComp self
  @returns  Local object key
**/
ApiObject Chem_ChemComp_GetLocalKey(Chem_ChemComp self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.memopsRoot

parent link
  @param  Chem_ChemComp self
  @returns   the result
**/
Impl_MemopsRoot Chem_ChemComp_GetMemopsRoot(Chem_ChemComp self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.merckCode

Merck compound code
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiString Chem_ChemComp_GetMerckCode(Chem_ChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMerckCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getMerckCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getMerckCode' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiString Chem_ChemComp_GetMolType(Chem_ChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getMolType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getMolType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.name

name of AbstractChemComp
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiString Chem_ChemComp_GetName(Chem_ChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getName' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiSet Chem_ChemComp_GetNamingSystems(Chem_ChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNamingSystems");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getNamingSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getNamingSystems' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
Impl_PackageLocator Chem_ChemComp_GetPackageLocator(Chem_ChemComp self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getPackageLocator' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiString Chem_ChemComp_GetPackageName(Chem_ChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getPackageName' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiString Chem_ChemComp_GetPackageShortName(Chem_ChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getPackageShortName' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
Impl_MemopsRoot Chem_ChemComp_GetParent(Chem_ChemComp self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getParent' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiString Chem_ChemComp_GetQualifiedName(Chem_ChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getQualifiedName' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiSet Chem_ChemComp_GetResidueTypeProbs(Chem_ChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResidueTypeProbs");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getResidueTypeProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getResidueTypeProbs' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
Impl_MemopsRoot Chem_ChemComp_GetRoot(Chem_ChemComp self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getRoot' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiString Chem_ChemComp_GetSigmaAldrichCode(Chem_ChemComp self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSigmaAldrichCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getSigmaAldrichCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getSigmaAldrichCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute stdChemComp
  @param  Chem_ChemComp self
  @returns   the result
**/
Chem_StdChemComp Chem_ChemComp_GetStdChemComp(Chem_ChemComp self)
{
  
  Chem_StdChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStdChemComp");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getStdChemComp'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getStdChemComp' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.stdChemCompCode

ccpCode of 
standard ChemComp corresponding to a given (non-standard) ChemComp. E.g. 
bromo-tyrosine would have stdChemCompCode 'TYR'. StdChemComps have 
stdChemCompCode equal to ccpCode. 
Key for derived link stdChemComp.
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiString Chem_ChemComp_GetStdChemCompCode(Chem_ChemComp self)
{
}

/**
  Get for ccp.molecule.ChemComp.ChemComp.stereochemistries

child link to 
class Stereochemistry
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiSet Chem_ChemComp_GetStereochemistries(Chem_ChemComp self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStereochemistries");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getStereochemistries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getStereochemistries' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
Impl_TopObject Chem_ChemComp_GetTopObject(Chem_ChemComp self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.ChemAngle
  @param  Chem_ChemComp self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chem_ChemAngle Chem_ChemComp_NewChemAngle(Chem_ChemComp self, ApiMap attrlinks)
{
  
  Chem_ChemAngle obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newChemAngle");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'newChemAngle'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'newChemAngle' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.ChemAngle
  @param  Chem_ChemComp self
  @param  ApiList chemAtoms
  @returns  the new object
**/
Chem_ChemAngle Chem_ChemComp_NewChemAngle_reqd(Chem_ChemComp self, ApiList chemAtoms)
{
  
  Chem_ChemAngle  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "chemAtoms", chemAtoms);
  
  obj = Chem_ChemComp_NewChemAngle(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.ChemAtom
  @param  Chem_ChemComp self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chem_ChemAtom Chem_ChemComp_NewChemAtom(Chem_ChemComp self, ApiMap attrlinks)
{
  
  Chem_ChemAtom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newChemAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'newChemAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'newChemAtom' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.ChemAtomSet
  @param  Chem_ChemComp self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chem_ChemAtomSet Chem_ChemComp_NewChemAtomSet(Chem_ChemComp self, ApiMap attrlinks)
{
  
  Chem_ChemAtomSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newChemAtomSet");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'newChemAtomSet'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'newChemAtomSet' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.ChemAtomSet
  @param  Chem_ChemComp self
  @param  int isProchiral
  @param  char * name
  @returns  the new object
**/
Chem_ChemAtomSet Chem_ChemComp_NewChemAtomSet_reqd(Chem_ChemComp self, int isProchiral, char * name)
{
  
  Chem_ChemAtomSet  obj;
  PyObject *attrlinks = PyDict_New();
  ApiBoolean api__isProchiral = ApiBoolean_New(isProchiral);
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "isProchiral", api__isProchiral);
  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Chem_ChemComp_NewChemAtomSet(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__isProchiral);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.ChemAtom
  @param  Chem_ChemComp self
  @param  char * elementSymbol
  @param  char * name
  @returns  the new object
**/
Chem_ChemAtom Chem_ChemComp_NewChemAtom_reqd(Chem_ChemComp self, char * elementSymbol, char * name)
{
  
  Chem_ChemAtom  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__elementSymbol = ApiString_New(elementSymbol);
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "elementSymbol", api__elementSymbol);
  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Chem_ChemComp_NewChemAtom(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__elementSymbol);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.ChemBond
  @param  Chem_ChemComp self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chem_ChemBond Chem_ChemComp_NewChemBond(Chem_ChemComp self, ApiMap attrlinks)
{
  
  Chem_ChemBond obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newChemBond");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'newChemBond'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'newChemBond' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.ChemBond
  @param  Chem_ChemComp self
  @param  ApiSet chemAtoms
  @returns  the new object
**/
Chem_ChemBond Chem_ChemComp_NewChemBond_reqd(Chem_ChemComp self, ApiSet chemAtoms)
{
  
  Chem_ChemBond  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "chemAtoms", chemAtoms);
  
  obj = Chem_ChemComp_NewChemBond(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.ChemCompVar
  @param  Chem_ChemComp self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chem_ChemCompVar Chem_ChemComp_NewChemCompVar(Chem_ChemComp self, ApiMap attrlinks)
{
  
  Chem_ChemCompVar obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newChemCompVar");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'newChemCompVar'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'newChemCompVar' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.ChemCompVar
  @param  Chem_ChemComp self
  @param  char * descriptor
  @param  ApiInteger formalCharge
  @param  int isAromatic
  @param  int isParamagnetic
  @param  char * linking
  @returns  the new object
**/
Chem_ChemCompVar Chem_ChemComp_NewChemCompVar_reqd(Chem_ChemComp self, char * descriptor, ApiInteger formalCharge, int isAromatic, int isParamagnetic, char * linking)
{
  
  Chem_ChemCompVar  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__descriptor = ApiString_New(descriptor);
  ApiBoolean api__isAromatic = ApiBoolean_New(isAromatic);
  ApiBoolean api__isParamagnetic = ApiBoolean_New(isParamagnetic);
  ApiString api__linking = ApiString_New(linking);

  PyDict_SetItemString(attrlinks, "descriptor", api__descriptor);
  PyDict_SetItemString(attrlinks, "formalCharge", formalCharge);
  PyDict_SetItemString(attrlinks, "isAromatic", api__isAromatic);
  PyDict_SetItemString(attrlinks, "isParamagnetic", api__isParamagnetic);
  PyDict_SetItemString(attrlinks, "linking", api__linking);
  
  obj = Chem_ChemComp_NewChemCompVar(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__descriptor);
  Py_DECREF(api__isAromatic);
  Py_DECREF(api__isParamagnetic);
  Py_DECREF(api__linking);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.ChemTorsion
  @param  Chem_ChemComp self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chem_ChemTorsion Chem_ChemComp_NewChemTorsion(Chem_ChemComp self, ApiMap attrlinks)
{
  
  Chem_ChemTorsion obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newChemTorsion");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'newChemTorsion'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'newChemTorsion' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.ChemTorsion
  @param  Chem_ChemComp self
  @param  ApiList chemAtoms
  @returns  the new object
**/
Chem_ChemTorsion Chem_ChemComp_NewChemTorsion_reqd(Chem_ChemComp self, ApiList chemAtoms)
{
  
  Chem_ChemTorsion  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "chemAtoms", chemAtoms);
  
  obj = Chem_ChemComp_NewChemTorsion(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.LinkAtom
  @param  Chem_ChemComp self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chem_LinkAtom Chem_ChemComp_NewLinkAtom(Chem_ChemComp self, ApiMap attrlinks)
{
  
  Chem_LinkAtom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newLinkAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'newLinkAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'newLinkAtom' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.LinkAtom
  @param  Chem_ChemComp self
  @param  char * name
  @returns  the new object
**/
Chem_LinkAtom Chem_ChemComp_NewLinkAtom_reqd(Chem_ChemComp self, char * name)
{
  
  Chem_LinkAtom  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Chem_ChemComp_NewLinkAtom(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.LinkEnd
  @param  Chem_ChemComp self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chem_LinkEnd Chem_ChemComp_NewLinkEnd(Chem_ChemComp self, ApiMap attrlinks)
{
  
  Chem_LinkEnd obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newLinkEnd");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'newLinkEnd'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'newLinkEnd' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.LinkEnd
  @param  Chem_ChemComp self
  @param  Chem_ChemAtom boundChemAtom
  @param  Chem_LinkAtom boundLinkAtom
  @param  char * linkCode
  @returns  the new object
**/
Chem_LinkEnd Chem_ChemComp_NewLinkEnd_reqd(Chem_ChemComp self, Chem_ChemAtom boundChemAtom, Chem_LinkAtom boundLinkAtom, char * linkCode)
{
  
  Chem_LinkEnd  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__linkCode = ApiString_New(linkCode);

  PyDict_SetItemString(attrlinks, "boundChemAtom", boundChemAtom);
  PyDict_SetItemString(attrlinks, "boundLinkAtom", boundLinkAtom);
  PyDict_SetItemString(attrlinks, "linkCode", api__linkCode);
  
  obj = Chem_ChemComp_NewLinkEnd(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__linkCode);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.NamingSystem
  @param  Chem_ChemComp self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chem_NamingSystem Chem_ChemComp_NewNamingSystem(Chem_ChemComp self, ApiMap attrlinks)
{
  
  Chem_NamingSystem obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newNamingSystem");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'newNamingSystem'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'newNamingSystem' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.NamingSystem
  @param  Chem_ChemComp self
  @param  char * name
  @returns  the new object
**/
Chem_NamingSystem Chem_ChemComp_NewNamingSystem_reqd(Chem_ChemComp self, char * name)
{
  
  Chem_NamingSystem  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Chem_ChemComp_NewNamingSystem(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.Stereochemistry
  @param  Chem_ChemComp self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chem_Stereochemistry Chem_ChemComp_NewStereochemistry(Chem_ChemComp self, ApiMap attrlinks)
{
  
  Chem_Stereochemistry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newStereochemistry");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'newStereochemistry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'newStereochemistry' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemComp.Stereochemistry
  @param  Chem_ChemComp self
  @param  Ster_RefStereochemistry refStereochemistry
  @param  char * value
  @returns  the new object
**/
Chem_Stereochemistry Chem_ChemComp_NewStereochemistry_reqd(Chem_ChemComp self, Ster_RefStereochemistry refStereochemistry, char * value)
{
  
  Chem_Stereochemistry  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__value = ApiString_New(value);

  PyDict_SetItemString(attrlinks, "refStereochemistry", refStereochemistry);
  PyDict_SetItemString(attrlinks, "value", api__value);
  
  obj = Chem_ChemComp_NewStereochemistry(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__value);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_ChemComp self
  @param  Impl_ApplicationData value
**/
void *Chem_ChemComp_RemoveApplicationData(Chem_ChemComp self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'removeApplicationData' is not callable");
  
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
  @param  Chem_ChemComp self
  @param  ApiString value
**/
void *Chem_ChemComp_RemoveCommonName(Chem_ChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeCommonName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'removeCommonName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'removeCommonName' is not callable");
  
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
  @param  Chem_ChemComp self
  @param  ApiString value
**/
void *Chem_ChemComp_RemoveKeyword(Chem_ChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeKeyword");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'removeKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'removeKeyword' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_ChemComp self
  @param  Acco_AccessObject value
**/
void *Chem_ChemComp_SetAccess(Chem_ChemComp self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'setAccess' is not callable");
  
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
  @param  Chem_ChemComp self
  @param  ApiList values
**/
void *Chem_ChemComp_SetApplicationData(Chem_ChemComp self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'setApplicationData' is not callable");
  
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
  @param  Chem_ChemComp self
  @param  ApiString value
**/
void *Chem_ChemComp_SetBaseGlycoCtCode(Chem_ChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBaseGlycoCtCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'setBaseGlycoCtCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'setBaseGlycoCtCode' is not callable");
  
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
  @param  Chem_ChemComp self
  @param  ApiString value
**/
void *Chem_ChemComp_SetBeilsteinCode(Chem_ChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBeilsteinCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'setBeilsteinCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'setBeilsteinCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemComp.casRegCode

CAS code
  @param  Chem_ChemComp self
  @param  ApiString value
**/
void *Chem_ChemComp_SetCasRegCode(Chem_ChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCasRegCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'setCasRegCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'setCasRegCode' is not callable");
  
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
  @param  Chem_ChemComp self
  @param  ApiString value
**/
void *Chem_ChemComp_SetCcpCode(Chem_ChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCcpCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'setCcpCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'setCcpCode' is not callable");
  
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
  @param  Chem_ChemComp self
  @param  ApiString value
**/
void *Chem_ChemComp_SetCode3Letter(Chem_ChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCode3Letter");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'setCode3Letter'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'setCode3Letter' is not callable");
  
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
  @param  Chem_ChemComp self
  @param  ApiList values
**/
void *Chem_ChemComp_SetCommonNames(Chem_ChemComp self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCommonNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'setCommonNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'setCommonNames' is not callable");
  
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
  @param  Chem_ChemComp self
  @param  ApiString value
**/
void *Chem_ChemComp_SetCreatedBy(Chem_ChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'setCreatedBy' is not callable");
  
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
  @param  Chem_ChemComp self
  @param  ApiString value
**/
void *Chem_ChemComp_SetDetails(Chem_ChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'setDetails' is not callable");
  
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
  @param  Chem_ChemComp self
  @param  ApiString value
**/
void *Chem_ChemComp_SetGuid(Chem_ChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'setGuid' is not callable");
  
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
  @param  Chem_ChemComp self
  @param  ApiBoolean value
**/
void *Chem_ChemComp_SetHasStdChirality(Chem_ChemComp self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setHasStdChirality");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'setHasStdChirality'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'setHasStdChirality' is not callable");
  
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
  @param  Chem_ChemComp self
  @param  ApiBoolean value
**/
void *Chem_ChemComp_SetIsModifiable(Chem_ChemComp self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'setIsModifiable' is not callable");
  
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
  @param  Chem_ChemComp self
  @param  ApiList values
**/
void *Chem_ChemComp_SetKeywords(Chem_ChemComp self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setKeywords");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'setKeywords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'setKeywords' is not callable");
  
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
  @param  Chem_ChemComp self
  @param  ApiString value
**/
void *Chem_ChemComp_SetLastUnlockedBy(Chem_ChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemComp.merckCode

Merck compound code
  @param  Chem_ChemComp self
  @param  ApiString value
**/
void *Chem_ChemComp_SetMerckCode(Chem_ChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMerckCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'setMerckCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'setMerckCode' is not callable");
  
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
  @param  Chem_ChemComp self
  @param  ApiString value
**/
void *Chem_ChemComp_SetMolType(Chem_ChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'setMolType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'setMolType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemComp.name

name of AbstractChemComp
  @param  Chem_ChemComp self
  @param  ApiString value
**/
void *Chem_ChemComp_SetName(Chem_ChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'setName' is not callable");
  
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
  @param  Chem_ChemComp self
  @param  ApiSet values
**/
void *Chem_ChemComp_SetResidueTypeProbs(Chem_ChemComp self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResidueTypeProbs");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'setResidueTypeProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'setResidueTypeProbs' is not callable");
  
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
  @param  Chem_ChemComp self
  @param  ApiString value
**/
void *Chem_ChemComp_SetSigmaAldrichCode(Chem_ChemComp self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSigmaAldrichCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'setSigmaAldrichCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'setSigmaAldrichCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.ChemComp.stdChemCompCode

ccpCode of 
standard ChemComp corresponding to a given (non-standard) ChemComp. E.g. 
bromo-tyrosine would have stdChemCompCode 'TYR'. StdChemComps have 
stdChemCompCode equal to ccpCode. 
Key for derived link stdChemComp.
  @param  Chem_ChemComp self
  @param  ApiString value
**/
void *Chem_ChemComp_SetStdChemCompCode(Chem_ChemComp self, ApiString value)
{
}

/**
  Sorted for ccp.molecule.ChemComp.ChemComp.chemAngles

child link to 
class ChemAngle
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiList Chem_ChemComp_SortedChemAngles(Chem_ChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemAngles");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'sortedChemAngles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'sortedChemAngles' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiList Chem_ChemComp_SortedChemAtomSets(Chem_ChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemAtomSets");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'sortedChemAtomSets'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'sortedChemAtomSets' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiList Chem_ChemComp_SortedChemAtoms(Chem_ChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'sortedChemAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'sortedChemAtoms' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiList Chem_ChemComp_SortedChemBonds(Chem_ChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemBonds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'sortedChemBonds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'sortedChemBonds' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiList Chem_ChemComp_SortedChemCompVars(Chem_ChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'sortedChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'sortedChemCompVars' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiList Chem_ChemComp_SortedChemTorsions(Chem_ChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemTorsions");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'sortedChemTorsions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'sortedChemTorsions' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiList Chem_ChemComp_SortedLinkEnds(Chem_ChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedLinkEnds");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'sortedLinkEnds'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'sortedLinkEnds' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiList Chem_ChemComp_SortedNamingSystems(Chem_ChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedNamingSystems");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'sortedNamingSystems'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'sortedNamingSystems' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiList Chem_ChemComp_SortedResidueTypeProbs(Chem_ChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResidueTypeProbs");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'sortedResidueTypeProbs'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'sortedResidueTypeProbs' is not callable");
  
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
  @param  Chem_ChemComp self
  @returns   the result
**/
ApiList Chem_ChemComp_SortedStereochemistries(Chem_ChemComp self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedStereochemistries");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: cannot find method 'sortedStereochemistries'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.ChemComp: method 'sortedStereochemistries' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
