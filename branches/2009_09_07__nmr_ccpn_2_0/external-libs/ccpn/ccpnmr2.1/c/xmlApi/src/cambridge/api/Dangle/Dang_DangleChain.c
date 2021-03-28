
#include "ccp.h"

/*
  Chain containing residues with predicted angles
*/

/* package cambridge.api.Dangle */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleChain self
  @param  Impl_ApplicationData value
**/
void *Dang_DangleChain_AddApplicationData(Dang_DangleChain self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for cambridge.Dangle.DangleChain
  @param  Dang_DangleChain self
  @param  ApiBoolean complete
**/
void *Dang_DangleChain_CheckAllValid(Dang_DangleChain self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for cambridge.Dangle.DangleChain
  @param  Dang_DangleChain self
  @param  ApiBoolean complete
**/
void *Dang_DangleChain_CheckValid(Dang_DangleChain self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'checkValid' is not callable");
  
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
  @param  Dang_DangleChain self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Dang_DangleChain_FindAllApplicationData(Dang_DangleChain self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'findAllApplicationData' is not callable");
  
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
  @param  Dang_DangleChain self
  @returns  all value that satisfy the conditions 
**/
ApiList Dang_DangleChain_FindAllApplicationData_keyval0(Dang_DangleChain self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dang_DangleChain_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleChain self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Dang_DangleChain_FindAllApplicationData_keyval1(Dang_DangleChain self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dang_DangleChain_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleChain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Dang_DangleChain_FindAllApplicationData_keyval2(Dang_DangleChain self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dang_DangleChain_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleChain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Dang_DangleChain_FindAllApplicationData_keyval3(Dang_DangleChain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dang_DangleChain_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleChain self
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
ApiList Dang_DangleChain_FindAllApplicationData_keyval4(Dang_DangleChain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dang_DangleChain_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for cambridge.Dangle.DangleChain.dangleResidues

child link to 
class DangleResidue
  @param  Dang_DangleChain self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Dang_DangleChain_FindAllDangleResidues(Dang_DangleChain self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllDangleResidues");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'findAllDangleResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'findAllDangleResidues' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for cambridge.Dangle.DangleChain.dangleResidues

child link to 
class DangleResidue
  @param  Dang_DangleChain self
  @returns  all value that satisfy the conditions 
**/
ApiSet Dang_DangleChain_FindAllDangleResidues_keyval0(Dang_DangleChain self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dang_DangleChain_FindAllDangleResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for cambridge.Dangle.DangleChain.dangleResidues

child link to 
class DangleResidue
  @param  Dang_DangleChain self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Dang_DangleChain_FindAllDangleResidues_keyval1(Dang_DangleChain self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dang_DangleChain_FindAllDangleResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for cambridge.Dangle.DangleChain.dangleResidues

child link to 
class DangleResidue
  @param  Dang_DangleChain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Dang_DangleChain_FindAllDangleResidues_keyval2(Dang_DangleChain self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dang_DangleChain_FindAllDangleResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for cambridge.Dangle.DangleChain.dangleResidues

child link to 
class DangleResidue
  @param  Dang_DangleChain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Dang_DangleChain_FindAllDangleResidues_keyval3(Dang_DangleChain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dang_DangleChain_FindAllDangleResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for cambridge.Dangle.DangleChain.dangleResidues

child link to 
class DangleResidue
  @param  Dang_DangleChain self
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
ApiSet Dang_DangleChain_FindAllDangleResidues_keyval4(Dang_DangleChain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dang_DangleChain_FindAllDangleResidues(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleChain self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dang_DangleChain_FindFirstApplicationData(Dang_DangleChain self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'findFirstApplicationData' is not callable");
  
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
  @param  Dang_DangleChain self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dang_DangleChain_FindFirstApplicationData_keyval0(Dang_DangleChain self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dang_DangleChain_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleChain self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dang_DangleChain_FindFirstApplicationData_keyval1(Dang_DangleChain self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dang_DangleChain_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleChain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dang_DangleChain_FindFirstApplicationData_keyval2(Dang_DangleChain self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dang_DangleChain_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleChain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Dang_DangleChain_FindFirstApplicationData_keyval3(Dang_DangleChain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dang_DangleChain_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleChain self
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
Impl_ApplicationData Dang_DangleChain_FindFirstApplicationData_keyval4(Dang_DangleChain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dang_DangleChain_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for cambridge.Dangle.DangleChain.dangleResidues

child link to 
class DangleResidue
  @param  Dang_DangleChain self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleResidue Dang_DangleChain_FindFirstDangleResidue(Dang_DangleChain self, ApiMap conditions)
{
  
  Dang_DangleResidue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstDangleResidue");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'findFirstDangleResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'findFirstDangleResidue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for cambridge.Dangle.DangleChain.dangleResidues

child link to 
class DangleResidue
  @param  Dang_DangleChain self
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleResidue Dang_DangleChain_FindFirstDangleResidue_keyval0(Dang_DangleChain self)
{
  
  Dang_DangleResidue  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Dang_DangleChain_FindFirstDangleResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for cambridge.Dangle.DangleChain.dangleResidues

child link to 
class DangleResidue
  @param  Dang_DangleChain self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleResidue Dang_DangleChain_FindFirstDangleResidue_keyval1(Dang_DangleChain self, char * key, ApiObject value)
{
  
  Dang_DangleResidue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Dang_DangleChain_FindFirstDangleResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for cambridge.Dangle.DangleChain.dangleResidues

child link to 
class DangleResidue
  @param  Dang_DangleChain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleResidue Dang_DangleChain_FindFirstDangleResidue_keyval2(Dang_DangleChain self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Dang_DangleResidue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Dang_DangleChain_FindFirstDangleResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for cambridge.Dangle.DangleChain.dangleResidues

child link to 
class DangleResidue
  @param  Dang_DangleChain self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Dang_DangleResidue Dang_DangleChain_FindFirstDangleResidue_keyval3(Dang_DangleChain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Dang_DangleResidue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Dang_DangleChain_FindFirstDangleResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for cambridge.Dangle.DangleChain.dangleResidues

child link to 
class DangleResidue
  @param  Dang_DangleChain self
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
Dang_DangleResidue Dang_DangleChain_FindFirstDangleResidue_keyval4(Dang_DangleChain self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Dang_DangleResidue  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Dang_DangleChain_FindFirstDangleResidue(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for cambridge.Dangle.DangleChain
  @param  Dang_DangleChain self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Dang_DangleChain_Get(Dang_DangleChain self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Dang_DangleChain self
  @returns   the result
**/
Acco_AccessObject Dang_DangleChain_GetAccess(Dang_DangleChain self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'getAccess' is not callable");
  
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
  @param  Dang_DangleChain self
  @returns   the result
**/
Acco_AccessObject Dang_DangleChain_GetActiveAccess(Dang_DangleChain self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'getActiveAccess' is not callable");
  
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
  @param  Dang_DangleChain self
  @returns   the result
**/
ApiList Dang_DangleChain_GetApplicationData(Dang_DangleChain self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for cambridge.Dangle.DangleChain
  @param  Dang_DangleChain self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Dang_DangleChain Dang_DangleChain_GetByKey(Dang_DangleChain self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Dang_DangleChain obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'getByKey' is not callable");
  
  args = PyTuple_Pack(2, startObj, fullKey);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for cambridge.Dangle.DangleChain.chain

MolSystem chain for which 
prediction is made
  @param  Dang_DangleChain self
  @returns   the result
**/
Mols_Chain Dang_DangleChain_GetChain(Dang_DangleChain self)
{
  
  Mols_Chain obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getChain");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'getChain'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'getChain' is not callable");
  
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
  @param  Dang_DangleChain self
  @returns   the result
**/
ApiString Dang_DangleChain_GetClassName(Dang_DangleChain self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for cambridge.Dangle.DangleChain.dangleResidues

child link to class 
DangleResidue
  @param  Dang_DangleChain self
  @returns   the result
**/
ApiSet Dang_DangleChain_GetDangleResidues(Dang_DangleChain self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDangleResidues");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'getDangleResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'getDangleResidues' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for cambridge.Dangle.DangleChain.dangleStore

parent link
  @param  Dang_DangleChain self
  @returns   the result
**/
Dang_DangleStore Dang_DangleChain_GetDangleStore(Dang_DangleChain self)
{
  
  Dang_DangleStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDangleStore");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'getDangleStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'getDangleStore' is not callable");
  
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
  @param  Dang_DangleChain self
  @returns   the result
**/
ApiList Dang_DangleChain_GetFieldNames(Dang_DangleChain self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for cambridge.Dangle.DangleChain
  @param  Dang_DangleChain self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Dang_DangleChain_GetFullKey(Dang_DangleChain self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'getFullKey' is not callable");
  
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
  @param  Dang_DangleChain self
  @returns   the result
**/
ApiBoolean Dang_DangleChain_GetInConstructor(Dang_DangleChain self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'getInConstructor' is not callable");
  
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
  @param  Dang_DangleChain self
  @returns   the result
**/
ApiBoolean Dang_DangleChain_GetIsDeleted(Dang_DangleChain self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for cambridge.Dangle.DangleChain
  @param  Dang_DangleChain self
  @returns  Local object key
**/
ApiObject Dang_DangleChain_GetLocalKey(Dang_DangleChain self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for cambridge.Dangle.DangleChain.nmrConstraintStore

Nmr 
ConstraintStore where derived angles should be stored as constraints
  @param  Dang_DangleChain self
  @returns   the result
**/
Nmrc_NmrConstraintStore Dang_DangleChain_GetNmrConstraintStore(Dang_DangleChain self)
{
  
  Nmrc_NmrConstraintStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNmrConstraintStore");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'getNmrConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'getNmrConstraintStore' is not callable");
  
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
  @param  Dang_DangleChain self
  @returns   the result
**/
ApiString Dang_DangleChain_GetPackageName(Dang_DangleChain self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'getPackageName' is not callable");
  
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
  @param  Dang_DangleChain self
  @returns   the result
**/
ApiString Dang_DangleChain_GetPackageShortName(Dang_DangleChain self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for cambridge.Dangle.DangleChain.parent

link to parent object - 
synonym for dangleStore
  @param  Dang_DangleChain self
  @returns   the result
**/
Dang_DangleStore Dang_DangleChain_GetParent(Dang_DangleChain self)
{
  
  Dang_DangleStore obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'getParent' is not callable");
  
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
  @param  Dang_DangleChain self
  @returns   the result
**/
ApiString Dang_DangleChain_GetQualifiedName(Dang_DangleChain self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'getQualifiedName' is not callable");
  
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
  @param  Dang_DangleChain self
  @returns   the result
**/
Impl_MemopsRoot Dang_DangleChain_GetRoot(Dang_DangleChain self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for cambridge.Dangle.DangleChain.shiftList

Nmr ShiftList used as 
input in prediction
  @param  Dang_DangleChain self
  @returns   the result
**/
Nmr_ShiftList Dang_DangleChain_GetShiftList(Dang_DangleChain self)
{
  
  Nmr_ShiftList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getShiftList");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'getShiftList'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'getShiftList' is not callable");
  
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
  @param  Dang_DangleChain self
  @returns   the result
**/
Impl_TopObject Dang_DangleChain_GetTopObject(Dang_DangleChain self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for cambridge.Dangle.DangleChain
  @param  Dang_DangleStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Dang_DangleChain Dang_DangleChain_Init(Dang_DangleStore parent, ApiMap attrlinks)
{
  
  return Dang_DangleStore_NewDangleChain(parent, attrlinks);
}

/**
  Constructor for cambridge.Dangle.DangleChain
  @param  Dang_DangleStore parent
  @param  Mols_Chain chain
  @returns  the new object
**/
Dang_DangleChain Dang_DangleChain_Init_reqd(Dang_DangleStore parent, Mols_Chain chain)
{
  
  Dang_DangleChain  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "chain", chain);
  
  obj = Dang_DangleChain_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Factory function to create cambridge.Dangle.DangleResidue
  @param  Dang_DangleChain self
  @param  ApiMap attrlinks
  @returns  the new object
**/
Dang_DangleResidue Dang_DangleChain_NewDangleResidue(Dang_DangleChain self, ApiMap attrlinks)
{
  
  Dang_DangleResidue obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "newDangleResidue");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'newDangleResidue'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'newDangleResidue' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, attrlinks);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Factory function to create cambridge.Dangle.DangleResidue
  @param  Dang_DangleChain self
  @param  ApiList phiPsiLikelihoodMatrix
  @param  Mols_Residue residue
  @returns  the new object
**/
Dang_DangleResidue Dang_DangleChain_NewDangleResidue_reqd(Dang_DangleChain self, ApiList phiPsiLikelihoodMatrix, Mols_Residue residue)
{
  
  Dang_DangleResidue  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "phiPsiLikelihoodMatrix", phiPsiLikelihoodMatrix);
  PyDict_SetItemString(attrlinks, "residue", residue);
  
  obj = Dang_DangleChain_NewDangleResidue(self, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Dang_DangleChain self
  @param  Impl_ApplicationData value
**/
void *Dang_DangleChain_RemoveApplicationData(Dang_DangleChain self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for cambridge.Dangle.DangleChain
  @param  Dang_DangleChain self
  @param  ApiString name
  @param  ApiObject value
**/
void *Dang_DangleChain_Set(Dang_DangleChain self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Dang_DangleChain self
  @param  Acco_AccessObject value
**/
void *Dang_DangleChain_SetAccess(Dang_DangleChain self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'setAccess' is not callable");
  
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
  @param  Dang_DangleChain self
  @param  ApiList values
**/
void *Dang_DangleChain_SetApplicationData(Dang_DangleChain self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for cambridge.Dangle.DangleChain.chain

MolSystem chain for which 
prediction is made
  @param  Dang_DangleChain self
  @param  Mols_Chain value
**/
void *Dang_DangleChain_SetChain(Dang_DangleChain self, Mols_Chain value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setChain");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'setChain'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'setChain' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for cambridge.Dangle.DangleChain.nmrConstraintStore

Nmr 
ConstraintStore where derived angles should be stored as constraints
  @param  Dang_DangleChain self
  @param  Nmrc_NmrConstraintStore value
**/
void *Dang_DangleChain_SetNmrConstraintStore(Dang_DangleChain self, Nmrc_NmrConstraintStore value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNmrConstraintStore");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'setNmrConstraintStore'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'setNmrConstraintStore' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for cambridge.Dangle.DangleChain.shiftList

Nmr ShiftList used as 
input in prediction
  @param  Dang_DangleChain self
  @param  Nmr_ShiftList value
**/
void *Dang_DangleChain_SetShiftList(Dang_DangleChain self, Nmr_ShiftList value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setShiftList");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'setShiftList'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'setShiftList' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for cambridge.Dangle.DangleChain.dangleResidues

child link to 
class DangleResidue
  @param  Dang_DangleChain self
  @returns   the result
**/
ApiList Dang_DangleChain_SortedDangleResidues(Dang_DangleChain self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedDangleResidues");
  
  if (!method)
    return raiseApiException("cambridge.Dangle.DangleChain: cannot find method 'sortedDangleResidues'");
  if (!PyCallable_Check(method))
    return raiseApiException("cambridge.Dangle.DangleChain: method 'sortedDangleResidues' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
