
#include "ccp.h"

/*
  Alignment of molecule with database reference
*/

/* package ccp.api.molecule.Molecule */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Alignment self
  @param  Impl_ApplicationData value
**/
void *Mole_Alignment_AddApplicationData(Mole_Alignment self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.Molecule.Alignment
  @param  Mole_Alignment self
  @param  ApiBoolean complete
**/
void *Mole_Alignment_CheckAllValid(Mole_Alignment self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.Molecule.Alignment
  @param  Mole_Alignment self
  @param  ApiBoolean complete
**/
void *Mole_Alignment_CheckValid(Mole_Alignment self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'checkValid' is not callable");
  
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
  @param  Mole_Alignment self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_Alignment_FindAllApplicationData(Mole_Alignment self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'findAllApplicationData' is not callable");
  
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
  @param  Mole_Alignment self
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_Alignment_FindAllApplicationData_keyval0(Mole_Alignment self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_Alignment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Alignment self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_Alignment_FindAllApplicationData_keyval1(Mole_Alignment self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_Alignment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Alignment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_Alignment_FindAllApplicationData_keyval2(Mole_Alignment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_Alignment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Alignment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Mole_Alignment_FindAllApplicationData_keyval3(Mole_Alignment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_Alignment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Alignment self
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
ApiList Mole_Alignment_FindAllApplicationData_keyval4(Mole_Alignment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_Alignment_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Alignment self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mole_Alignment_FindFirstApplicationData(Mole_Alignment self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'findFirstApplicationData' is not callable");
  
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
  @param  Mole_Alignment self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mole_Alignment_FindFirstApplicationData_keyval0(Mole_Alignment self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Mole_Alignment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Alignment self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mole_Alignment_FindFirstApplicationData_keyval1(Mole_Alignment self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Mole_Alignment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Alignment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mole_Alignment_FindFirstApplicationData_keyval2(Mole_Alignment self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Mole_Alignment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Alignment self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Mole_Alignment_FindFirstApplicationData_keyval3(Mole_Alignment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Mole_Alignment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Alignment self
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
Impl_ApplicationData Mole_Alignment_FindFirstApplicationData_keyval4(Mole_Alignment self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Mole_Alignment_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.Molecule.Alignment
  @param  Mole_Alignment self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Mole_Alignment_Get(Mole_Alignment self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mole_Alignment self
  @returns   the result
**/
Acco_AccessObject Mole_Alignment_GetAccess(Mole_Alignment self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'getAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Alignment.alignLength

Length of alignment
  @param  Mole_Alignment self
  @returns   the result
**/
ApiInteger Mole_Alignment_GetAlignLength(Mole_Alignment self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAlignLength");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'getAlignLength'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'getAlignLength' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Alignment.alignmentProgram

Program used 
for alignment/threading.
  @param  Mole_Alignment self
  @returns   the result
**/
ApiString Mole_Alignment_GetAlignmentProgram(Mole_Alignment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAlignmentProgram");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'getAlignmentProgram'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'getAlignmentProgram' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Alignment.alignmentScore

Alignment score 
for alignment or threading program.
  @param  Mole_Alignment self
  @returns   the result
**/
ApiFloat Mole_Alignment_GetAlignmentScore(Mole_Alignment self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAlignmentScore");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'getAlignmentScore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'getAlignmentScore' is not callable");
  
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
  @param  Mole_Alignment self
  @returns   the result
**/
ApiList Mole_Alignment_GetApplicationData(Mole_Alignment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.Molecule.Alignment
  @param  Mole_Alignment self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Mole_Alignment Mole_Alignment_GetByKey(Mole_Alignment self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Mole_Alignment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'getByKey' is not callable");
  
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
  @param  Mole_Alignment self
  @returns   the result
**/
ApiString Mole_Alignment_GetClassName(Mole_Alignment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'getClassName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Alignment.dbRef

database reference used 
in alignment
  @param  Mole_Alignment self
  @returns   the result
**/
Dbr_Entry Mole_Alignment_GetDbRef(Mole_Alignment self)
{
  
  Dbr_Entry obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDbRef");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'getDbRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'getDbRef' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Alignment.dbRefAlignBegin

Optional. 
Residue number in the database reference sequence where the alignment 
begins.
  @param  Mole_Alignment self
  @returns   the result
**/
ApiInteger Mole_Alignment_GetDbRefAlignBegin(Mole_Alignment self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDbRefAlignBegin");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'getDbRefAlignBegin'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'getDbRefAlignBegin' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Alignment.dbRefAlignEnd

Optional. Residue 
number in the database reference sequence where the alignment ends.
  @param  Mole_Alignment self
  @returns   the result
**/
ApiInteger Mole_Alignment_GetDbRefAlignEnd(Mole_Alignment self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDbRefAlignEnd");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'getDbRefAlignEnd'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'getDbRefAlignEnd' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Alignment.details

Free text, for notes, 
explanatory comments, etc.
  @param  Mole_Alignment self
  @returns   the result
**/
ApiString Mole_Alignment_GetDetails(Mole_Alignment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'getDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'getDetails' is not callable");
  
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
  @param  Mole_Alignment self
  @returns   the result
**/
ApiList Mole_Alignment_GetFieldNames(Mole_Alignment self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.Molecule.Alignment
  @param  Mole_Alignment self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Mole_Alignment_GetFullKey(Mole_Alignment self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'getFullKey' is not callable");
  
  args = PyTuple_Pack(1, useGuid);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Alignment.homologyRatio

Fractioanl 
homology
  @param  Mole_Alignment self
  @returns   the result
**/
ApiFloat Mole_Alignment_GetHomologyRatio(Mole_Alignment self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getHomologyRatio");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'getHomologyRatio'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'getHomologyRatio' is not callable");
  
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
  @param  Mole_Alignment self
  @returns   the result
**/
ApiBoolean Mole_Alignment_GetInConstructor(Mole_Alignment self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'getInConstructor' is not callable");
  
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
  @param  Mole_Alignment self
  @returns   the result
**/
ApiBoolean Mole_Alignment_GetIsDeleted(Mole_Alignment self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.Molecule.Alignment
  @param  Mole_Alignment self
  @returns  Local object key
**/
ApiObject Mole_Alignment_GetLocalKey(Mole_Alignment self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Alignment.molSeqFragment

MolSeqFragment 
that alignment refers to.  If not set, the alignment refers to the 
entire molecule
  @param  Mole_Alignment self
  @returns   the result
**/
Mole_MolSeqFragment Mole_Alignment_GetMolSeqFragment(Mole_Alignment self)
{
  
  Mole_MolSeqFragment obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolSeqFragment");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'getMolSeqFragment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'getMolSeqFragment' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Alignment.molecule

parent link
  @param  Mole_Alignment self
  @returns   the result
**/
Mole_Molecule Mole_Alignment_GetMolecule(Mole_Alignment self)
{
  
  Mole_Molecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMolecule");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'getMolecule'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'getMolecule' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Alignment.nIdentical

Number of identical 
residues
  @param  Mole_Alignment self
  @returns   the result
**/
ApiInteger Mole_Alignment_GetNIdentical(Mole_Alignment self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNIdentical");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'getNIdentical'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'getNIdentical' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Alignment.nPositive

Number of 
positive-scoring residues
  @param  Mole_Alignment self
  @returns   the result
**/
ApiInteger Mole_Alignment_GetNPositive(Mole_Alignment self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getNPositive");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'getNPositive'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'getNPositive' is not callable");
  
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
  @param  Mole_Alignment self
  @returns   the result
**/
ApiString Mole_Alignment_GetPackageName(Mole_Alignment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'getPackageName' is not callable");
  
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
  @param  Mole_Alignment self
  @returns   the result
**/
ApiString Mole_Alignment_GetPackageShortName(Mole_Alignment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Alignment.parent

link to parent object - 
synonym for molecule
  @param  Mole_Alignment self
  @returns   the result
**/
Mole_Molecule Mole_Alignment_GetParent(Mole_Alignment self)
{
  
  Mole_Molecule obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'getParent' is not callable");
  
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
  @param  Mole_Alignment self
  @returns   the result
**/
ApiString Mole_Alignment_GetQualifiedName(Mole_Alignment self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'getQualifiedName' is not callable");
  
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
  @param  Mole_Alignment self
  @returns   the result
**/
Impl_MemopsRoot Mole_Alignment_GetRoot(Mole_Alignment self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.Molecule.Alignment.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Mole_Alignment self
  @returns   the result
**/
ApiInteger Mole_Alignment_GetSerial(Mole_Alignment self)
{
  
  ApiInteger obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'getSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'getSerial' is not callable");
  
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
  @param  Mole_Alignment self
  @returns   the result
**/
Impl_TopObject Mole_Alignment_GetTopObject(Mole_Alignment self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.Molecule.Alignment
  @param  Mole_Molecule parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Mole_Alignment Mole_Alignment_Init(Mole_Molecule parent, ApiMap attrlinks)
{
  
  return Mole_Molecule_NewAlignment(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.Molecule.Alignment
  @param  Mole_Molecule parent
  @param  Dbr_Entry dbRef
  @returns  the new object
**/
Mole_Alignment Mole_Alignment_Init_reqd(Mole_Molecule parent, Dbr_Entry dbRef)
{
  
  Mole_Alignment  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "dbRef", dbRef);
  
  obj = Mole_Alignment_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Mole_Alignment self
  @param  Impl_ApplicationData value
**/
void *Mole_Alignment_RemoveApplicationData(Mole_Alignment self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.Molecule.Alignment
  @param  Mole_Alignment self
  @param  ApiString name
  @param  ApiObject value
**/
void *Mole_Alignment_Set(Mole_Alignment self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Mole_Alignment self
  @param  Acco_AccessObject value
**/
void *Mole_Alignment_SetAccess(Mole_Alignment self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Alignment.alignLength

Length of alignment
  @param  Mole_Alignment self
  @param  ApiInteger value
**/
void *Mole_Alignment_SetAlignLength(Mole_Alignment self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAlignLength");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'setAlignLength'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'setAlignLength' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Alignment.alignmentProgram

Program used 
for alignment/threading.
  @param  Mole_Alignment self
  @param  ApiString value
**/
void *Mole_Alignment_SetAlignmentProgram(Mole_Alignment self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAlignmentProgram");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'setAlignmentProgram'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'setAlignmentProgram' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Alignment.alignmentScore

Alignment score 
for alignment or threading program.
  @param  Mole_Alignment self
  @param  ApiFloat value
**/
void *Mole_Alignment_SetAlignmentScore(Mole_Alignment self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAlignmentScore");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'setAlignmentScore'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'setAlignmentScore' is not callable");
  
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
  @param  Mole_Alignment self
  @param  ApiList values
**/
void *Mole_Alignment_SetApplicationData(Mole_Alignment self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Alignment.dbRef

database reference used 
in alignment
  @param  Mole_Alignment self
  @param  Dbr_Entry value
**/
void *Mole_Alignment_SetDbRef(Mole_Alignment self, Dbr_Entry value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDbRef");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'setDbRef'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'setDbRef' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Alignment.dbRefAlignBegin

Optional. 
Residue number in the database reference sequence where the alignment 
begins.
  @param  Mole_Alignment self
  @param  ApiInteger value
**/
void *Mole_Alignment_SetDbRefAlignBegin(Mole_Alignment self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDbRefAlignBegin");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'setDbRefAlignBegin'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'setDbRefAlignBegin' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Alignment.dbRefAlignEnd

Optional. Residue 
number in the database reference sequence where the alignment ends.
  @param  Mole_Alignment self
  @param  ApiInteger value
**/
void *Mole_Alignment_SetDbRefAlignEnd(Mole_Alignment self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDbRefAlignEnd");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'setDbRefAlignEnd'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'setDbRefAlignEnd' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Alignment.details

Free text, for notes, 
explanatory comments, etc.
  @param  Mole_Alignment self
  @param  ApiString value
**/
void *Mole_Alignment_SetDetails(Mole_Alignment self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setDetails");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'setDetails'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'setDetails' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Alignment.homologyRatio

Fractioanl 
homology
  @param  Mole_Alignment self
  @param  ApiFloat value
**/
void *Mole_Alignment_SetHomologyRatio(Mole_Alignment self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setHomologyRatio");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'setHomologyRatio'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'setHomologyRatio' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Alignment.molSeqFragment

MolSeqFragment 
that alignment refers to.  If not set, the alignment refers to the 
entire molecule
  @param  Mole_Alignment self
  @param  Mole_MolSeqFragment value
**/
void *Mole_Alignment_SetMolSeqFragment(Mole_Alignment self, Mole_MolSeqFragment value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setMolSeqFragment");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'setMolSeqFragment'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'setMolSeqFragment' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Alignment.nIdentical

Number of identical 
residues
  @param  Mole_Alignment self
  @param  ApiInteger value
**/
void *Mole_Alignment_SetNIdentical(Mole_Alignment self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNIdentical");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'setNIdentical'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'setNIdentical' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Alignment.nPositive

Number of 
positive-scoring residues
  @param  Mole_Alignment self
  @param  ApiInteger value
**/
void *Mole_Alignment_SetNPositive(Mole_Alignment self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setNPositive");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'setNPositive'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'setNPositive' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.Molecule.Alignment.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Mole_Alignment self
  @param  ApiInteger value
**/
void *Mole_Alignment_SetSerial(Mole_Alignment self, ApiInteger value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setSerial");
  
  if (!method)
    return raiseApiException("ccp.molecule.Molecule.Alignment: cannot find method 'setSerial'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.Molecule.Alignment: method 'setSerial' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
