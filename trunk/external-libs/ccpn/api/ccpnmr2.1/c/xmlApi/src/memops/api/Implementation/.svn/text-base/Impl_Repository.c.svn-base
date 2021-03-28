
#include "ccp.h"

/*
  Data repository - database, directory, or server, where data are stored
*/

/* package memops.api.Implementation */

/**
  Add for memops.Implementation.Repository.stored

Groups of packages 
(LocationInfo) stored in repository.
  @param  Impl_Repository self
  @param  Impl_PackageLocator value
**/
void *Impl_Repository_AddStored(Impl_Repository self, Impl_PackageLocator value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addStored");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'addStored'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'addStored' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for memops.Implementation.Repository
  @param  Impl_Repository self
  @param  ApiBoolean complete
**/
void *Impl_Repository_CheckAllValid(Impl_Repository self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for memops.Implementation.Repository
  @param  Impl_Repository self
  @param  ApiBoolean complete
**/
void *Impl_Repository_CheckValid(Impl_Repository self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FullDelete for memops.Implementation.Repository
  @param  Impl_Repository self
**/
void *Impl_Repository_Delete(Impl_Repository self)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "delete");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'delete'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'delete' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.Repository.stored

Groups of packages 
(LocationInfo) stored in repository.
  @param  Impl_Repository self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_Repository_FindAllStored(Impl_Repository self, ApiMap conditions)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllStored");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'findAllStored'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'findAllStored' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for memops.Implementation.Repository.stored

Groups of packages 
(LocationInfo) stored in repository.
  @param  Impl_Repository self
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_Repository_FindAllStored_keyval0(Impl_Repository self)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_Repository_FindAllStored(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.Repository.stored

Groups of packages 
(LocationInfo) stored in repository.
  @param  Impl_Repository self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_Repository_FindAllStored_keyval1(Impl_Repository self, char * key, ApiObject value)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_Repository_FindAllStored(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.Repository.stored

Groups of packages 
(LocationInfo) stored in repository.
  @param  Impl_Repository self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_Repository_FindAllStored_keyval2(Impl_Repository self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_Repository_FindAllStored(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.Repository.stored

Groups of packages 
(LocationInfo) stored in repository.
  @param  Impl_Repository self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiSet Impl_Repository_FindAllStored_keyval3(Impl_Repository self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_Repository_FindAllStored(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for memops.Implementation.Repository.stored

Groups of packages 
(LocationInfo) stored in repository.
  @param  Impl_Repository self
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
ApiSet Impl_Repository_FindAllStored_keyval4(Impl_Repository self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiSet  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_Repository_FindAllStored(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.Repository.stored

Groups of 
packages (LocationInfo) stored in repository.
  @param  Impl_Repository self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_PackageLocator Impl_Repository_FindFirstStored(Impl_Repository self, ApiMap conditions)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstStored");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'findFirstStored'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'findFirstStored' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.Repository.stored

Groups of 
packages (LocationInfo) stored in repository.
  @param  Impl_Repository self
  @returns  the first value that satisfies the conditions 
**/
Impl_PackageLocator Impl_Repository_FindFirstStored_keyval0(Impl_Repository self)
{
  
  Impl_PackageLocator  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_Repository_FindFirstStored(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.Repository.stored

Groups of 
packages (LocationInfo) stored in repository.
  @param  Impl_Repository self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_PackageLocator Impl_Repository_FindFirstStored_keyval1(Impl_Repository self, char * key, ApiObject value)
{
  
  Impl_PackageLocator  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_Repository_FindFirstStored(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.Repository.stored

Groups of 
packages (LocationInfo) stored in repository.
  @param  Impl_Repository self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_PackageLocator Impl_Repository_FindFirstStored_keyval2(Impl_Repository self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_PackageLocator  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_Repository_FindFirstStored(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.Repository.stored

Groups of 
packages (LocationInfo) stored in repository.
  @param  Impl_Repository self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_PackageLocator Impl_Repository_FindFirstStored_keyval3(Impl_Repository self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_PackageLocator  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_Repository_FindFirstStored(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for memops.Implementation.Repository.stored

Groups of 
packages (LocationInfo) stored in repository.
  @param  Impl_Repository self
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
Impl_PackageLocator Impl_Repository_FindFirstStored_keyval4(Impl_Repository self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_PackageLocator  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_Repository_FindFirstStored(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for memops.Implementation.Repository
  @param  Impl_Repository self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Impl_Repository_Get(Impl_Repository self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  GetByKey for memops.Implementation.Repository
  @param  Impl_Repository self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Impl_Repository Impl_Repository_GetByKey(Impl_Repository self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'getByKey' is not callable");
  
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
  @param  Impl_Repository self
  @returns   the result
**/
ApiString Impl_Repository_GetClassName(Impl_Repository self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'getClassName' is not callable");
  
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
  @param  Impl_Repository self
  @returns   the result
**/
ApiList Impl_Repository_GetFieldNames(Impl_Repository self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  get absolute file location for TopObject in repository
  @param  Impl_Repository self
  @param  ApiString packageName
  @returns  
**/
ApiString Impl_Repository_GetFileLocation(Impl_Repository self, ApiString packageName)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFileLocation");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'getFileLocation'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'getFileLocation' is not callable");
  
  args = PyTuple_Pack(1, packageName);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.Repository.format

Format in which data 
are supplied (default is 'xml', meaning standard CCPN XML). May differ 
from the format in which data are actually stored.
  @param  Impl_Repository self
  @returns   the result
**/
ApiString Impl_Repository_GetFormat(Impl_Repository self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFormat");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'getFormat'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'getFormat' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for memops.Implementation.Repository
  @param  Impl_Repository self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Impl_Repository_GetFullKey(Impl_Repository self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'getFullKey' is not callable");
  
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
  @param  Impl_Repository self
  @returns   the result
**/
ApiBoolean Impl_Repository_GetInConstructor(Impl_Repository self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'getInConstructor' is not callable");
  
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
  @param  Impl_Repository self
  @returns   the result
**/
ApiBoolean Impl_Repository_GetIsDeleted(Impl_Repository self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for memops.Implementation.Repository
  @param  Impl_Repository self
  @returns  Local object key
**/
ApiObject Impl_Repository_GetLocalKey(Impl_Repository self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.Repository.memopsRoot

parent link
  @param  Impl_Repository self
  @returns   the result
**/
Impl_MemopsRoot Impl_Repository_GetMemopsRoot(Impl_Repository self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'getMemopsRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.Repository.name

name of repository
  @param  Impl_Repository self
  @returns   the result
**/
ApiString Impl_Repository_GetName(Impl_Repository self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getName");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'getName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'getName' is not callable");
  
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
  @param  Impl_Repository self
  @returns   the result
**/
ApiString Impl_Repository_GetPackageName(Impl_Repository self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'getPackageName' is not callable");
  
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
  @param  Impl_Repository self
  @returns   the result
**/
ApiString Impl_Repository_GetPackageShortName(Impl_Repository self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.Repository.parent

link to parent object - 
synonym for memopsRoot
  @param  Impl_Repository self
  @returns   the result
**/
Impl_MemopsRoot Impl_Repository_GetParent(Impl_Repository self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'getParent' is not callable");
  
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
  @param  Impl_Repository self
  @returns   the result
**/
ApiString Impl_Repository_GetQualifiedName(Impl_Repository self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'getQualifiedName' is not callable");
  
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
  @param  Impl_Repository self
  @returns   the result
**/
Impl_MemopsRoot Impl_Repository_GetRoot(Impl_Repository self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.Repository.stored

Groups of packages 
(LocationInfo) stored in repository.
  @param  Impl_Repository self
  @returns   the result
**/
ApiSet Impl_Repository_GetStored(Impl_Repository self)
{
  
  ApiSet obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getStored");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'getStored'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'getStored' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.ImplementationObject.topObject

TopObject 
- topmost parent in package.
  @param  Impl_Repository self
  @returns   the result
**/
Impl_MemopsRoot Impl_Repository_GetTopObject(Impl_Repository self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.Repository.url

Url of data repository
  @param  Impl_Repository self
  @returns   the result
**/
Impl_Url Impl_Repository_GetUrl(Impl_Repository self)
{
  
  Impl_Url obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getUrl");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'getUrl'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'getUrl' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for memops.Implementation.Repository
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Impl_Repository Impl_Repository_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewRepository(parent, attrlinks);
}

/**
  Constructor for memops.Implementation.Repository
  @param  Impl_MemopsRoot parent
  @param  char * name
  @param  Impl_Url url
  @returns  the new object
**/
Impl_Repository Impl_Repository_Init_reqd(Impl_MemopsRoot parent, char * name, Impl_Url url)
{
  
  Impl_Repository  obj;
  PyObject *attrlinks = PyDict_New();
  ApiString api__name = ApiString_New(name);

  PyDict_SetItemString(attrlinks, "name", api__name);
  PyDict_SetItemString(attrlinks, "url", url);
  
  obj = Impl_Repository_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  Py_DECREF(api__name);
  
  return obj;
}

/**
  Remove for memops.Implementation.Repository.stored

Groups of packages 
(LocationInfo) stored in repository.
  @param  Impl_Repository self
  @param  Impl_PackageLocator value
**/
void *Impl_Repository_RemoveStored(Impl_Repository self, Impl_PackageLocator value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeStored");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'removeStored'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'removeStored' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for memops.Implementation.Repository
  @param  Impl_Repository self
  @param  ApiString name
  @param  ApiObject value
**/
void *Impl_Repository_Set(Impl_Repository self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.Repository.format

Format in which data 
are supplied (default is 'xml', meaning standard CCPN XML). May differ 
from the format in which data are actually stored.
  @param  Impl_Repository self
  @param  ApiString value
**/
void *Impl_Repository_SetFormat(Impl_Repository self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setFormat");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'setFormat'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'setFormat' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.Repository.name

name of repository
  @param  Impl_Repository self
  @param  ApiString value
**/
void *Impl_Repository_SetName(Impl_Repository self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setName");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'setName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'setName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.Repository.stored

Groups of packages 
(LocationInfo) stored in repository.
  @param  Impl_Repository self
  @param  ApiSet values
**/
void *Impl_Repository_SetStored(Impl_Repository self, ApiSet values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setStored");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'setStored'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'setStored' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.Repository.url

Url of data repository
  @param  Impl_Repository self
  @param  Impl_Url value
**/
void *Impl_Repository_SetUrl(Impl_Repository self, Impl_Url value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setUrl");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'setUrl'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'setUrl' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Sorted for memops.Implementation.Repository.stored

Groups of packages 
(LocationInfo) stored in repository.
  @param  Impl_Repository self
  @returns   the result
**/
ApiList Impl_Repository_SortedStored(Impl_Repository self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "sortedStored");
  
  if (!method)
    return raiseApiException("memops.Implementation.Repository: cannot find method 'sortedStored'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.Repository: method 'sortedStored' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
