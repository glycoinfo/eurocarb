
#ifndef __incl__memops_api_AccessControl_User_h__
#define __incl__memops_api_AccessControl_User_h__

#include "ccp.h"

/*
  
*/

/* package memops.api.AccessControl */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_User self
  @param  Impl_ApplicationData value
**/
extern void *Acco_User_AddApplicationData(Acco_User self, Impl_ApplicationData value);

/**
  Add for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @param  Acco_UserGroup value
**/
extern void *Acco_User_AddLedGroup(Acco_User self, Acco_UserGroup value);

/**
  CheckAllValid for memops.AccessControl.User
  @param  Acco_User self
  @param  ApiBoolean complete
**/
extern void *Acco_User_CheckAllValid(Acco_User self, ApiBoolean complete);

/**
  CheckValid for memops.AccessControl.User
  @param  Acco_User self
  @param  ApiBoolean complete
**/
extern void *Acco_User_CheckValid(Acco_User self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_User self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Acco_User_FindAllApplicationData(Acco_User self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_User self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Acco_User_FindAllApplicationData_keyval0(Acco_User self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_User self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Acco_User_FindAllApplicationData_keyval1(Acco_User self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_User self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Acco_User_FindAllApplicationData_keyval2(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_User self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Acco_User_FindAllApplicationData_keyval3(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_User self
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
extern ApiList Acco_User_FindAllApplicationData_keyval4(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Acco_User_FindAllLedGroups(Acco_User self, ApiMap conditions);

/**
  FindAll for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Acco_User_FindAllLedGroups_keyval0(Acco_User self);

/**
  FindAll for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Acco_User_FindAllLedGroups_keyval1(Acco_User self, char * key, ApiObject value);

/**
  FindAll for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Acco_User_FindAllLedGroups_keyval2(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Acco_User_FindAllLedGroups_keyval3(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for memops.AccessControl.User.ledGroups
  @param  Acco_User self
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
extern ApiSet Acco_User_FindAllLedGroups_keyval4(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for memops.AccessControl.User.userGroups
  @param  Acco_User self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Acco_User_FindAllUserGroups(Acco_User self, ApiMap conditions);

/**
  FindAll for memops.AccessControl.User.userGroups
  @param  Acco_User self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Acco_User_FindAllUserGroups_keyval0(Acco_User self);

/**
  FindAll for memops.AccessControl.User.userGroups
  @param  Acco_User self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Acco_User_FindAllUserGroups_keyval1(Acco_User self, char * key, ApiObject value);

/**
  FindAll for memops.AccessControl.User.userGroups
  @param  Acco_User self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Acco_User_FindAllUserGroups_keyval2(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for memops.AccessControl.User.userGroups
  @param  Acco_User self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Acco_User_FindAllUserGroups_keyval3(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for memops.AccessControl.User.userGroups
  @param  Acco_User self
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
extern ApiSet Acco_User_FindAllUserGroups_keyval4(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_User self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Acco_User_FindFirstApplicationData(Acco_User self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_User self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Acco_User_FindFirstApplicationData_keyval0(Acco_User self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_User self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Acco_User_FindFirstApplicationData_keyval1(Acco_User self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_User self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Acco_User_FindFirstApplicationData_keyval2(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_User self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Acco_User_FindFirstApplicationData_keyval3(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_User self
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
extern Impl_ApplicationData Acco_User_FindFirstApplicationData_keyval4(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Acco_UserGroup Acco_User_FindFirstLedGroup(Acco_User self, ApiMap conditions);

/**
  FindFirst for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @returns  the first value that satisfies the conditions 
**/
extern Acco_UserGroup Acco_User_FindFirstLedGroup_keyval0(Acco_User self);

/**
  FindFirst for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Acco_UserGroup Acco_User_FindFirstLedGroup_keyval1(Acco_User self, char * key, ApiObject value);

/**
  FindFirst for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Acco_UserGroup Acco_User_FindFirstLedGroup_keyval2(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Acco_UserGroup Acco_User_FindFirstLedGroup_keyval3(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for memops.AccessControl.User.ledGroups
  @param  Acco_User self
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
extern Acco_UserGroup Acco_User_FindFirstLedGroup_keyval4(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for memops.AccessControl.User.userGroups
  @param  Acco_User self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Acco_UserGroup Acco_User_FindFirstUserGroup(Acco_User self, ApiMap conditions);

/**
  FindFirst for memops.AccessControl.User.userGroups
  @param  Acco_User self
  @returns  the first value that satisfies the conditions 
**/
extern Acco_UserGroup Acco_User_FindFirstUserGroup_keyval0(Acco_User self);

/**
  FindFirst for memops.AccessControl.User.userGroups
  @param  Acco_User self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Acco_UserGroup Acco_User_FindFirstUserGroup_keyval1(Acco_User self, char * key, ApiObject value);

/**
  FindFirst for memops.AccessControl.User.userGroups
  @param  Acco_User self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Acco_UserGroup Acco_User_FindFirstUserGroup_keyval2(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for memops.AccessControl.User.userGroups
  @param  Acco_User self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Acco_UserGroup Acco_User_FindFirstUserGroup_keyval3(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for memops.AccessControl.User.userGroups
  @param  Acco_User self
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
extern Acco_UserGroup Acco_User_FindFirstUserGroup_keyval4(Acco_User self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for memops.AccessControl.User
  @param  Acco_User self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Acco_User_Get(Acco_User self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Acco_User self
  @returns   the result
**/
extern Acco_AccessObject Acco_User_GetAccess(Acco_User self);

/**
  Get for memops.AccessControl.User.accessControlStore

parent link
  @param  Acco_User self
  @returns   the result
**/
extern Acco_AccessControlStore Acco_User_GetAccessControlStore(Acco_User self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Acco_User self
  @returns   the result
**/
extern Acco_AccessObject Acco_User_GetActiveAccess(Acco_User self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_User self
  @returns   the result
**/
extern ApiList Acco_User_GetApplicationData(Acco_User self);

/**
  GetByKey for memops.AccessControl.User
  @param  Acco_User self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Acco_User Acco_User_GetByKey(Acco_User self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Acco_User self
  @returns   the result
**/
extern ApiString Acco_User_GetClassName(Acco_User self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Acco_User self
  @returns   the result
**/
extern ApiList Acco_User_GetFieldNames(Acco_User self);

/**
  GetFullKey for memops.AccessControl.User
  @param  Acco_User self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Acco_User_GetFullKey(Acco_User self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Acco_User self
  @returns   the result
**/
extern ApiBoolean Acco_User_GetInConstructor(Acco_User self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Acco_User self
  @returns   the result
**/
extern ApiBoolean Acco_User_GetIsDeleted(Acco_User self);

/**
  Get for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @returns   the result
**/
extern ApiSet Acco_User_GetLedGroups(Acco_User self);

/**
  GetLocalKey for memops.AccessControl.User
  @param  Acco_User self
  @returns  Local object key
**/
extern ApiObject Acco_User_GetLocalKey(Acco_User self);

/**
  Get for memops.AccessControl.User.name
  @param  Acco_User self
  @returns   the result
**/
extern ApiString Acco_User_GetName(Acco_User self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Acco_User self
  @returns   the result
**/
extern ApiString Acco_User_GetPackageName(Acco_User self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Acco_User self
  @returns   the result
**/
extern ApiString Acco_User_GetPackageShortName(Acco_User self);

/**
  Get for memops.AccessControl.User.parent

link to parent object - 
synonym for accessControlStore
  @param  Acco_User self
  @returns   the result
**/
extern Acco_AccessControlStore Acco_User_GetParent(Acco_User self);

/**
  Get for memops.AccessControl.User.passwordHashed

Hashed password for 
user
  @param  Acco_User self
  @returns   the result
**/
extern ApiString Acco_User_GetPasswordHashed(Acco_User self);

/**
  Get for memops.AccessControl.User.person

Actual person corresponding to 
user
  @param  Acco_User self
  @returns   the result
**/
extern Affi_Person Acco_User_GetPerson(Acco_User self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Acco_User self
  @returns   the result
**/
extern ApiString Acco_User_GetQualifiedName(Acco_User self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Acco_User self
  @returns   the result
**/
extern Impl_MemopsRoot Acco_User_GetRoot(Acco_User self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Acco_User self
  @returns   the result
**/
extern Impl_TopObject Acco_User_GetTopObject(Acco_User self);

/**
  Get for memops.AccessControl.User.userGroups
  @param  Acco_User self
  @returns   the result
**/
extern ApiSet Acco_User_GetUserGroups(Acco_User self);

/**
  Constructor for memops.AccessControl.User
  @param  Acco_AccessControlStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Acco_User Acco_User_Init(Acco_AccessControlStore parent, ApiMap attrlinks);

/**
  Constructor for memops.AccessControl.User
  @param  Acco_AccessControlStore parent
  @param  char * name
  @returns  the new object
**/
extern Acco_User Acco_User_Init_reqd(Acco_AccessControlStore parent, char * name);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_User self
  @param  Impl_ApplicationData value
**/
extern void *Acco_User_RemoveApplicationData(Acco_User self, Impl_ApplicationData value);

/**
  Remove for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @param  Acco_UserGroup value
**/
extern void *Acco_User_RemoveLedGroup(Acco_User self, Acco_UserGroup value);

/**
  SetAttr for memops.AccessControl.User
  @param  Acco_User self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Acco_User_Set(Acco_User self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Acco_User self
  @param  Acco_AccessObject value
**/
extern void *Acco_User_SetAccess(Acco_User self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_User self
  @param  ApiList values
**/
extern void *Acco_User_SetApplicationData(Acco_User self, ApiList values);

/**
  Set for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @param  ApiSet values
**/
extern void *Acco_User_SetLedGroups(Acco_User self, ApiSet values);

/**
  Set for memops.AccessControl.User.name
  @param  Acco_User self
  @param  ApiString value
**/
extern void *Acco_User_SetName(Acco_User self, ApiString value);

/**
  Set for memops.AccessControl.User.passwordHashed

Hashed password for 
user
  @param  Acco_User self
  @param  ApiString value
**/
extern void *Acco_User_SetPasswordHashed(Acco_User self, ApiString value);

/**
  Set for memops.AccessControl.User.person

Actual person corresponding to 
user
  @param  Acco_User self
  @param  Affi_Person value
**/
extern void *Acco_User_SetPerson(Acco_User self, Affi_Person value);

/**
  Set for memops.AccessControl.User.userGroups
  @param  Acco_User self
  @param  ApiSet values
**/
extern void *Acco_User_SetUserGroups(Acco_User self, ApiSet values);

/**
  Sorted for memops.AccessControl.User.ledGroups
  @param  Acco_User self
  @returns   the result
**/
extern ApiList Acco_User_SortedLedGroups(Acco_User self);

/**
  Sorted for memops.AccessControl.User.userGroups
  @param  Acco_User self
  @returns   the result
**/
extern ApiList Acco_User_SortedUserGroups(Acco_User self);

#endif /* __incl__memops_api_AccessControl_User_h__ */
