
#include "ccp.h"

/*
  Labeling patterns for ChemComps according to standard labeling schemes.
*/

/* package ccp.api.molecule.ChemCompLabel */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cclb_ChemCompLabel self
  @param  Impl_ApplicationData value
**/
void *Cclb_ChemCompLabel_AddApplicationData(Cclb_ChemCompLabel self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.ChemCompLabel.ChemCompLabel
  @param  Cclb_ChemCompLabel self
  @param  ApiBoolean complete
**/
void *Cclb_ChemCompLabel_CheckAllValid(Cclb_ChemCompLabel self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.ChemCompLabel.ChemCompLabel
  @param  Cclb_ChemCompLabel self
  @param  ApiBoolean complete
**/
void *Cclb_ChemCompLabel_CheckValid(Cclb_ChemCompLabel self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'checkValid' is not callable");
  
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
  @param  Cclb_ChemCompLabel self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Cclb_ChemCompLabel_FindAllApplicationData(Cclb_ChemCompLabel self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'findAllApplicationData' is not callable");
  
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
  @param  Cclb_ChemCompLabel self
  @returns  all value that satisfy the conditions 
**/
ApiList Cclb_ChemCompLabel_FindAllApplicationData_keyval0(Cclb_ChemCompLabel self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cclb_ChemCompLabel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cclb_ChemCompLabel self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Cclb_ChemCompLabel_FindAllApplicationData_keyval1(Cclb_ChemCompLabel self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cclb_ChemCompLabel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cclb_ChemCompLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Cclb_ChemCompLabel_FindAllApplicationData_keyval2(Cclb_ChemCompLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cclb_ChemCompLabel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cclb_ChemCompLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Cclb_ChemCompLabel_FindAllApplicationData_keyval3(Cclb_ChemCompLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cclb_ChemCompLabel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cclb_ChemCompLabel self
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
ApiList Cclb_ChemCompLabel_FindAllApplicationData_keyval4(Cclb_ChemCompLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cclb_ChemCompLabel_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemCompLabel.ChemCompLabel.isotopomers

child 
link to class Isotopomer
  @param  Cclb_ChemCompLabel self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Cclb_ChemCompLabel_FindAllIsotopomers(Cclb_ChemCompLabel self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllIsotopomers");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'findAllIsotopomers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'findAllIsotopomers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemCompLabel.ChemCompLabel.isotopomers

child 
link to class Isotopomer
  @param  Cclb_ChemCompLabel self
  @returns  all value that satisfy the conditions 
**/
ApiSet Cclb_ChemCompLabel_FindAllIsotopomers_keyval0(Cclb_ChemCompLabel self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cclb_ChemCompLabel_FindAllIsotopomers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemCompLabel.ChemCompLabel.isotopomers

child 
link to class Isotopomer
  @param  Cclb_ChemCompLabel self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Cclb_ChemCompLabel_FindAllIsotopomers_keyval1(Cclb_ChemCompLabel self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cclb_ChemCompLabel_FindAllIsotopomers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemCompLabel.ChemCompLabel.isotopomers

child 
link to class Isotopomer
  @param  Cclb_ChemCompLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Cclb_ChemCompLabel_FindAllIsotopomers_keyval2(Cclb_ChemCompLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cclb_ChemCompLabel_FindAllIsotopomers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemCompLabel.ChemCompLabel.isotopomers

child 
link to class Isotopomer
  @param  Cclb_ChemCompLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Cclb_ChemCompLabel_FindAllIsotopomers_keyval3(Cclb_ChemCompLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cclb_ChemCompLabel_FindAllIsotopomers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.ChemCompLabel.ChemCompLabel.isotopomers

child 
link to class Isotopomer
  @param  Cclb_ChemCompLabel self
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
ApiSet Cclb_ChemCompLabel_FindAllIsotopomers_keyval4(Cclb_ChemCompLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cclb_ChemCompLabel_FindAllIsotopomers(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cclb_ChemCompLabel self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cclb_ChemCompLabel_FindFirstApplicationData(Cclb_ChemCompLabel self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'findFirstApplicationData' is not callable");
  
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
  @param  Cclb_ChemCompLabel self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cclb_ChemCompLabel_FindFirstApplicationData_keyval0(Cclb_ChemCompLabel self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cclb_ChemCompLabel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cclb_ChemCompLabel self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cclb_ChemCompLabel_FindFirstApplicationData_keyval1(Cclb_ChemCompLabel self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cclb_ChemCompLabel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cclb_ChemCompLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cclb_ChemCompLabel_FindFirstApplicationData_keyval2(Cclb_ChemCompLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cclb_ChemCompLabel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cclb_ChemCompLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Cclb_ChemCompLabel_FindFirstApplicationData_keyval3(Cclb_ChemCompLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cclb_ChemCompLabel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cclb_ChemCompLabel self
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
Impl_ApplicationData Cclb_ChemCompLabel_FindFirstApplicationData_keyval4(Cclb_ChemCompLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cclb_ChemCompLabel_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompLabel.ChemCompLabel.isotopomers

child link to 
class Isotopomer
  @param  Cclb_ChemCompLabel self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Cclb_Isotopomer Cclb_ChemCompLabel_FindFirstIsotopomer(Cclb_ChemCompLabel self, ApiMap conditions)
{
  
  Cclb_Isotopomer obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstIsotopomer");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'findFirstIsotopomer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'findFirstIsotopomer' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompLabel.ChemCompLabel.isotopomers

child link to 
class Isotopomer
  @param  Cclb_ChemCompLabel self
  @returns  the first value that satisfies the conditions 
**/
Cclb_Isotopomer Cclb_ChemCompLabel_FindFirstIsotopomer_keyval0(Cclb_ChemCompLabel self)
{
  
  Cclb_Isotopomer  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Cclb_ChemCompLabel_FindFirstIsotopomer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompLabel.ChemCompLabel.isotopomers

child link to 
class Isotopomer
  @param  Cclb_ChemCompLabel self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Cclb_Isotopomer Cclb_ChemCompLabel_FindFirstIsotopomer_keyval1(Cclb_ChemCompLabel self, char * key, ApiObject value)
{
  
  Cclb_Isotopomer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Cclb_ChemCompLabel_FindFirstIsotopomer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompLabel.ChemCompLabel.isotopomers

child link to 
class Isotopomer
  @param  Cclb_ChemCompLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Cclb_Isotopomer Cclb_ChemCompLabel_FindFirstIsotopomer_keyval2(Cclb_ChemCompLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Cclb_Isotopomer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Cclb_ChemCompLabel_FindFirstIsotopomer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompLabel.ChemCompLabel.isotopomers

child link to 
class Isotopomer
  @param  Cclb_ChemCompLabel self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Cclb_Isotopomer Cclb_ChemCompLabel_FindFirstIsotopomer_keyval3(Cclb_ChemCompLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Cclb_Isotopomer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Cclb_ChemCompLabel_FindFirstIsotopomer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
ccp.molecule.ChemCompLabel.ChemCompLabel.isotopomers

child link to 
class Isotopomer
  @param  Cclb_ChemCompLabel self
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
Cclb_Isotopomer Cclb_ChemCompLabel_FindFirstIsotopomer_keyval4(Cclb_ChemCompLabel self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Cclb_Isotopomer  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Cclb_ChemCompLabel_FindFirstIsotopomer(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.ChemCompLabel.ChemCompLabel
  @param  Cclb_ChemCompLabel self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Cclb_ChemCompLabel_Get(Cclb_ChemCompLabel self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cclb_ChemCompLabel self
  @returns   the result
**/
Acco_AccessObject Cclb_ChemCompLabel_GetAccess(Cclb_ChemCompLabel self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'getAccess' is not callable");
  
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
  @param  Cclb_ChemCompLabel self
  @returns   the result
**/
ApiList Cclb_ChemCompLabel_GetApplicationData(Cclb_ChemCompLabel self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.ChemCompLabel.ChemCompLabel
  @param  Cclb_ChemCompLabel self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Cclb_ChemCompLabel Cclb_ChemCompLabel_GetByKey(Cclb_ChemCompLabel self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Cclb_ChemCompLabel obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompLabel.ChemCompLabel.ccpCode

ccpCode of 
ChemComp the labeling pattern applies to.
  @param  Cclb_ChemCompLabel self
  @returns   the result
**/
ApiString Cclb_ChemCompLabel_GetCcpCode(Cclb_ChemCompLabel self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getCcpCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'getCcpCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'getCcpCode' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  getter for derived link chemComp
  @param  Cclb_ChemCompLabel self
  @returns   the result
**/
Chem_ChemComp Cclb_ChemCompLabel_GetChemComp(Cclb_ChemCompLabel self)
{
  
  Chem_ChemComp obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChemComp");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'getChemComp'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'getChemComp' is not callable");
  
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
  @param  Cclb_ChemCompLabel self
  @returns   the result
**/
ApiString Cclb_ChemCompLabel_GetClassName(Cclb_ChemCompLabel self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'getClassName' is not callable");
  
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
  @param  Cclb_ChemCompLabel self
  @returns   the result
**/
ApiList Cclb_ChemCompLabel_GetFieldNames(Cclb_ChemCompLabel self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.ChemCompLabel.ChemCompLabel
  @param  Cclb_ChemCompLabel self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Cclb_ChemCompLabel_GetFullKey(Cclb_ChemCompLabel self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'getFullKey' is not callable");
  
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
  @param  Cclb_ChemCompLabel self
  @returns   the result
**/
ApiBoolean Cclb_ChemCompLabel_GetInConstructor(Cclb_ChemCompLabel self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'getInConstructor' is not callable");
  
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
  @param  Cclb_ChemCompLabel self
  @returns   the result
**/
ApiBoolean Cclb_ChemCompLabel_GetIsDeleted(Cclb_ChemCompLabel self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompLabel.ChemCompLabel.isotopomers

child link 
to class Isotopomer
  @param  Cclb_ChemCompLabel self
  @returns   the result
**/
ApiSet Cclb_ChemCompLabel_GetIsotopomers(Cclb_ChemCompLabel self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsotopomers");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'getIsotopomers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'getIsotopomers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompLabel.ChemCompLabel.labelingScheme

paretn 
link
  @param  Cclb_ChemCompLabel self
  @returns   the result
**/
Cclb_LabelingScheme Cclb_ChemCompLabel_GetLabelingScheme(Cclb_ChemCompLabel self)
{
  
  Cclb_LabelingScheme obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLabelingScheme");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'getLabelingScheme'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'getLabelingScheme' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.ChemCompLabel.ChemCompLabel
  @param  Cclb_ChemCompLabel self
  @returns  Local object key
**/
ApiObject Cclb_ChemCompLabel_GetLocalKey(Cclb_ChemCompLabel self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompLabel.ChemCompLabel.molType

molType of 
ChemComp the labeling pattern applies to.
  @param  Cclb_ChemCompLabel self
  @returns   the result
**/
ApiString Cclb_ChemCompLabel_GetMolType(Cclb_ChemCompLabel self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'getMolType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'getMolType' is not callable");
  
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
  @param  Cclb_ChemCompLabel self
  @returns   the result
**/
ApiString Cclb_ChemCompLabel_GetPackageName(Cclb_ChemCompLabel self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'getPackageName' is not callable");
  
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
  @param  Cclb_ChemCompLabel self
  @returns   the result
**/
ApiString Cclb_ChemCompLabel_GetPackageShortName(Cclb_ChemCompLabel self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.ChemCompLabel.ChemCompLabel.parent

link to parent 
object - synonym for labelingScheme
  @param  Cclb_ChemCompLabel self
  @returns   the result
**/
Cclb_LabelingScheme Cclb_ChemCompLabel_GetParent(Cclb_ChemCompLabel self)
{
  
  Cclb_LabelingScheme obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'getParent' is not callable");
  
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
  @param  Cclb_ChemCompLabel self
  @returns   the result
**/
ApiString Cclb_ChemCompLabel_GetQualifiedName(Cclb_ChemCompLabel self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'getQualifiedName' is not callable");
  
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
  @param  Cclb_ChemCompLabel self
  @returns   the result
**/
Impl_MemopsRoot Cclb_ChemCompLabel_GetRoot(Cclb_ChemCompLabel self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'getRoot' is not callable");
  
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
  @param  Cclb_ChemCompLabel self
  @returns   the result
**/
Impl_TopObject Cclb_ChemCompLabel_GetTopObject(Cclb_ChemCompLabel self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.ChemCompLabel.ChemCompLabel
  @param  Cclb_LabelingScheme parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Cclb_ChemCompLabel Cclb_ChemCompLabel_Init(Cclb_LabelingScheme parent, ApiMap attrlinks)
{
  
  return Cclb_LabelingScheme_NewChemCompLabel(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.ChemCompLabel.ChemCompLabel
  @param  Cclb_LabelingScheme parent
  @param  char * ccpCode
  @param  char * molType
  @returns  the new object
**/
Cclb_ChemCompLabel Cclb_ChemCompLabel_Init_reqd(Cclb_LabelingScheme parent, char * ccpCode, char * molType)
{
  
  Cclb_ChemCompLabel  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__ccpCode = ApiString_New(ccpCode);
  ApiString api__molType = ApiString_New(molType);

  PyDict_SetItemString(attrlinks, "ccpCode", api__ccpCode);
  PyDict_SetItemString(attrlinks, "molType", api__molType);
  
  obj = Cclb_ChemCompLabel_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__ccpCode);
  Py_DECREF(api__molType);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemCompLabel.Isotopomer
  @param  Cclb_ChemCompLabel self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Cclb_Isotopomer Cclb_ChemCompLabel_NewIsotopomer(Cclb_ChemCompLabel self, ApiMap attrlinks)
{
  
  Cclb_Isotopomer obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newIsotopomer");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'newIsotopomer'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'newIsotopomer' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create ccp.molecule.ChemCompLabel.Isotopomer
  @param  Cclb_ChemCompLabel self
  @returns  the new object
**/
Cclb_Isotopomer Cclb_ChemCompLabel_NewIsotopomer_reqd(Cclb_ChemCompLabel self)
{
  
  Cclb_Isotopomer  obj;
  PyObject *attrlinks = PyDict_New();

  obj = Cclb_ChemCompLabel_NewIsotopomer(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Cclb_ChemCompLabel self
  @param  Impl_ApplicationData value
**/
void *Cclb_ChemCompLabel_RemoveApplicationData(Cclb_ChemCompLabel self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.ChemCompLabel.ChemCompLabel
  @param  Cclb_ChemCompLabel self
  @param  ApiString name
  @param  ApiObject value
**/
void *Cclb_ChemCompLabel_Set(Cclb_ChemCompLabel self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Cclb_ChemCompLabel self
  @param  Acco_AccessObject value
**/
void *Cclb_ChemCompLabel_SetAccess(Cclb_ChemCompLabel self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'setAccess' is not callable");
  
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
  @param  Cclb_ChemCompLabel self
  @param  ApiList values
**/
void *Cclb_ChemCompLabel_SetApplicationData(Cclb_ChemCompLabel self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemCompLabel.ChemCompLabel.ccpCode

ccpCode of 
ChemComp the labeling pattern applies to.
  @param  Cclb_ChemCompLabel self
  @param  ApiString value
**/
void *Cclb_ChemCompLabel_SetCcpCode(Cclb_ChemCompLabel self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setCcpCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'setCcpCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'setCcpCode' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.ChemCompLabel.ChemCompLabel.molType

molType of 
ChemComp the labeling pattern applies to.
  @param  Cclb_ChemCompLabel self
  @param  ApiString value
**/
void *Cclb_ChemCompLabel_SetMolType(Cclb_ChemCompLabel self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolType");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'setMolType'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'setMolType' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.ChemCompLabel.ChemCompLabel.isotopomers

child 
link to class Isotopomer
  @param  Cclb_ChemCompLabel self
  @returns   the result
**/
ApiList Cclb_ChemCompLabel_SortedIsotopomers(Cclb_ChemCompLabel self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedIsotopomers");
  
  if (!method)
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: cannot find method 'sortedIsotopomers'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.ChemCompLabel.ChemCompLabel: method 'sortedIsotopomers' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
