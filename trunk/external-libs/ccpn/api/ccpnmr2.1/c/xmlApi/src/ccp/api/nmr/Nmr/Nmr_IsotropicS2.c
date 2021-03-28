
#include "ccp.h"

/*
  Order parameter (S2), calculated assuming isotropic motion.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2 self
  @param  Impl_ApplicationData value
**/
void *Nmr_IsotropicS2_AddApplicationData(Nmr_IsotropicS2 self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.nmr.Nmr.IsotropicS2
  @param  Nmr_IsotropicS2 self
  @param  ApiBoolean complete
**/
void *Nmr_IsotropicS2_CheckAllValid(Nmr_IsotropicS2 self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.nmr.Nmr.IsotropicS2
  @param  Nmr_IsotropicS2 self
  @param  ApiBoolean complete
**/
void *Nmr_IsotropicS2_CheckValid(Nmr_IsotropicS2 self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'checkValid' is not callable");
  
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
  @param  Nmr_IsotropicS2 self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_IsotropicS2_FindAllApplicationData(Nmr_IsotropicS2 self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'findAllApplicationData' is not callable");
  
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
  @param  Nmr_IsotropicS2 self
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_IsotropicS2_FindAllApplicationData_keyval0(Nmr_IsotropicS2 self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_IsotropicS2_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2 self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_IsotropicS2_FindAllApplicationData_keyval1(Nmr_IsotropicS2 self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_IsotropicS2_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2 self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_IsotropicS2_FindAllApplicationData_keyval2(Nmr_IsotropicS2 self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_IsotropicS2_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2 self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Nmr_IsotropicS2_FindAllApplicationData_keyval3(Nmr_IsotropicS2 self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_IsotropicS2_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2 self
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
ApiList Nmr_IsotropicS2_FindAllApplicationData_keyval4(Nmr_IsotropicS2 self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_IsotropicS2_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_IsotropicS2_FindAllResonances(Nmr_IsotropicS2 self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'findAllResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'findAllResonances' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_IsotropicS2_FindAllResonances_keyval0(Nmr_IsotropicS2 self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_IsotropicS2_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_IsotropicS2_FindAllResonances_keyval1(Nmr_IsotropicS2 self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_IsotropicS2_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_IsotropicS2_FindAllResonances_keyval2(Nmr_IsotropicS2 self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_IsotropicS2_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Nmr_IsotropicS2_FindAllResonances_keyval3(Nmr_IsotropicS2 self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_IsotropicS2_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
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
ApiSet Nmr_IsotropicS2_FindAllResonances_keyval4(Nmr_IsotropicS2 self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_IsotropicS2_FindAllResonances(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2 self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_IsotropicS2_FindFirstApplicationData(Nmr_IsotropicS2 self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'findFirstApplicationData' is not callable");
  
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
  @param  Nmr_IsotropicS2 self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_IsotropicS2_FindFirstApplicationData_keyval0(Nmr_IsotropicS2 self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_IsotropicS2_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2 self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_IsotropicS2_FindFirstApplicationData_keyval1(Nmr_IsotropicS2 self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_IsotropicS2_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2 self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_IsotropicS2_FindFirstApplicationData_keyval2(Nmr_IsotropicS2 self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_IsotropicS2_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2 self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Nmr_IsotropicS2_FindFirstApplicationData_keyval3(Nmr_IsotropicS2 self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_IsotropicS2_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2 self
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
Impl_ApplicationData Nmr_IsotropicS2_FindFirstApplicationData_keyval4(Nmr_IsotropicS2 self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_IsotropicS2_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_IsotropicS2_FindFirstResonance(Nmr_IsotropicS2 self, ApiMap conditions)
{
  
  Nmr_Resonance obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstResonance");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'findFirstResonance'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'findFirstResonance' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_IsotropicS2_FindFirstResonance_keyval0(Nmr_IsotropicS2 self)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Nmr_IsotropicS2_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_IsotropicS2_FindFirstResonance_keyval1(Nmr_IsotropicS2 self, char * key, ApiObject value)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Nmr_IsotropicS2_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_IsotropicS2_FindFirstResonance_keyval2(Nmr_IsotropicS2 self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Nmr_IsotropicS2_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Resonance Nmr_IsotropicS2_FindFirstResonance_keyval3(Nmr_IsotropicS2 self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Nmr_IsotropicS2_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
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
Nmr_Resonance Nmr_IsotropicS2_FindFirstResonance_keyval4(Nmr_IsotropicS2 self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Resonance  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Nmr_IsotropicS2_FindFirstResonance(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.nmr.Nmr.IsotropicS2
  @param  Nmr_IsotropicS2 self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Nmr_IsotropicS2_Get(Nmr_IsotropicS2 self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
Acco_AccessObject Nmr_IsotropicS2_GetAccess(Nmr_IsotropicS2 self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getAccess' is not callable");
  
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
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
Acco_AccessObject Nmr_IsotropicS2_GetActiveAccess(Nmr_IsotropicS2 self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getActiveAccess' is not callable");
  
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
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
ApiList Nmr_IsotropicS2_GetApplicationData(Nmr_IsotropicS2 self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.nmr.Nmr.IsotropicS2
  @param  Nmr_IsotropicS2 self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Nmr_IsotropicS2 Nmr_IsotropicS2_GetByKey(Nmr_IsotropicS2 self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Nmr_IsotropicS2 obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getByKey' is not callable");
  
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
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
ApiString Nmr_IsotropicS2_GetClassName(Nmr_IsotropicS2 self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.IsotropicS2.derivation

parent link
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
Nmr_IsotropicS2Derivation Nmr_IsotropicS2_GetDerivation(Nmr_IsotropicS2 self)
{
  
  Nmr_IsotropicS2Derivation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDerivation");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getDerivation'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getDerivation' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DerivedData.error

Uncertainty (standard deviation) 
of value
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
ApiFloat Nmr_IsotropicS2_GetError(Nmr_IsotropicS2 self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getError");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getError' is not callable");
  
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
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
ApiList Nmr_IsotropicS2_GetFieldNames(Nmr_IsotropicS2 self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DerivedData.figOfMerit

Figure of merit, describing 
the reliability of the value. Between 0.0 (useless) and 1.0 (fully 
reliable, also the default).
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
ApiFloat Nmr_IsotropicS2_GetFigOfMerit(Nmr_IsotropicS2 self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFigOfMerit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getFigOfMerit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getFigOfMerit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.nmr.Nmr.IsotropicS2
  @param  Nmr_IsotropicS2 self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Nmr_IsotropicS2_GetFullKey(Nmr_IsotropicS2 self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getFullKey' is not callable");
  
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
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
ApiBoolean Nmr_IsotropicS2_GetInConstructor(Nmr_IsotropicS2 self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getInConstructor' is not callable");
  
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
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
ApiBoolean Nmr_IsotropicS2_GetIsDeleted(Nmr_IsotropicS2 self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.nmr.Nmr.IsotropicS2
  @param  Nmr_IsotropicS2 self
  @returns  Local object key
**/
ApiObject Nmr_IsotropicS2_GetLocalKey(Nmr_IsotropicS2 self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.IsotropicS2.modelFit

Which model used in fitting
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
ApiString Nmr_IsotropicS2_GetModelFit(Nmr_IsotropicS2 self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getModelFit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getModelFit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getModelFit' is not callable");
  
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
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
ApiString Nmr_IsotropicS2_GetPackageName(Nmr_IsotropicS2 self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getPackageName' is not callable");
  
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
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
ApiString Nmr_IsotropicS2_GetPackageShortName(Nmr_IsotropicS2 self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.IsotropicS2.parent

link to parent object - synonym 
for derivation
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
Nmr_IsotropicS2Derivation Nmr_IsotropicS2_GetParent(Nmr_IsotropicS2 self)
{
  
  Nmr_IsotropicS2Derivation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getParent' is not callable");
  
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
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
ApiString Nmr_IsotropicS2_GetQualifiedName(Nmr_IsotropicS2 self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
ApiSet Nmr_IsotropicS2_GetResonances(Nmr_IsotropicS2 self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getResonances' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.IsotropicS2.rexError

Uncertainty (standard 
deviation) in value of Rex
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
ApiFloat Nmr_IsotropicS2_GetRexError(Nmr_IsotropicS2 self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRexError");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getRexError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getRexError' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.IsotropicS2.rexValue

R value for relaxation from 
other mechanisms
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
ApiFloat Nmr_IsotropicS2_GetRexValue(Nmr_IsotropicS2 self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRexValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getRexValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getRexValue' is not callable");
  
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
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
Impl_MemopsRoot Nmr_IsotropicS2_GetRoot(Nmr_IsotropicS2 self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DerivedData.serial

Serial number of object. Serves 
as object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
ApiInteger Nmr_IsotropicS2_GetSerial(Nmr_IsotropicS2 self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.IsotropicS2.sumSquaredErrors

Sum-Of-Squared-Errors 
from the fitting
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
ApiFloat Nmr_IsotropicS2_GetSumSquaredErrors(Nmr_IsotropicS2 self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSumSquaredErrors");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getSumSquaredErrors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getSumSquaredErrors' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.IsotropicS2.tauEError

Uncertainty (standard 
deviation) in overall correlation time.
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
ApiFloat Nmr_IsotropicS2_GetTauEError(Nmr_IsotropicS2 self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTauEError");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getTauEError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getTauEError' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.IsotropicS2.tauEValue

Overall correlation time for 
the molecule
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
ApiFloat Nmr_IsotropicS2_GetTauEValue(Nmr_IsotropicS2 self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTauEValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getTauEValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getTauEValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.IsotropicS2.tauSError

Uncertainty (standard 
deviation) in internal correlation time.
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
ApiFloat Nmr_IsotropicS2_GetTauSError(Nmr_IsotropicS2 self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTauSError");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getTauSError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getTauSError' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.IsotropicS2.tauSValue

Correlation time for internal 
motion
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
ApiFloat Nmr_IsotropicS2_GetTauSValue(Nmr_IsotropicS2 self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTauSValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getTauSValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getTauSValue' is not callable");
  
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
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
Impl_TopObject Nmr_IsotropicS2_GetTopObject(Nmr_IsotropicS2 self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.nmr.Nmr.DerivedData.value

Value of derived measurement.
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
ApiFloat Nmr_IsotropicS2_GetValue(Nmr_IsotropicS2 self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'getValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'getValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.nmr.Nmr.IsotropicS2
  @param  Nmr_IsotropicS2Derivation parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Nmr_IsotropicS2 Nmr_IsotropicS2_Init(Nmr_IsotropicS2Derivation parent, ApiMap attrlinks)
{
  
  return Nmr_IsotropicS2Derivation_NewIsotropicS2(parent, attrlinks);
}

/**
  Constructor for ccp.nmr.Nmr.IsotropicS2
  @param  Nmr_IsotropicS2Derivation parent
  @param  ApiSet resonances
  @returns  the new object
**/
Nmr_IsotropicS2 Nmr_IsotropicS2_Init_reqd(Nmr_IsotropicS2Derivation parent, ApiSet resonances)
{
  
  Nmr_IsotropicS2  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "resonances", resonances);
  
  obj = Nmr_IsotropicS2_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2 self
  @param  Impl_ApplicationData value
**/
void *Nmr_IsotropicS2_RemoveApplicationData(Nmr_IsotropicS2 self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.nmr.Nmr.IsotropicS2
  @param  Nmr_IsotropicS2 self
  @param  ApiString name
  @param  ApiObject value
**/
void *Nmr_IsotropicS2_Set(Nmr_IsotropicS2 self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_IsotropicS2 self
  @param  Acco_AccessObject value
**/
void *Nmr_IsotropicS2_SetAccess(Nmr_IsotropicS2 self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'setAccess' is not callable");
  
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
  @param  Nmr_IsotropicS2 self
  @param  ApiList values
**/
void *Nmr_IsotropicS2_SetApplicationData(Nmr_IsotropicS2 self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DerivedData.error

Uncertainty (standard deviation) 
of value
  @param  Nmr_IsotropicS2 self
  @param  ApiFloat value
**/
void *Nmr_IsotropicS2_SetError(Nmr_IsotropicS2 self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setError");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'setError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'setError' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DerivedData.figOfMerit

Figure of merit, describing 
the reliability of the value. Between 0.0 (useless) and 1.0 (fully 
reliable, also the default).
  @param  Nmr_IsotropicS2 self
  @param  ApiFloat value
**/
void *Nmr_IsotropicS2_SetFigOfMerit(Nmr_IsotropicS2 self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFigOfMerit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'setFigOfMerit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'setFigOfMerit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.IsotropicS2.modelFit

Which model used in fitting
  @param  Nmr_IsotropicS2 self
  @param  ApiString value
**/
void *Nmr_IsotropicS2_SetModelFit(Nmr_IsotropicS2 self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setModelFit");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'setModelFit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'setModelFit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
  @param  ApiSet values
**/
void *Nmr_IsotropicS2_SetResonances(Nmr_IsotropicS2 self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'setResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'setResonances' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.IsotropicS2.rexError

Uncertainty (standard 
deviation) in value of Rex
  @param  Nmr_IsotropicS2 self
  @param  ApiFloat value
**/
void *Nmr_IsotropicS2_SetRexError(Nmr_IsotropicS2 self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRexError");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'setRexError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'setRexError' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.IsotropicS2.rexValue

R value for relaxation from 
other mechanisms
  @param  Nmr_IsotropicS2 self
  @param  ApiFloat value
**/
void *Nmr_IsotropicS2_SetRexValue(Nmr_IsotropicS2 self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRexValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'setRexValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'setRexValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DerivedData.serial

Serial number of object. Serves 
as object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_IsotropicS2 self
  @param  ApiInteger value
**/
void *Nmr_IsotropicS2_SetSerial(Nmr_IsotropicS2 self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.IsotropicS2.sumSquaredErrors

Sum-Of-Squared-Errors 
from the fitting
  @param  Nmr_IsotropicS2 self
  @param  ApiFloat value
**/
void *Nmr_IsotropicS2_SetSumSquaredErrors(Nmr_IsotropicS2 self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSumSquaredErrors");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'setSumSquaredErrors'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'setSumSquaredErrors' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.IsotropicS2.tauEError

Uncertainty (standard 
deviation) in overall correlation time.
  @param  Nmr_IsotropicS2 self
  @param  ApiFloat value
**/
void *Nmr_IsotropicS2_SetTauEError(Nmr_IsotropicS2 self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTauEError");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'setTauEError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'setTauEError' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.IsotropicS2.tauEValue

Overall correlation time for 
the molecule
  @param  Nmr_IsotropicS2 self
  @param  ApiFloat value
**/
void *Nmr_IsotropicS2_SetTauEValue(Nmr_IsotropicS2 self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTauEValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'setTauEValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'setTauEValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.IsotropicS2.tauSError

Uncertainty (standard 
deviation) in internal correlation time.
  @param  Nmr_IsotropicS2 self
  @param  ApiFloat value
**/
void *Nmr_IsotropicS2_SetTauSError(Nmr_IsotropicS2 self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTauSError");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'setTauSError'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'setTauSError' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.IsotropicS2.tauSValue

Correlation time for internal 
motion
  @param  Nmr_IsotropicS2 self
  @param  ApiFloat value
**/
void *Nmr_IsotropicS2_SetTauSValue(Nmr_IsotropicS2 self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTauSValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'setTauSValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'setTauSValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.nmr.Nmr.DerivedData.value

Value of derived measurement.
  @param  Nmr_IsotropicS2 self
  @param  ApiFloat value
**/
void *Nmr_IsotropicS2_SetValue(Nmr_IsotropicS2 self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setValue");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'setValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'setValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.nmr.Nmr.IsotropicS2.resonances

Resonances to which 
isotropic order parameter values belongs.
  @param  Nmr_IsotropicS2 self
  @returns   the result
**/
ApiList Nmr_IsotropicS2_SortedResonances(Nmr_IsotropicS2 self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedResonances");
  
  if (!method)
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: cannot find method 'sortedResonances'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.nmr.Nmr.IsotropicS2: method 'sortedResonances' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
