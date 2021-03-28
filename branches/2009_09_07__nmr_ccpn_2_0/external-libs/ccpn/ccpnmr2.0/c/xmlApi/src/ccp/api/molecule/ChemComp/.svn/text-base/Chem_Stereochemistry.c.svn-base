
#include "ccp.h"

/*
  The stereochemistry attribute in combination with the AbstractChemAtoms and their order in the link define the stereochemistry of the atoms.  
*/

/* package ccp.api.molecule.ChemComp */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_Stereochemistry self
  @param  Impl_ApplicationData value
**/
void *Chem_Stereochemistry_AddApplicationData(Chem_Stereochemistry self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.ChemComp.Stereochemistry
  @param  Chem_Stereochemistry self
  @param  ApiBoolean complete
**/
void *Chem_Stereochemistry_CheckAllValid(Chem_Stereochemistry self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.ChemComp.Stereochemistry
  @param  Chem_Stereochemistry self
  @param  ApiBoolean complete
**/
void *Chem_Stereochemistry_CheckValid(Chem_Stereochemistry self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'checkValid' is not callable");
  
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
  @param  Chem_Stereochemistry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_Stereochemistry_FindAllApplicationData(Chem_Stereochemistry self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'findAllApplicationData' is not callable");
  
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
  @param  Chem_Stereochemistry self
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_Stereochemistry_FindAllApplicationData_keyval0(Chem_Stereochemistry self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_Stereochemistry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_Stereochemistry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_Stereochemistry_FindAllApplicationData_keyval1(Chem_Stereochemistry self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_Stereochemistry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_Stereochemistry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_Stereochemistry_FindAllApplicationData_keyval2(Chem_Stereochemistry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_Stereochemistry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_Stereochemistry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_Stereochemistry_FindAllApplicationData_keyval3(Chem_Stereochemistry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_Stereochemistry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_Stereochemistry self
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
ApiList Chem_Stereochemistry_FindAllApplicationData_keyval4(Chem_Stereochemistry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_Stereochemistry_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.Stereochemistry.chemAtoms

ChemAtoms 
that define StereoChemistry. The order of atoms in the link is 
significant.
  @param  Chem_Stereochemistry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_Stereochemistry_FindAllChemAtoms(Chem_Stereochemistry self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'findAllChemAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'findAllChemAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.Stereochemistry.chemAtoms

ChemAtoms 
that define StereoChemistry. The order of atoms in the link is 
significant.
  @param  Chem_Stereochemistry self
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_Stereochemistry_FindAllChemAtoms_keyval0(Chem_Stereochemistry self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_Stereochemistry_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.Stereochemistry.chemAtoms

ChemAtoms 
that define StereoChemistry. The order of atoms in the link is 
significant.
  @param  Chem_Stereochemistry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_Stereochemistry_FindAllChemAtoms_keyval1(Chem_Stereochemistry self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_Stereochemistry_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.Stereochemistry.chemAtoms

ChemAtoms 
that define StereoChemistry. The order of atoms in the link is 
significant.
  @param  Chem_Stereochemistry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_Stereochemistry_FindAllChemAtoms_keyval2(Chem_Stereochemistry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_Stereochemistry_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.Stereochemistry.chemAtoms

ChemAtoms 
that define StereoChemistry. The order of atoms in the link is 
significant.
  @param  Chem_Stereochemistry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_Stereochemistry_FindAllChemAtoms_keyval3(Chem_Stereochemistry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_Stereochemistry_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.Stereochemistry.chemAtoms

ChemAtoms 
that define StereoChemistry. The order of atoms in the link is 
significant.
  @param  Chem_Stereochemistry self
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
ApiList Chem_Stereochemistry_FindAllChemAtoms_keyval4(Chem_Stereochemistry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_Stereochemistry_FindAllChemAtoms(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_Stereochemistry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_Stereochemistry_FindFirstApplicationData(Chem_Stereochemistry self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'findFirstApplicationData' is not callable");
  
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
  @param  Chem_Stereochemistry self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_Stereochemistry_FindFirstApplicationData_keyval0(Chem_Stereochemistry self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_Stereochemistry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_Stereochemistry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_Stereochemistry_FindFirstApplicationData_keyval1(Chem_Stereochemistry self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_Stereochemistry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_Stereochemistry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_Stereochemistry_FindFirstApplicationData_keyval2(Chem_Stereochemistry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_Stereochemistry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_Stereochemistry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_Stereochemistry_FindFirstApplicationData_keyval3(Chem_Stereochemistry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_Stereochemistry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_Stereochemistry self
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
Impl_ApplicationData Chem_Stereochemistry_FindFirstApplicationData_keyval4(Chem_Stereochemistry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_Stereochemistry_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.Stereochemistry.chemAtoms

ChemAtoms 
that define StereoChemistry. The order of atoms in the link is 
significant.
  @param  Chem_Stereochemistry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_Stereochemistry_FindFirstChemAtom(Chem_Stereochemistry self, ApiMap conditions)
{
  
  Chem_AbstractChemAtom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'findFirstChemAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'findFirstChemAtom' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.Stereochemistry.chemAtoms

ChemAtoms 
that define StereoChemistry. The order of atoms in the link is 
significant.
  @param  Chem_Stereochemistry self
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_Stereochemistry_FindFirstChemAtom_keyval0(Chem_Stereochemistry self)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_Stereochemistry_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.Stereochemistry.chemAtoms

ChemAtoms 
that define StereoChemistry. The order of atoms in the link is 
significant.
  @param  Chem_Stereochemistry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_Stereochemistry_FindFirstChemAtom_keyval1(Chem_Stereochemistry self, char * key, ApiObject value)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_Stereochemistry_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.Stereochemistry.chemAtoms

ChemAtoms 
that define StereoChemistry. The order of atoms in the link is 
significant.
  @param  Chem_Stereochemistry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_Stereochemistry_FindFirstChemAtom_keyval2(Chem_Stereochemistry self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_Stereochemistry_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.Stereochemistry.chemAtoms

ChemAtoms 
that define StereoChemistry. The order of atoms in the link is 
significant.
  @param  Chem_Stereochemistry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_AbstractChemAtom Chem_Stereochemistry_FindFirstChemAtom_keyval3(Chem_Stereochemistry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_Stereochemistry_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.Stereochemistry.chemAtoms

ChemAtoms 
that define StereoChemistry. The order of atoms in the link is 
significant.
  @param  Chem_Stereochemistry self
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
Chem_AbstractChemAtom Chem_Stereochemistry_FindFirstChemAtom_keyval4(Chem_Stereochemistry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_AbstractChemAtom  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_Stereochemistry_FindFirstChemAtom(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.ChemComp.Stereochemistry
  @param  Chem_Stereochemistry self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Chem_Stereochemistry_Get(Chem_Stereochemistry self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_Stereochemistry self
  @returns   the result
**/
Acco_AccessObject Chem_Stereochemistry_GetAccess(Chem_Stereochemistry self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'getAccess' is not callable");
  
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
  @param  Chem_Stereochemistry self
  @returns   the result
**/
ApiList Chem_Stereochemistry_GetApplicationData(Chem_Stereochemistry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.ChemComp.Stereochemistry
  @param  Chem_Stereochemistry self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Chem_Stereochemistry Chem_Stereochemistry_GetByKey(Chem_Stereochemistry self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Chem_Stereochemistry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.Stereochemistry.chemAtoms

ChemAtoms that 
define StereoChemistry. The order of atoms in the link is significant.
  @param  Chem_Stereochemistry self
  @returns   the result
**/
ApiList Chem_Stereochemistry_GetChemAtoms(Chem_Stereochemistry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'getChemAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'getChemAtoms' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.Stereochemistry.chemComp

parent link
  @param  Chem_Stereochemistry self
  @returns   the result
**/
Chem_ChemComp Chem_Stereochemistry_GetChemComp(Chem_Stereochemistry self)
{
  
  Chem_ChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemComp");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'getChemComp'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'getChemComp' is not callable");
  
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
  @param  Chem_Stereochemistry self
  @returns   the result
**/
ApiString Chem_Stereochemistry_GetClassName(Chem_Stereochemistry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'getClassName' is not callable");
  
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
  @param  Chem_Stereochemistry self
  @returns   the result
**/
ApiList Chem_Stereochemistry_GetFieldNames(Chem_Stereochemistry self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.ChemComp.Stereochemistry
  @param  Chem_Stereochemistry self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Chem_Stereochemistry_GetFullKey(Chem_Stereochemistry self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'getFullKey' is not callable");
  
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
  @param  Chem_Stereochemistry self
  @returns   the result
**/
ApiBoolean Chem_Stereochemistry_GetInConstructor(Chem_Stereochemistry self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'getInConstructor' is not callable");
  
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
  @param  Chem_Stereochemistry self
  @returns   the result
**/
ApiBoolean Chem_Stereochemistry_GetIsDeleted(Chem_Stereochemistry self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.ChemComp.Stereochemistry
  @param  Chem_Stereochemistry self
  @returns  Local object key
**/
ApiObject Chem_Stereochemistry_GetLocalKey(Chem_Stereochemistry self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'getLocalKey' is not callable");
  
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
  @param  Chem_Stereochemistry self
  @returns   the result
**/
ApiString Chem_Stereochemistry_GetPackageName(Chem_Stereochemistry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'getPackageName' is not callable");
  
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
  @param  Chem_Stereochemistry self
  @returns   the result
**/
ApiString Chem_Stereochemistry_GetPackageShortName(Chem_Stereochemistry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.Stereochemistry.parent

link to parent 
object - synonym for chemComp
  @param  Chem_Stereochemistry self
  @returns   the result
**/
Chem_ChemComp Chem_Stereochemistry_GetParent(Chem_Stereochemistry self)
{
  
  Chem_ChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'getParent' is not callable");
  
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
  @param  Chem_Stereochemistry self
  @returns   the result
**/
ApiString Chem_Stereochemistry_GetQualifiedName(Chem_Stereochemistry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.ChemComp.Stereochemistry.refStereochemistry

Stereochemistry 
class that Stereochemistry object corresponds to.
  @param  Chem_Stereochemistry self
  @returns   the result
**/
Ster_RefStereochemistry Chem_Stereochemistry_GetRefStereochemistry(Chem_Stereochemistry self)
{
  
  Ster_RefStereochemistry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRefStereochemistry");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'getRefStereochemistry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'getRefStereochemistry' is not callable");
  
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
  @param  Chem_Stereochemistry self
  @returns   the result
**/
Impl_MemopsRoot Chem_Stereochemistry_GetRoot(Chem_Stereochemistry self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.Stereochemistry.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Chem_Stereochemistry self
  @returns   the result
**/
ApiInteger Chem_Stereochemistry_GetSerial(Chem_Stereochemistry self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived attribute stereoClass
  @param  Chem_Stereochemistry self
  @returns   the result
**/
ApiString Chem_Stereochemistry_GetStereoClass(Chem_Stereochemistry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStereoClass");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'getStereoClass'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'getStereoClass' is not callable");
  
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
  @param  Chem_Stereochemistry self
  @returns   the result
**/
Impl_TopObject Chem_Stereochemistry_GetTopObject(Chem_Stereochemistry self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.Stereochemistry.value

Value for the 
stereochemistry, following the SMILES convention.
  @param  Chem_Stereochemistry self
  @returns   the result
**/
ApiString Chem_Stereochemistry_GetValue(Chem_Stereochemistry self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'getValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'getValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.ChemComp.Stereochemistry
  @param  Chem_ChemComp parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chem_Stereochemistry Chem_Stereochemistry_Init(Chem_ChemComp parent, ApiMap attrlinks)
{
  
  return Chem_ChemComp_NewStereochemistry(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.ChemComp.Stereochemistry
  @param  Chem_ChemComp parent
  @param  Ster_RefStereochemistry refStereochemistry
  @param  char * value
  @returns  the new object
**/
Chem_Stereochemistry Chem_Stereochemistry_Init_reqd(Chem_ChemComp parent, Ster_RefStereochemistry refStereochemistry, char * value)
{
  
  Chem_Stereochemistry  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__value = ApiString_New(value);

  PyDict_SetItemString(attrlinks, "refStereochemistry", refStereochemistry);
  PyDict_SetItemString(attrlinks, "value", api__value);
  
  obj = Chem_Stereochemistry_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__value);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_Stereochemistry self
  @param  Impl_ApplicationData value
**/
void *Chem_Stereochemistry_RemoveApplicationData(Chem_Stereochemistry self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.ChemComp.Stereochemistry
  @param  Chem_Stereochemistry self
  @param  ApiString name
  @param  ApiObject value
**/
void *Chem_Stereochemistry_Set(Chem_Stereochemistry self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_Stereochemistry self
  @param  Acco_AccessObject value
**/
void *Chem_Stereochemistry_SetAccess(Chem_Stereochemistry self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'setAccess' is not callable");
  
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
  @param  Chem_Stereochemistry self
  @param  ApiList values
**/
void *Chem_Stereochemistry_SetApplicationData(Chem_Stereochemistry self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.Stereochemistry.chemAtoms

ChemAtoms that 
define StereoChemistry. The order of atoms in the link is significant.
  @param  Chem_Stereochemistry self
  @param  ApiList values
**/
void *Chem_Stereochemistry_SetChemAtoms(Chem_Stereochemistry self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemAtoms");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'setChemAtoms'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'setChemAtoms' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.ChemComp.Stereochemistry.refStereochemistry

Stereochemistry 
class that Stereochemistry object corresponds to.
  @param  Chem_Stereochemistry self
  @param  Ster_RefStereochemistry value
**/
void *Chem_Stereochemistry_SetRefStereochemistry(Chem_Stereochemistry self, Ster_RefStereochemistry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRefStereochemistry");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'setRefStereochemistry'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'setRefStereochemistry' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.Stereochemistry.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Chem_Stereochemistry self
  @param  ApiInteger value
**/
void *Chem_Stereochemistry_SetSerial(Chem_Stereochemistry self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.Stereochemistry.value

Value for the 
stereochemistry, following the SMILES convention.
  @param  Chem_Stereochemistry self
  @param  ApiString value
**/
void *Chem_Stereochemistry_SetValue(Chem_Stereochemistry self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: cannot find method 'setValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.Stereochemistry: method 'setValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
