
#include "ccp.h"

/*
  Describes one end of link to other ChemComp. 
  linkAtoms[0] and chemAtoms[0] must be included in the same set of chemCompVars. linkAtoms[1] and chemAtoms[1] must be included in the same set of ChemCompVars as linkAtoms[0] or in a subset of it.
  
  There are constraints on the linkEnd, linkEnd.linkCode, ChemCompVar and ChemCompVar.linking (see ChemCompVar documentation). To satisfy the constraints the LinkEnd must be created after the ChemCompVars are created and linked to the correct AbstractChemAtoms.
*/

/* package ccp.api.molecule.ChemComp */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkEnd self
  @param  Impl_ApplicationData value
**/
void *Chem_LinkEnd_AddApplicationData(Chem_LinkEnd self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.ChemComp.LinkEnd
  @param  Chem_LinkEnd self
  @param  ApiBoolean complete
**/
void *Chem_LinkEnd_CheckAllValid(Chem_LinkEnd self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.ChemComp.LinkEnd
  @param  Chem_LinkEnd self
  @param  ApiBoolean complete
**/
void *Chem_LinkEnd_CheckValid(Chem_LinkEnd self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'checkValid' is not callable");
  
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
  @param  Chem_LinkEnd self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_LinkEnd_FindAllApplicationData(Chem_LinkEnd self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'findAllApplicationData' is not callable");
  
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
  @param  Chem_LinkEnd self
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_LinkEnd_FindAllApplicationData_keyval0(Chem_LinkEnd self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_LinkEnd_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkEnd self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_LinkEnd_FindAllApplicationData_keyval1(Chem_LinkEnd self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_LinkEnd_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkEnd self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_LinkEnd_FindAllApplicationData_keyval2(Chem_LinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_LinkEnd_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkEnd self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Chem_LinkEnd_FindAllApplicationData_keyval3(Chem_LinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_LinkEnd_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkEnd self
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
ApiList Chem_LinkEnd_FindAllApplicationData_keyval4(Chem_LinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_LinkEnd_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.LinkEnd.chemCompVars

ChemCompVars 
that hold LinkEnd
  @param  Chem_LinkEnd self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkEnd_FindAllChemCompVars(Chem_LinkEnd self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'findAllChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'findAllChemCompVars' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.LinkEnd.chemCompVars

ChemCompVars 
that hold LinkEnd
  @param  Chem_LinkEnd self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkEnd_FindAllChemCompVars_keyval0(Chem_LinkEnd self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_LinkEnd_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.LinkEnd.chemCompVars

ChemCompVars 
that hold LinkEnd
  @param  Chem_LinkEnd self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkEnd_FindAllChemCompVars_keyval1(Chem_LinkEnd self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_LinkEnd_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.LinkEnd.chemCompVars

ChemCompVars 
that hold LinkEnd
  @param  Chem_LinkEnd self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkEnd_FindAllChemCompVars_keyval2(Chem_LinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_LinkEnd_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.LinkEnd.chemCompVars

ChemCompVars 
that hold LinkEnd
  @param  Chem_LinkEnd self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chem_LinkEnd_FindAllChemCompVars_keyval3(Chem_LinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_LinkEnd_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemComp.LinkEnd.chemCompVars

ChemCompVars 
that hold LinkEnd
  @param  Chem_LinkEnd self
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
ApiSet Chem_LinkEnd_FindAllChemCompVars_keyval4(Chem_LinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_LinkEnd_FindAllChemCompVars(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkEnd self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_LinkEnd_FindFirstApplicationData(Chem_LinkEnd self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'findFirstApplicationData' is not callable");
  
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
  @param  Chem_LinkEnd self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_LinkEnd_FindFirstApplicationData_keyval0(Chem_LinkEnd self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_LinkEnd_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkEnd self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_LinkEnd_FindFirstApplicationData_keyval1(Chem_LinkEnd self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_LinkEnd_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkEnd self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_LinkEnd_FindFirstApplicationData_keyval2(Chem_LinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_LinkEnd_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkEnd self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chem_LinkEnd_FindFirstApplicationData_keyval3(Chem_LinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_LinkEnd_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkEnd self
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
Impl_ApplicationData Chem_LinkEnd_FindFirstApplicationData_keyval4(Chem_LinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_LinkEnd_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.LinkEnd.chemCompVars

ChemCompVars 
that hold LinkEnd
  @param  Chem_LinkEnd self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_LinkEnd_FindFirstChemCompVar(Chem_LinkEnd self, ApiMap conditions)
{
  
  Chem_ChemCompVar obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemCompVar");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'findFirstChemCompVar'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'findFirstChemCompVar' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.LinkEnd.chemCompVars

ChemCompVars 
that hold LinkEnd
  @param  Chem_LinkEnd self
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_LinkEnd_FindFirstChemCompVar_keyval0(Chem_LinkEnd self)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chem_LinkEnd_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.LinkEnd.chemCompVars

ChemCompVars 
that hold LinkEnd
  @param  Chem_LinkEnd self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_LinkEnd_FindFirstChemCompVar_keyval1(Chem_LinkEnd self, char * key, ApiObject value)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chem_LinkEnd_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.LinkEnd.chemCompVars

ChemCompVars 
that hold LinkEnd
  @param  Chem_LinkEnd self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_LinkEnd_FindFirstChemCompVar_keyval2(Chem_LinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chem_LinkEnd_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.LinkEnd.chemCompVars

ChemCompVars 
that hold LinkEnd
  @param  Chem_LinkEnd self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chem_ChemCompVar Chem_LinkEnd_FindFirstChemCompVar_keyval3(Chem_LinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chem_LinkEnd_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemComp.LinkEnd.chemCompVars

ChemCompVars 
that hold LinkEnd
  @param  Chem_LinkEnd self
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
Chem_ChemCompVar Chem_LinkEnd_FindFirstChemCompVar_keyval4(Chem_LinkEnd self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chem_ChemCompVar  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chem_LinkEnd_FindFirstChemCompVar(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.ChemComp.LinkEnd
  @param  Chem_LinkEnd self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Chem_LinkEnd_Get(Chem_LinkEnd self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_LinkEnd self
  @returns   the result
**/
Acco_AccessObject Chem_LinkEnd_GetAccess(Chem_LinkEnd self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'getAccess' is not callable");
  
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
  @param  Chem_LinkEnd self
  @returns   the result
**/
ApiList Chem_LinkEnd_GetApplicationData(Chem_LinkEnd self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.LinkEnd.boundChemAtom

One of the 
AbstractChemAtoms making up the Link. The direct bond is betweeen 
boundChemAtom (within this ChemComp) and boundLinkAtom (outside this 
ChemComp). The optional remoteChemAtom (within this ChemComp) and 
remoteLinkAtom (outside this ChemComp) arebound to the their respective 
boundAtoms. If defined they serve to define angles and torsions that 
involve the out-of-ChemComp bond.
  @param  Chem_LinkEnd self
  @returns   the result
**/
Chem_ChemAtom Chem_LinkEnd_GetBoundChemAtom(Chem_LinkEnd self)
{
  
  Chem_ChemAtom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBoundChemAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'getBoundChemAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'getBoundChemAtom' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.LinkEnd.boundLinkAtom

One of the 
AbstractChemAtoms making up the Link. The direct bond is betweeen 
boundChemAtom (within this ChemComp) and boundLinkAtom (outside this 
ChemComp). The optional remoteChemAtom (within this ChemComp) and 
remoteLinkAtom (outside this ChemComp) arebound to the their respective 
boundAtoms. If defined they serve to define angles and torsions that 
involve the out-of-ChemComp bond.
  @param  Chem_LinkEnd self
  @returns   the result
**/
Chem_LinkAtom Chem_LinkEnd_GetBoundLinkAtom(Chem_LinkEnd self)
{
  
  Chem_LinkAtom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBoundLinkAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'getBoundLinkAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'getBoundLinkAtom' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.ChemComp.LinkEnd
  @param  Chem_LinkEnd self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Chem_LinkEnd Chem_LinkEnd_GetByKey(Chem_LinkEnd self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Chem_LinkEnd obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.LinkEnd.chemComp

parent link
  @param  Chem_LinkEnd self
  @returns   the result
**/
Chem_ChemComp Chem_LinkEnd_GetChemComp(Chem_LinkEnd self)
{
  
  Chem_ChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemComp");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'getChemComp'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'getChemComp' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link chemCompVars
  @param  Chem_LinkEnd self
  @returns   the result
**/
ApiSet Chem_LinkEnd_GetChemCompVars(Chem_LinkEnd self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'getChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'getChemCompVars' is not callable");
  
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
  @param  Chem_LinkEnd self
  @returns   the result
**/
ApiString Chem_LinkEnd_GetClassName(Chem_LinkEnd self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'getClassName' is not callable");
  
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
  @param  Chem_LinkEnd self
  @returns   the result
**/
ApiList Chem_LinkEnd_GetFieldNames(Chem_LinkEnd self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.ChemComp.LinkEnd
  @param  Chem_LinkEnd self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Chem_LinkEnd_GetFullKey(Chem_LinkEnd self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'getFullKey' is not callable");
  
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
  @param  Chem_LinkEnd self
  @returns   the result
**/
ApiBoolean Chem_LinkEnd_GetInConstructor(Chem_LinkEnd self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'getInConstructor' is not callable");
  
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
  @param  Chem_LinkEnd self
  @returns   the result
**/
ApiBoolean Chem_LinkEnd_GetIsDeleted(Chem_LinkEnd self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.LinkEnd.linkCode

code ('name') for link. 
The following naming convention is used:
The linkCode is the same as the 
name of the boundChemAtom. E.g. a cysteine disulfide link will have 
linkCode 'SG'. The first exception is the case where there is more than 
one link starting at the same atom - here the linkCodes are the name of 
the first linkAtom followed by '_1', '_2'. E.g. an atom CX with three 
links starting from it will have linkEnds with linkCodes CX_1, CX_2, 
CX_3. If two different atom subtypes both have a link, the linkCodes are 
of the same form - there are no fixed rules for how to apportion the 
various suffixes. Another exception is the 'prev' and 'next' that form 
the backbone of linear polymers.
  @param  Chem_LinkEnd self
  @returns   the result
**/
ApiString Chem_LinkEnd_GetLinkCode(Chem_LinkEnd self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLinkCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'getLinkCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'getLinkCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.ChemComp.LinkEnd
  @param  Chem_LinkEnd self
  @returns  Local object key
**/
ApiObject Chem_LinkEnd_GetLocalKey(Chem_LinkEnd self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'getLocalKey' is not callable");
  
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
  @param  Chem_LinkEnd self
  @returns   the result
**/
ApiString Chem_LinkEnd_GetPackageName(Chem_LinkEnd self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'getPackageName' is not callable");
  
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
  @param  Chem_LinkEnd self
  @returns   the result
**/
ApiString Chem_LinkEnd_GetPackageShortName(Chem_LinkEnd self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.LinkEnd.parent

link to parent object - 
synonym for chemComp
  @param  Chem_LinkEnd self
  @returns   the result
**/
Chem_ChemComp Chem_LinkEnd_GetParent(Chem_LinkEnd self)
{
  
  Chem_ChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'getParent' is not callable");
  
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
  @param  Chem_LinkEnd self
  @returns   the result
**/
ApiString Chem_LinkEnd_GetQualifiedName(Chem_LinkEnd self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.LinkEnd.remoteChemAtom

One of the 
AbstractChemAtoms making up the Link. The direct bond is betweeen 
boundChemAtom (within this ChemComp) and boundLinkAtom (outside this 
ChemComp). The optional remoteChemAtom (within this ChemComp) and 
remoteLinkAtom (outside this ChemComp) arebound to the their respective 
boundAtoms. If defined they serve to define angles and torsions that 
involve the out-of-ChemComp bond.
  @param  Chem_LinkEnd self
  @returns   the result
**/
Chem_ChemAtom Chem_LinkEnd_GetRemoteChemAtom(Chem_LinkEnd self)
{
  
  Chem_ChemAtom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRemoteChemAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'getRemoteChemAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'getRemoteChemAtom' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemComp.LinkEnd.remoteLinkAtom

One of the 
AbstractChemAtoms making up the Link. The direct bond is betweeen 
boundChemAtom (within this ChemComp) and boundLinkAtom (outside this 
ChemComp). The optional remoteChemAtom (within this ChemComp) and 
remoteLinkAtom (outside this ChemComp) arebound to the their respective 
boundAtoms. If defined they serve to define angles and torsions that 
involve the out-of-ChemComp bond.
  @param  Chem_LinkEnd self
  @returns   the result
**/
Chem_LinkAtom Chem_LinkEnd_GetRemoteLinkAtom(Chem_LinkEnd self)
{
  
  Chem_LinkAtom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRemoteLinkAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'getRemoteLinkAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'getRemoteLinkAtom' is not callable");
  
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
  @param  Chem_LinkEnd self
  @returns   the result
**/
Impl_MemopsRoot Chem_LinkEnd_GetRoot(Chem_LinkEnd self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'getRoot' is not callable");
  
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
  @param  Chem_LinkEnd self
  @returns   the result
**/
Impl_TopObject Chem_LinkEnd_GetTopObject(Chem_LinkEnd self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.ChemComp.LinkEnd
  @param  Chem_ChemComp parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chem_LinkEnd Chem_LinkEnd_Init(Chem_ChemComp parent, ApiMap attrlinks)
{
  
  return Chem_ChemComp_NewLinkEnd(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.ChemComp.LinkEnd
  @param  Chem_ChemComp parent
  @param  Chem_ChemAtom boundChemAtom
  @param  Chem_LinkAtom boundLinkAtom
  @param  char * linkCode
  @returns  the new object
**/
Chem_LinkEnd Chem_LinkEnd_Init_reqd(Chem_ChemComp parent, Chem_ChemAtom boundChemAtom, Chem_LinkAtom boundLinkAtom, char * linkCode)
{
  
  Chem_LinkEnd  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__linkCode = ApiString_New(linkCode);

  PyDict_SetItemString(attrlinks, "boundChemAtom", boundChemAtom);
  PyDict_SetItemString(attrlinks, "boundLinkAtom", boundLinkAtom);
  PyDict_SetItemString(attrlinks, "linkCode", api__linkCode);
  
  obj = Chem_LinkEnd_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__linkCode);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chem_LinkEnd self
  @param  Impl_ApplicationData value
**/
void *Chem_LinkEnd_RemoveApplicationData(Chem_LinkEnd self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.ChemComp.LinkEnd
  @param  Chem_LinkEnd self
  @param  ApiString name
  @param  ApiObject value
**/
void *Chem_LinkEnd_Set(Chem_LinkEnd self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chem_LinkEnd self
  @param  Acco_AccessObject value
**/
void *Chem_LinkEnd_SetAccess(Chem_LinkEnd self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'setAccess' is not callable");
  
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
  @param  Chem_LinkEnd self
  @param  ApiList values
**/
void *Chem_LinkEnd_SetApplicationData(Chem_LinkEnd self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.LinkEnd.boundChemAtom

One of the 
AbstractChemAtoms making up the Link. The direct bond is betweeen 
boundChemAtom (within this ChemComp) and boundLinkAtom (outside this 
ChemComp). The optional remoteChemAtom (within this ChemComp) and 
remoteLinkAtom (outside this ChemComp) arebound to the their respective 
boundAtoms. If defined they serve to define angles and torsions that 
involve the out-of-ChemComp bond.
  @param  Chem_LinkEnd self
  @param  Chem_ChemAtom value
**/
void *Chem_LinkEnd_SetBoundChemAtom(Chem_LinkEnd self, Chem_ChemAtom value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBoundChemAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'setBoundChemAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'setBoundChemAtom' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.LinkEnd.boundLinkAtom

One of the 
AbstractChemAtoms making up the Link. The direct bond is betweeen 
boundChemAtom (within this ChemComp) and boundLinkAtom (outside this 
ChemComp). The optional remoteChemAtom (within this ChemComp) and 
remoteLinkAtom (outside this ChemComp) arebound to the their respective 
boundAtoms. If defined they serve to define angles and torsions that 
involve the out-of-ChemComp bond.
  @param  Chem_LinkEnd self
  @param  Chem_LinkAtom value
**/
void *Chem_LinkEnd_SetBoundLinkAtom(Chem_LinkEnd self, Chem_LinkAtom value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBoundLinkAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'setBoundLinkAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'setBoundLinkAtom' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.LinkEnd.linkCode

code ('name') for link. 
The following naming convention is used:
The linkCode is the same as the 
name of the boundChemAtom. E.g. a cysteine disulfide link will have 
linkCode 'SG'. The first exception is the case where there is more than 
one link starting at the same atom - here the linkCodes are the name of 
the first linkAtom followed by '_1', '_2'. E.g. an atom CX with three 
links starting from it will have linkEnds with linkCodes CX_1, CX_2, 
CX_3. If two different atom subtypes both have a link, the linkCodes are 
of the same form - there are no fixed rules for how to apportion the 
various suffixes. Another exception is the 'prev' and 'next' that form 
the backbone of linear polymers.
  @param  Chem_LinkEnd self
  @param  ApiString value
**/
void *Chem_LinkEnd_SetLinkCode(Chem_LinkEnd self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setLinkCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'setLinkCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'setLinkCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.LinkEnd.remoteChemAtom

One of the 
AbstractChemAtoms making up the Link. The direct bond is betweeen 
boundChemAtom (within this ChemComp) and boundLinkAtom (outside this 
ChemComp). The optional remoteChemAtom (within this ChemComp) and 
remoteLinkAtom (outside this ChemComp) arebound to the their respective 
boundAtoms. If defined they serve to define angles and torsions that 
involve the out-of-ChemComp bond.
  @param  Chem_LinkEnd self
  @param  Chem_ChemAtom value
**/
void *Chem_LinkEnd_SetRemoteChemAtom(Chem_LinkEnd self, Chem_ChemAtom value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRemoteChemAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'setRemoteChemAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'setRemoteChemAtom' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemComp.LinkEnd.remoteLinkAtom

One of the 
AbstractChemAtoms making up the Link. The direct bond is betweeen 
boundChemAtom (within this ChemComp) and boundLinkAtom (outside this 
ChemComp). The optional remoteChemAtom (within this ChemComp) and 
remoteLinkAtom (outside this ChemComp) arebound to the their respective 
boundAtoms. If defined they serve to define angles and torsions that 
involve the out-of-ChemComp bond.
  @param  Chem_LinkEnd self
  @param  Chem_LinkAtom value
**/
void *Chem_LinkEnd_SetRemoteLinkAtom(Chem_LinkEnd self, Chem_LinkAtom value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRemoteLinkAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'setRemoteLinkAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'setRemoteLinkAtom' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.ChemComp.LinkEnd.chemCompVars

ChemCompVars that 
hold LinkEnd
  @param  Chem_LinkEnd self
  @returns   the result
**/
ApiList Chem_LinkEnd_SortedChemCompVars(Chem_LinkEnd self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemCompVars");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: cannot find method 'sortedChemCompVars'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemComp.LinkEnd: method 'sortedChemCompVars' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
