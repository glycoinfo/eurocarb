
#include "ccp.h"

/*
  Abstract molecule, with defined topology but no location, coordinates, etc. 
*/

/* package ccp.api.molecule.Molecule */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Molecule self
  @param  Impl_ApplicationData value
**/
void *Mole_Molecule_AddApplicationData(Mole_Molecule self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.molecule.Molecule.Molecule.commonNames

List of molecule 
common names.
  @param  Mole_Molecule self
  @param  ApiString value
**/
void *Mole_Molecule_AddCommonName(Mole_Molecule self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addCommonName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'addCommonName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'addCommonName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.molecule.Molecule.Molecule.functions

Keywords describing 
functions for molecule. e.g. 'enzyme', 'structure', ...
  @param  Mole_Molecule self
  @param  ApiString value
**/
void *Mole_Molecule_AddFunction(Mole_Molecule self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addFunction");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'addFunction'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'addFunction' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.molecule.Molecule.Molecule.keywords

Keywords for searching 
molecule. e.g. 'DNA binding', 'receptor', 'Zinc finger'...
  @param  Mole_Molecule self
  @param  ApiString value
**/
void *Mole_Molecule_AddKeyword(Mole_Molecule self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addKeyword");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'addKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'addKeyword' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @param  Refs_MolComponent value
**/
void *Mole_Molecule_AddMolComponent(Mole_Molecule self, Refs_MolComponent value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addMolComponent");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'addMolComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'addMolComponent' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.Molecule.Molecule
  @param  Mole_Molecule self
  @param  ApiBoolean complete
**/
void *Mole_Molecule_CheckAllValid(Mole_Molecule self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.Molecule.Molecule
  @param  Mole_Molecule self
  @param  ApiBoolean complete
**/
void *Mole_Molecule_CheckValid(Mole_Molecule self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'checkValid' is not callable");
  
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
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_Molecule_FindAllActiveRepositories(Mole_Molecule self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'findAllActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'findAllActiveRepositories' is not callable");
  
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
  @param  Mole_Molecule self
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_Molecule_FindAllActiveRepositories_keyval0(Mole_Molecule self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_Molecule_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_Molecule_FindAllActiveRepositories_keyval1(Mole_Molecule self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_Molecule_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_Molecule_FindAllActiveRepositories_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_Molecule_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_Molecule_FindAllActiveRepositories_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_Molecule_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Mole_Molecule self
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
ApiList Mole_Molecule_FindAllActiveRepositories_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_Molecule_FindAllActiveRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.alignments

child link to 
class Alignment
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllAlignments(Mole_Molecule self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAlignments");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'findAllAlignments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'findAllAlignments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.alignments

child link to 
class Alignment
  @param  Mole_Molecule self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllAlignments_keyval0(Mole_Molecule self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_Molecule_FindAllAlignments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.alignments

child link to 
class Alignment
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllAlignments_keyval1(Mole_Molecule self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_Molecule_FindAllAlignments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.alignments

child link to 
class Alignment
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllAlignments_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_Molecule_FindAllAlignments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.alignments

child link to 
class Alignment
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllAlignments_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_Molecule_FindAllAlignments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.alignments

child link to 
class Alignment
  @param  Mole_Molecule self
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
ApiSet Mole_Molecule_FindAllAlignments_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_Molecule_FindAllAlignments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_Molecule_FindAllApplicationData(Mole_Molecule self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'findAllApplicationData' is not callable");
  
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
  @param  Mole_Molecule self
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_Molecule_FindAllApplicationData_keyval0(Mole_Molecule self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_Molecule_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_Molecule_FindAllApplicationData_keyval1(Mole_Molecule self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_Molecule_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_Molecule_FindAllApplicationData_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_Molecule_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_Molecule_FindAllApplicationData_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_Molecule_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Molecule self
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
ApiList Mole_Molecule_FindAllApplicationData_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_Molecule_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllChains(Mole_Molecule self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChains");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'findAllChains'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'findAllChains' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllChains_keyval0(Mole_Molecule self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_Molecule_FindAllChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllChains_keyval1(Mole_Molecule self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_Molecule_FindAllChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllChains_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_Molecule_FindAllChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllChains_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_Molecule_FindAllChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
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
ApiSet Mole_Molecule_FindAllChains_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_Molecule_FindAllChains(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.citations

Citations 
describing molecule.
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllCitations(Mole_Molecule self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllCitations");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'findAllCitations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'findAllCitations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.citations

Citations 
describing molecule.
  @param  Mole_Molecule self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllCitations_keyval0(Mole_Molecule self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_Molecule_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.citations

Citations 
describing molecule.
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllCitations_keyval1(Mole_Molecule self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_Molecule_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.citations

Citations 
describing molecule.
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllCitations_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_Molecule_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.citations

Citations 
describing molecule.
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllCitations_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_Molecule_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.citations

Citations 
describing molecule.
  @param  Mole_Molecule self
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
ApiSet Mole_Molecule_FindAllCitations_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_Molecule_FindAllCitations(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.entryMolecules

Connection to 
NmrEntries that reference this Molecule
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllEntryMolecules(Mole_Molecule self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllEntryMolecules");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'findAllEntryMolecules'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'findAllEntryMolecules' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.entryMolecules

Connection to 
NmrEntries that reference this Molecule
  @param  Mole_Molecule self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllEntryMolecules_keyval0(Mole_Molecule self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_Molecule_FindAllEntryMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.entryMolecules

Connection to 
NmrEntries that reference this Molecule
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllEntryMolecules_keyval1(Mole_Molecule self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_Molecule_FindAllEntryMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.entryMolecules

Connection to 
NmrEntries that reference this Molecule
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllEntryMolecules_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_Molecule_FindAllEntryMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.entryMolecules

Connection to 
NmrEntries that reference this Molecule
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllEntryMolecules_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_Molecule_FindAllEntryMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.entryMolecules

Connection to 
NmrEntries that reference this Molecule
  @param  Mole_Molecule self
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
ApiSet Mole_Molecule_FindAllEntryMolecules_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_Molecule_FindAllEntryMolecules(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllMolComponents(Mole_Molecule self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolComponents");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'findAllMolComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'findAllMolComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllMolComponents_keyval0(Mole_Molecule self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_Molecule_FindAllMolComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllMolComponents_keyval1(Mole_Molecule self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_Molecule_FindAllMolComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllMolComponents_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_Molecule_FindAllMolComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllMolComponents_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_Molecule_FindAllMolComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
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
ApiSet Mole_Molecule_FindAllMolComponents_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_Molecule_FindAllMolComponents(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.molResLinks

child link to 
class MolResLink
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllMolResLinks(Mole_Molecule self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolResLinks");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'findAllMolResLinks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'findAllMolResLinks' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.molResLinks

child link to 
class MolResLink
  @param  Mole_Molecule self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllMolResLinks_keyval0(Mole_Molecule self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_Molecule_FindAllMolResLinks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.molResLinks

child link to 
class MolResLink
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllMolResLinks_keyval1(Mole_Molecule self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_Molecule_FindAllMolResLinks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.molResLinks

child link to 
class MolResLink
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllMolResLinks_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_Molecule_FindAllMolResLinks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.molResLinks

child link to 
class MolResLink
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllMolResLinks_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_Molecule_FindAllMolResLinks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.molResLinks

child link to 
class MolResLink
  @param  Mole_Molecule self
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
ApiSet Mole_Molecule_FindAllMolResLinks_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_Molecule_FindAllMolResLinks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.molResidues

child link to 
class MolResidue
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllMolResidues(Mole_Molecule self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolResidues");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'findAllMolResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'findAllMolResidues' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.molResidues

child link to 
class MolResidue
  @param  Mole_Molecule self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllMolResidues_keyval0(Mole_Molecule self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_Molecule_FindAllMolResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.molResidues

child link to 
class MolResidue
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllMolResidues_keyval1(Mole_Molecule self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_Molecule_FindAllMolResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.molResidues

child link to 
class MolResidue
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllMolResidues_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_Molecule_FindAllMolResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.molResidues

child link to 
class MolResidue
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllMolResidues_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_Molecule_FindAllMolResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.molResidues

child link to 
class MolResidue
  @param  Mole_Molecule self
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
ApiSet Mole_Molecule_FindAllMolResidues_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_Molecule_FindAllMolResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.molSeqFragments

child link 
to class MolSeqFragment
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllMolSeqFragments(Mole_Molecule self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMolSeqFragments");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'findAllMolSeqFragments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'findAllMolSeqFragments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.molSeqFragments

child link 
to class MolSeqFragment
  @param  Mole_Molecule self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllMolSeqFragments_keyval0(Mole_Molecule self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_Molecule_FindAllMolSeqFragments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.molSeqFragments

child link 
to class MolSeqFragment
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllMolSeqFragments_keyval1(Mole_Molecule self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_Molecule_FindAllMolSeqFragments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.molSeqFragments

child link 
to class MolSeqFragment
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllMolSeqFragments_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_Molecule_FindAllMolSeqFragments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.molSeqFragments

child link 
to class MolSeqFragment
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllMolSeqFragments_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_Molecule_FindAllMolSeqFragments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.molSeqFragments

child link 
to class MolSeqFragment
  @param  Mole_Molecule self
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
ApiSet Mole_Molecule_FindAllMolSeqFragments_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_Molecule_FindAllMolSeqFragments(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.moleculeSysNames

child link 
to class MoleculeSysName
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllMoleculeSysNames(Mole_Molecule self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllMoleculeSysNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'findAllMoleculeSysNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'findAllMoleculeSysNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.moleculeSysNames

child link 
to class MoleculeSysName
  @param  Mole_Molecule self
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllMoleculeSysNames_keyval0(Mole_Molecule self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_Molecule_FindAllMoleculeSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.moleculeSysNames

child link 
to class MoleculeSysName
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllMoleculeSysNames_keyval1(Mole_Molecule self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_Molecule_FindAllMoleculeSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.moleculeSysNames

child link 
to class MoleculeSysName
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllMoleculeSysNames_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_Molecule_FindAllMoleculeSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.moleculeSysNames

child link 
to class MoleculeSysName
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Mole_Molecule_FindAllMoleculeSysNames_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_Molecule_FindAllMoleculeSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Molecule.Molecule.moleculeSysNames

child link 
to class MoleculeSysName
  @param  Mole_Molecule self
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
ApiSet Mole_Molecule_FindAllMoleculeSysNames_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_Molecule_FindAllMoleculeSysNames(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Mole_Molecule_FindFirstActiveRepository(Mole_Molecule self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstActiveRepository");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'findFirstActiveRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'findFirstActiveRepository' is not callable");
  
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
  @param  Mole_Molecule self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Mole_Molecule_FindFirstActiveRepository_keyval0(Mole_Molecule self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_Molecule_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Mole_Molecule_FindFirstActiveRepository_keyval1(Mole_Molecule self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_Molecule_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Mole_Molecule_FindFirstActiveRepository_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_Molecule_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Mole_Molecule_FindFirstActiveRepository_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_Molecule_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Mole_Molecule self
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
Impl_Repository Mole_Molecule_FindFirstActiveRepository_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_Molecule_FindFirstActiveRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.alignments

child link to 
class Alignment
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mole_Alignment Mole_Molecule_FindFirstAlignment(Mole_Molecule self, ApiMap conditions)
{
  
  Mole_Alignment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAlignment");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'findFirstAlignment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'findFirstAlignment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.alignments

child link to 
class Alignment
  @param  Mole_Molecule self
  @returns  the first value that satisfies the conditions 
**/
Mole_Alignment Mole_Molecule_FindFirstAlignment_keyval0(Mole_Molecule self)
{
  
  Mole_Alignment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_Molecule_FindFirstAlignment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.alignments

child link to 
class Alignment
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mole_Alignment Mole_Molecule_FindFirstAlignment_keyval1(Mole_Molecule self, char * key, ApiObject value)
{
  
  Mole_Alignment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_Molecule_FindFirstAlignment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.alignments

child link to 
class Alignment
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mole_Alignment Mole_Molecule_FindFirstAlignment_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mole_Alignment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_Molecule_FindFirstAlignment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.alignments

child link to 
class Alignment
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mole_Alignment Mole_Molecule_FindFirstAlignment_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mole_Alignment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_Molecule_FindFirstAlignment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.alignments

child link to 
class Alignment
  @param  Mole_Molecule self
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
Mole_Alignment Mole_Molecule_FindFirstAlignment_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mole_Alignment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_Molecule_FindFirstAlignment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mole_Molecule_FindFirstApplicationData(Mole_Molecule self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'findFirstApplicationData' is not callable");
  
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
  @param  Mole_Molecule self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mole_Molecule_FindFirstApplicationData_keyval0(Mole_Molecule self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_Molecule_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mole_Molecule_FindFirstApplicationData_keyval1(Mole_Molecule self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_Molecule_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mole_Molecule_FindFirstApplicationData_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_Molecule_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mole_Molecule_FindFirstApplicationData_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_Molecule_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Molecule self
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
Impl_ApplicationData Mole_Molecule_FindFirstApplicationData_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_Molecule_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mols_Chain Mole_Molecule_FindFirstChain(Mole_Molecule self, ApiMap conditions)
{
  
  Mols_Chain obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChain");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'findFirstChain'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'findFirstChain' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
  @returns  the first value that satisfies the conditions 
**/
Mols_Chain Mole_Molecule_FindFirstChain_keyval0(Mole_Molecule self)
{
  
  Mols_Chain  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_Molecule_FindFirstChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mols_Chain Mole_Molecule_FindFirstChain_keyval1(Mole_Molecule self, char * key, ApiObject value)
{
  
  Mols_Chain  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_Molecule_FindFirstChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mols_Chain Mole_Molecule_FindFirstChain_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mols_Chain  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_Molecule_FindFirstChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mols_Chain Mole_Molecule_FindFirstChain_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mols_Chain  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_Molecule_FindFirstChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
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
Mols_Chain Mole_Molecule_FindFirstChain_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mols_Chain  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_Molecule_FindFirstChain(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.citations

Citations 
describing molecule.
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Mole_Molecule_FindFirstCitation(Mole_Molecule self, ApiMap conditions)
{
  
  Cita_Citation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstCitation");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'findFirstCitation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'findFirstCitation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.citations

Citations 
describing molecule.
  @param  Mole_Molecule self
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Mole_Molecule_FindFirstCitation_keyval0(Mole_Molecule self)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_Molecule_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.citations

Citations 
describing molecule.
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Mole_Molecule_FindFirstCitation_keyval1(Mole_Molecule self, char * key, ApiObject value)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_Molecule_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.citations

Citations 
describing molecule.
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Mole_Molecule_FindFirstCitation_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_Molecule_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.citations

Citations 
describing molecule.
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Cita_Citation Mole_Molecule_FindFirstCitation_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_Molecule_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.citations

Citations 
describing molecule.
  @param  Mole_Molecule self
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
Cita_Citation Mole_Molecule_FindFirstCitation_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Cita_Citation  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_Molecule_FindFirstCitation(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.entryMolecules

Connection 
to NmrEntries that reference this Molecule
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Entr_EntryMolecule Mole_Molecule_FindFirstEntryMolecule(Mole_Molecule self, ApiMap conditions)
{
  
  Entr_EntryMolecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstEntryMolecule");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'findFirstEntryMolecule'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'findFirstEntryMolecule' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.entryMolecules

Connection 
to NmrEntries that reference this Molecule
  @param  Mole_Molecule self
  @returns  the first value that satisfies the conditions 
**/
Entr_EntryMolecule Mole_Molecule_FindFirstEntryMolecule_keyval0(Mole_Molecule self)
{
  
  Entr_EntryMolecule  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_Molecule_FindFirstEntryMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.entryMolecules

Connection 
to NmrEntries that reference this Molecule
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Entr_EntryMolecule Mole_Molecule_FindFirstEntryMolecule_keyval1(Mole_Molecule self, char * key, ApiObject value)
{
  
  Entr_EntryMolecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_Molecule_FindFirstEntryMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.entryMolecules

Connection 
to NmrEntries that reference this Molecule
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Entr_EntryMolecule Mole_Molecule_FindFirstEntryMolecule_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Entr_EntryMolecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_Molecule_FindFirstEntryMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.entryMolecules

Connection 
to NmrEntries that reference this Molecule
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Entr_EntryMolecule Mole_Molecule_FindFirstEntryMolecule_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Entr_EntryMolecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_Molecule_FindFirstEntryMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.entryMolecules

Connection 
to NmrEntries that reference this Molecule
  @param  Mole_Molecule self
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
Entr_EntryMolecule Mole_Molecule_FindFirstEntryMolecule_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Entr_EntryMolecule  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_Molecule_FindFirstEntryMolecule(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Refs_MolComponent Mole_Molecule_FindFirstMolComponent(Mole_Molecule self, ApiMap conditions)
{
  
  Refs_MolComponent obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolComponent");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'findFirstMolComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'findFirstMolComponent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @returns  the first value that satisfies the conditions 
**/
Refs_MolComponent Mole_Molecule_FindFirstMolComponent_keyval0(Mole_Molecule self)
{
  
  Refs_MolComponent  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_Molecule_FindFirstMolComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Refs_MolComponent Mole_Molecule_FindFirstMolComponent_keyval1(Mole_Molecule self, char * key, ApiObject value)
{
  
  Refs_MolComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_Molecule_FindFirstMolComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Refs_MolComponent Mole_Molecule_FindFirstMolComponent_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Refs_MolComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_Molecule_FindFirstMolComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Refs_MolComponent Mole_Molecule_FindFirstMolComponent_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Refs_MolComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_Molecule_FindFirstMolComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
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
Refs_MolComponent Mole_Molecule_FindFirstMolComponent_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Refs_MolComponent  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_Molecule_FindFirstMolComponent(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molResLinks

child link to 
class MolResLink
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResLink Mole_Molecule_FindFirstMolResLink(Mole_Molecule self, ApiMap conditions)
{
  
  Mole_MolResLink obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolResLink");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'findFirstMolResLink'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'findFirstMolResLink' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molResLinks

child link to 
class MolResLink
  @param  Mole_Molecule self
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResLink Mole_Molecule_FindFirstMolResLink_keyval0(Mole_Molecule self)
{
  
  Mole_MolResLink  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_Molecule_FindFirstMolResLink(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molResLinks

child link to 
class MolResLink
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResLink Mole_Molecule_FindFirstMolResLink_keyval1(Mole_Molecule self, char * key, ApiObject value)
{
  
  Mole_MolResLink  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_Molecule_FindFirstMolResLink(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molResLinks

child link to 
class MolResLink
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResLink Mole_Molecule_FindFirstMolResLink_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mole_MolResLink  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_Molecule_FindFirstMolResLink(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molResLinks

child link to 
class MolResLink
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResLink Mole_Molecule_FindFirstMolResLink_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mole_MolResLink  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_Molecule_FindFirstMolResLink(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molResLinks

child link to 
class MolResLink
  @param  Mole_Molecule self
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
Mole_MolResLink Mole_Molecule_FindFirstMolResLink_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mole_MolResLink  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_Molecule_FindFirstMolResLink(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molResidues

child link to 
class MolResidue
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResidue Mole_Molecule_FindFirstMolResidue(Mole_Molecule self, ApiMap conditions)
{
  
  Mole_MolResidue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolResidue");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'findFirstMolResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'findFirstMolResidue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molResidues

child link to 
class MolResidue
  @param  Mole_Molecule self
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResidue Mole_Molecule_FindFirstMolResidue_keyval0(Mole_Molecule self)
{
  
  Mole_MolResidue  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_Molecule_FindFirstMolResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molResidues

child link to 
class MolResidue
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResidue Mole_Molecule_FindFirstMolResidue_keyval1(Mole_Molecule self, char * key, ApiObject value)
{
  
  Mole_MolResidue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_Molecule_FindFirstMolResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molResidues

child link to 
class MolResidue
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResidue Mole_Molecule_FindFirstMolResidue_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mole_MolResidue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_Molecule_FindFirstMolResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molResidues

child link to 
class MolResidue
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mole_MolResidue Mole_Molecule_FindFirstMolResidue_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mole_MolResidue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_Molecule_FindFirstMolResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molResidues

child link to 
class MolResidue
  @param  Mole_Molecule self
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
Mole_MolResidue Mole_Molecule_FindFirstMolResidue_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mole_MolResidue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_Molecule_FindFirstMolResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molSeqFragments

child link 
to class MolSeqFragment
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mole_MolSeqFragment Mole_Molecule_FindFirstMolSeqFragment(Mole_Molecule self, ApiMap conditions)
{
  
  Mole_MolSeqFragment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMolSeqFragment");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'findFirstMolSeqFragment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'findFirstMolSeqFragment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molSeqFragments

child link 
to class MolSeqFragment
  @param  Mole_Molecule self
  @returns  the first value that satisfies the conditions 
**/
Mole_MolSeqFragment Mole_Molecule_FindFirstMolSeqFragment_keyval0(Mole_Molecule self)
{
  
  Mole_MolSeqFragment  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_Molecule_FindFirstMolSeqFragment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molSeqFragments

child link 
to class MolSeqFragment
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mole_MolSeqFragment Mole_Molecule_FindFirstMolSeqFragment_keyval1(Mole_Molecule self, char * key, ApiObject value)
{
  
  Mole_MolSeqFragment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_Molecule_FindFirstMolSeqFragment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molSeqFragments

child link 
to class MolSeqFragment
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mole_MolSeqFragment Mole_Molecule_FindFirstMolSeqFragment_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mole_MolSeqFragment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_Molecule_FindFirstMolSeqFragment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molSeqFragments

child link 
to class MolSeqFragment
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mole_MolSeqFragment Mole_Molecule_FindFirstMolSeqFragment_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mole_MolSeqFragment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_Molecule_FindFirstMolSeqFragment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.molSeqFragments

child link 
to class MolSeqFragment
  @param  Mole_Molecule self
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
Mole_MolSeqFragment Mole_Molecule_FindFirstMolSeqFragment_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mole_MolSeqFragment  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_Molecule_FindFirstMolSeqFragment(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.moleculeSysNames

child 
link to class MoleculeSysName
  @param  Mole_Molecule self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Mole_MoleculeSysName Mole_Molecule_FindFirstMoleculeSysName(Mole_Molecule self, ApiMap conditions)
{
  
  Mole_MoleculeSysName obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstMoleculeSysName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'findFirstMoleculeSysName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'findFirstMoleculeSysName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.moleculeSysNames

child 
link to class MoleculeSysName
  @param  Mole_Molecule self
  @returns  the first value that satisfies the conditions 
**/
Mole_MoleculeSysName Mole_Molecule_FindFirstMoleculeSysName_keyval0(Mole_Molecule self)
{
  
  Mole_MoleculeSysName  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_Molecule_FindFirstMoleculeSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.moleculeSysNames

child 
link to class MoleculeSysName
  @param  Mole_Molecule self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Mole_MoleculeSysName Mole_Molecule_FindFirstMoleculeSysName_keyval1(Mole_Molecule self, char * key, ApiObject value)
{
  
  Mole_MoleculeSysName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_Molecule_FindFirstMoleculeSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.moleculeSysNames

child 
link to class MoleculeSysName
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Mole_MoleculeSysName Mole_Molecule_FindFirstMoleculeSysName_keyval2(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Mole_MoleculeSysName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_Molecule_FindFirstMoleculeSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.moleculeSysNames

child 
link to class MoleculeSysName
  @param  Mole_Molecule self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Mole_MoleculeSysName Mole_Molecule_FindFirstMoleculeSysName_keyval3(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Mole_MoleculeSysName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_Molecule_FindFirstMoleculeSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Molecule.Molecule.moleculeSysNames

child 
link to class MoleculeSysName
  @param  Mole_Molecule self
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
Mole_MoleculeSysName Mole_Molecule_FindFirstMoleculeSysName_keyval4(Mole_Molecule self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Mole_MoleculeSysName  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_Molecule_FindFirstMoleculeSysName(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.Molecule.Molecule
  @param  Mole_Molecule self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Mole_Molecule_Get(Mole_Molecule self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mole_Molecule self
  @returns   the result
**/
Acco_AccessObject Mole_Molecule_GetAccess(Mole_Molecule self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getAccess' is not callable");
  
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
  @param  Mole_Molecule self
  @returns   the result
**/
Acco_AccessObject Mole_Molecule_GetActiveAccess(Mole_Molecule self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getActiveAccess' is not callable");
  
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
  @param  Mole_Molecule self
  @returns   the result
**/
ApiList Mole_Molecule_GetActiveRepositories(Mole_Molecule self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveRepositories");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getActiveRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getActiveRepositories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Molecule.alignments

child link to class 
Alignment
  @param  Mole_Molecule self
  @returns   the result
**/
ApiSet Mole_Molecule_GetAlignments(Mole_Molecule self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAlignments");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getAlignments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getAlignments' is not callable");
  
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
  @param  Mole_Molecule self
  @returns   the result
**/
ApiList Mole_Molecule_GetApplicationData(Mole_Molecule self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.Molecule.Molecule
  @param  Mole_Molecule self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Mole_Molecule Mole_Molecule_GetByKey(Mole_Molecule self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Mole_Molecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Molecule.calcIsoelectricPoint

Calculated 
isoelectric point of molecule. The pI indicates the value of pH at which 
the net charge of the molecule would be neutralized, if the molecule 
would have a conformation with each amino acid fully exposed to the 
solvent. NB This is derived information, this should be moved when this 
gets developed.
  @param  Mole_Molecule self
  @returns   the result
**/
ApiFloat Mole_Molecule_GetCalcIsoelectricPoint(Mole_Molecule self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCalcIsoelectricPoint");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getCalcIsoelectricPoint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getCalcIsoelectricPoint' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
  @returns   the result
**/
ApiSet Mole_Molecule_GetChains(Mole_Molecule self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChains");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getChains'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getChains' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Molecule.citations

Citations describing 
molecule.
  @param  Mole_Molecule self
  @returns   the result
**/
ApiSet Mole_Molecule_GetCitations(Mole_Molecule self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCitations");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getCitations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getCitations' is not callable");
  
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
  @param  Mole_Molecule self
  @returns   the result
**/
ApiString Mole_Molecule_GetClassName(Mole_Molecule self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Molecule.commonNames

List of molecule 
common names.
  @param  Mole_Molecule self
  @returns   the result
**/
ApiList Mole_Molecule_GetCommonNames(Mole_Molecule self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCommonNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getCommonNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getCommonNames' is not callable");
  
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
  @param  Mole_Molecule self
  @returns   the result
**/
ApiString Mole_Molecule_GetCreatedBy(Mole_Molecule self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getCreatedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Molecule.details

Free text, for notes, 
explanatory comments, etc.
  @param  Mole_Molecule self
  @returns   the result
**/
ApiString Mole_Molecule_GetDetails(Mole_Molecule self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute empiricalFormula
  @param  Mole_Molecule self
  @returns   the result
**/
ApiString Mole_Molecule_GetEmpiricalFormula(Mole_Molecule self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEmpiricalFormula");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getEmpiricalFormula'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getEmpiricalFormula' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Molecule.entryMolecules

Connection to 
NmrEntries that reference this Molecule
  @param  Mole_Molecule self
  @returns   the result
**/
ApiSet Mole_Molecule_GetEntryMolecules(Mole_Molecule self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getEntryMolecules");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getEntryMolecules'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getEntryMolecules' is not callable");
  
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
  @param  Mole_Molecule self
  @returns   the result
**/
ApiList Mole_Molecule_GetFieldNames(Mole_Molecule self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute formalCharge
  @param  Mole_Molecule self
  @returns   the result
**/
ApiInteger Mole_Molecule_GetFormalCharge(Mole_Molecule self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFormalCharge");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getFormalCharge'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getFormalCharge' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Molecule.fragmentDetails

Details on what 
(if anything) this Molecule is a fragment of).
  @param  Mole_Molecule self
  @returns   the result
**/
ApiString Mole_Molecule_GetFragmentDetails(Mole_Molecule self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFragmentDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getFragmentDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getFragmentDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.Molecule.Molecule
  @param  Mole_Molecule self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Mole_Molecule_GetFullKey(Mole_Molecule self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Molecule.functions

Keywords describing 
functions for molecule. e.g. 'enzyme', 'structure', ...
  @param  Mole_Molecule self
  @returns   the result
**/
ApiList Mole_Molecule_GetFunctions(Mole_Molecule self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFunctions");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getFunctions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getFunctions' is not callable");
  
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
  @param  Mole_Molecule self
  @returns   the result
**/
ApiString Mole_Molecule_GetGuid(Mole_Molecule self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getGuid");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getGuid' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute hasNonStdChemComp
  @param  Mole_Molecule self
  @returns   the result
**/
ApiBoolean Mole_Molecule_GetHasNonStdChemComp(Mole_Molecule self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHasNonStdChemComp");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getHasNonStdChemComp'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getHasNonStdChemComp' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link hasNonStdChirality
  @param  Mole_Molecule self
  @returns   the result
**/
ApiBoolean Mole_Molecule_GetHasNonStdChirality(Mole_Molecule self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHasNonStdChirality");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getHasNonStdChirality'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getHasNonStdChirality' is not callable");
  
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
  @param  Mole_Molecule self
  @returns   the result
**/
ApiBoolean Mole_Molecule_GetInConstructor(Mole_Molecule self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute isAromatic
  @param  Mole_Molecule self
  @returns   the result
**/
ApiBoolean Mole_Molecule_GetIsAromatic(Mole_Molecule self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsAromatic");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getIsAromatic'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getIsAromatic' is not callable");
  
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
  @param  Mole_Molecule self
  @returns   the result
**/
ApiBoolean Mole_Molecule_GetIsDeleted(Mole_Molecule self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Molecule.isFinalised

Non-finalised 
molecules may not have links to Samples etc.
Finalised molecules can no 
longer have residues added or removed.
Note that you can add MolResidues 
to non-finalised molecules even if they already have chanis, but that 
you must make sure of adding new MolSystem.Residues as necessary.
  @param  Mole_Molecule self
  @returns   the result
**/
ApiBoolean Mole_Molecule_GetIsFinalised(Mole_Molecule self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsFinalised");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getIsFinalised'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getIsFinalised' is not callable");
  
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
  @param  Mole_Molecule self
  @returns   the result
**/
ApiBoolean Mole_Molecule_GetIsLoaded(Mole_Molecule self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsLoaded");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getIsLoaded'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getIsLoaded' is not callable");
  
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
  @param  Mole_Molecule self
  @returns   the result
**/
ApiBoolean Mole_Molecule_GetIsModifiable(Mole_Molecule self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getIsModifiable' is not callable");
  
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
  @param  Mole_Molecule self
  @returns   the result
**/
ApiBoolean Mole_Molecule_GetIsModified(Mole_Molecule self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsModified");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getIsModified'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getIsModified' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute isParamagnetic
  @param  Mole_Molecule self
  @returns   the result
**/
ApiBoolean Mole_Molecule_GetIsParamagnetic(Mole_Molecule self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsParamagnetic");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getIsParamagnetic'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getIsParamagnetic' is not callable");
  
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
  @param  Mole_Molecule self
  @returns   the result
**/
ApiBoolean Mole_Molecule_GetIsReading(Mole_Molecule self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsReading");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getIsReading'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getIsReading' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute isStdCyclic
  @param  Mole_Molecule self
  @returns   the result
**/
ApiBoolean Mole_Molecule_GetIsStdCyclic(Mole_Molecule self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsStdCyclic");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getIsStdCyclic'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getIsStdCyclic' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute isStdLinear
  @param  Mole_Molecule self
  @returns   the result
**/
ApiBoolean Mole_Molecule_GetIsStdLinear(Mole_Molecule self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsStdLinear");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getIsStdLinear'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getIsStdLinear' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Molecule.keywords

Keywords for searching 
molecule. e.g. 'DNA binding', 'receptor', 'Zinc finger'...
  @param  Mole_Molecule self
  @returns   the result
**/
ApiList Mole_Molecule_GetKeywords(Mole_Molecule self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getKeywords");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getKeywords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getKeywords' is not callable");
  
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
  @param  Mole_Molecule self
  @returns   the result
**/
ApiString Mole_Molecule_GetLastUnlockedBy(Mole_Molecule self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getLastUnlockedBy' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.Molecule.Molecule
  @param  Mole_Molecule self
  @returns  Local object key
**/
ApiObject Mole_Molecule_GetLocalKey(Mole_Molecule self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Molecule.longName

Long form of molecule 
name.
  @param  Mole_Molecule self
  @returns   the result
**/
ApiString Mole_Molecule_GetLongName(Mole_Molecule self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLongName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getLongName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getLongName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Molecule.memopsRoot

parent link
  @param  Mole_Molecule self
  @returns   the result
**/
Impl_MemopsRoot Mole_Molecule_GetMemopsRoot(Mole_Molecule self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @returns   the result
**/
ApiSet Mole_Molecule_GetMolComponents(Mole_Molecule self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolComponents");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getMolComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getMolComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Molecule.molResLinks

child link to class 
MolResLink
  @param  Mole_Molecule self
  @returns   the result
**/
ApiSet Mole_Molecule_GetMolResLinks(Mole_Molecule self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolResLinks");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getMolResLinks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getMolResLinks' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Molecule.molResidues

child link to class 
MolResidue
  @param  Mole_Molecule self
  @returns   the result
**/
ApiSet Mole_Molecule_GetMolResidues(Mole_Molecule self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolResidues");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getMolResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getMolResidues' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Molecule.molSeqFragments

child link to 
class MolSeqFragment
  @param  Mole_Molecule self
  @returns   the result
**/
ApiSet Mole_Molecule_GetMolSeqFragments(Mole_Molecule self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolSeqFragments");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getMolSeqFragments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getMolSeqFragments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Getter for derived attribute molType. Possible return values are 
'protein', 'DNA', 'RNA', 'carbohydrate', or 'DNA/RNA'
  @param  Mole_Molecule self
  @returns   the result
**/
ApiString Mole_Molecule_GetMolType(Mole_Molecule self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolType");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getMolType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getMolType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute molecularMass
  @param  Mole_Molecule self
  @returns   the result
**/
ApiFloat Mole_Molecule_GetMolecularMass(Mole_Molecule self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolecularMass");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getMolecularMass'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getMolecularMass' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Molecule.moleculeSysNames

child link to 
class MoleculeSysName
  @param  Mole_Molecule self
  @returns   the result
**/
ApiSet Mole_Molecule_GetMoleculeSysNames(Mole_Molecule self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMoleculeSysNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getMoleculeSysNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getMoleculeSysNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Molecule.mutationDetails

Details on 
mutations in the sequence (e.g. this is A54K relative to the wildtype).
  @param  Mole_Molecule self
  @returns   the result
**/
ApiString Mole_Molecule_GetMutationDetails(Mole_Molecule self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMutationDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getMutationDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getMutationDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Molecule.name

Name of Molecule. Used as 
key. Should be correct and informative, but may be an abbreviation or an 
acronym if the alternative is too long. Recommended e.g. NaCl, Lysozyme, 
Lac headpiece, morphine.
  @param  Mole_Molecule self
  @returns   the result
**/
ApiString Mole_Molecule_GetName(Mole_Molecule self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Molecule.naturalSource

Natural source for 
molecule
  @param  Mole_Molecule self
  @returns   the result
**/
Taxo_NaturalSource Mole_Molecule_GetNaturalSource(Mole_Molecule self)
{
  
  Taxo_NaturalSource obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNaturalSource");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getNaturalSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getNaturalSource' is not callable");
  
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
  @param  Mole_Molecule self
  @returns   the result
**/
Impl_PackageLocator Mole_Molecule_GetPackageLocator(Mole_Molecule self)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageLocator");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getPackageLocator'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getPackageLocator' is not callable");
  
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
  @param  Mole_Molecule self
  @returns   the result
**/
ApiString Mole_Molecule_GetPackageName(Mole_Molecule self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getPackageName' is not callable");
  
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
  @param  Mole_Molecule self
  @returns   the result
**/
ApiString Mole_Molecule_GetPackageShortName(Mole_Molecule self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Molecule.parent

link to parent object - 
synonym for memopsRoot
  @param  Mole_Molecule self
  @returns   the result
**/
Impl_MemopsRoot Mole_Molecule_GetParent(Mole_Molecule self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getParent' is not callable");
  
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
  @param  Mole_Molecule self
  @returns   the result
**/
ApiString Mole_Molecule_GetQualifiedName(Mole_Molecule self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getQualifiedName' is not callable");
  
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
  @param  Mole_Molecule self
  @returns   the result
**/
Impl_MemopsRoot Mole_Molecule_GetRoot(Mole_Molecule self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Molecule.seqDetails

Details, notes, 
comments etc. about the sequence.
  @param  Mole_Molecule self
  @returns   the result
**/
ApiString Mole_Molecule_GetSeqDetails(Mole_Molecule self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSeqDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getSeqDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getSeqDetails' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Getter function for derived attribute seqLength.
  @param  Mole_Molecule self
  @returns   the result
**/
ApiInteger Mole_Molecule_GetSeqLength(Mole_Molecule self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSeqLength");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getSeqLength'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getSeqLength' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute seqString
  @param  Mole_Molecule self
  @returns   the result
**/
ApiString Mole_Molecule_GetSeqString(Mole_Molecule self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSeqString");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getSeqString'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getSeqString' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Molecule.smiles

SMILES (Simplified 
Molecular Input Line Entry Specification) string describing molecule.
  @param  Mole_Molecule self
  @returns   the result
**/
ApiString Mole_Molecule_GetSmiles(Mole_Molecule self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSmiles");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getSmiles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getSmiles' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Molecule.smilesType

Type of Smiles string 
in smiles attribute
  @param  Mole_Molecule self
  @returns   the result
**/
ApiString Mole_Molecule_GetSmilesType(Mole_Molecule self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSmilesType");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getSmilesType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getSmilesType' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for serived attribute stdSeqString
  @param  Mole_Molecule self
  @returns   the result
**/
ApiString Mole_Molecule_GetStdSeqString(Mole_Molecule self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStdSeqString");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getStdSeqString'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getStdSeqString' is not callable");
  
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
  @param  Mole_Molecule self
  @returns   the result
**/
Impl_TopObject Mole_Molecule_GetTopObject(Mole_Molecule self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.Molecule.Molecule
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Mole_Molecule Mole_Molecule_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewMolecule(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.Molecule.Molecule
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
Mole_Molecule Mole_Molecule_Init_reqd(Impl_MemopsRoot parent, char * name)
{
  
  Mole_Molecule  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Mole_Molecule_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.Molecule.Alignment
  @param  Mole_Molecule self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Mole_Alignment Mole_Molecule_NewAlignment(Mole_Molecule self, ApiMap attrlinks)
{
  
  Mole_Alignment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAlignment");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'newAlignment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'newAlignment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.Molecule.Alignment
  @param  Mole_Molecule self
  @param  Dbr_Entry dbRef
  @returns  the new object
**/
Mole_Alignment Mole_Molecule_NewAlignment_reqd(Mole_Molecule self, Dbr_Entry dbRef)
{
  
  Mole_Alignment  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "dbRef", dbRef);
  
  obj = Mole_Molecule_NewAlignment(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.Molecule.MolResLink
  @param  Mole_Molecule self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Mole_MolResLink Mole_Molecule_NewMolResLink(Mole_Molecule self, ApiMap attrlinks)
{
  
  Mole_MolResLink obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newMolResLink");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'newMolResLink'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'newMolResLink' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.Molecule.MolResLink
  @param  Mole_Molecule self
  @param  ApiSet molResLinkEnds
  @returns  the new object
**/
Mole_MolResLink Mole_Molecule_NewMolResLink_reqd(Mole_Molecule self, ApiSet molResLinkEnds)
{
  
  Mole_MolResLink  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "molResLinkEnds", molResLinkEnds);
  
  obj = Mole_Molecule_NewMolResLink(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.Molecule.MolResidue
  @param  Mole_Molecule self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Mole_MolResidue Mole_Molecule_NewMolResidue(Mole_Molecule self, ApiMap attrlinks)
{
  
  Mole_MolResidue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newMolResidue");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'newMolResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'newMolResidue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.Molecule.MolResidue
  @param  Mole_Molecule self
  @param  Chem_ChemComp chemComp
  @param  char * descriptor
  @param  char * linking
  @param  ApiInteger seqCode
  @returns  the new object
**/
Mole_MolResidue Mole_Molecule_NewMolResidue_reqd(Mole_Molecule self, Chem_ChemComp chemComp, char * descriptor, char * linking, ApiInteger seqCode)
{
  
  Mole_MolResidue  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__descriptor = ApiString_New(descriptor);
  ApiString api__linking = ApiString_New(linking);

  PyDict_SetItemString(attrlinks, "chemComp", chemComp);
  PyDict_SetItemString(attrlinks, "descriptor", api__descriptor);
  PyDict_SetItemString(attrlinks, "linking", api__linking);
  PyDict_SetItemString(attrlinks, "seqCode", seqCode);
  
  obj = Mole_Molecule_NewMolResidue(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__descriptor);
  Py_DECREF(api__linking);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.Molecule.MolSeqFragment
  @param  Mole_Molecule self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Mole_MolSeqFragment Mole_Molecule_NewMolSeqFragment(Mole_Molecule self, ApiMap attrlinks)
{
  
  Mole_MolSeqFragment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newMolSeqFragment");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'newMolSeqFragment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'newMolSeqFragment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.Molecule.MolSeqFragment
  @param  Mole_Molecule self
  @param  ApiSet limitResidues
  @returns  the new object
**/
Mole_MolSeqFragment Mole_Molecule_NewMolSeqFragment_reqd(Mole_Molecule self, ApiSet limitResidues)
{
  
  Mole_MolSeqFragment  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "limitResidues", limitResidues);
  
  obj = Mole_Molecule_NewMolSeqFragment(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.Molecule.MoleculeSysName
  @param  Mole_Molecule self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Mole_MoleculeSysName Mole_Molecule_NewMoleculeSysName(Mole_Molecule self, ApiMap attrlinks)
{
  
  Mole_MoleculeSysName obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newMoleculeSysName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'newMoleculeSysName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'newMoleculeSysName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.Molecule.MoleculeSysName
  @param  Mole_Molecule self
  @param  char * namingSystem
  @returns  the new object
**/
Mole_MoleculeSysName Mole_Molecule_NewMoleculeSysName_reqd(Mole_Molecule self, char * namingSystem)
{
  
  Mole_MoleculeSysName  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__namingSystem = ApiString_New(namingSystem);

  PyDict_SetItemString(attrlinks, "namingSystem", api__namingSystem);
  
  obj = Mole_Molecule_NewMoleculeSysName(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__namingSystem);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Molecule self
  @param  Impl_ApplicationData value
**/
void *Mole_Molecule_RemoveApplicationData(Mole_Molecule self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.molecule.Molecule.Molecule.commonNames

List of molecule 
common names.
  @param  Mole_Molecule self
  @param  ApiString value
**/
void *Mole_Molecule_RemoveCommonName(Mole_Molecule self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeCommonName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'removeCommonName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'removeCommonName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.molecule.Molecule.Molecule.functions

Keywords describing 
functions for molecule. e.g. 'enzyme', 'structure', ...
  @param  Mole_Molecule self
  @param  ApiString value
**/
void *Mole_Molecule_RemoveFunction(Mole_Molecule self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeFunction");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'removeFunction'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'removeFunction' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.molecule.Molecule.Molecule.keywords

Keywords for 
searching molecule. e.g. 'DNA binding', 'receptor', 'Zinc finger'...
  @param  Mole_Molecule self
  @param  ApiString value
**/
void *Mole_Molecule_RemoveKeyword(Mole_Molecule self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeKeyword");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'removeKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'removeKeyword' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @param  Refs_MolComponent value
**/
void *Mole_Molecule_RemoveMolComponent(Mole_Molecule self, Refs_MolComponent value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeMolComponent");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'removeMolComponent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'removeMolComponent' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.Molecule.Molecule
  @param  Mole_Molecule self
  @param  ApiString name
  @param  ApiObject value
**/
void *Mole_Molecule_Set(Mole_Molecule self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mole_Molecule self
  @param  Acco_AccessObject value
**/
void *Mole_Molecule_SetAccess(Mole_Molecule self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'setAccess' is not callable");
  
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
  @param  Mole_Molecule self
  @param  ApiList values
**/
void *Mole_Molecule_SetApplicationData(Mole_Molecule self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Molecule.calcIsoelectricPoint

Calculated 
isoelectric point of molecule. The pI indicates the value of pH at which 
the net charge of the molecule would be neutralized, if the molecule 
would have a conformation with each amino acid fully exposed to the 
solvent. NB This is derived information, this should be moved when this 
gets developed.
  @param  Mole_Molecule self
  @param  ApiFloat value
**/
void *Mole_Molecule_SetCalcIsoelectricPoint(Mole_Molecule self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCalcIsoelectricPoint");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'setCalcIsoelectricPoint'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'setCalcIsoelectricPoint' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
  @param  ApiSet values
**/
void *Mole_Molecule_SetChains(Mole_Molecule self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChains");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'setChains'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'setChains' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Molecule.citations

Citations describing 
molecule.
  @param  Mole_Molecule self
  @param  ApiSet values
**/
void *Mole_Molecule_SetCitations(Mole_Molecule self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCitations");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'setCitations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'setCitations' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Molecule.commonNames

List of molecule 
common names.
  @param  Mole_Molecule self
  @param  ApiList values
**/
void *Mole_Molecule_SetCommonNames(Mole_Molecule self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCommonNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'setCommonNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'setCommonNames' is not callable");
  
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
  @param  Mole_Molecule self
  @param  ApiString value
**/
void *Mole_Molecule_SetCreatedBy(Mole_Molecule self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCreatedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'setCreatedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'setCreatedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Molecule.details

Free text, for notes, 
explanatory comments, etc.
  @param  Mole_Molecule self
  @param  ApiString value
**/
void *Mole_Molecule_SetDetails(Mole_Molecule self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Molecule.entryMolecules

Connection to 
NmrEntries that reference this Molecule
  @param  Mole_Molecule self
  @param  ApiSet values
**/
void *Mole_Molecule_SetEntryMolecules(Mole_Molecule self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setEntryMolecules");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'setEntryMolecules'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'setEntryMolecules' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Molecule.fragmentDetails

Details on what 
(if anything) this Molecule is a fragment of).
  @param  Mole_Molecule self
  @param  ApiString value
**/
void *Mole_Molecule_SetFragmentDetails(Mole_Molecule self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFragmentDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'setFragmentDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'setFragmentDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Molecule.functions

Keywords describing 
functions for molecule. e.g. 'enzyme', 'structure', ...
  @param  Mole_Molecule self
  @param  ApiList values
**/
void *Mole_Molecule_SetFunctions(Mole_Molecule self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFunctions");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'setFunctions'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'setFunctions' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Mole_Molecule self
  @param  ApiString value
**/
void *Mole_Molecule_SetGuid(Mole_Molecule self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setGuid");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'setGuid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'setGuid' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Molecule.isFinalised

Non-finalised 
molecules may not have links to Samples etc.
Finalised molecules can no 
longer have residues added or removed.
Note that you can add MolResidues 
to non-finalised molecules even if they already have chanis, but that 
you must make sure of adding new MolSystem.Residues as necessary.
  @param  Mole_Molecule self
  @param  ApiBoolean value
**/
void *Mole_Molecule_SetIsFinalised(Mole_Molecule self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsFinalised");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'setIsFinalised'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'setIsFinalised' is not callable");
  
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
  @param  Mole_Molecule self
  @param  ApiBoolean value
**/
void *Mole_Molecule_SetIsModifiable(Mole_Molecule self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsModifiable");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'setIsModifiable'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'setIsModifiable' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Molecule.keywords

Keywords for searching 
molecule. e.g. 'DNA binding', 'receptor', 'Zinc finger'...
  @param  Mole_Molecule self
  @param  ApiList values
**/
void *Mole_Molecule_SetKeywords(Mole_Molecule self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setKeywords");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'setKeywords'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'setKeywords' is not callable");
  
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
  @param  Mole_Molecule self
  @param  ApiString value
**/
void *Mole_Molecule_SetLastUnlockedBy(Mole_Molecule self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLastUnlockedBy");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'setLastUnlockedBy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'setLastUnlockedBy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Molecule.longName

Long form of molecule 
name.
  @param  Mole_Molecule self
  @param  ApiString value
**/
void *Mole_Molecule_SetLongName(Mole_Molecule self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLongName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'setLongName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'setLongName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @param  ApiSet values
**/
void *Mole_Molecule_SetMolComponents(Mole_Molecule self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolComponents");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'setMolComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'setMolComponents' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Molecule.mutationDetails

Details on 
mutations in the sequence (e.g. this is A54K relative to the wildtype).
  @param  Mole_Molecule self
  @param  ApiString value
**/
void *Mole_Molecule_SetMutationDetails(Mole_Molecule self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMutationDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'setMutationDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'setMutationDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Molecule.name

Name of Molecule. Used as 
key. Should be correct and informative, but may be an abbreviation or an 
acronym if the alternative is too long. Recommended e.g. NaCl, Lysozyme, 
Lac headpiece, morphine.
  @param  Mole_Molecule self
  @param  ApiString value
**/
void *Mole_Molecule_SetName(Mole_Molecule self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Molecule.naturalSource

Natural source for 
molecule
  @param  Mole_Molecule self
  @param  Taxo_NaturalSource value
**/
void *Mole_Molecule_SetNaturalSource(Mole_Molecule self, Taxo_NaturalSource value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNaturalSource");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'setNaturalSource'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'setNaturalSource' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Molecule.seqDetails

Details, notes, 
comments etc. about the sequence.
  @param  Mole_Molecule self
  @param  ApiString value
**/
void *Mole_Molecule_SetSeqDetails(Mole_Molecule self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSeqDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'setSeqDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'setSeqDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Molecule.smiles

SMILES (Simplified 
Molecular Input Line Entry Specification) string describing molecule.
  @param  Mole_Molecule self
  @param  ApiString value
**/
void *Mole_Molecule_SetSmiles(Mole_Molecule self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSmiles");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'setSmiles'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'setSmiles' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Molecule.smilesType

Type of Smiles string 
in smiles attribute
  @param  Mole_Molecule self
  @param  ApiString value
**/
void *Mole_Molecule_SetSmilesType(Mole_Molecule self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSmilesType");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'setSmilesType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'setSmilesType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.Molecule.Molecule.alignments

child link to 
class Alignment
  @param  Mole_Molecule self
  @returns   the result
**/
ApiList Mole_Molecule_SortedAlignments(Mole_Molecule self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAlignments");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'sortedAlignments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'sortedAlignments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.Molecule.Molecule.chains

MolSystem Chains 
corresponding to Molecule
  @param  Mole_Molecule self
  @returns   the result
**/
ApiList Mole_Molecule_SortedChains(Mole_Molecule self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChains");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'sortedChains'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'sortedChains' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.Molecule.Molecule.citations

Citations 
describing molecule.
  @param  Mole_Molecule self
  @returns   the result
**/
ApiList Mole_Molecule_SortedCitations(Mole_Molecule self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedCitations");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'sortedCitations'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'sortedCitations' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.Molecule.Molecule.entryMolecules

Connection to 
NmrEntries that reference this Molecule
  @param  Mole_Molecule self
  @returns   the result
**/
ApiList Mole_Molecule_SortedEntryMolecules(Mole_Molecule self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedEntryMolecules");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'sortedEntryMolecules'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'sortedEntryMolecules' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.Molecule.Molecule.molComponents

The list of 
MolComponent associated to a particular Molecule.
  @param  Mole_Molecule self
  @returns   the result
**/
ApiList Mole_Molecule_SortedMolComponents(Mole_Molecule self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolComponents");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'sortedMolComponents'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'sortedMolComponents' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.Molecule.Molecule.molResLinks

child link to 
class MolResLink
  @param  Mole_Molecule self
  @returns   the result
**/
ApiList Mole_Molecule_SortedMolResLinks(Mole_Molecule self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolResLinks");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'sortedMolResLinks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'sortedMolResLinks' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.Molecule.Molecule.molResidues

child link to 
class MolResidue
  @param  Mole_Molecule self
  @returns   the result
**/
ApiList Mole_Molecule_SortedMolResidues(Mole_Molecule self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolResidues");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'sortedMolResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'sortedMolResidues' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.Molecule.Molecule.molSeqFragments

child link to 
class MolSeqFragment
  @param  Mole_Molecule self
  @returns   the result
**/
ApiList Mole_Molecule_SortedMolSeqFragments(Mole_Molecule self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMolSeqFragments");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'sortedMolSeqFragments'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'sortedMolSeqFragments' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.Molecule.Molecule.moleculeSysNames

child link 
to class MoleculeSysName
  @param  Mole_Molecule self
  @returns   the result
**/
ApiList Mole_Molecule_SortedMoleculeSysNames(Mole_Molecule self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedMoleculeSysNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Molecule: cannot find method 'sortedMoleculeSysNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Molecule: method 'sortedMoleculeSysNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
