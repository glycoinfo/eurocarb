
#include "ccp.h"

/*
  Isotopomer. A component of the species mixture with a defined uncorrelated isotope distribution on its atoms.
*/

/* package ccp.api.molecule.ChemCompLabel */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cclb_Isotopomer self
  @param  Impl_ApplicationData value
**/
void *Cclb_Isotopomer_AddApplicationData(Cclb_Isotopomer self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.ChemCompLabel.Isotopomer
  @param  Cclb_Isotopomer self
  @param  ApiBoolean complete
**/
void *Cclb_Isotopomer_CheckAllValid(Cclb_Isotopomer self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.ChemCompLabel.Isotopomer
  @param  Cclb_Isotopomer self
  @param  ApiBoolean complete
**/
void *Cclb_Isotopomer_CheckValid(Cclb_Isotopomer self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'checkValid' is not callable");
  
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
  @param  Cclb_Isotopomer self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Cclb_Isotopomer_FindAllApplicationData(Cclb_Isotopomer self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'findAllApplicationData' is not callable");
  
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
  @param  Cclb_Isotopomer self
  @returns  all value that satisfy the conditions 
**/
ApiList Cclb_Isotopomer_FindAllApplicationData_keyval0(Cclb_Isotopomer self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cclb_Isotopomer_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cclb_Isotopomer self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Cclb_Isotopomer_FindAllApplicationData_keyval1(Cclb_Isotopomer self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cclb_Isotopomer_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cclb_Isotopomer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Cclb_Isotopomer_FindAllApplicationData_keyval2(Cclb_Isotopomer self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cclb_Isotopomer_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cclb_Isotopomer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Cclb_Isotopomer_FindAllApplicationData_keyval3(Cclb_Isotopomer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cclb_Isotopomer_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cclb_Isotopomer self
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
ApiList Cclb_Isotopomer_FindAllApplicationData_keyval4(Cclb_Isotopomer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cclb_Isotopomer_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemCompLabel.Isotopomer.atomLabels

child link 
to class AtomLabel
  @param  Cclb_Isotopomer self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cclb_Isotopomer_FindAllAtomLabels(Cclb_Isotopomer self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllAtomLabels");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'findAllAtomLabels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'findAllAtomLabels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemCompLabel.Isotopomer.atomLabels

child link 
to class AtomLabel
  @param  Cclb_Isotopomer self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cclb_Isotopomer_FindAllAtomLabels_keyval0(Cclb_Isotopomer self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cclb_Isotopomer_FindAllAtomLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemCompLabel.Isotopomer.atomLabels

child link 
to class AtomLabel
  @param  Cclb_Isotopomer self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cclb_Isotopomer_FindAllAtomLabels_keyval1(Cclb_Isotopomer self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cclb_Isotopomer_FindAllAtomLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemCompLabel.Isotopomer.atomLabels

child link 
to class AtomLabel
  @param  Cclb_Isotopomer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cclb_Isotopomer_FindAllAtomLabels_keyval2(Cclb_Isotopomer self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cclb_Isotopomer_FindAllAtomLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemCompLabel.Isotopomer.atomLabels

child link 
to class AtomLabel
  @param  Cclb_Isotopomer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cclb_Isotopomer_FindAllAtomLabels_keyval3(Cclb_Isotopomer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cclb_Isotopomer_FindAllAtomLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemCompLabel.Isotopomer.atomLabels

child link 
to class AtomLabel
  @param  Cclb_Isotopomer self
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
ApiSet Cclb_Isotopomer_FindAllAtomLabels_keyval4(Cclb_Isotopomer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cclb_Isotopomer_FindAllAtomLabels(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cclb_Isotopomer self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cclb_Isotopomer_FindFirstApplicationData(Cclb_Isotopomer self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'findFirstApplicationData' is not callable");
  
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
  @param  Cclb_Isotopomer self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cclb_Isotopomer_FindFirstApplicationData_keyval0(Cclb_Isotopomer self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cclb_Isotopomer_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cclb_Isotopomer self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cclb_Isotopomer_FindFirstApplicationData_keyval1(Cclb_Isotopomer self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cclb_Isotopomer_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cclb_Isotopomer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cclb_Isotopomer_FindFirstApplicationData_keyval2(Cclb_Isotopomer self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cclb_Isotopomer_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cclb_Isotopomer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cclb_Isotopomer_FindFirstApplicationData_keyval3(Cclb_Isotopomer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cclb_Isotopomer_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cclb_Isotopomer self
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
Impl_ApplicationData Cclb_Isotopomer_FindFirstApplicationData_keyval4(Cclb_Isotopomer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cclb_Isotopomer_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemCompLabel.Isotopomer.atomLabels

child 
link to class AtomLabel
  @param  Cclb_Isotopomer self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Cclb_AtomLabel Cclb_Isotopomer_FindFirstAtomLabel(Cclb_Isotopomer self, ApiMap conditions)
{
  
  Cclb_AtomLabel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstAtomLabel");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'findFirstAtomLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'findFirstAtomLabel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemCompLabel.Isotopomer.atomLabels

child 
link to class AtomLabel
  @param  Cclb_Isotopomer self
  @returns  the first value that satisfies the conditions 
**/
Cclb_AtomLabel Cclb_Isotopomer_FindFirstAtomLabel_keyval0(Cclb_Isotopomer self)
{
  
  Cclb_AtomLabel  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cclb_Isotopomer_FindFirstAtomLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemCompLabel.Isotopomer.atomLabels

child 
link to class AtomLabel
  @param  Cclb_Isotopomer self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Cclb_AtomLabel Cclb_Isotopomer_FindFirstAtomLabel_keyval1(Cclb_Isotopomer self, char * key, ApiObject value)
{
  
  Cclb_AtomLabel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cclb_Isotopomer_FindFirstAtomLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemCompLabel.Isotopomer.atomLabels

child 
link to class AtomLabel
  @param  Cclb_Isotopomer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Cclb_AtomLabel Cclb_Isotopomer_FindFirstAtomLabel_keyval2(Cclb_Isotopomer self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Cclb_AtomLabel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cclb_Isotopomer_FindFirstAtomLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemCompLabel.Isotopomer.atomLabels

child 
link to class AtomLabel
  @param  Cclb_Isotopomer self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Cclb_AtomLabel Cclb_Isotopomer_FindFirstAtomLabel_keyval3(Cclb_Isotopomer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Cclb_AtomLabel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cclb_Isotopomer_FindFirstAtomLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemCompLabel.Isotopomer.atomLabels

child 
link to class AtomLabel
  @param  Cclb_Isotopomer self
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
Cclb_AtomLabel Cclb_Isotopomer_FindFirstAtomLabel_keyval4(Cclb_Isotopomer self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Cclb_AtomLabel  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cclb_Isotopomer_FindFirstAtomLabel(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.ChemCompLabel.Isotopomer
  @param  Cclb_Isotopomer self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Cclb_Isotopomer_Get(Cclb_Isotopomer self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cclb_Isotopomer self
  @returns   the result
**/
Acco_AccessObject Cclb_Isotopomer_GetAccess(Cclb_Isotopomer self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'getAccess' is not callable");
  
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
  @param  Cclb_Isotopomer self
  @returns   the result
**/
Acco_AccessObject Cclb_Isotopomer_GetActiveAccess(Cclb_Isotopomer self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'getActiveAccess' is not callable");
  
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
  @param  Cclb_Isotopomer self
  @returns   the result
**/
ApiList Cclb_Isotopomer_GetApplicationData(Cclb_Isotopomer self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompLabel.Isotopomer.atomLabels

child link to 
class AtomLabel
  @param  Cclb_Isotopomer self
  @returns   the result
**/
ApiSet Cclb_Isotopomer_GetAtomLabels(Cclb_Isotopomer self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtomLabels");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'getAtomLabels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'getAtomLabels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.ChemCompLabel.Isotopomer
  @param  Cclb_Isotopomer self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Cclb_Isotopomer Cclb_Isotopomer_GetByKey(Cclb_Isotopomer self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Cclb_Isotopomer obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompLabel.Isotopomer.chemCompLabel

parent link
  @param  Cclb_Isotopomer self
  @returns   the result
**/
Cclb_ChemCompLabel Cclb_Isotopomer_GetChemCompLabel(Cclb_Isotopomer self)
{
  
  Cclb_ChemCompLabel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemCompLabel");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'getChemCompLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'getChemCompLabel' is not callable");
  
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
  @param  Cclb_Isotopomer self
  @returns   the result
**/
ApiString Cclb_Isotopomer_GetClassName(Cclb_Isotopomer self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'getClassName' is not callable");
  
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
  @param  Cclb_Isotopomer self
  @returns   the result
**/
ApiList Cclb_Isotopomer_GetFieldNames(Cclb_Isotopomer self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.ChemCompLabel.Isotopomer
  @param  Cclb_Isotopomer self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Cclb_Isotopomer_GetFullKey(Cclb_Isotopomer self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'getFullKey' is not callable");
  
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
  @param  Cclb_Isotopomer self
  @returns   the result
**/
ApiBoolean Cclb_Isotopomer_GetInConstructor(Cclb_Isotopomer self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'getInConstructor' is not callable");
  
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
  @param  Cclb_Isotopomer self
  @returns   the result
**/
ApiBoolean Cclb_Isotopomer_GetIsDeleted(Cclb_Isotopomer self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.ChemCompLabel.Isotopomer
  @param  Cclb_Isotopomer self
  @returns  Local object key
**/
ApiObject Cclb_Isotopomer_GetLocalKey(Cclb_Isotopomer self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'getLocalKey' is not callable");
  
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
  @param  Cclb_Isotopomer self
  @returns   the result
**/
ApiString Cclb_Isotopomer_GetPackageName(Cclb_Isotopomer self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'getPackageName' is not callable");
  
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
  @param  Cclb_Isotopomer self
  @returns   the result
**/
ApiString Cclb_Isotopomer_GetPackageShortName(Cclb_Isotopomer self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompLabel.Isotopomer.parent

link to parent 
object - synonym for chemCompLabel
  @param  Cclb_Isotopomer self
  @returns   the result
**/
Cclb_ChemCompLabel Cclb_Isotopomer_GetParent(Cclb_Isotopomer self)
{
  
  Cclb_ChemCompLabel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'getParent' is not callable");
  
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
  @param  Cclb_Isotopomer self
  @returns   the result
**/
ApiString Cclb_Isotopomer_GetQualifiedName(Cclb_Isotopomer self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'getQualifiedName' is not callable");
  
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
  @param  Cclb_Isotopomer self
  @returns   the result
**/
Impl_MemopsRoot Cclb_Isotopomer_GetRoot(Cclb_Isotopomer self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompLabel.Isotopomer.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Cclb_Isotopomer self
  @returns   the result
**/
ApiInteger Cclb_Isotopomer_GetSerial(Cclb_Isotopomer self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'getSerial' is not callable");
  
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
  @param  Cclb_Isotopomer self
  @returns   the result
**/
Impl_TopObject Cclb_Isotopomer_GetTopObject(Cclb_Isotopomer self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompLabel.Isotopomer.weight

Relative weight of 
total that isotopomer makes up.
  @param  Cclb_Isotopomer self
  @returns   the result
**/
ApiFloat Cclb_Isotopomer_GetWeight(Cclb_Isotopomer self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getWeight");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'getWeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'getWeight' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.ChemCompLabel.Isotopomer
  @param  Cclb_ChemCompLabel parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Cclb_Isotopomer Cclb_Isotopomer_Init(Cclb_ChemCompLabel parent, ApiMap attrlinks)
{
  
  return Cclb_ChemCompLabel_NewIsotopomer(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.ChemCompLabel.Isotopomer
  @param  Cclb_ChemCompLabel parent
  @returns  the new object
**/
Cclb_Isotopomer Cclb_Isotopomer_Init_reqd(Cclb_ChemCompLabel parent)
{
  
  Cclb_Isotopomer  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Cclb_Isotopomer_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemCompLabel.AtomLabel
  @param  Cclb_Isotopomer self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Cclb_AtomLabel Cclb_Isotopomer_NewAtomLabel(Cclb_Isotopomer self, ApiMap attrlinks)
{
  
  Cclb_AtomLabel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newAtomLabel");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'newAtomLabel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'newAtomLabel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemCompLabel.AtomLabel
  @param  Cclb_Isotopomer self
  @param  char * isotopeCode
  @param  char * name
  @returns  the new object
**/
Cclb_AtomLabel Cclb_Isotopomer_NewAtomLabel_reqd(Cclb_Isotopomer self, char * isotopeCode, char * name)
{
  
  Cclb_AtomLabel  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__isotopeCode = ApiString_New(isotopeCode);
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "isotopeCode", api__isotopeCode);
  PyDict_SetItemString(attrlinks, "name", api__name);
  
  obj = Cclb_Isotopomer_NewAtomLabel(self, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__isotopeCode);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cclb_Isotopomer self
  @param  Impl_ApplicationData value
**/
void *Cclb_Isotopomer_RemoveApplicationData(Cclb_Isotopomer self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.ChemCompLabel.Isotopomer
  @param  Cclb_Isotopomer self
  @param  ApiString name
  @param  ApiObject value
**/
void *Cclb_Isotopomer_Set(Cclb_Isotopomer self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cclb_Isotopomer self
  @param  Acco_AccessObject value
**/
void *Cclb_Isotopomer_SetAccess(Cclb_Isotopomer self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'setAccess' is not callable");
  
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
  @param  Cclb_Isotopomer self
  @param  ApiList values
**/
void *Cclb_Isotopomer_SetApplicationData(Cclb_Isotopomer self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemCompLabel.Isotopomer.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Cclb_Isotopomer self
  @param  ApiInteger value
**/
void *Cclb_Isotopomer_SetSerial(Cclb_Isotopomer self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemCompLabel.Isotopomer.weight

Relative weight of 
total that isotopomer makes up.
  @param  Cclb_Isotopomer self
  @param  ApiFloat value
**/
void *Cclb_Isotopomer_SetWeight(Cclb_Isotopomer self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setWeight");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'setWeight'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'setWeight' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.ChemCompLabel.Isotopomer.atomLabels

child link 
to class AtomLabel
  @param  Cclb_Isotopomer self
  @returns   the result
**/
ApiList Cclb_Isotopomer_SortedAtomLabels(Cclb_Isotopomer self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedAtomLabels");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: cannot find method 'sortedAtomLabels'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.Isotopomer: method 'sortedAtomLabels' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
