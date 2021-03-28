
#include "ccp.h"

/*
  Coordinate record for StructureModel. 
*/

/* package ccp.api.molecule.MolStructure */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Coord self
  @param  Impl_ApplicationData value
**/
void *Coor_Coord_AddApplicationData(Coor_Coord self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'addApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'addApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for ccp.molecule.MolStructure.Coord
  @param  Coor_Coord self
  @param  ApiBoolean complete
**/
void *Coor_Coord_CheckAllValid(Coor_Coord self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for ccp.molecule.MolStructure.Coord
  @param  Coor_Coord self
  @param  ApiBoolean complete
**/
void *Coor_Coord_CheckValid(Coor_Coord self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'checkValid' is not callable");
  
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
  @param  Coor_Coord self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_Coord_FindAllApplicationData(Coor_Coord self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'findAllApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'findAllApplicationData' is not callable");
  
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
  @param  Coor_Coord self
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_Coord_FindAllApplicationData_keyval0(Coor_Coord self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Coord_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Coord self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_Coord_FindAllApplicationData_keyval1(Coor_Coord self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Coord_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Coord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_Coord_FindAllApplicationData_keyval2(Coor_Coord self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Coord_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Coord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Coor_Coord_FindAllApplicationData_keyval3(Coor_Coord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Coord_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Coord self
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
ApiList Coor_Coord_FindAllApplicationData_keyval4(Coor_Coord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Coord_FindAllApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Coord self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_Coord_FindFirstApplicationData(Coor_Coord self, ApiMap conditions)
{
  
  Impl_ApplicationData obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'findFirstApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'findFirstApplicationData' is not callable");
  
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
  @param  Coor_Coord self
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_Coord_FindFirstApplicationData_keyval0(Coor_Coord self)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Coor_Coord_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Coord self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_Coord_FindFirstApplicationData_keyval1(Coor_Coord self, char * key, ApiObject value)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Coor_Coord_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Coord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_Coord_FindFirstApplicationData_keyval2(Coor_Coord self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Coor_Coord_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Coord self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_ApplicationData Coor_Coord_FindFirstApplicationData_keyval3(Coor_Coord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Coor_Coord_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Coord self
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
Impl_ApplicationData Coor_Coord_FindFirstApplicationData_keyval4(Coor_Coord self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_ApplicationData  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Coor_Coord_FindFirstApplicationData(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for ccp.molecule.MolStructure.Coord
  @param  Coor_Coord self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Coor_Coord_Get(Coor_Coord self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Coor_Coord self
  @returns   the result
**/
Acco_AccessObject Coor_Coord_GetAccess(Coor_Coord self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'getAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'getAccess' is not callable");
  
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
  @param  Coor_Coord self
  @returns   the result
**/
Acco_AccessObject Coor_Coord_GetActiveAccess(Coor_Coord self)
{
  
  Acco_AccessObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getActiveAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'getActiveAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'getActiveAccess' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Coord.altLocationCode

Alternative 
location code for coordinate record, serves as key for object. Default 
is a single space (' '). Non-default values will only come in when there 
are several alternative locations for a given atom.
  @param  Coor_Coord self
  @returns   the result
**/
ApiString Coor_Coord_GetAltLocationCode(Coor_Coord self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAltLocationCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'getAltLocationCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'getAltLocationCode' is not callable");
  
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
  @param  Coor_Coord self
  @returns   the result
**/
ApiList Coor_Coord_GetApplicationData(Coor_Coord self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'getApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'getApplicationData' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Coord.atom

parent link
  @param  Coor_Coord self
  @returns   the result
**/
Coor_Atom Coor_Coord_GetAtom(Coor_Coord self)
{
  
  Coor_Atom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getAtom");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'getAtom'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'getAtom' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Coord.bFactor

X-ray 
crystallographical B-factor
  @param  Coor_Coord self
  @returns   the result
**/
ApiFloat Coor_Coord_GetBFactor(Coor_Coord self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getBFactor");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'getBFactor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'getBFactor' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetByKey for ccp.molecule.MolStructure.Coord
  @param  Coor_Coord self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Coor_Coord Coor_Coord_GetByKey(Coor_Coord self, Impl_MemopsObject startObj, ApiList fullKey)
{
  
  Coor_Coord obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'getByKey' is not callable");
  
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
  @param  Coor_Coord self
  @returns   the result
**/
ApiString Coor_Coord_GetClassName(Coor_Coord self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'getClassName' is not callable");
  
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
  @param  Coor_Coord self
  @returns   the result
**/
ApiList Coor_Coord_GetFieldNames(Coor_Coord self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for ccp.molecule.MolStructure.Coord
  @param  Coor_Coord self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Coor_Coord_GetFullKey(Coor_Coord self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'getFullKey' is not callable");
  
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
  @param  Coor_Coord self
  @returns   the result
**/
ApiBoolean Coor_Coord_GetInConstructor(Coor_Coord self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'getInConstructor' is not callable");
  
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
  @param  Coor_Coord self
  @returns   the result
**/
ApiBoolean Coor_Coord_GetIsDeleted(Coor_Coord self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for ccp.molecule.MolStructure.Coord
  @param  Coor_Coord self
  @returns  Local object key
**/
ApiObject Coor_Coord_GetLocalKey(Coor_Coord self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Coord.model

Model that coordinates 
belong to. Part of key for Coord
  @param  Coor_Coord self
  @returns   the result
**/
Coor_Model Coor_Coord_GetModel(Coor_Coord self)
{
  
  Coor_Model obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getModel");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'getModel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'getModel' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Coord.occupancy

Fractional occupancy 
of this coordinate position by the atom.
  @param  Coor_Coord self
  @returns   the result
**/
ApiFloat Coor_Coord_GetOccupancy(Coor_Coord self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getOccupancy");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'getOccupancy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'getOccupancy' is not callable");
  
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
  @param  Coor_Coord self
  @returns   the result
**/
ApiString Coor_Coord_GetPackageName(Coor_Coord self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'getPackageName' is not callable");
  
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
  @param  Coor_Coord self
  @returns   the result
**/
ApiString Coor_Coord_GetPackageShortName(Coor_Coord self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Coord.parent

link to parent object - 
synonym for atom
  @param  Coor_Coord self
  @returns   the result
**/
Coor_Atom Coor_Coord_GetParent(Coor_Coord self)
{
  
  Coor_Atom obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'getParent' is not callable");
  
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
  @param  Coor_Coord self
  @returns   the result
**/
ApiString Coor_Coord_GetQualifiedName(Coor_Coord self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'getQualifiedName' is not callable");
  
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
  @param  Coor_Coord self
  @returns   the result
**/
Impl_MemopsRoot Coor_Coord_GetRoot(Coor_Coord self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'getRoot' is not callable");
  
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
  @param  Coor_Coord self
  @returns   the result
**/
Impl_TopObject Coor_Coord_GetTopObject(Coor_Coord self)
{
  
  Impl_TopObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Coord.x

X coordinate in Angstroms
  @param  Coor_Coord self
  @returns   the result
**/
ApiFloat Coor_Coord_GetX(Coor_Coord self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getX");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'getX'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'getX' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Coord.y

Y coordinate in Angstroms
  @param  Coor_Coord self
  @returns   the result
**/
ApiFloat Coor_Coord_GetY(Coor_Coord self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getY");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'getY'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'getY' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for ccp.molecule.MolStructure.Coord.z

Z coordinate in Angstroms
  @param  Coor_Coord self
  @returns   the result
**/
ApiFloat Coor_Coord_GetZ(Coor_Coord self)
{
  
  ApiFloat obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getZ");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'getZ'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'getZ' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for ccp.molecule.MolStructure.Coord
  @param  Coor_Atom parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Coor_Coord Coor_Coord_Init(Coor_Atom parent, ApiMap attrlinks)
{
  
  return Coor_Atom_NewCoord(parent, attrlinks);
}

/**
  Constructor for ccp.molecule.MolStructure.Coord
  @param  Coor_Atom parent
  @param  Coor_Model model
  @returns  the new object
**/
Coor_Coord Coor_Coord_Init_reqd(Coor_Atom parent, Coor_Model model)
{
  
  Coor_Coord  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "model", model);
  
  obj = Coor_Coord_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Coor_Coord self
  @param  Impl_ApplicationData value
**/
void *Coor_Coord_RemoveApplicationData(Coor_Coord self, Impl_ApplicationData value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'removeApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'removeApplicationData' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for ccp.molecule.MolStructure.Coord
  @param  Coor_Coord self
  @param  ApiString name
  @param  ApiObject value
**/
void *Coor_Coord_Set(Coor_Coord self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Coor_Coord self
  @param  Acco_AccessObject value
**/
void *Coor_Coord_SetAccess(Coor_Coord self, Acco_AccessObject value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAccess");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'setAccess'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'setAccess' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolStructure.Coord.altLocationCode

Alternative 
location code for coordinate record, serves as key for object. Default 
is a single space (' '). Non-default values will only come in when there 
are several alternative locations for a given atom.
  @param  Coor_Coord self
  @param  ApiString value
**/
void *Coor_Coord_SetAltLocationCode(Coor_Coord self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setAltLocationCode");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'setAltLocationCode'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'setAltLocationCode' is not callable");
  
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
  @param  Coor_Coord self
  @param  ApiList values
**/
void *Coor_Coord_SetApplicationData(Coor_Coord self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setApplicationData");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'setApplicationData'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'setApplicationData' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolStructure.Coord.bFactor

X-ray 
crystallographical B-factor
  @param  Coor_Coord self
  @param  ApiFloat value
**/
void *Coor_Coord_SetBFactor(Coor_Coord self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setBFactor");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'setBFactor'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'setBFactor' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolStructure.Coord.model

Model that coordinates 
belong to. Part of key for Coord
  @param  Coor_Coord self
  @param  Coor_Model value
**/
void *Coor_Coord_SetModel(Coor_Coord self, Coor_Model value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setModel");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'setModel'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'setModel' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolStructure.Coord.occupancy

Fractional occupancy 
of this coordinate position by the atom.
  @param  Coor_Coord self
  @param  ApiFloat value
**/
void *Coor_Coord_SetOccupancy(Coor_Coord self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setOccupancy");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'setOccupancy'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'setOccupancy' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolStructure.Coord.x

X coordinate in Angstroms
  @param  Coor_Coord self
  @param  ApiFloat value
**/
void *Coor_Coord_SetX(Coor_Coord self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setX");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'setX'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'setX' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolStructure.Coord.y

Y coordinate in Angstroms
  @param  Coor_Coord self
  @param  ApiFloat value
**/
void *Coor_Coord_SetY(Coor_Coord self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setY");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'setY'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'setY' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for ccp.molecule.MolStructure.Coord.z

Z coordinate in Angstroms
  @param  Coor_Coord self
  @param  ApiFloat value
**/
void *Coor_Coord_SetZ(Coor_Coord self, ApiFloat value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setZ");
  
  if (!method)
    return raiseApiException("ccp.molecule.MolStructure.Coord: cannot find method 'setZ'");
  if (!PyCallable_Check(method))
    return raiseApiException("ccp.molecule.MolStructure.Coord: method 'setZ' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
