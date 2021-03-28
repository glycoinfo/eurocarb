
#ifndef __incl__memops_api_Implementation_Repository_h__
#define __incl__memops_api_Implementation_Repository_h__

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
extern void *Impl_Repository_AddStored(Impl_Repository self, Impl_PackageLocator value);

/**
  CheckAllValid for memops.Implementation.Repository
  @param  Impl_Repository self
  @param  ApiBoolean complete
**/
extern void *Impl_Repository_CheckAllValid(Impl_Repository self, ApiBoolean complete);

/**
  CheckValid for memops.Implementation.Repository
  @param  Impl_Repository self
  @param  ApiBoolean complete
**/
extern void *Impl_Repository_CheckValid(Impl_Repository self, ApiBoolean complete);

/**
  FullDelete for memops.Implementation.Repository
  @param  Impl_Repository self
**/
extern void *Impl_Repository_Delete(Impl_Repository self);

/**
  FindAll for memops.Implementation.Repository.stored

Groups of packages 
(LocationInfo) stored in repository.
  @param  Impl_Repository self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Impl_Repository_FindAllStored(Impl_Repository self, ApiMap conditions);

/**
  FindAll for memops.Implementation.Repository.stored

Groups of packages 
(LocationInfo) stored in repository.
  @param  Impl_Repository self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Impl_Repository_FindAllStored_keyval0(Impl_Repository self);

/**
  FindAll for memops.Implementation.Repository.stored

Groups of packages 
(LocationInfo) stored in repository.
  @param  Impl_Repository self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Impl_Repository_FindAllStored_keyval1(Impl_Repository self, char * key, ApiObject value);

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
extern ApiSet Impl_Repository_FindAllStored_keyval2(Impl_Repository self, char * key1, ApiObject value1, char * key2, ApiObject value2);

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
extern ApiSet Impl_Repository_FindAllStored_keyval3(Impl_Repository self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

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
extern ApiSet Impl_Repository_FindAllStored_keyval4(Impl_Repository self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for memops.Implementation.Repository.stored

Groups of 
packages (LocationInfo) stored in repository.
  @param  Impl_Repository self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_PackageLocator Impl_Repository_FindFirstStored(Impl_Repository self, ApiMap conditions);

/**
  FindFirst for memops.Implementation.Repository.stored

Groups of 
packages (LocationInfo) stored in repository.
  @param  Impl_Repository self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_PackageLocator Impl_Repository_FindFirstStored_keyval0(Impl_Repository self);

/**
  FindFirst for memops.Implementation.Repository.stored

Groups of 
packages (LocationInfo) stored in repository.
  @param  Impl_Repository self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_PackageLocator Impl_Repository_FindFirstStored_keyval1(Impl_Repository self, char * key, ApiObject value);

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
extern Impl_PackageLocator Impl_Repository_FindFirstStored_keyval2(Impl_Repository self, char * key1, ApiObject value1, char * key2, ApiObject value2);

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
extern Impl_PackageLocator Impl_Repository_FindFirstStored_keyval3(Impl_Repository self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

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
extern Impl_PackageLocator Impl_Repository_FindFirstStored_keyval4(Impl_Repository self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for memops.Implementation.Repository
  @param  Impl_Repository self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Impl_Repository_Get(Impl_Repository self, ApiString name);

/**
  GetByKey for memops.Implementation.Repository
  @param  Impl_Repository self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Impl_Repository Impl_Repository_GetByKey(Impl_Repository self, Impl_MemopsRoot startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Impl_Repository self
  @returns   the result
**/
extern ApiString Impl_Repository_GetClassName(Impl_Repository self);

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
extern ApiList Impl_Repository_GetFieldNames(Impl_Repository self);

/**
  get absolute file location for TopObject in repository
  @param  Impl_Repository self
  @param  ApiString packageName
  @returns  
**/
extern ApiString Impl_Repository_GetFileLocation(Impl_Repository self, ApiString packageName);

/**
  Get for memops.Implementation.Repository.format

Format in which data 
are supplied (default is 'xml', meaning standard CCPN XML). May differ 
from the format in which data are actually stored.
  @param  Impl_Repository self
  @returns   the result
**/
extern ApiString Impl_Repository_GetFormat(Impl_Repository self);

/**
  GetFullKey for memops.Implementation.Repository
  @param  Impl_Repository self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Impl_Repository_GetFullKey(Impl_Repository self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Impl_Repository self
  @returns   the result
**/
extern ApiBoolean Impl_Repository_GetInConstructor(Impl_Repository self);

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
extern ApiBoolean Impl_Repository_GetIsDeleted(Impl_Repository self);

