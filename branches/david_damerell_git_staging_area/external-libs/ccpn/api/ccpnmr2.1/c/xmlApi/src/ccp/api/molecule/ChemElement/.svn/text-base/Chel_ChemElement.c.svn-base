
#include "ccp.h"

/*
  e.g. C
*/

/* package ccp.api.molecule.ChemElement */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_ChemElement self
  @param  Impl_ApplicationData value
**/
void *Chel_ChemElement_AddApplicationData(Chel_ChemElement self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.ChemElement.ChemElement
  @param  Chel_ChemElement self
  @param  ApiBoolean complete
**/
void *Chel_ChemElement_CheckAllValid(Chel_ChemElement self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.ChemElement.ChemElement
  @param  Chel_ChemElement self
  @param  ApiBoolean complete
**/
void *Chel_ChemElement_CheckValid(Chel_ChemElement self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'checkValid' is not callable");
  
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
  @param  Chel_ChemElement self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Chel_ChemElement_FindAllApplicationData(Chel_ChemElement self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'findAllApplicationData' is not callable");
  
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
  @param  Chel_ChemElement self
  @returns  all value that satisfy the conditions 
**/
ApiList Chel_ChemElement_FindAllApplicationData_keyval0(Chel_ChemElement self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chel_ChemElement_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_ChemElement self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Chel_ChemElement_FindAllApplicationData_keyval1(Chel_ChemElement self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chel_ChemElement_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_ChemElement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Chel_ChemElement_FindAllApplicationData_keyval2(Chel_ChemElement self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chel_ChemElement_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_ChemElement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Chel_ChemElement_FindAllApplicationData_keyval3(Chel_ChemElement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chel_ChemElement_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_ChemElement self
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
ApiList Chel_ChemElement_FindAllApplicationData_keyval4(Chel_ChemElement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chel_ChemElement_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemElement.ChemElement.isotopes

child link to 
class Isotope
  @param  Chel_ChemElement self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Chel_ChemElement_FindAllIsotopes(Chel_ChemElement self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllIsotopes");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'findAllIsotopes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'findAllIsotopes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemElement.ChemElement.isotopes

child link to 
class Isotope
  @param  Chel_ChemElement self
  @returns  all value that satisfy the conditions 
**/
ApiSet Chel_ChemElement_FindAllIsotopes_keyval0(Chel_ChemElement self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chel_ChemElement_FindAllIsotopes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemElement.ChemElement.isotopes

child link to 
class Isotope
  @param  Chel_ChemElement self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Chel_ChemElement_FindAllIsotopes_keyval1(Chel_ChemElement self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chel_ChemElement_FindAllIsotopes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemElement.ChemElement.isotopes

child link to 
class Isotope
  @param  Chel_ChemElement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Chel_ChemElement_FindAllIsotopes_keyval2(Chel_ChemElement self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chel_ChemElement_FindAllIsotopes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemElement.ChemElement.isotopes

child link to 
class Isotope
  @param  Chel_ChemElement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Chel_ChemElement_FindAllIsotopes_keyval3(Chel_ChemElement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chel_ChemElement_FindAllIsotopes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemElement.ChemElement.isotopes

child link to 
class Isotope
  @param  Chel_ChemElement self
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
ApiSet Chel_ChemElement_FindAllIsotopes_keyval4(Chel_ChemElement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chel_ChemElement_FindAllIsotopes(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_ChemElement self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chel_ChemElement_FindFirstApplicationData(Chel_ChemElement self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'findFirstApplicationData' is not callable");
  
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
  @param  Chel_ChemElement self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chel_ChemElement_FindFirstApplicationData_keyval0(Chel_ChemElement self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chel_ChemElement_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_ChemElement self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chel_ChemElement_FindFirstApplicationData_keyval1(Chel_ChemElement self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chel_ChemElement_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_ChemElement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chel_ChemElement_FindFirstApplicationData_keyval2(Chel_ChemElement self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chel_ChemElement_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_ChemElement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Chel_ChemElement_FindFirstApplicationData_keyval3(Chel_ChemElement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chel_ChemElement_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_ChemElement self
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
Impl_ApplicationData Chel_ChemElement_FindFirstApplicationData_keyval4(Chel_ChemElement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chel_ChemElement_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemElement.ChemElement.isotopes

child link 
to class Isotope
  @param  Chel_ChemElement self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Chel_Isotope Chel_ChemElement_FindFirstIsotope(Chel_ChemElement self, ApiMap conditions)
{
  
  Chel_Isotope obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstIsotope");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'findFirstIsotope'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'findFirstIsotope' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemElement.ChemElement.isotopes

child link 
to class Isotope
  @param  Chel_ChemElement self
  @returns  the first value that satisfies the conditions 
**/
Chel_Isotope Chel_ChemElement_FindFirstIsotope_keyval0(Chel_ChemElement self)
{
  
  Chel_Isotope  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Chel_ChemElement_FindFirstIsotope(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemElement.ChemElement.isotopes

child link 
to class Isotope
  @param  Chel_ChemElement self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Chel_Isotope Chel_ChemElement_FindFirstIsotope_keyval1(Chel_ChemElement self, char * key, ApiObject value)
{
  
  Chel_Isotope  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Chel_ChemElement_FindFirstIsotope(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemElement.ChemElement.isotopes

child link 
to class Isotope
  @param  Chel_ChemElement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Chel_Isotope Chel_ChemElement_FindFirstIsotope_keyval2(Chel_ChemElement self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Chel_Isotope  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Chel_ChemElement_FindFirstIsotope(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemElement.ChemElement.isotopes

child link 
to class Isotope
  @param  Chel_ChemElement self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Chel_Isotope Chel_ChemElement_FindFirstIsotope_keyval3(Chel_ChemElement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Chel_Isotope  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Chel_ChemElement_FindFirstIsotope(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.ChemElement.ChemElement.isotopes

child link 
to class Isotope
  @param  Chel_ChemElement self
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
Chel_Isotope Chel_ChemElement_FindFirstIsotope_keyval4(Chel_ChemElement self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Chel_Isotope  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Chel_ChemElement_FindFirstIsotope(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.ChemElement.ChemElement
  @param  Chel_ChemElement self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Chel_ChemElement_Get(Chel_ChemElement self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chel_ChemElement self
  @returns   the result
**/
Acco_AccessObject Chel_ChemElement_GetAccess(Chel_ChemElement self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'getAccess' is not callable");
  
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
  @param  Chel_ChemElement self
  @returns   the result
**/
Acco_AccessObject Chel_ChemElement_GetActiveAccess(Chel_ChemElement self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'getActiveAccess' is not callable");
  
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
  @param  Chel_ChemElement self
  @returns   the result
**/
ApiList Chel_ChemElement_GetApplicationData(Chel_ChemElement self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemElement.ChemElement.atomNumber

Atom number of 
ChemElement, equal to number of protons.
  @param  Chel_ChemElement self
  @returns   the result
**/
ApiInteger Chel_ChemElement_GetAtomNumber(Chel_ChemElement self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtomNumber");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'getAtomNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'getAtomNumber' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemElement.ChemElement.atomicRadius

Standard 
atomic radius (in Angstrom)
  @param  Chel_ChemElement self
  @returns   the result
**/
ApiFloat Chel_ChemElement_GetAtomicRadius(Chel_ChemElement self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtomicRadius");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'getAtomicRadius'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'getAtomicRadius' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.ChemElement.ChemElement
  @param  Chel_ChemElement self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Chel_ChemElement Chel_ChemElement_GetByKey(Chel_ChemElement self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Chel_ChemElement obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemElement.ChemElement.chemElementStore

parent 
link
  @param  Chel_ChemElement self
  @returns   the result
**/
Chel_ChemElementStore Chel_ChemElement_GetChemElementStore(Chel_ChemElement self)
{
  
  Chel_ChemElementStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemElementStore");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'getChemElementStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'getChemElementStore' is not callable");
  
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
  @param  Chel_ChemElement self
  @returns   the result
**/
ApiString Chel_ChemElement_GetClassName(Chel_ChemElement self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemElement.ChemElement.covalentRadius

Standard 
covalent radius (in Angstrom).
  @param  Chel_ChemElement self
  @returns   the result
**/
ApiFloat Chel_ChemElement_GetCovalentRadius(Chel_ChemElement self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCovalentRadius");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'getCovalentRadius'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'getCovalentRadius' is not callable");
  
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
  @param  Chel_ChemElement self
  @returns   the result
**/
ApiList Chel_ChemElement_GetFieldNames(Chel_ChemElement self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.ChemElement.ChemElement
  @param  Chel_ChemElement self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Chel_ChemElement_GetFullKey(Chel_ChemElement self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'getFullKey' is not callable");
  
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
  @param  Chel_ChemElement self
  @returns   the result
**/
ApiBoolean Chel_ChemElement_GetInConstructor(Chel_ChemElement self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'getInConstructor' is not callable");
  
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
  @param  Chel_ChemElement self
  @returns   the result
**/
ApiBoolean Chel_ChemElement_GetIsDeleted(Chel_ChemElement self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemElement.ChemElement.isotopes

child link to 
class Isotope
  @param  Chel_ChemElement self
  @returns   the result
**/
ApiSet Chel_ChemElement_GetIsotopes(Chel_ChemElement self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsotopes");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'getIsotopes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'getIsotopes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.ChemElement.ChemElement
  @param  Chel_ChemElement self
  @returns  Local object key
**/
ApiObject Chel_ChemElement_GetLocalKey(Chel_ChemElement self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemElement.ChemElement.mass

Standard mass (in 
atomic mass units), equal to average mass of natural isotopic 
composition.
  @param  Chel_ChemElement self
  @returns   the result
**/
ApiFloat Chel_ChemElement_GetMass(Chel_ChemElement self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMass");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'getMass'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'getMass' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemElement.ChemElement.name

name of ChemElement, 
first letter only in upper case. E.g. Carbon, Hydrogen, Uranium.
  @param  Chel_ChemElement self
  @returns   the result
**/
ApiString Chel_ChemElement_GetName(Chel_ChemElement self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'getName' is not callable");
  
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
  @param  Chel_ChemElement self
  @returns   the result
**/
ApiString Chel_ChemElement_GetPackageName(Chel_ChemElement self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'getPackageName' is not callable");
  
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
  @param  Chel_ChemElement self
  @returns   the result
**/
ApiString Chel_ChemElement_GetPackageShortName(Chel_ChemElement self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemElement.ChemElement.parent

link to parent 
object - synonym for chemElementStore
  @param  Chel_ChemElement self
  @returns   the result
**/
Chel_ChemElementStore Chel_ChemElement_GetParent(Chel_ChemElement self)
{
  
  Chel_ChemElementStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'getParent' is not callable");
  
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
  @param  Chel_ChemElement self
  @returns   the result
**/
ApiString Chel_ChemElement_GetQualifiedName(Chel_ChemElement self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'getQualifiedName' is not callable");
  
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
  @param  Chel_ChemElement self
  @returns   the result
**/
Impl_MemopsRoot Chel_ChemElement_GetRoot(Chel_ChemElement self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemElement.ChemElement.symbol

Element symbol for 
element. If one letter upper case, if two letters first upper, second 
lower case. E.g. 'C', 'H', 'U', 'He', 'Cl', etc.
  @param  Chel_ChemElement self
  @returns   the result
**/
ApiString Chel_ChemElement_GetSymbol(Chel_ChemElement self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSymbol");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'getSymbol'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'getSymbol' is not callable");
  
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
  @param  Chel_ChemElement self
  @returns   the result
**/
Impl_TopObject Chel_ChemElement_GetTopObject(Chel_ChemElement self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.ChemElement.ChemElement
  @param  Chel_ChemElementStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chel_ChemElement Chel_ChemElement_Init(Chel_ChemElementStore parent, ApiMap attrlinks)
{
  
  return Chel_ChemElementStore_NewChemElement(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.ChemElement.ChemElement
  @param  Chel_ChemElementStore parent
  @param  char * symbol
  @returns  the new object
**/
Chel_ChemElement Chel_ChemElement_Init_reqd(Chel_ChemElementStore parent, char * symbol)
{
  
  Chel_ChemElement  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__symbol = ApiString_New(symbol);

  PyDict_SetItemString(attrlinks, "symbol", api__symbol);
  
  obj = Chel_ChemElement_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__symbol);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemElement.Isotope
  @param  Chel_ChemElement self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Chel_Isotope Chel_ChemElement_NewIsotope(Chel_ChemElement self, ApiMap attrlinks)
{
  
  Chel_Isotope obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newIsotope");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'newIsotope'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'newIsotope' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemElement.Isotope
  @param  Chel_ChemElement self
  @param  ApiInteger massNumber
  @returns  the new object
**/
Chel_Isotope Chel_ChemElement_NewIsotope_reqd(Chel_ChemElement self, ApiInteger massNumber)
{
  
  Chel_Isotope  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "massNumber", massNumber);
  
  obj = Chel_ChemElement_NewIsotope(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_ChemElement self
  @param  Impl_ApplicationData value
**/
void *Chel_ChemElement_RemoveApplicationData(Chel_ChemElement self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.ChemElement.ChemElement
  @param  Chel_ChemElement self
  @param  ApiString name
  @param  ApiObject value
**/
void *Chel_ChemElement_Set(Chel_ChemElement self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chel_ChemElement self
  @param  Acco_AccessObject value
**/
void *Chel_ChemElement_SetAccess(Chel_ChemElement self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'setAccess' is not callable");
  
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
  @param  Chel_ChemElement self
  @param  ApiList values
**/
void *Chel_ChemElement_SetApplicationData(Chel_ChemElement self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemElement.ChemElement.atomNumber

Atom number of 
ChemElement, equal to number of protons.
  @param  Chel_ChemElement self
  @param  ApiInteger value
**/
void *Chel_ChemElement_SetAtomNumber(Chel_ChemElement self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAtomNumber");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'setAtomNumber'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'setAtomNumber' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemElement.ChemElement.atomicRadius

Standard 
atomic radius (in Angstrom)
  @param  Chel_ChemElement self
  @param  ApiFloat value
**/
void *Chel_ChemElement_SetAtomicRadius(Chel_ChemElement self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAtomicRadius");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'setAtomicRadius'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'setAtomicRadius' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemElement.ChemElement.covalentRadius

Standard 
covalent radius (in Angstrom).
  @param  Chel_ChemElement self
  @param  ApiFloat value
**/
void *Chel_ChemElement_SetCovalentRadius(Chel_ChemElement self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCovalentRadius");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'setCovalentRadius'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'setCovalentRadius' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemElement.ChemElement.mass

Standard mass (in 
atomic mass units), equal to average mass of natural isotopic 
composition.
  @param  Chel_ChemElement self
  @param  ApiFloat value
**/
void *Chel_ChemElement_SetMass(Chel_ChemElement self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMass");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'setMass'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'setMass' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemElement.ChemElement.name

name of ChemElement, 
first letter only in upper case. E.g. Carbon, Hydrogen, Uranium.
  @param  Chel_ChemElement self
  @param  ApiString value
**/
void *Chel_ChemElement_SetName(Chel_ChemElement self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemElement.ChemElement.symbol

Element symbol for 
element. If one letter upper case, if two letters first upper, second 
lower case. E.g. 'C', 'H', 'U', 'He', 'Cl', etc.
  @param  Chel_ChemElement self
  @param  ApiString value
**/
void *Chel_ChemElement_SetSymbol(Chel_ChemElement self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSymbol");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'setSymbol'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'setSymbol' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.ChemElement.ChemElement.isotopes

child link to 
class Isotope
  @param  Chel_ChemElement self
  @returns   the result
**/
ApiList Chel_ChemElement_SortedIsotopes(Chel_ChemElement self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedIsotopes");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: cannot find method 'sortedIsotopes'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemElement.ChemElement: method 'sortedIsotopes' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
