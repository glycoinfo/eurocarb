
#include "ccp.h"

/*
  Storage locations for one or more packages
*/

/* package memops.api.Implementation */

/**
  Add for memops.Implementation.PackageLocator.repositories

repositories 
to search for data for packageLocaator packages - ordered to form a 
search path
  @param  Impl_PackageLocator self
  @param  Impl_Repository value
**/
void *Impl_PackageLocator_AddRepository(Impl_PackageLocator self, Impl_Repository value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "addRepository");
  
  if (!method)
    return raiseApiException("memops.Implementation.PackageLocator: cannot find method 'addRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.PackageLocator: method 'addRepository' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckAllValid for memops.Implementation.PackageLocator
  @param  Impl_PackageLocator self
  @param  ApiBoolean complete
**/
void *Impl_PackageLocator_CheckAllValid(Impl_PackageLocator self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkAllValid");
  
  if (!method)
    return raiseApiException("memops.Implementation.PackageLocator: cannot find method 'checkAllValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.PackageLocator: method 'checkAllValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  CheckValid for memops.Implementation.PackageLocator
  @param  Impl_PackageLocator self
  @param  ApiBoolean complete
**/
void *Impl_PackageLocator_CheckValid(Impl_PackageLocator self, ApiBoolean complete)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "checkValid");
  
  if (!method)
    return raiseApiException("memops.Implementation.PackageLocator: cannot find method 'checkValid'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.PackageLocator: method 'checkValid' is not callable");
  
  args = PyTuple_Pack(1, complete);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FullDelete for memops.Implementation.PackageLocator
  @param  Impl_PackageLocator self
**/
void *Impl_PackageLocator_Delete(Impl_PackageLocator self)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "delete");
  
  if (!method)
    return raiseApiException("memops.Implementation.PackageLocator: cannot find method 'delete'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.PackageLocator: method 'delete' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.PackageLocator.repositories

repositories to 
search for data for packageLocaator packages - ordered to form a search 
path
  @param  Impl_PackageLocator self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
ApiList Impl_PackageLocator_FindAllRepositories(Impl_PackageLocator self, ApiMap conditions)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findAllRepositories");
  
  if (!method)
    return raiseApiException("memops.Implementation.PackageLocator: cannot find method 'findAllRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.PackageLocator: method 'findAllRepositories' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.PackageLocator.repositories

repositories to 
search for data for packageLocaator packages - ordered to form a search 
path
  @param  Impl_PackageLocator self
  @returns  all value that satisfy the conditions 
**/
ApiList Impl_PackageLocator_FindAllRepositories_keyval0(Impl_PackageLocator self)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_PackageLocator_FindAllRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.PackageLocator.repositories

repositories to 
search for data for packageLocaator packages - ordered to form a search 
path
  @param  Impl_PackageLocator self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
ApiList Impl_PackageLocator_FindAllRepositories_keyval1(Impl_PackageLocator self, char * key, ApiObject value)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_PackageLocator_FindAllRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.PackageLocator.repositories

repositories to 
search for data for packageLocaator packages - ordered to form a search 
path
  @param  Impl_PackageLocator self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
ApiList Impl_PackageLocator_FindAllRepositories_keyval2(Impl_PackageLocator self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_PackageLocator_FindAllRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.PackageLocator.repositories

repositories to 
search for data for packageLocaator packages - ordered to form a search 
path
  @param  Impl_PackageLocator self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
ApiList Impl_PackageLocator_FindAllRepositories_keyval3(Impl_PackageLocator self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_PackageLocator_FindAllRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindAll for 
memops.Implementation.PackageLocator.repositories

repositories to 
search for data for packageLocaator packages - ordered to form a search 
path
  @param  Impl_PackageLocator self
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
ApiList Impl_PackageLocator_FindAllRepositories_keyval4(Impl_PackageLocator self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  ApiList  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_PackageLocator_FindAllRepositories(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.PackageLocator.repositories

repositories to 
search for data for packageLocaator packages - ordered to form a search 
path
  @param  Impl_PackageLocator self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Impl_PackageLocator_FindFirstRepository(Impl_PackageLocator self, ApiMap conditions)
{
  
  Impl_Repository obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "findFirstRepository");
  
  if (!method)
    return raiseApiException("memops.Implementation.PackageLocator: cannot find method 'findFirstRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.PackageLocator: method 'findFirstRepository' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, conditions);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.PackageLocator.repositories

repositories to 
search for data for packageLocaator packages - ordered to form a search 
path
  @param  Impl_PackageLocator self
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Impl_PackageLocator_FindFirstRepository_keyval0(Impl_PackageLocator self)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  obj = Impl_PackageLocator_FindFirstRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.PackageLocator.repositories

repositories to 
search for data for packageLocaator packages - ordered to form a search 
path
  @param  Impl_PackageLocator self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Impl_PackageLocator_FindFirstRepository_keyval1(Impl_PackageLocator self, char * key, ApiObject value)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key, value);
  
  obj = Impl_PackageLocator_FindFirstRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.PackageLocator.repositories

repositories to 
search for data for packageLocaator packages - ordered to form a search 
path
  @param  Impl_PackageLocator self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Impl_PackageLocator_FindFirstRepository_keyval2(Impl_PackageLocator self, char * key1, ApiObject value1, char * key2, ApiObject value2)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  obj = Impl_PackageLocator_FindFirstRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.PackageLocator.repositories

repositories to 
search for data for packageLocaator packages - ordered to form a search 
path
  @param  Impl_PackageLocator self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
Impl_Repository Impl_PackageLocator_FindFirstRepository_keyval3(Impl_PackageLocator self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  obj = Impl_PackageLocator_FindFirstRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  FindFirst for 
memops.Implementation.PackageLocator.repositories

repositories to 
search for data for packageLocaator packages - ordered to form a search 
path
  @param  Impl_PackageLocator self
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
Impl_Repository Impl_PackageLocator_FindFirstRepository_keyval4(Impl_PackageLocator self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4)
{
  
  Impl_Repository  obj;
  PyObject *conditions = PyDict_New();
  
  PyDict_SetItemString(conditions, key1, value1);
  
  PyDict_SetItemString(conditions, key2, value2);
  
  PyDict_SetItemString(conditions, key3, value3);
  
  PyDict_SetItemString(conditions, key4, value4);
  
  obj = Impl_PackageLocator_FindFirstRepository(self, conditions);
  
  Py_DECREF(conditions);
  
  return obj;
}

/**
  GetAttr for memops.Implementation.PackageLocator
  @param  Impl_PackageLocator self
  @param  ApiString name
  @returns  get attribute or link by name
**/
ApiObject Impl_PackageLocator_Get(Impl_PackageLocator self, ApiString name)
{
  return NULL; // TBD: getattr(self, name)
}

/**
  GetByKey for memops.Implementation.PackageLocator
  @param  Impl_PackageLocator self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
Impl_PackageLocator Impl_PackageLocator_GetByKey(Impl_PackageLocator self, Impl_MemopsRoot startObj, ApiList fullKey)
{
  
  Impl_PackageLocator obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getByKey");
  
  if (!method)
    return raiseApiException("memops.Implementation.PackageLocator: cannot find method 'getByKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.PackageLocator: method 'getByKey' is not callable");
  
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
  @param  Impl_PackageLocator self
  @returns   the result
**/
ApiString Impl_PackageLocator_GetClassName(Impl_PackageLocator self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getClassName");
  
  if (!method)
    return raiseApiException("memops.Implementation.PackageLocator: cannot find method 'getClassName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.PackageLocator: method 'getClassName' is not callable");
  
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
  @param  Impl_PackageLocator self
  @returns   the result
**/
ApiList Impl_PackageLocator_GetFieldNames(Impl_PackageLocator self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFieldNames");
  
  if (!method)
    return raiseApiException("memops.Implementation.PackageLocator: cannot find method 'getFieldNames'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.PackageLocator: method 'getFieldNames' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetFullKey for memops.Implementation.PackageLocator
  @param  Impl_PackageLocator self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
ApiList Impl_PackageLocator_GetFullKey(Impl_PackageLocator self, ApiBoolean useGuid)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getFullKey");
  
  if (!method)
    return raiseApiException("memops.Implementation.PackageLocator: cannot find method 'getFullKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.PackageLocator: method 'getFullKey' is not callable");
  
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
  @param  Impl_PackageLocator self
  @returns   the result
**/
ApiBoolean Impl_PackageLocator_GetInConstructor(Impl_PackageLocator self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getInConstructor");
  
  if (!method)
    return raiseApiException("memops.Implementation.PackageLocator: cannot find method 'getInConstructor'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.PackageLocator: method 'getInConstructor' is not callable");
  
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
  @param  Impl_PackageLocator self
  @returns   the result
**/
ApiBoolean Impl_PackageLocator_GetIsDeleted(Impl_PackageLocator self)
{
  
  ApiBoolean obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getIsDeleted");
  
  if (!method)
    return raiseApiException("memops.Implementation.PackageLocator: cannot find method 'getIsDeleted'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.PackageLocator: method 'getIsDeleted' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  GetLocalKey for memops.Implementation.PackageLocator
  @param  Impl_PackageLocator self
  @returns  Local object key
**/
ApiObject Impl_PackageLocator_GetLocalKey(Impl_PackageLocator self)
{
  
  ApiObject obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getLocalKey");
  
  if (!method)
    return raiseApiException("memops.Implementation.PackageLocator: cannot find method 'getLocalKey'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.PackageLocator: method 'getLocalKey' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.PackageLocator.memopsRoot

parent link
  @param  Impl_PackageLocator self
  @returns   the result
**/
Impl_MemopsRoot Impl_PackageLocator_GetMemopsRoot(Impl_PackageLocator self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getMemopsRoot");
  
  if (!method)
    return raiseApiException("memops.Implementation.PackageLocator: cannot find method 'getMemopsRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.PackageLocator: method 'getMemopsRoot' is not callable");
  
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
  @param  Impl_PackageLocator self
  @returns   the result
**/
ApiString Impl_PackageLocator_GetPackageName(Impl_PackageLocator self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageName");
  
  if (!method)
    return raiseApiException("memops.Implementation.PackageLocator: cannot find method 'getPackageName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.PackageLocator: method 'getPackageName' is not callable");
  
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
  @param  Impl_PackageLocator self
  @returns   the result
**/
ApiString Impl_PackageLocator_GetPackageShortName(Impl_PackageLocator self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getPackageShortName");
  
  if (!method)
    return raiseApiException("memops.Implementation.PackageLocator: cannot find method 'getPackageShortName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.PackageLocator: method 'getPackageShortName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.PackageLocator.parent

link to parent 
object - synonym for memopsRoot
  @param  Impl_PackageLocator self
  @returns   the result
**/
Impl_MemopsRoot Impl_PackageLocator_GetParent(Impl_PackageLocator self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getParent");
  
  if (!method)
    return raiseApiException("memops.Implementation.PackageLocator: cannot find method 'getParent'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.PackageLocator: method 'getParent' is not callable");
  
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
  @param  Impl_PackageLocator self
  @returns   the result
**/
ApiString Impl_PackageLocator_GetQualifiedName(Impl_PackageLocator self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getQualifiedName");
  
  if (!method)
    return raiseApiException("memops.Implementation.PackageLocator: cannot find method 'getQualifiedName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.PackageLocator: method 'getQualifiedName' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.PackageLocator.repositories

repositories 
to search for data for packageLocaator packages - ordered to form a 
search path
  @param  Impl_PackageLocator self
  @returns   the result
**/
ApiList Impl_PackageLocator_GetRepositories(Impl_PackageLocator self)
{
  
  ApiList obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRepositories");
  
  if (!method)
    return raiseApiException("memops.Implementation.PackageLocator: cannot find method 'getRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.PackageLocator: method 'getRepositories' is not callable");
  
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
  @param  Impl_PackageLocator self
  @returns   the result
**/
Impl_MemopsRoot Impl_PackageLocator_GetRoot(Impl_PackageLocator self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getRoot");
  
  if (!method)
    return raiseApiException("memops.Implementation.PackageLocator: cannot find method 'getRoot'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.PackageLocator: method 'getRoot' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Get for memops.Implementation.PackageLocator.targetName

Quaklified name 
of relevant package. If set to 'any' covers all packages that do not 
have  a specific PackageLocator.
  @param  Impl_PackageLocator self
  @returns   the result
**/
ApiString Impl_PackageLocator_GetTargetName(Impl_PackageLocator self)
{
  
  ApiString obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTargetName");
  
  if (!method)
    return raiseApiException("memops.Implementation.PackageLocator: cannot find method 'getTargetName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.PackageLocator: method 'getTargetName' is not callable");
  
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
  @param  Impl_PackageLocator self
  @returns   the result
**/
Impl_MemopsRoot Impl_PackageLocator_GetTopObject(Impl_PackageLocator self)
{
  
  Impl_MemopsRoot obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "getTopObject");
  
  if (!method)
    return raiseApiException("memops.Implementation.PackageLocator: cannot find method 'getTopObject'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.PackageLocator: method 'getTopObject' is not callable");
  
  args = PyTuple_New(0);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Constructor for memops.Implementation.PackageLocator
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
Impl_PackageLocator Impl_PackageLocator_Init(Impl_MemopsRoot parent, ApiMap attrlinks)
{
  
  return Impl_MemopsRoot_NewPackageLocator(parent, attrlinks);
}

/**
  Constructor for memops.Implementation.PackageLocator
  @param  Impl_MemopsRoot parent
  @param  ApiList repositories
  @returns  the new object
**/
Impl_PackageLocator Impl_PackageLocator_Init_reqd(Impl_MemopsRoot parent, ApiList repositories)
{
  
  Impl_PackageLocator  obj;
  PyObject *attrlinks = PyDict_New();

  PyDict_SetItemString(attrlinks, "repositories", repositories);
  
  obj = Impl_PackageLocator_Init(parent, attrlinks);
  
  Py_DECREF(attrlinks);
  
  return obj;
}

/**
  Remove for 
memops.Implementation.PackageLocator.repositories

repositories to 
search for data for packageLocaator packages - ordered to form a search 
path
  @param  Impl_PackageLocator self
  @param  Impl_Repository value
**/
void *Impl_PackageLocator_RemoveRepository(Impl_PackageLocator self, Impl_Repository value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "removeRepository");
  
  if (!method)
    return raiseApiException("memops.Implementation.PackageLocator: cannot find method 'removeRepository'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.PackageLocator: method 'removeRepository' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  SetAttr for memops.Implementation.PackageLocator
  @param  Impl_PackageLocator self
  @param  ApiString name
  @param  ApiObject value
**/
void *Impl_PackageLocator_Set(Impl_PackageLocator self, ApiString name, ApiObject value)
{
  ; // TBD: setattr(self, name, value)
}

/**
  Set for memops.Implementation.PackageLocator.repositories

repositories 
to search for data for packageLocaator packages - ordered to form a 
search path
  @param  Impl_PackageLocator self
  @param  ApiList values
**/
void *Impl_PackageLocator_SetRepositories(Impl_PackageLocator self, ApiList values)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setRepositories");
  
  if (!method)
    return raiseApiException("memops.Implementation.PackageLocator: cannot find method 'setRepositories'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.PackageLocator: method 'setRepositories' is not callable");
  
  args = PyTuple_Pack(1, values);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}

/**
  Set for memops.Implementation.PackageLocator.targetName

Quaklified name 
of relevant package. If set to 'any' covers all packages that do not 
have  a specific PackageLocator.
  @param  Impl_PackageLocator self
  @param  ApiString value
**/
void *Impl_PackageLocator_SetTargetName(Impl_PackageLocator self, ApiString value)
{
  
  void *obj;
  PyObject *args, *method = PyObject_GetAttrString(self, "setTargetName");
  
  if (!method)
    return raiseApiException("memops.Implementation.PackageLocator: cannot find method 'setTargetName'");
  if (!PyCallable_Check(method))
    return raiseApiException("memops.Implementation.PackageLocator: method 'setTargetName' is not callable");
  
  args = PyTuple_Pack(1, value);
  
  obj = PyObject_Call(method, args, NULL);
  
  Py_DECREF(method);
  Py_DECREF(args);
  
  return obj;
}
