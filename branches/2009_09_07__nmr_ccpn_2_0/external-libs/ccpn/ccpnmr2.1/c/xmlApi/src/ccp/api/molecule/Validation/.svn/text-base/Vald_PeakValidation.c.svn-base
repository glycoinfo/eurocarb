
#include "ccp.h"

/*
  
*/

/* package ccp.api.molecule.Validation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_PeakValidation self
  @param  Impl_ApplicationData value
**/
void *Vald_PeakValidation_AddApplicationData(Vald_PeakValidation self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Add for ccp.molecule.Validation.PeakValidation.peaks

Peaks being 
validated
  @param  Vald_PeakValidation self
  @param  Nmr_Peak value
**/
void *Vald_PeakValidation_AddPeak(Vald_PeakValidation self, Nmr_Peak value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addPeak");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'addPeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'addPeak' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.Validation.PeakValidation
  @param  Vald_PeakValidation self
  @param  ApiBoolean complete
**/
void *Vald_PeakValidation_CheckAllValid(Vald_PeakValidation self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.Validation.PeakValidation
  @param  Vald_PeakValidation self
  @param  ApiBoolean complete
**/
void *Vald_PeakValidation_CheckValid(Vald_PeakValidation self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'checkValid' is not callable");
  
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
  @param  Vald_PeakValidation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_PeakValidation_FindAllApplicationData(Vald_PeakValidation self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'findAllApplicationData' is not callable");
  
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
  @param  Vald_PeakValidation self
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_PeakValidation_FindAllApplicationData_keyval0(Vald_PeakValidation self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Vald_PeakValidation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_PeakValidation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_PeakValidation_FindAllApplicationData_keyval1(Vald_PeakValidation self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Vald_PeakValidation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_PeakValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_PeakValidation_FindAllApplicationData_keyval2(Vald_PeakValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Vald_PeakValidation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_PeakValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Vald_PeakValidation_FindAllApplicationData_keyval3(Vald_PeakValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Vald_PeakValidation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_PeakValidation self
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
ApiList Vald_PeakValidation_FindAllApplicationData_keyval4(Vald_PeakValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Vald_PeakValidation_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Validation.PeakValidation.peaks

Peaks being 
validated
  @param  Vald_PeakValidation self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Vald_PeakValidation_FindAllPeaks(Vald_PeakValidation self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllPeaks");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'findAllPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'findAllPeaks' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Validation.PeakValidation.peaks

Peaks being 
validated
  @param  Vald_PeakValidation self
  @returns  all value that satisfy the conditions 
**/
ApiSet Vald_PeakValidation_FindAllPeaks_keyval0(Vald_PeakValidation self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Vald_PeakValidation_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Validation.PeakValidation.peaks

Peaks being 
validated
  @param  Vald_PeakValidation self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Vald_PeakValidation_FindAllPeaks_keyval1(Vald_PeakValidation self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Vald_PeakValidation_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Validation.PeakValidation.peaks

Peaks being 
validated
  @param  Vald_PeakValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Vald_PeakValidation_FindAllPeaks_keyval2(Vald_PeakValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Vald_PeakValidation_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Validation.PeakValidation.peaks

Peaks being 
validated
  @param  Vald_PeakValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Vald_PeakValidation_FindAllPeaks_keyval3(Vald_PeakValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Vald_PeakValidation_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for ccp.molecule.Validation.PeakValidation.peaks

Peaks being 
validated
  @param  Vald_PeakValidation self
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
ApiSet Vald_PeakValidation_FindAllPeaks_keyval4(Vald_PeakValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Vald_PeakValidation_FindAllPeaks(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_PeakValidation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_PeakValidation_FindFirstApplicationData(Vald_PeakValidation self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'findFirstApplicationData' is not callable");
  
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
  @param  Vald_PeakValidation self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_PeakValidation_FindFirstApplicationData_keyval0(Vald_PeakValidation self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Vald_PeakValidation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_PeakValidation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_PeakValidation_FindFirstApplicationData_keyval1(Vald_PeakValidation self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Vald_PeakValidation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_PeakValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_PeakValidation_FindFirstApplicationData_keyval2(Vald_PeakValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Vald_PeakValidation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_PeakValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Vald_PeakValidation_FindFirstApplicationData_keyval3(Vald_PeakValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Vald_PeakValidation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_PeakValidation self
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
Impl_ApplicationData Vald_PeakValidation_FindFirstApplicationData_keyval4(Vald_PeakValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Vald_PeakValidation_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Validation.PeakValidation.peaks

Peaks being 
validated
  @param  Vald_PeakValidation self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Vald_PeakValidation_FindFirstPeak(Vald_PeakValidation self, ApiMap conditions)
{
  
  Nmr_Peak obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstPeak");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'findFirstPeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'findFirstPeak' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Validation.PeakValidation.peaks

Peaks being 
validated
  @param  Vald_PeakValidation self
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Vald_PeakValidation_FindFirstPeak_keyval0(Vald_PeakValidation self)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Vald_PeakValidation_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Validation.PeakValidation.peaks

Peaks being 
validated
  @param  Vald_PeakValidation self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Vald_PeakValidation_FindFirstPeak_keyval1(Vald_PeakValidation self, char * key, ApiObject value)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Vald_PeakValidation_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Validation.PeakValidation.peaks

Peaks being 
validated
  @param  Vald_PeakValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Vald_PeakValidation_FindFirstPeak_keyval2(Vald_PeakValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Vald_PeakValidation_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Validation.PeakValidation.peaks

Peaks being 
validated
  @param  Vald_PeakValidation self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Nmr_Peak Vald_PeakValidation_FindFirstPeak_keyval3(Vald_PeakValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Vald_PeakValidation_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for ccp.molecule.Validation.PeakValidation.peaks

Peaks being 
validated
  @param  Vald_PeakValidation self
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
Nmr_Peak Vald_PeakValidation_FindFirstPeak_keyval4(Vald_PeakValidation self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Nmr_Peak  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Vald_PeakValidation_FindFirstPeak(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.Validation.PeakValidation
  @param  Vald_PeakValidation self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Vald_PeakValidation_Get(Vald_PeakValidation self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Vald_PeakValidation self
  @returns   the result
**/
Acco_AccessObject Vald_PeakValidation_GetAccess(Vald_PeakValidation self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'getAccess' is not callable");
  
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
  @param  Vald_PeakValidation self
  @returns   the result
**/
Acco_AccessObject Vald_PeakValidation_GetActiveAccess(Vald_PeakValidation self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'getActiveAccess' is not callable");
  
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
  @param  Vald_PeakValidation self
  @returns   the result
**/
ApiList Vald_PeakValidation_GetApplicationData(Vald_PeakValidation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypeValue.booleanValue

Boolean type 
value
  @param  Vald_PeakValidation self
  @returns   the result
**/
ApiBoolean Vald_PeakValidation_GetBooleanValue(Vald_PeakValidation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBooleanValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'getBooleanValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'getBooleanValue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.Validation.PeakValidation
  @param  Vald_PeakValidation self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Vald_PeakValidation Vald_PeakValidation_GetByKey(Vald_PeakValidation self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Vald_PeakValidation obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'getByKey' is not callable");
  
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
  @param  Vald_PeakValidation self
  @returns   the result
**/
ApiString Vald_PeakValidation_GetClassName(Vald_PeakValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Validation.ValidationResult.context

The context 
where tthe keyword and value is defined. Typically the name of a program 
that both defines the parameter and calculates its value.E.g. 
'PROCHECK', 'SHIFTX', ...Used to derive the keywordDefinition
  @param  Vald_PeakValidation self
  @returns   the result
**/
ApiString Vald_PeakValidation_GetContext(Vald_PeakValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getContext");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'getContext'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'getContext' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Validation.ValidationResult.details

Free text, for 
notes, explanatory comments, etc.
  @param  Vald_PeakValidation self
  @returns   the result
**/
ApiString Vald_PeakValidation_GetDetails(Vald_PeakValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'getDetails' is not callable");
  
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
  @param  Vald_PeakValidation self
  @returns   the result
**/
ApiList Vald_PeakValidation_GetFieldNames(Vald_PeakValidation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Validation.ValidationResult.figOfMerit

Figure of 
merit for validated result - 1.0 is perfect, 0.0 is totally wrong.
  @param  Vald_PeakValidation self
  @returns   the result
**/
ApiFloat Vald_PeakValidation_GetFigOfMerit(Vald_PeakValidation self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFigOfMerit");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'getFigOfMerit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'getFigOfMerit' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Vald_PeakValidation self
  @returns   the result
**/
ApiFloat Vald_PeakValidation_GetFloatValue(Vald_PeakValidation self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFloatValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'getFloatValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'getFloatValue' is not callable");
  
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
  @param  Vald_PeakValidation self
  @returns   the result
**/
ApiBoolean Vald_PeakValidation_GetInConstructor(Vald_PeakValidation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'getInConstructor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Vald_PeakValidation self
  @returns   the result
**/
ApiInteger Vald_PeakValidation_GetIntValue(Vald_PeakValidation self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIntValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'getIntValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'getIntValue' is not callable");
  
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
  @param  Vald_PeakValidation self
  @returns   the result
**/
ApiBoolean Vald_PeakValidation_GetIsDeleted(Vald_PeakValidation self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Validation.ValidationResult.keyword

keyword that 
defines the validation result
  @param  Vald_PeakValidation self
  @returns   the result
**/
ApiString Vald_PeakValidation_GetKeyword(Vald_PeakValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getKeyword");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'getKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'getKeyword' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Validation.ValidationResult.keywordDefinition
  @param  Vald_PeakValidation self
  @returns   the result
**/
Kwdf_KeywordDefinition Vald_PeakValidation_GetKeywordDefinition(Vald_PeakValidation self)
{
  
  Kwdf_KeywordDefinition obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getKeywordDefinition");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'getKeywordDefinition'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'getKeywordDefinition' is not callable");
  
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
  @param  Vald_PeakValidation self
  @returns   the result
**/
ApiString Vald_PeakValidation_GetPackageName(Vald_PeakValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'getPackageName' is not callable");
  
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
  @param  Vald_PeakValidation self
  @returns   the result
**/
ApiString Vald_PeakValidation_GetPackageShortName(Vald_PeakValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Validation.ValidationResult.parent

link to parent 
object - synonym for validationStore
  @param  Vald_PeakValidation self
  @returns   the result
**/
Vald_ValidationStore Vald_PeakValidation_GetParent(Vald_PeakValidation self)
{
  
  Vald_ValidationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'getParent' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Validation.PeakValidation.peaks

Peaks being 
validated
  @param  Vald_PeakValidation self
  @returns   the result
**/
ApiSet Vald_PeakValidation_GetPeaks(Vald_PeakValidation self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPeaks");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'getPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'getPeaks' is not callable");
  
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
  @param  Vald_PeakValidation self
  @returns   the result
**/
ApiString Vald_PeakValidation_GetQualifiedName(Vald_PeakValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'getQualifiedName' is not callable");
  
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
  @param  Vald_PeakValidation self
  @returns   the result
**/
Impl_MemopsRoot Vald_PeakValidation_GetRoot(Vald_PeakValidation self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Validation.ValidationResult.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Vald_PeakValidation self
  @returns   the result
**/
ApiInteger Vald_PeakValidation_GetSerial(Vald_PeakValidation self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'getSerial' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Vald_PeakValidation self
  @returns   the result
**/
ApiString Vald_PeakValidation_GetTextValue(Vald_PeakValidation self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTextValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'getTextValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'getTextValue' is not callable");
  
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
  @param  Vald_PeakValidation self
  @returns   the result
**/
Impl_TopObject Vald_PeakValidation_GetTopObject(Vald_PeakValidation self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Validation.ValidationResult.validationStore

parent 
link
  @param  Vald_PeakValidation self
  @returns   the result
**/
Vald_ValidationStore Vald_PeakValidation_GetValidationStore(Vald_PeakValidation self)
{
  
  Vald_ValidationStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getValidationStore");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'getValidationStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'getValidationStore' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.Validation.PeakValidation
  @param  Vald_ValidationStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Vald_PeakValidation Vald_PeakValidation_Init(Vald_ValidationStore parent, ApiMap attrlinks)
{
  
  return Vald_ValidationStore_NewPeakValidation(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.Validation.PeakValidation
  @param  Vald_ValidationStore parent
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
Vald_PeakValidation Vald_PeakValidation_Init_reqd(Vald_ValidationStore parent, char * context, char * keyword)
{
  
  Vald_PeakValidation  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__context = ApiString_New(context);
  ApiString api__keyword = ApiString_New(keyword);

  PyDict_SetItemString(attrlinks, "context", api__context);
  PyDict_SetItemString(attrlinks, "keyword", api__keyword);
  
  obj = Vald_PeakValidation_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__context);
  Py_DECREF(api__keyword);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_PeakValidation self
  @param  Impl_ApplicationData value
**/
void *Vald_PeakValidation_RemoveApplicationData(Vald_PeakValidation self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Remove for ccp.molecule.Validation.PeakValidation.peaks

Peaks being 
validated
  @param  Vald_PeakValidation self
  @param  Nmr_Peak value
**/
void *Vald_PeakValidation_RemovePeak(Vald_PeakValidation self, Nmr_Peak value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removePeak");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'removePeak'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'removePeak' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.Validation.PeakValidation
  @param  Vald_PeakValidation self
  @param  ApiString name
  @param  ApiObject value
**/
void *Vald_PeakValidation_Set(Vald_PeakValidation self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Vald_PeakValidation self
  @param  Acco_AccessObject value
**/
void *Vald_PeakValidation_SetAccess(Vald_PeakValidation self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'setAccess' is not callable");
  
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
  @param  Vald_PeakValidation self
  @param  ApiList values
**/
void *Vald_PeakValidation_SetApplicationData(Vald_PeakValidation self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypeValue.booleanValue

Boolean type 
value
  @param  Vald_PeakValidation self
  @param  ApiBoolean value
**/
void *Vald_PeakValidation_SetBooleanValue(Vald_PeakValidation self, ApiBoolean value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBooleanValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'setBooleanValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'setBooleanValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Validation.ValidationResult.context

The context 
where tthe keyword and value is defined. Typically the name of a program 
that both defines the parameter and calculates its value.E.g. 
'PROCHECK', 'SHIFTX', ...Used to derive the keywordDefinition
  @param  Vald_PeakValidation self
  @param  ApiString value
**/
void *Vald_PeakValidation_SetContext(Vald_PeakValidation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setContext");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'setContext'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'setContext' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Validation.ValidationResult.details

Free text, for 
notes, explanatory comments, etc.
  @param  Vald_PeakValidation self
  @param  ApiString value
**/
void *Vald_PeakValidation_SetDetails(Vald_PeakValidation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Validation.ValidationResult.figOfMerit

Figure of 
merit for validated result - 1.0 is perfect, 0.0 is totally wrong.
  @param  Vald_PeakValidation self
  @param  ApiFloat value
**/
void *Vald_PeakValidation_SetFigOfMerit(Vald_PeakValidation self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFigOfMerit");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'setFigOfMerit'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'setFigOfMerit' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypeValue.floatValue

Float type value
  @param  Vald_PeakValidation self
  @param  ApiFloat value
**/
void *Vald_PeakValidation_SetFloatValue(Vald_PeakValidation self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFloatValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'setFloatValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'setFloatValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypeValue.intValue

Integer type value
  @param  Vald_PeakValidation self
  @param  ApiInteger value
**/
void *Vald_PeakValidation_SetIntValue(Vald_PeakValidation self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setIntValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'setIntValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'setIntValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Validation.ValidationResult.keyword

keyword that 
defines the validation result
  @param  Vald_PeakValidation self
  @param  ApiString value
**/
void *Vald_PeakValidation_SetKeyword(Vald_PeakValidation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setKeyword");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'setKeyword'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'setKeyword' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Validation.PeakValidation.peaks

Peaks being 
validated
  @param  Vald_PeakValidation self
  @param  ApiSet values
**/
void *Vald_PeakValidation_SetPeaks(Vald_PeakValidation self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setPeaks");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'setPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'setPeaks' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Validation.ValidationResult.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Vald_PeakValidation self
  @param  ApiInteger value
**/
void *Vald_PeakValidation_SetSerial(Vald_PeakValidation self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.general.Template.MultiTypeValue.textValue

Text type value
  @param  Vald_PeakValidation self
  @param  ApiString value
**/
void *Vald_PeakValidation_SetTextValue(Vald_PeakValidation self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTextValue");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'setTextValue'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'setTextValue' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for ccp.molecule.Validation.PeakValidation.peaks

Peaks being 
validated
  @param  Vald_PeakValidation self
  @returns   the result
**/
ApiList Vald_PeakValidation_SortedPeaks(Vald_PeakValidation self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedPeaks");
  
  if (!method)
    return raiseApiException("ccp.molecule.Validation.PeakValidation: cannot find method 'sortedPeaks'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Validation.PeakValidation: method 'sortedPeaks' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
