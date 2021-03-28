
#include "ccp.h"

/*
  Fraction of Residue labeling that follows a given labeling scheme
*/

/* package ccp.api.molecule.LabeledMolecule */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabelFraction self
  @param  Impl_ApplicationData value
**/
void *Lmol_ResLabelFraction_AddApplicationData(Lmol_ResLabelFraction self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.LabeledMolecule.ResLabelFraction
  @param  Lmol_ResLabelFraction self
  @param  ApiBoolean complete
**/
void *Lmol_ResLabelFraction_CheckAllValid(Lmol_ResLabelFraction self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.LabeledMolecule.ResLabelFraction
  @param  Lmol_ResLabelFraction self
  @param  ApiBoolean complete
**/
void *Lmol_ResLabelFraction_CheckValid(Lmol_ResLabelFraction self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'checkValid' is not callable");
  
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
  @param  Lmol_ResLabelFraction self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Lmol_ResLabelFraction_FindAllApplicationData(Lmol_ResLabelFraction self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'findAllApplicationData' is not callable");
  
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
  @param  Lmol_ResLabelFraction self
  @returns  all value that satisfy the conditions 
**/
ApiList Lmol_ResLabelFraction_FindAllApplicationData_keyval0(Lmol_ResLabelFraction self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Lmol_ResLabelFraction_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabelFraction self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Lmol_ResLabelFraction_FindAllApplicationData_keyval1(Lmol_ResLabelFraction self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Lmol_ResLabelFraction_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabelFraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Lmol_ResLabelFraction_FindAllApplicationData_keyval2(Lmol_ResLabelFraction self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Lmol_ResLabelFraction_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabelFraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Lmol_ResLabelFraction_FindAllApplicationData_keyval3(Lmol_ResLabelFraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Lmol_ResLabelFraction_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabelFraction self
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
ApiList Lmol_ResLabelFraction_FindAllApplicationData_keyval4(Lmol_ResLabelFraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Lmol_ResLabelFraction_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.ResLabelFraction.isotopomers

Isotopomers 
described by ResLabelFraction
  @param  Lmol_ResLabelFraction self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_ResLabelFraction_FindAllIsotopomers(Lmol_ResLabelFraction self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllIsotopomers");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'findAllIsotopomers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'findAllIsotopomers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.ResLabelFraction.isotopomers

Isotopomers 
described by ResLabelFraction
  @param  Lmol_ResLabelFraction self
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_ResLabelFraction_FindAllIsotopomers_keyval0(Lmol_ResLabelFraction self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Lmol_ResLabelFraction_FindAllIsotopomers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.ResLabelFraction.isotopomers

Isotopomers 
described by ResLabelFraction
  @param  Lmol_ResLabelFraction self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_ResLabelFraction_FindAllIsotopomers_keyval1(Lmol_ResLabelFraction self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Lmol_ResLabelFraction_FindAllIsotopomers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.ResLabelFraction.isotopomers

Isotopomers 
described by ResLabelFraction
  @param  Lmol_ResLabelFraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_ResLabelFraction_FindAllIsotopomers_keyval2(Lmol_ResLabelFraction self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Lmol_ResLabelFraction_FindAllIsotopomers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.ResLabelFraction.isotopomers

Isotopomers 
described by ResLabelFraction
  @param  Lmol_ResLabelFraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Lmol_ResLabelFraction_FindAllIsotopomers_keyval3(Lmol_ResLabelFraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Lmol_ResLabelFraction_FindAllIsotopomers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
ccp.molecule.LabeledMolecule.ResLabelFraction.isotopomers

Isotopomers 
described by ResLabelFraction
  @param  Lmol_ResLabelFraction self
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
ApiSet Lmol_ResLabelFraction_FindAllIsotopomers_keyval4(Lmol_ResLabelFraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Lmol_ResLabelFraction_FindAllIsotopomers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabelFraction self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Lmol_ResLabelFraction_FindFirstApplicationData(Lmol_ResLabelFraction self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'findFirstApplicationData' is not callable");
  
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
  @param  Lmol_ResLabelFraction self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Lmol_ResLabelFraction_FindFirstApplicationData_keyval0(Lmol_ResLabelFraction self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Lmol_ResLabelFraction_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabelFraction self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Lmol_ResLabelFraction_FindFirstApplicationData_keyval1(Lmol_ResLabelFraction self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Lmol_ResLabelFraction_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabelFraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Lmol_ResLabelFraction_FindFirstApplicationData_keyval2(Lmol_ResLabelFraction self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Lmol_ResLabelFraction_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabelFraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Lmol_ResLabelFraction_FindFirstApplicationData_keyval3(Lmol_ResLabelFraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Lmol_ResLabelFraction_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabelFraction self
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
Impl_ApplicationData Lmol_ResLabelFraction_FindFirstApplicationData_keyval4(Lmol_ResLabelFraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Lmol_ResLabelFraction_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.ResLabelFraction.isotopomers

Isotopomers 
described by ResLabelFraction
  @param  Lmol_ResLabelFraction self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Cclb_Isotopomer Lmol_ResLabelFraction_FindFirstIsotopomer(Lmol_ResLabelFraction self, ApiMap conditions)
{
  
  Cclb_Isotopomer obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstIsotopomer");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'findFirstIsotopomer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'findFirstIsotopomer' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.ResLabelFraction.isotopomers

Isotopomers 
described by ResLabelFraction
  @param  Lmol_ResLabelFraction self
  @returns  the first value that satisfies the conditions 
**/
Cclb_Isotopomer Lmol_ResLabelFraction_FindFirstIsotopomer_keyval0(Lmol_ResLabelFraction self)
{
  
  Cclb_Isotopomer  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Lmol_ResLabelFraction_FindFirstIsotopomer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.ResLabelFraction.isotopomers

Isotopomers 
described by ResLabelFraction
  @param  Lmol_ResLabelFraction self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Cclb_Isotopomer Lmol_ResLabelFraction_FindFirstIsotopomer_keyval1(Lmol_ResLabelFraction self, char * key, ApiObject value)
{
  
  Cclb_Isotopomer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Lmol_ResLabelFraction_FindFirstIsotopomer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.ResLabelFraction.isotopomers

Isotopomers 
described by ResLabelFraction
  @param  Lmol_ResLabelFraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Cclb_Isotopomer Lmol_ResLabelFraction_FindFirstIsotopomer_keyval2(Lmol_ResLabelFraction self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Cclb_Isotopomer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Lmol_ResLabelFraction_FindFirstIsotopomer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.ResLabelFraction.isotopomers

Isotopomers 
described by ResLabelFraction
  @param  Lmol_ResLabelFraction self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Cclb_Isotopomer Lmol_ResLabelFraction_FindFirstIsotopomer_keyval3(Lmol_ResLabelFraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Cclb_Isotopomer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Lmol_ResLabelFraction_FindFirstIsotopomer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.LabeledMolecule.ResLabelFraction.isotopomers

Isotopomers 
described by ResLabelFraction
  @param  Lmol_ResLabelFraction self
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
Cclb_Isotopomer Lmol_ResLabelFraction_FindFirstIsotopomer_keyval4(Lmol_ResLabelFraction self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Cclb_Isotopomer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Lmol_ResLabelFraction_FindFirstIsotopomer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.LabeledMolecule.ResLabelFraction
  @param  Lmol_ResLabelFraction self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Lmol_ResLabelFraction_Get(Lmol_ResLabelFraction self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Lmol_ResLabelFraction self
  @returns   the result
**/
Acco_AccessObject Lmol_ResLabelFraction_GetAccess(Lmol_ResLabelFraction self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'getAccess' is not callable");
  
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
  @param  Lmol_ResLabelFraction self
  @returns   the result
**/
Acco_AccessObject Lmol_ResLabelFraction_GetActiveAccess(Lmol_ResLabelFraction self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'getActiveAccess' is not callable");
  
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
  @param  Lmol_ResLabelFraction self
  @returns   the result
**/
ApiList Lmol_ResLabelFraction_GetApplicationData(Lmol_ResLabelFraction self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.LabeledMolecule.ResLabelFraction
  @param  Lmol_ResLabelFraction self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Lmol_ResLabelFraction Lmol_ResLabelFraction_GetByKey(Lmol_ResLabelFraction self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Lmol_ResLabelFraction obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'getByKey' is not callable");
  
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
  @param  Lmol_ResLabelFraction self
  @returns   the result
**/
ApiString Lmol_ResLabelFraction_GetClassName(Lmol_ResLabelFraction self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'getClassName' is not callable");
  
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
  @param  Lmol_ResLabelFraction self
  @returns   the result
**/
ApiList Lmol_ResLabelFraction_GetFieldNames(Lmol_ResLabelFraction self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.LabeledMolecule.ResLabelFraction
  @param  Lmol_ResLabelFraction self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Lmol_ResLabelFraction_GetFullKey(Lmol_ResLabelFraction self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'getFullKey' is not callable");
  
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
  @param  Lmol_ResLabelFraction self
  @returns   the result
**/
ApiBoolean Lmol_ResLabelFraction_GetInConstructor(Lmol_ResLabelFraction self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'getInConstructor' is not callable");
  
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
  @param  Lmol_ResLabelFraction self
  @returns   the result
**/
ApiBoolean Lmol_ResLabelFraction_GetIsDeleted(Lmol_ResLabelFraction self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for 
ccp.molecule.LabeledMolecule.ResLabelFraction.isotopomerSerial

Serial 
number of Isotopomer within the relevant LabelingScheme. If value is 0 
this means that all Isotopomers are used in the relative abundance given 
in the LabelingScheme.
  @param  Lmol_ResLabelFraction self
  @returns   the result
**/
ApiInteger Lmol_ResLabelFraction_GetIsotopomerSerial(Lmol_ResLabelFraction self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsotopomerSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'getIsotopomerSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'getIsotopomerSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link isotopomers
  @param  Lmol_ResLabelFraction self
  @returns   the result
**/
ApiSet Lmol_ResLabelFraction_GetIsotopomers(Lmol_ResLabelFraction self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsotopomers");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'getIsotopomers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'getIsotopomers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link labelingScheme
  @param  Lmol_ResLabelFraction self
  @returns   the result
**/
Cclb_LabelingScheme Lmol_ResLabelFraction_GetLabelingScheme(Lmol_ResLabelFraction self)
{
  
  Cclb_LabelingScheme obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLabelingScheme");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'getLabelingScheme'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'getLabelingScheme' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.LabeledMolecule.ResLabelFraction
  @param  Lmol_ResLabelFraction self
  @returns  Local object key
**/
ApiObject Lmol_ResLabelFraction_GetLocalKey(Lmol_ResLabelFraction self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'getLocalKey' is not callable");
  
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
  @param  Lmol_ResLabelFraction self
  @returns   the result
**/
ApiString Lmol_ResLabelFraction_GetPackageName(Lmol_ResLabelFraction self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'getPackageName' is not callable");
  
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
  @param  Lmol_ResLabelFraction self
  @returns   the result
**/
ApiString Lmol_ResLabelFraction_GetPackageShortName(Lmol_ResLabelFraction self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.LabeledMolecule.ResLabelFraction.parent

link to 
parent object - synonym for resLabel
  @param  Lmol_ResLabelFraction self
  @returns   the result
**/
Lmol_ResLabel Lmol_ResLabelFraction_GetParent(Lmol_ResLabelFraction self)
{
  
  Lmol_ResLabel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'getParent' is not callable");
  
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
  @param  Lmol_ResLabelFraction self
  @returns   the result
**/
ApiString Lmol_ResLabelFraction_GetQualifiedName(Lmol_ResLabelFraction self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.LabeledMolecule.ResLabelFraction.resLabel

parent 
link
  @param  Lmol_ResLabelFraction self
  @returns   the result
**/
Lmol_ResLabel Lmol_ResLabelFraction_GetResLabel(Lmol_ResLabelFraction self)
{
  
  Lmol_ResLabel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResLabel");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'getResLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'getResLabel' is not callable");
  
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
  @param  Lmol_ResLabelFraction self
  @returns   the result
**/
Impl_MemopsRoot Lmol_ResLabelFraction_GetRoot(Lmol_ResLabelFraction self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.LabeledMolecule.ResLabelFraction.schemeName

Name 
of labeling scheme referred to
  @param  Lmol_ResLabelFraction self
  @returns   the result
**/
ApiString Lmol_ResLabelFraction_GetSchemeName(Lmol_ResLabelFraction self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSchemeName");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'getSchemeName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'getSchemeName' is not callable");
  
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
  @param  Lmol_ResLabelFraction self
  @returns   the result
**/
Impl_TopObject Lmol_ResLabelFraction_GetTopObject(Lmol_ResLabelFraction self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.LabeledMolecule.ResLabelFraction.weight

Weight 
(relative abundance) relative to sister ResLabelFractions.
  @param  Lmol_ResLabelFraction self
  @returns   the result
**/
ApiFloat Lmol_ResLabelFraction_GetWeight(Lmol_ResLabelFraction self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getWeight");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'getWeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'getWeight' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.LabeledMolecule.ResLabelFraction
  @param  Lmol_ResLabel parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Lmol_ResLabelFraction Lmol_ResLabelFraction_Init(Lmol_ResLabel parent, ApiMap attrlinks)
{
  
  return Lmol_ResLabel_NewResLabelFraction(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.LabeledMolecule.ResLabelFraction
  @param  Lmol_ResLabel parent
  @returns  the new object
**/
Lmol_ResLabelFraction Lmol_ResLabelFraction_Init_reqd(Lmol_ResLabel parent)
{
  
  Lmol_ResLabelFraction  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Lmol_ResLabelFraction_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Lmol_ResLabelFraction self
  @param  Impl_ApplicationData value
**/
void *Lmol_ResLabelFraction_RemoveApplicationData(Lmol_ResLabelFraction self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.LabeledMolecule.ResLabelFraction
  @param  Lmol_ResLabelFraction self
  @param  ApiString name
  @param  ApiObject value
**/
void *Lmol_ResLabelFraction_Set(Lmol_ResLabelFraction self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Lmol_ResLabelFraction self
  @param  Acco_AccessObject value
**/
void *Lmol_ResLabelFraction_SetAccess(Lmol_ResLabelFraction self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'setAccess' is not callable");
  
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
  @param  Lmol_ResLabelFraction self
  @param  ApiList values
**/
void *Lmol_ResLabelFraction_SetApplicationData(Lmol_ResLabelFraction self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for 
ccp.molecule.LabeledMolecule.ResLabelFraction.isotopomerSerial

Serial 
number of Isotopomer within the relevant LabelingScheme. If value is 0 
this means that all Isotopomers are used in the relative abundance given 
in the LabelingScheme.
  @param  Lmol_ResLabelFraction self
  @param  ApiInteger value
**/
void *Lmol_ResLabelFraction_SetIsotopomerSerial(Lmol_ResLabelFraction self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIsotopomerSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'setIsotopomerSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'setIsotopomerSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.LabeledMolecule.ResLabelFraction.schemeName

Name 
of labeling scheme referred to
  @param  Lmol_ResLabelFraction self
  @param  ApiString value
**/
void *Lmol_ResLabelFraction_SetSchemeName(Lmol_ResLabelFraction self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSchemeName");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'setSchemeName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'setSchemeName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.LabeledMolecule.ResLabelFraction.weight

Weight 
(relative abundance) relative to sister ResLabelFractions.
  @param  Lmol_ResLabelFraction self
  @param  ApiFloat value
**/
void *Lmol_ResLabelFraction_SetWeight(Lmol_ResLabelFraction self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setWeight");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'setWeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'setWeight' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for 
ccp.molecule.LabeledMolecule.ResLabelFraction.isotopomers

Isotopomers 
described by ResLabelFraction
  @param  Lmol_ResLabelFraction self
  @returns   the result
**/
ApiList Lmol_ResLabelFraction_SortedIsotopomers(Lmol_ResLabelFraction self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedIsotopomers");
  
  if (!method)
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: cannot find method 'sortedIsotopomers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.LabeledMolecule.ResLabelFraction: method 'sortedIsotopomers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