/**
  GetLocalKey for memops.Implementation.Repository
  @param  Impl_Repository self
  @returns  Local object key
**/
extern ApiObject Impl_Repository_GetLocalKey(Impl_Repository self);

/**
  Get for memops.Implementation.Repository.memopsRoot

parent link
  @param  Impl_Repository self
  @returns   the result
**/
extern Impl_MemopsRoot Impl_Repository_GetMemopsRoot(Impl_Repository self);

/**
  Get for memops.Implementation.Repository.name

name of repository
  @param  Impl_Repository self
  @returns   the result
**/
extern ApiString Impl_Repository_GetName(Impl_Repository self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Impl_Repository self
  @returns   the result
**/
extern ApiString Impl_Repository_GetPackageName(Impl_Repository self);

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
extern ApiString Impl_Repository_GetPackageShortName(Impl_Repository self);

/**
  Get for memops.Implementation.Repository.parent

link to parent object - 
synonym for memopsRoot
  @param  Impl_Repository self
  @returns   the result
**/
extern Impl_MemopsRoot Impl_Repository_GetParent(Impl_Repository self);

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
extern ApiString Impl_Repository_GetQualifiedName(Impl_Repository self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Impl_Repository self
  @returns   the result
**/
extern Impl_MemopsRoot Impl_Repository_GetRoot(Impl_Repository self);

/**
  Get for memops.Implementation.Repository.stored

Groups of packages 
(LocationInfo) stored in repository.
  @param  Impl_Repository self
  @returns   the result
**/
extern ApiSet Impl_Repository_GetStored(Impl_Repository self);

/**
  Get for memops.Implementation.ImplementationObject.topObject

TopObject 
- topmost parent in package.
  @param  Impl_Repository self
  @returns   the result
**/
extern Impl_MemopsRoot Impl_Repository_GetTopObject(Impl_Repository self);

/**
  Get for memops.Implementation.Repository.url

Url of data repository
  @param  Impl_Repository self
  @returns   the result
**/
extern Impl_Url Impl_Repository_GetUrl(Impl_Repository self);

/**
  Constructor for memops.Implementation.Repository
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Impl_Repository Impl_Repository_Init(Impl_MemopsRoot parent, ApiMap attrlinks);

/**
  Constructor for memops.Implementation.Repository
  @param  Impl_MemopsRoot parent
  @param  char * name
  @param  Impl_Url url
  @returns  the new object
**/
extern Impl_Repository Impl_Repository_Init_reqd(Impl_MemopsRoot parent, char * name, Impl_Url url);

/**
  Remove for memops.Implementation.Repository.stored

Groups of packages 
(LocationInfo) stored in repository.
  @param  Impl_Repository self
  @param  Impl_PackageLocator value
**/
extern void *Impl_Repository_RemoveStored(Impl_Repository self, Impl_PackageLocator value);

/**
  SetAttr for memops.Implementation.Repository
  @param  Impl_Repository self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Impl_Repository_Set(Impl_Repository self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.Repository.format

Format in which data 
are supplied (default is 'xml', meaning standard CCPN XML). May differ 
from the format in which data are actually stored.
  @param  Impl_Repository self
  @param  ApiString value
**/
extern void *Impl_Repository_SetFormat(Impl_Repository self, ApiString value);

/**
  Set for memops.Implementation.Repository.name

name of repository
  @param  Impl_Repository self
  @param  ApiString value
**/
extern void *Impl_Repository_SetName(Impl_Repository self, ApiString value);

/**
  Set for memops.Implementation.Repository.stored

Groups of packages 
(LocationInfo) stored in repository.
  @param  Impl_Repository self
  @param  ApiSet values
**/
extern void *Impl_Repository_SetStored(Impl_Repository self, ApiSet values);

/**
  Set for memops.Implementation.Repository.url

Url of data repository
  @param  Impl_Repository self
  @param  Impl_Url value
**/
extern void *Impl_Repository_SetUrl(Impl_Repository self, Impl_Url value);

/**
  Sorted for memops.Implementation.Repository.stored

Groups of packages 
(LocationInfo) stored in repository.
  @param  Impl_Repository self
  @returns   the result
**/
extern ApiList Impl_Repository_SortedStored(Impl_Repository self);

#endif /* __incl__memops_api_Implementation_Repository_h__ */
