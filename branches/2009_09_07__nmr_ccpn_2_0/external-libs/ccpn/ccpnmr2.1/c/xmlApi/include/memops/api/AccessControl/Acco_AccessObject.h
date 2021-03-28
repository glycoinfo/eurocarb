
#ifndef __incl__memops_api_AccessControl_AccessObject_h__
#define __incl__memops_api_AccessControl_AccessObject_h__

#include "ccp.h"

/*
  
*/

/* package memops.api.AccessControl */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessObject self
  @param  Impl_ApplicationData value
**/
extern void *Acco_AccessObject_AddApplicationData(Acco_AccessObject self, Impl_ApplicationData value);

/**
  CheckAllValid for memops.AccessControl.AccessObject
  @param  Acco_AccessObject self
  @param  ApiBoolean complete
**/
extern void *Acco_AccessObject_CheckAllValid(Acco_AccessObject self, ApiBoolean complete);

/**
  CheckValid for memops.AccessControl.AccessObject
  @param  Acco_AccessObject self
  @param  ApiBoolean complete
**/
extern void *Acco_AccessObject_CheckValid(Acco_AccessObject self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessObject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Acco_AccessObject_FindAllApplicationData(Acco_AccessObject self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessObject self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Acco_AccessObject_FindAllApplicationData_keyval0(Acco_AccessObject self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessObject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Acco_AccessObject_FindAllApplicationData_keyval1(Acco_AccessObject self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessObject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Acco_AccessObject_FindAllApplicationData_keyval2(Acco_AccessObject self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessObject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Acco_AccessObject_FindAllApplicationData_keyval3(Acco_AccessObject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessObject self
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
extern ApiList Acco_AccessObject_FindAllApplicationData_keyval4(Acco_AccessObject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for memops.AccessControl.AccessObject.permissions

child link to 
class Permission
  @param  Acco_AccessObject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Acco_AccessObject_FindAllPermissions(Acco_AccessObject self, ApiMap conditions);

/**
  FindAll for memops.AccessControl.AccessObject.permissions

child link to 
class Permission
  @param  Acco_AccessObject self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Acco_AccessObject_FindAllPermissions_keyval0(Acco_AccessObject self);

/**
  FindAll for memops.AccessControl.AccessObject.permissions

child link to 
class Permission
  @param  Acco_AccessObject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Acco_AccessObject_FindAllPermissions_keyval1(Acco_AccessObject self, char * key, ApiObject value);

/**
  FindAll for memops.AccessControl.AccessObject.permissions

child link to 
class Permission
  @param  Acco_AccessObject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Acco_AccessObject_FindAllPermissions_keyval2(Acco_AccessObject self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for memops.AccessControl.AccessObject.permissions

child link to 
class Permission
  @param  Acco_AccessObject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Acco_AccessObject_FindAllPermissions_keyval3(Acco_AccessObject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for memops.AccessControl.AccessObject.permissions

child link to 
class Permission
  @param  Acco_AccessObject self
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
extern ApiSet Acco_AccessObject_FindAllPermissions_keyval4(Acco_AccessObject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessObject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Acco_AccessObject_FindFirstApplicationData(Acco_AccessObject self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessObject self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Acco_AccessObject_FindFirstApplicationData_keyval0(Acco_AccessObject self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessObject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Acco_AccessObject_FindFirstApplicationData_keyval1(Acco_AccessObject self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessObject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Acco_AccessObject_FindFirstApplicationData_keyval2(Acco_AccessObject self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessObject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Acco_AccessObject_FindFirstApplicationData_keyval3(Acco_AccessObject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessObject self
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
extern Impl_ApplicationData Acco_AccessObject_FindFirstApplicationData_keyval4(Acco_AccessObject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for memops.AccessControl.AccessObject.permissions

child link 
to class Permission
  @param  Acco_AccessObject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Acco_Permission Acco_AccessObject_FindFirstPermission(Acco_AccessObject self, ApiMap conditions);

/**
  FindFirst for memops.AccessControl.AccessObject.permissions

child link 
to class Permission
  @param  Acco_AccessObject self
  @returns  the first value that satisfies the conditions 
**/
extern Acco_Permission Acco_AccessObject_FindFirstPermission_keyval0(Acco_AccessObject self);

/**
  FindFirst for memops.AccessControl.AccessObject.permissions

child link 
to class Permission
  @param  Acco_AccessObject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Acco_Permission Acco_AccessObject_FindFirstPermission_keyval1(Acco_AccessObject self, char * key, ApiObject value);

/**
  FindFirst for memops.AccessControl.AccessObject.permissions

child link 
to class Permission
  @param  Acco_AccessObject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Acco_Permission Acco_AccessObject_FindFirstPermission_keyval2(Acco_AccessObject self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for memops.AccessControl.AccessObject.permissions

child link 
to class Permission
  @param  Acco_AccessObject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Acco_Permission Acco_AccessObject_FindFirstPermission_keyval3(Acco_AccessObject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for memops.AccessControl.AccessObject.permissions

child link 
to class Permission
  @param  Acco_AccessObject self
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
extern Acco_Permission Acco_AccessObject_FindFirstPermission_keyval4(Acco_AccessObject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for memops.AccessControl.AccessObject
  @param  Acco_AccessObject self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Acco_AccessObject_Get(Acco_AccessObject self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Acco_AccessObject self
  @returns   the result
**/
extern Acco_AccessObject Acco_AccessObject_GetAccess(Acco_AccessObject self);

/**
  Get for memops.AccessControl.AccessObject.accessControlStore

parent 
link
  @param  Acco_AccessObject self
  @returns   the result
**/
extern Acco_AccessControlStore Acco_AccessObject_GetAccessControlStore(Acco_AccessObject self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Acco_AccessObject self
  @returns   the result
**/
extern Acco_AccessObject Acco_AccessObject_GetActiveAccess(Acco_AccessObject self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessObject self
  @returns   the result
**/
extern ApiList Acco_AccessObject_GetApplicationData(Acco_AccessObject self);

/**
  GetByKey for memops.AccessControl.AccessObject
  @param  Acco_AccessObject self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Acco_AccessObject Acco_AccessObject_GetByKey(Acco_AccessObject self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Acco_AccessObject self
  @returns   the result
**/
extern ApiString Acco_AccessObject_GetClassName(Acco_AccessObject self);

/**
  Get for memops.AccessControl.AccessObject.dataObject

DataObject that is 
controlled by AccessObject
  @param  Acco_AccessObject self
  @returns   the result
**/
extern Impl_DataObject Acco_AccessObject_GetDataObject(Acco_AccessObject self);

/**
  Get for memops.AccessControl.AccessObject.description
  @param  Acco_AccessObject self
  @returns   the result
**/
extern ApiString Acco_AccessObject_GetDescription(Acco_AccessObject self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Acco_AccessObject self
  @returns   the result
**/
extern ApiList Acco_AccessObject_GetFieldNames(Acco_AccessObject self);

/**
  GetFullKey for memops.AccessControl.AccessObject
  @param  Acco_AccessObject self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Acco_AccessObject_GetFullKey(Acco_AccessObject self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Acco_AccessObject self
  @returns   the result
**/
extern ApiBoolean Acco_AccessObject_GetInConstructor(Acco_AccessObject self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Acco_AccessObject self
  @returns   the result
**/
extern ApiBoolean Acco_AccessObject_GetIsDeleted(Acco_AccessObject self);

/**
  GetLocalKey for memops.AccessControl.AccessObject
  @param  Acco_AccessObject self
  @returns  Local object key
**/
extern ApiObject Acco_AccessObject_GetLocalKey(Acco_AccessObject self);

/**
  Get for memops.AccessControl.AccessObject.name
  @param  Acco_AccessObject self
  @returns   the result
**/
extern ApiString Acco_AccessObject_GetName(Acco_AccessObject self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Acco_AccessObject self
  @returns   the result
**/
extern ApiString Acco_AccessObject_GetPackageName(Acco_AccessObject self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Acco_AccessObject self
  @returns   the result
**/
extern ApiString Acco_AccessObject_GetPackageShortName(Acco_AccessObject self);

/**
  Get for memops.AccessControl.AccessObject.parent

link to parent object 
- synonym for accessControlStore
  @param  Acco_AccessObject self
  @returns   the result
**/
extern Acco_AccessControlStore Acco_AccessObject_GetParent(Acco_AccessObject self);

/**
  Get for memops.AccessControl.AccessObject.permissions

child link to 
class Permission
  @param  Acco_AccessObject self
  @returns   the result
**/
extern ApiSet Acco_AccessObject_GetPermissions(Acco_AccessObject self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Acco_AccessObject self
  @returns   the result
**/
extern ApiString Acco_AccessObject_GetQualifiedName(Acco_AccessObject self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Acco_AccessObject self
  @returns   the result
**/
extern Impl_MemopsRoot Acco_AccessObject_GetRoot(Acco_AccessObject self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Acco_AccessObject self
  @returns   the result
**/
extern Impl_TopObject Acco_AccessObject_GetTopObject(Acco_AccessObject self);

/**
  Constructor for memops.AccessControl.AccessObject
  @param  Acco_AccessControlStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Acco_AccessObject Acco_AccessObject_Init(Acco_AccessControlStore parent, ApiMap attrlinks);

/**
  Constructor for memops.AccessControl.AccessObject
  @param  Acco_AccessControlStore parent
  @param  char * name
  @returns  the new object
**/
extern Acco_AccessObject Acco_AccessObject_Init_reqd(Acco_AccessControlStore parent, char * name);

/**
  Factory function to create memops.AccessControl.Permission
  @param  Acco_AccessObject self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Acco_Permission Acco_AccessObject_NewPermission(Acco_AccessObject self, ApiMap attrlinks);

/**
  Factory function to create memops.AccessControl.Permission
  @param  Acco_AccessObject self
  @param  Acco_UserGroup userGroup
  @returns  the new object
**/
extern Acco_Permission Acco_AccessObject_NewPermission_reqd(Acco_AccessObject self, Acco_UserGroup userGroup);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessObject self
  @param  Impl_ApplicationData value
**/
extern void *Acco_AccessObject_RemoveApplicationData(Acco_AccessObject self, Impl_ApplicationData value);

/**
  SetAttr for memops.AccessControl.AccessObject
  @param  Acco_AccessObject self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Acco_AccessObject_Set(Acco_AccessObject self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Acco_AccessObject self
  @param  Acco_AccessObject value
**/
extern void *Acco_AccessObject_SetAccess(Acco_AccessObject self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Acco_AccessObject self
  @param  ApiList values
**/
extern void *Acco_AccessObject_SetApplicationData(Acco_AccessObject self, ApiList values);

/**
  Set for memops.AccessControl.AccessObject.dataObject

DataObject that is 
controlled by AccessObject
  @param  Acco_AccessObject self
  @param  Impl_DataObject value
**/
extern void *Acco_AccessObject_SetDataObject(Acco_AccessObject self, Impl_DataObject value);

/**
  Set for memops.AccessControl.AccessObject.description
  @param  Acco_AccessObject self
  @param  ApiString value
**/
extern void *Acco_AccessObject_SetDescription(Acco_AccessObject self, ApiString value);

/**
  Set for memops.AccessControl.AccessObject.name
  @param  Acco_AccessObject self
  @param  ApiString value
**/
extern void *Acco_AccessObject_SetName(Acco_AccessObject self, ApiString value);

/**
  Sorted for memops.AccessControl.AccessObject.permissions

child link to 
class Permission
  @param  Acco_AccessObject self
  @returns   the result
**/
extern ApiList Acco_AccessObject_SortedPermissions(Acco_AccessObject self);

#endif /* __incl__memops_api_AccessControl_AccessObject_h__ */
