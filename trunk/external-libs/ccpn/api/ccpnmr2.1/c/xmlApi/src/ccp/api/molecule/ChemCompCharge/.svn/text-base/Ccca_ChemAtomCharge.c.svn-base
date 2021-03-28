
#include "ccp.h"

/*
  Atom description including partial charges
*/

/* package ccp.api.molecule.ChemCompCharge */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemAtomCharge self
  @param  Impl_ApplicationData value
**/
void *Ccca_ChemAtomCharge_AddApplicationData(Ccca_ChemAtomCharge self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @param  Ccca_ChemCompVarCharge value
**/
void *Ccca_ChemAtomCharge_AddChemCompVarCharge(Ccca_ChemAtomCharge self, Ccca_ChemCompVarCharge value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addChemCompVarCharge");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'addChemCompVarCharge'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'addChemCompVarCharge' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.validVegaTypes

VegaTypes 
accepted for ChemAtom in order for the partialCharge to be valid. This 
parameters is only set for atoms close to out-of-ChemComp links, where 
the atoms in the linked-to ChemComp may make a difference. Note that 
this is the full Vega type, including several shells of neighbours, not 
the shortVegaType kept in ChemComp.ChemAtom
  @param  Ccca_ChemAtomCharge self
  @param  ApiString value
**/
void *Ccca_ChemAtomCharge_AddValidVegaType(Ccca_ChemAtomCharge self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addValidVegaType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'addValidVegaType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'addValidVegaType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.ChemCompCharge.ChemAtomCharge
  @param  Ccca_ChemAtomCharge self
  @param  ApiBoolean complete
**/
void *Ccca_ChemAtomCharge_CheckAllValid(Ccca_ChemAtomCharge self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.ChemCompCharge.ChemAtomCharge
  @param  Ccca_ChemAtomCharge self
  @param  ApiBoolean complete
**/
void *Ccca_ChemAtomCharge_CheckValid(Ccca_ChemAtomCharge self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'checkValid' is not callable");
  
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
  @param  Ccca_ChemAtomCharge self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Ccca_ChemAtomCharge_FindAllApplicationData(Ccca_ChemAtomCharge self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'findAllApplicationData' is not callable");
  
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
  @param  Ccca_ChemAtomCharge self
  @returns  all value that satisfy the conditions 
**/
ApiList Ccca_ChemAtomCharge_FindAllApplicationData_keyval0(Ccca_ChemAtomCharge self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccca_ChemAtomCharge_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemAtomCharge self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Ccca_ChemAtomCharge_FindAllApplicationData_keyval1(Ccca_ChemAtomCharge self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccca_ChemAtomCharge_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemAtomCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Ccca_ChemAtomCharge_FindAllApplicationData_keyval2(Ccca_ChemAtomCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccca_ChemAtomCharge_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemAtomCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Ccca_ChemAtomCharge_FindAllApplicationData_keyval3(Ccca_ChemAtomCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccca_ChemAtomCharge_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemAtomCharge self
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
ApiList Ccca_ChemAtomCharge_FindAllApplicationData_keyval4(Ccca_ChemAtomCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccca_ChemAtomCharge_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccca_ChemAtomCharge_FindAllChemCompVarCharges(Ccca_ChemAtomCharge self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllChemCompVarCharges");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'findAllChemCompVarCharges'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'findAllChemCompVarCharges' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccca_ChemAtomCharge_FindAllChemCompVarCharges_keyval0(Ccca_ChemAtomCharge self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccca_ChemAtomCharge_FindAllChemCompVarCharges(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccca_ChemAtomCharge_FindAllChemCompVarCharges_keyval1(Ccca_ChemAtomCharge self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccca_ChemAtomCharge_FindAllChemCompVarCharges(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccca_ChemAtomCharge_FindAllChemCompVarCharges_keyval2(Ccca_ChemAtomCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccca_ChemAtomCharge_FindAllChemCompVarCharges(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Ccca_ChemAtomCharge_FindAllChemCompVarCharges_keyval3(Ccca_ChemAtomCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccca_ChemAtomCharge_FindAllChemCompVarCharges(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
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
ApiSet Ccca_ChemAtomCharge_FindAllChemCompVarCharges_keyval4(Ccca_ChemAtomCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccca_ChemAtomCharge_FindAllChemCompVarCharges(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemAtomCharge self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccca_ChemAtomCharge_FindFirstApplicationData(Ccca_ChemAtomCharge self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'findFirstApplicationData' is not callable");
  
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
  @param  Ccca_ChemAtomCharge self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccca_ChemAtomCharge_FindFirstApplicationData_keyval0(Ccca_ChemAtomCharge self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccca_ChemAtomCharge_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemAtomCharge self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccca_ChemAtomCharge_FindFirstApplicationData_keyval1(Ccca_ChemAtomCharge self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccca_ChemAtomCharge_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemAtomCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccca_ChemAtomCharge_FindFirstApplicationData_keyval2(Ccca_ChemAtomCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccca_ChemAtomCharge_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemAtomCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Ccca_ChemAtomCharge_FindFirstApplicationData_keyval3(Ccca_ChemAtomCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccca_ChemAtomCharge_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemAtomCharge self
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
Impl_ApplicationData Ccca_ChemAtomCharge_FindFirstApplicationData_keyval4(Ccca_ChemAtomCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccca_ChemAtomCharge_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Ccca_ChemCompVarCharge Ccca_ChemAtomCharge_FindFirstChemCompVarCharge(Ccca_ChemAtomCharge self, ApiMap conditions)
{
  
  Ccca_ChemCompVarCharge obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstChemCompVarCharge");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'findFirstChemCompVarCharge'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'findFirstChemCompVarCharge' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @returns  the first value that satisfies the conditions 
**/
Ccca_ChemCompVarCharge Ccca_ChemAtomCharge_FindFirstChemCompVarCharge_keyval0(Ccca_ChemAtomCharge self)
{
  
  Ccca_ChemCompVarCharge  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Ccca_ChemAtomCharge_FindFirstChemCompVarCharge(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Ccca_ChemCompVarCharge Ccca_ChemAtomCharge_FindFirstChemCompVarCharge_keyval1(Ccca_ChemAtomCharge self, char * key, ApiObject value)
{
  
  Ccca_ChemCompVarCharge  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Ccca_ChemAtomCharge_FindFirstChemCompVarCharge(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Ccca_ChemCompVarCharge Ccca_ChemAtomCharge_FindFirstChemCompVarCharge_keyval2(Ccca_ChemAtomCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Ccca_ChemCompVarCharge  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Ccca_ChemAtomCharge_FindFirstChemCompVarCharge(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Ccca_ChemCompVarCharge Ccca_ChemAtomCharge_FindFirstChemCompVarCharge_keyval3(Ccca_ChemAtomCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Ccca_ChemCompVarCharge  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Ccca_ChemAtomCharge_FindFirstChemCompVarCharge(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
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
Ccca_ChemCompVarCharge Ccca_ChemAtomCharge_FindFirstChemCompVarCharge_keyval4(Ccca_ChemAtomCharge self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Ccca_ChemCompVarCharge  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Ccca_ChemAtomCharge_FindFirstChemCompVarCharge(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.ChemCompCharge.ChemAtomCharge
  @param  Ccca_ChemAtomCharge self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Ccca_ChemAtomCharge_Get(Ccca_ChemAtomCharge self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
Acco_AccessObject Ccca_ChemAtomCharge_GetAccess(Ccca_ChemAtomCharge self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'getAccess' is not callable");
  
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
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
Acco_AccessObject Ccca_ChemAtomCharge_GetActiveAccess(Ccca_ChemAtomCharge self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'getActiveAccess' is not callable");
  
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
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
ApiList Ccca_ChemAtomCharge_GetApplicationData(Ccca_ChemAtomCharge self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.ChemCompCharge.ChemAtomCharge
  @param  Ccca_ChemAtomCharge self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Ccca_ChemAtomCharge Ccca_ChemAtomCharge_GetByKey(Ccca_ChemAtomCharge self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Ccca_ChemAtomCharge obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link chemAtom
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
Chem_ChemAtom Ccca_ChemAtomCharge_GetChemAtom(Ccca_ChemAtomCharge self)
{
  
  Chem_ChemAtom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'getChemAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'getChemAtom' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompCharge

parent link
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
Ccca_ChemCompCharge Ccca_ChemAtomCharge_GetChemCompCharge(Ccca_ChemAtomCharge self)
{
  
  Ccca_ChemCompCharge obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompCharge");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'getChemCompCharge'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'getChemCompCharge' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
ApiSet Ccca_ChemAtomCharge_GetChemCompVarCharges(Ccca_ChemAtomCharge self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompVarCharges");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'getChemCompVarCharges'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'getChemCompVarCharges' is not callable");
  
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
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
ApiString Ccca_ChemAtomCharge_GetClassName(Ccca_ChemAtomCharge self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'getClassName' is not callable");
  
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
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
ApiList Ccca_ChemAtomCharge_GetFieldNames(Ccca_ChemAtomCharge self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.ChemCompCharge.ChemAtomCharge
  @param  Ccca_ChemAtomCharge self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Ccca_ChemAtomCharge_GetFullKey(Ccca_ChemAtomCharge self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'getFullKey' is not callable");
  
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
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
ApiBoolean Ccca_ChemAtomCharge_GetInConstructor(Ccca_ChemAtomCharge self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'getInConstructor' is not callable");
  
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
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
ApiBoolean Ccca_ChemAtomCharge_GetIsDeleted(Ccca_ChemAtomCharge self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.ChemCompCharge.ChemAtomCharge
  @param  Ccca_ChemAtomCharge self
  @returns  Local object key
**/
ApiObject Ccca_ChemAtomCharge_GetLocalKey(Ccca_ChemAtomCharge self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompCharge.ChemAtomCharge.name

Name of 
corresponding ChemComp.ChemAtom. Part of the key for the corresponding 
ChemComp.ChemAtom
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
ApiString Ccca_ChemAtomCharge_GetName(Ccca_ChemAtomCharge self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'getName' is not callable");
  
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
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
ApiString Ccca_ChemAtomCharge_GetPackageName(Ccca_ChemAtomCharge self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'getPackageName' is not callable");
  
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
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
ApiString Ccca_ChemAtomCharge_GetPackageShortName(Ccca_ChemAtomCharge self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompCharge.ChemAtomCharge.parent

link to 
parent object - synonym for chemCompCharge
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
Ccca_ChemCompCharge Ccca_ChemAtomCharge_GetParent(Ccca_ChemAtomCharge self)
{
  
  Ccca_ChemCompCharge obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.partialCharge

partial charge 
value
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
ApiFloat Ccca_ChemAtomCharge_GetPartialCharge(Ccca_ChemAtomCharge self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPartialCharge");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'getPartialCharge'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'getPartialCharge' is not callable");
  
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
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
ApiString Ccca_ChemAtomCharge_GetQualifiedName(Ccca_ChemAtomCharge self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'getQualifiedName' is not callable");
  
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
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
Impl_MemopsRoot Ccca_ChemAtomCharge_GetRoot(Ccca_ChemAtomCharge self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompCharge.ChemAtomCharge.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
ApiInteger Ccca_ChemAtomCharge_GetSerial(Ccca_ChemAtomCharge self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompCharge.ChemAtomCharge.subType

Subtype of 
AbstractChemAtom, used to distinguish Atoms with the same names but 
different characteristics, to be used in diferent ChemCompVars. Part of 
the key for the corresponding ChemComp.ChemAtom
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
ApiInteger Ccca_ChemAtomCharge_GetSubType(Ccca_ChemAtomCharge self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSubType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'getSubType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'getSubType' is not callable");
  
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
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
Impl_TopObject Ccca_ChemAtomCharge_GetTopObject(Ccca_ChemAtomCharge self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.validVegaTypes

VegaTypes 
accepted for ChemAtom in order for the partialCharge to be valid. This 
parameters is only set for atoms close to out-of-ChemComp links, where 
the atoms in the linked-to ChemComp may make a difference. Note that 
this is the full Vega type, including several shells of neighbours, not 
the shortVegaType kept in ChemComp.ChemAtom
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
ApiList Ccca_ChemAtomCharge_GetValidVegaTypes(Ccca_ChemAtomCharge self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValidVegaTypes");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'getValidVegaTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'getValidVegaTypes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.ChemCompCharge.ChemAtomCharge
  @param  Ccca_ChemCompCharge parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Ccca_ChemAtomCharge Ccca_ChemAtomCharge_Init(Ccca_ChemCompCharge parent, ApiMap attrlinks)
{
  
  return Ccca_ChemCompCharge_NewChemAtomCharge(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.ChemCompCharge.ChemAtomCharge
  @param  Ccca_ChemCompCharge parent
  @param  ApiSet chemCompVarCharges
  @param  char * name
  @param  float partialCharge
  @param  ApiInteger subType
  @returns  the new object
**/
Ccca_ChemAtomCharge Ccca_ChemAtomCharge_Init_reqd(Ccca_ChemCompCharge parent, ApiSet chemCompVarCharges, char * name, float partialCharge, ApiInteger subType)
{
  
  Ccca_ChemAtomCharge  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);
  ApiFloat api__partialCharge = ApiFloat_New(partialCharge);

  PyDict_SetItemString(attrlinks, "chemCompVarCharges", chemCompVarCharges);
  PyDict_SetItemString(attrlinks, "name", api__name);
  PyDict_SetItemString(attrlinks, "partialCharge", api__partialCharge);
  PyDict_SetItemString(attrlinks, "subType", subType);
  
  obj = Ccca_ChemAtomCharge_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  Py_DECREF(api__partialCharge);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Ccca_ChemAtomCharge self
  @param  Impl_ApplicationData value
**/
void *Ccca_ChemAtomCharge_RemoveApplicationData(Ccca_ChemAtomCharge self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @param  Ccca_ChemCompVarCharge value
**/
void *Ccca_ChemAtomCharge_RemoveChemCompVarCharge(Ccca_ChemAtomCharge self, Ccca_ChemCompVarCharge value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeChemCompVarCharge");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'removeChemCompVarCharge'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'removeChemCompVarCharge' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.validVegaTypes

VegaTypes 
accepted for ChemAtom in order for the partialCharge to be valid. This 
parameters is only set for atoms close to out-of-ChemComp links, where 
the atoms in the linked-to ChemComp may make a difference. Note that 
this is the full Vega type, including several shells of neighbours, not 
the shortVegaType kept in ChemComp.ChemAtom
  @param  Ccca_ChemAtomCharge self
  @param  ApiString value
**/
void *Ccca_ChemAtomCharge_RemoveValidVegaType(Ccca_ChemAtomCharge self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeValidVegaType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'removeValidVegaType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'removeValidVegaType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.ChemCompCharge.ChemAtomCharge
  @param  Ccca_ChemAtomCharge self
  @param  ApiString name
  @param  ApiObject value
**/
void *Ccca_ChemAtomCharge_Set(Ccca_ChemAtomCharge self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Ccca_ChemAtomCharge self
  @param  Acco_AccessObject value
**/
void *Ccca_ChemAtomCharge_SetAccess(Ccca_ChemAtomCharge self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'setAccess' is not callable");
  
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
  @param  Ccca_ChemAtomCharge self
  @param  ApiList values
**/
void *Ccca_ChemAtomCharge_SetApplicationData(Ccca_ChemAtomCharge self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @param  ApiSet values
**/
void *Ccca_ChemAtomCharge_SetChemCompVarCharges(Ccca_ChemAtomCharge self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChemCompVarCharges");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'setChemCompVarCharges'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'setChemCompVarCharges' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemCompCharge.ChemAtomCharge.name

Name of 
corresponding ChemComp.ChemAtom. Part of the key for the corresponding 
ChemComp.ChemAtom
  @param  Ccca_ChemAtomCharge self
  @param  ApiString value
**/
void *Ccca_ChemAtomCharge_SetName(Ccca_ChemAtomCharge self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.partialCharge

partial charge 
value
  @param  Ccca_ChemAtomCharge self
  @param  ApiFloat value
**/
void *Ccca_ChemAtomCharge_SetPartialCharge(Ccca_ChemAtomCharge self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPartialCharge");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'setPartialCharge'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'setPartialCharge' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemCompCharge.ChemAtomCharge.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Ccca_ChemAtomCharge self
  @param  ApiInteger value
**/
void *Ccca_ChemAtomCharge_SetSerial(Ccca_ChemAtomCharge self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemCompCharge.ChemAtomCharge.subType

Subtype of 
AbstractChemAtom, used to distinguish Atoms with the same names but 
different characteristics, to be used in diferent ChemCompVars. Part of 
the key for the corresponding ChemComp.ChemAtom
  @param  Ccca_ChemAtomCharge self
  @param  ApiInteger value
**/
void *Ccca_ChemAtomCharge_SetSubType(Ccca_ChemAtomCharge self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSubType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'setSubType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'setSubType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.validVegaTypes

VegaTypes 
accepted for ChemAtom in order for the partialCharge to be valid. This 
parameters is only set for atoms close to out-of-ChemComp links, where 
the atoms in the linked-to ChemComp may make a difference. Note that 
this is the full Vega type, including several shells of neighbours, not 
the shortVegaType kept in ChemComp.ChemAtom
  @param  Ccca_ChemAtomCharge self
  @param  ApiList values
**/
void *Ccca_ChemAtomCharge_SetValidVegaTypes(Ccca_ChemAtomCharge self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setValidVegaTypes");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'setValidVegaTypes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'setValidVegaTypes' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.ChemCompCharge.ChemAtomCharge.chemCompVarCharges

ChemCompVarForce 
where ForceAtom is part
  @param  Ccca_ChemAtomCharge self
  @returns   the result
**/
ApiList Ccca_ChemAtomCharge_SortedChemCompVarCharges(Ccca_ChemAtomCharge self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedChemCompVarCharges");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: cannot find method 'sortedChemCompVarCharges'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompCharge.ChemAtomCharge: method 'sortedChemCompVarCharges' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
