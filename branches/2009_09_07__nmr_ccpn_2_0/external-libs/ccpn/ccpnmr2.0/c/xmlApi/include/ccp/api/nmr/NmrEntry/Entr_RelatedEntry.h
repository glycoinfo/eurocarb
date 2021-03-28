
#ifndef __incl__ccp_api_nmr_NmrEntry_RelatedEntry_h__
#define __incl__ccp_api_nmr_NmrEntry_RelatedEntry_h__

#include "ccp.h"

/*
  Database entry related to the current entry.
*/

/* package ccp.api.nmr.NmrEntry */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_RelatedEntry self
  @param  Impl_ApplicationData value
**/
extern void *Entr_RelatedEntry_AddApplicationData(Entr_RelatedEntry self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.nmr.NmrEntry.RelatedEntry
  @param  Entr_RelatedEntry self
  @param  ApiBoolean complete
**/
extern void *Entr_RelatedEntry_CheckAllValid(Entr_RelatedEntry self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrEntry.RelatedEntry
  @param  Entr_RelatedEntry self
  @param  ApiBoolean complete
**/
extern void *Entr_RelatedEntry_CheckValid(Entr_RelatedEntry self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_RelatedEntry self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_RelatedEntry_FindAllApplicationData(Entr_RelatedEntry self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_RelatedEntry self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_RelatedEntry_FindAllApplicationData_keyval0(Entr_RelatedEntry self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_RelatedEntry self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_RelatedEntry_FindAllApplicationData_keyval1(Entr_RelatedEntry self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_RelatedEntry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_RelatedEntry_FindAllApplicationData_keyval2(Entr_RelatedEntry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_RelatedEntry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_RelatedEntry_FindAllApplicationData_keyval3(Entr_RelatedEntry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_RelatedEntry self
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
extern ApiList Entr_RelatedEntry_FindAllApplicationData_keyval4(Entr_RelatedEntry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_RelatedEntry self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Entr_RelatedEntry_FindFirstApplicationData(Entr_RelatedEntry self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_RelatedEntry self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Entr_RelatedEntry_FindFirstApplicationData_keyval0(Entr_RelatedEntry self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_RelatedEntry self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Entr_RelatedEntry_FindFirstApplicationData_keyval1(Entr_RelatedEntry self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_RelatedEntry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Entr_RelatedEntry_FindFirstApplicationData_keyval2(Entr_RelatedEntry self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_RelatedEntry self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Entr_RelatedEntry_FindFirstApplicationData_keyval3(Entr_RelatedEntry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_RelatedEntry self
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
extern Impl_ApplicationData Entr_RelatedEntry_FindFirstApplicationData_keyval4(Entr_RelatedEntry self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrEntry.RelatedEntry
  @param  Entr_RelatedEntry self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Entr_RelatedEntry_Get(Entr_RelatedEntry self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Entr_RelatedEntry self
  @returns   the result
**/
extern Acco_AccessObject Entr_RelatedEntry_GetAccess(Entr_RelatedEntry self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_RelatedEntry self
  @returns   the result
**/
extern ApiList Entr_RelatedEntry_GetApplicationData(Entr_RelatedEntry self);

/**
  GetByKey for ccp.nmr.NmrEntry.RelatedEntry
  @param  Entr_RelatedEntry self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Entr_RelatedEntry Entr_RelatedEntry_GetByKey(Entr_RelatedEntry self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Entr_RelatedEntry self
  @returns   the result
**/
extern ApiString Entr_RelatedEntry_GetClassName(Entr_RelatedEntry self);

/**
  Get for ccp.nmr.NmrEntry.RelatedEntry.dbId

Database identifier of 
related entry
  @param  Entr_RelatedEntry self
  @returns   the result
**/
extern ApiString Entr_RelatedEntry_GetDbId(Entr_RelatedEntry self);

/**
  Get for ccp.nmr.NmrEntry.RelatedEntry.dbName

Name of database 
containing related entry, ('BMRB', 'PDB, ...)
  @param  Entr_RelatedEntry self
  @returns   the result
**/
extern ApiString Entr_RelatedEntry_GetDbName(Entr_RelatedEntry self);

/**
  Get for ccp.nmr.NmrEntry.RelatedEntry.entry

parent link
  @param  Entr_RelatedEntry self
  @returns   the result
**/
extern Entr_Entry Entr_RelatedEntry_GetEntry(Entr_RelatedEntry self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Entr_RelatedEntry self
  @returns   the result
**/
extern ApiList Entr_RelatedEntry_GetFieldNames(Entr_RelatedEntry self);

/**
  GetFullKey for ccp.nmr.NmrEntry.RelatedEntry
  @param  Entr_RelatedEntry self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Entr_RelatedEntry_GetFullKey(Entr_RelatedEntry self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Entr_RelatedEntry self
  @returns   the result
**/
extern ApiBoolean Entr_RelatedEntry_GetInConstructor(Entr_RelatedEntry self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Entr_RelatedEntry self
  @returns   the result
**/
extern ApiBoolean Entr_RelatedEntry_GetIsDeleted(Entr_RelatedEntry self);

/**
  GetLocalKey for ccp.nmr.NmrEntry.RelatedEntry
  @param  Entr_RelatedEntry self
  @returns  Local object key
**/
extern ApiObject Entr_RelatedEntry_GetLocalKey(Entr_RelatedEntry self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Entr_RelatedEntry self
  @returns   the result
**/
extern ApiString Entr_RelatedEntry_GetPackageName(Entr_RelatedEntry self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Entr_RelatedEntry self
  @returns   the result
**/
extern ApiString Entr_RelatedEntry_GetPackageShortName(Entr_RelatedEntry self);

/**
  Get for ccp.nmr.NmrEntry.RelatedEntry.parent

link to parent object - 
synonym for entry
  @param  Entr_RelatedEntry self
  @returns   the result
**/
extern Entr_Entry Entr_RelatedEntry_GetParent(Entr_RelatedEntry self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Entr_RelatedEntry self
  @returns   the result
**/
extern ApiString Entr_RelatedEntry_GetQualifiedName(Entr_RelatedEntry self);

/**
  Get for ccp.nmr.NmrEntry.RelatedEntry.relationship

what is the 
relationship between the current entry and the cited one. NB Should 
probably be an open enum. E.g. 'supersedes',
  @param  Entr_RelatedEntry self
  @returns   the result
**/
extern ApiString Entr_RelatedEntry_GetRelationship(Entr_RelatedEntry self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Entr_RelatedEntry self
  @returns   the result
**/
extern Impl_MemopsRoot Entr_RelatedEntry_GetRoot(Entr_RelatedEntry self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Entr_RelatedEntry self
  @returns   the result
**/
extern Impl_TopObject Entr_RelatedEntry_GetTopObject(Entr_RelatedEntry self);

/**
  Constructor for ccp.nmr.NmrEntry.RelatedEntry
  @param  Entr_Entry parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Entr_RelatedEntry Entr_RelatedEntry_Init(Entr_Entry parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrEntry.RelatedEntry
  @param  Entr_Entry parent
  @param  char * dbId
  @returns  the new object
**/
extern Entr_RelatedEntry Entr_RelatedEntry_Init_reqd(Entr_Entry parent, char * dbId);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_RelatedEntry self
  @param  Impl_ApplicationData value
**/
extern void *Entr_RelatedEntry_RemoveApplicationData(Entr_RelatedEntry self, Impl_ApplicationData value);

/**
  SetAttr for ccp.nmr.NmrEntry.RelatedEntry
  @param  Entr_RelatedEntry self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Entr_RelatedEntry_Set(Entr_RelatedEntry self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Entr_RelatedEntry self
  @param  Acco_AccessObject value
**/
extern void *Entr_RelatedEntry_SetAccess(Entr_RelatedEntry self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_RelatedEntry self
  @param  ApiList values
**/
extern void *Entr_RelatedEntry_SetApplicationData(Entr_RelatedEntry self, ApiList values);

/**
  Set for ccp.nmr.NmrEntry.RelatedEntry.dbId

Database identifier of 
related entry
  @param  Entr_RelatedEntry self
  @param  ApiString value
**/
extern void *Entr_RelatedEntry_SetDbId(Entr_RelatedEntry self, ApiString value);

/**
  Set for ccp.nmr.NmrEntry.RelatedEntry.dbName

Name of database 
containing related entry, ('BMRB', 'PDB, ...)
  @param  Entr_RelatedEntry self
  @param  ApiString value
**/
extern void *Entr_RelatedEntry_SetDbName(Entr_RelatedEntry self, ApiString value);

/**
  Set for ccp.nmr.NmrEntry.RelatedEntry.relationship

what is the 
relationship between the current entry and the cited one. NB Should 
probably be an open enum. E.g. 'supersedes',
  @param  Entr_RelatedEntry self
  @param  ApiString value
**/
extern void *Entr_RelatedEntry_SetRelationship(Entr_RelatedEntry self, ApiString value);

#endif /* __incl__ccp_api_nmr_NmrEntry_RelatedEntry_h__ */
