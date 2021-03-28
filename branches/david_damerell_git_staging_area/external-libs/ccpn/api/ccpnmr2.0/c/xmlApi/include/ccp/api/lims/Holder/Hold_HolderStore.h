
#ifndef __incl__ccp_api_lims_Holder_HolderStore_h__
#define __incl__ccp_api_lims_Holder_HolderStore_h__

#include "ccp.h"

/*
  TopObject for Holder package
*/

/* package ccp.api.lims.Holder */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderStore self
  @param  Impl_ApplicationData value
**/
extern void *Hold_HolderStore_AddApplicationData(Hold_HolderStore self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.lims.Holder.HolderStore
  @param  Hold_HolderStore self
  @param  ApiBoolean complete
**/
extern void *Hold_HolderStore_CheckAllValid(Hold_HolderStore self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.Holder.HolderStore
  @param  Hold_HolderStore self
  @param  ApiBoolean complete
**/
extern void *Hold_HolderStore_CheckValid(Hold_HolderStore self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Hold_HolderStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Hold_HolderStore_FindAllActiveRepositories(Hold_HolderStore self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Hold_HolderStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Hold_HolderStore_FindAllActiveRepositories_keyval0(Hold_HolderStore self);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Hold_HolderStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Hold_HolderStore_FindAllActiveRepositories_keyval1(Hold_HolderStore self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Hold_HolderStore_FindAllActiveRepositories_keyval2(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Hold_HolderStore_FindAllActiveRepositories_keyval3(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Hold_HolderStore self
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
extern ApiList Hold_HolderStore_FindAllActiveRepositories_keyval4(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Hold_HolderStore_FindAllApplicationData(Hold_HolderStore self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Hold_HolderStore_FindAllApplicationData_keyval0(Hold_HolderStore self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Hold_HolderStore_FindAllApplicationData_keyval1(Hold_HolderStore self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Hold_HolderStore_FindAllApplicationData_keyval2(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Hold_HolderStore_FindAllApplicationData_keyval3(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderStore self
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
extern ApiList Hold_HolderStore_FindAllApplicationData_keyval4(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Holder.HolderStore.holderTypes

child link to class 
AbstractHolderType
  @param  Hold_HolderStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Hold_HolderStore_FindAllHolderTypes(Hold_HolderStore self, ApiMap conditions);

/**
  FindAll for ccp.lims.Holder.HolderStore.holderTypes

child link to class 
AbstractHolderType
  @param  Hold_HolderStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Hold_HolderStore_FindAllHolderTypes_keyval0(Hold_HolderStore self);

/**
  FindAll for ccp.lims.Holder.HolderStore.holderTypes

child link to class 
AbstractHolderType
  @param  Hold_HolderStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Hold_HolderStore_FindAllHolderTypes_keyval1(Hold_HolderStore self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Holder.HolderStore.holderTypes

child link to class 
AbstractHolderType
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Hold_HolderStore_FindAllHolderTypes_keyval2(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Holder.HolderStore.holderTypes

child link to class 
AbstractHolderType
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Hold_HolderStore_FindAllHolderTypes_keyval3(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Holder.HolderStore.holderTypes

child link to class 
AbstractHolderType
  @param  Hold_HolderStore self
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
extern ApiSet Hold_HolderStore_FindAllHolderTypes_keyval4(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Holder.HolderStore.holders

child link to class 
Holder
  @param  Hold_HolderStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Hold_HolderStore_FindAllHolders(Hold_HolderStore self, ApiMap conditions);

/**
  FindAll for ccp.lims.Holder.HolderStore.holders

child link to class 
Holder
  @param  Hold_HolderStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Hold_HolderStore_FindAllHolders_keyval0(Hold_HolderStore self);

/**
  FindAll for ccp.lims.Holder.HolderStore.holders

child link to class 
Holder
  @param  Hold_HolderStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Hold_HolderStore_FindAllHolders_keyval1(Hold_HolderStore self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Holder.HolderStore.holders

child link to class 
Holder
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Hold_HolderStore_FindAllHolders_keyval2(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Holder.HolderStore.holders

child link to class 
Holder
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Hold_HolderStore_FindAllHolders_keyval3(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Holder.HolderStore.holders

child link to class 
Holder
  @param  Hold_HolderStore self
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
extern ApiSet Hold_HolderStore_FindAllHolders_keyval4(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Hold_HolderStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Hold_HolderStore_FindFirstActiveRepository(Hold_HolderStore self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Hold_HolderStore self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Hold_HolderStore_FindFirstActiveRepository_keyval0(Hold_HolderStore self);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Hold_HolderStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Hold_HolderStore_FindFirstActiveRepository_keyval1(Hold_HolderStore self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Hold_HolderStore_FindFirstActiveRepository_keyval2(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Hold_HolderStore_FindFirstActiveRepository_keyval3(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Hold_HolderStore self
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
extern Impl_Repository Hold_HolderStore_FindFirstActiveRepository_keyval4(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Hold_HolderStore_FindFirstApplicationData(Hold_HolderStore self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderStore self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Hold_HolderStore_FindFirstApplicationData_keyval0(Hold_HolderStore self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Hold_HolderStore_FindFirstApplicationData_keyval1(Hold_HolderStore self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Hold_HolderStore_FindFirstApplicationData_keyval2(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Hold_HolderStore_FindFirstApplicationData_keyval3(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderStore self
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
extern Impl_ApplicationData Hold_HolderStore_FindFirstApplicationData_keyval4(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Holder.HolderStore.holders

child link to class 
Holder
  @param  Hold_HolderStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Hold_Holder Hold_HolderStore_FindFirstHolder(Hold_HolderStore self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Holder.HolderStore.holderTypes

child link to 
class AbstractHolderType
  @param  Hold_HolderStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Hold_AbstractHolderType Hold_HolderStore_FindFirstHolderType(Hold_HolderStore self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Holder.HolderStore.holderTypes

child link to 
class AbstractHolderType
  @param  Hold_HolderStore self
  @returns  the first value that satisfies the conditions 
**/
extern Hold_AbstractHolderType Hold_HolderStore_FindFirstHolderType_keyval0(Hold_HolderStore self);

/**
  FindFirst for ccp.lims.Holder.HolderStore.holderTypes

child link to 
class AbstractHolderType
  @param  Hold_HolderStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Hold_AbstractHolderType Hold_HolderStore_FindFirstHolderType_keyval1(Hold_HolderStore self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Holder.HolderStore.holderTypes

child link to 
class AbstractHolderType
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Hold_AbstractHolderType Hold_HolderStore_FindFirstHolderType_keyval2(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Holder.HolderStore.holderTypes

child link to 
class AbstractHolderType
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Hold_AbstractHolderType Hold_HolderStore_FindFirstHolderType_keyval3(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Holder.HolderStore.holderTypes

child link to 
class AbstractHolderType
  @param  Hold_HolderStore self
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
extern Hold_AbstractHolderType Hold_HolderStore_FindFirstHolderType_keyval4(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Holder.HolderStore.holders

child link to class 
Holder
  @param  Hold_HolderStore self
  @returns  the first value that satisfies the conditions 
**/
extern Hold_Holder Hold_HolderStore_FindFirstHolder_keyval0(Hold_HolderStore self);

/**
  FindFirst for ccp.lims.Holder.HolderStore.holders

child link to class 
Holder
  @param  Hold_HolderStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Hold_Holder Hold_HolderStore_FindFirstHolder_keyval1(Hold_HolderStore self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Holder.HolderStore.holders

child link to class 
Holder
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Hold_Holder Hold_HolderStore_FindFirstHolder_keyval2(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Holder.HolderStore.holders

child link to class 
Holder
  @param  Hold_HolderStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Hold_Holder Hold_HolderStore_FindFirstHolder_keyval3(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Holder.HolderStore.holders

child link to class 
Holder
  @param  Hold_HolderStore self
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
extern Hold_Holder Hold_HolderStore_FindFirstHolder_keyval4(Hold_HolderStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.Holder.HolderStore
  @param  Hold_HolderStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Hold_HolderStore_Get(Hold_HolderStore self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Hold_HolderStore self
  @returns   the result
**/
extern Acco_AccessObject Hold_HolderStore_GetAccess(Hold_HolderStore self);

/**
  Get for memops.Implementation.TopObject.activeRepositories

Repositories 
on package search path that contains a copy of TopObject
  @param  Hold_HolderStore self
  @returns   the result
**/
extern ApiList Hold_HolderStore_GetActiveRepositories(Hold_HolderStore self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderStore self
  @returns   the result
**/
extern ApiList Hold_HolderStore_GetApplicationData(Hold_HolderStore self);

/**
  GetByKey for ccp.lims.Holder.HolderStore
  @param  Hold_HolderStore self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Hold_HolderStore Hold_HolderStore_GetByKey(Hold_HolderStore self, Impl_MemopsRoot startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Hold_HolderStore self
  @returns   the result
**/
extern ApiString Hold_HolderStore_GetClassName(Hold_HolderStore self);

/**
  Get for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Hold_HolderStore self
  @returns   the result
**/
extern ApiString Hold_HolderStore_GetCreatedBy(Hold_HolderStore self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Hold_HolderStore self
  @returns   the result
**/
extern ApiList Hold_HolderStore_GetFieldNames(Hold_HolderStore self);

/**
  GetFullKey for ccp.lims.Holder.HolderStore
  @param  Hold_HolderStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Hold_HolderStore_GetFullKey(Hold_HolderStore self, ApiBoolean useGuid);

/**
  Get for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Hold_HolderStore self
  @returns   the result
**/
extern ApiString Hold_HolderStore_GetGuid(Hold_HolderStore self);

/**
  Get for ccp.lims.Holder.HolderStore.holderTypes

child link to class 
AbstractHolderType
  @param  Hold_HolderStore self
  @returns   the result
**/
extern ApiSet Hold_HolderStore_GetHolderTypes(Hold_HolderStore self);

/**
  Get for ccp.lims.Holder.HolderStore.holders

child link to class Holder
  @param  Hold_HolderStore self
  @returns   the result
**/
extern ApiSet Hold_HolderStore_GetHolders(Hold_HolderStore self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Hold_HolderStore self
  @returns   the result
**/
extern ApiBoolean Hold_HolderStore_GetInConstructor(Hold_HolderStore self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Hold_HolderStore self
  @returns   the result
**/
extern ApiBoolean Hold_HolderStore_GetIsDeleted(Hold_HolderStore self);

/**
  Get for memops.Implementation.TopObject.isLoaded

Implementation 
attribute, set automatically. True if the data in the Storage are loaded 
into memory. As data are loaded automatically, this attribute should be 
of interest only for the implementation.
  @param  Hold_HolderStore self
  @returns   the result
**/
extern ApiBoolean Hold_HolderStore_GetIsLoaded(Hold_HolderStore self);

/**
  Get for memops.Implementation.TopObject.isModifiable

True if the data 
corresponding to the storage may be modified. If isModifiable is false 
for a given package, attemps to modify the data will raise an error. 
Note that isModifiable can be set to true even if the corresponding file 
is read-only. 

For a Project, this atribute defines whether the 
Implementation package (not the entire project contents) can be 
modified. If the Implementation package is Read-Only, this will prohibit 
many changes in the other packages as well.

This parameter can be 
freely modified by users, so it is not a security feature, but rather a 
protection against accidental changes.
  @param  Hold_HolderStore self
  @returns   the result
**/
extern ApiBoolean Hold_HolderStore_GetIsModifiable(Hold_HolderStore self);

/**
  Get for memops.Implementation.TopObject.isModified

Implementation 
attribute. True if the data corresponding to the Storage have been 
modified since being loaded. Serves to indicate which data need to be 
saved.
  @param  Hold_HolderStore self
  @returns   the result
**/
extern ApiBoolean Hold_HolderStore_GetIsModified(Hold_HolderStore self);

/**
  Get for memops.Implementation.TopObject.isReading

Implementation 
attribute, set automatically. True if the data corresponding to the 
Storage are in the process of being read. As data loading is handled 
automatically, this attribute should be relevant only for the 
implementation, or possibly for programmers of multithreaded programs. 
Serves to suppress notifiers and validity checking during reading. Note 
that objects are not valid until the data loading is completed.
  @param  Hold_HolderStore self
  @returns   the result
**/
extern ApiBoolean Hold_HolderStore_GetIsReading(Hold_HolderStore self);

/**
  Get for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Hold_HolderStore self
  @returns   the result
**/
extern ApiString Hold_HolderStore_GetLastUnlockedBy(Hold_HolderStore self);

/**
  GetLocalKey for ccp.lims.Holder.HolderStore
  @param  Hold_HolderStore self
  @returns  Local object key
**/
extern ApiObject Hold_HolderStore_GetLocalKey(Hold_HolderStore self);

/**
  Get for ccp.lims.Holder.HolderStore.memopsRoot

parent link
  @param  Hold_HolderStore self
  @returns   the result
**/
extern Impl_MemopsRoot Hold_HolderStore_GetMemopsRoot(Hold_HolderStore self);

/**
  Get for ccp.lims.Holder.HolderStore.name

name of HolderStore
  @param  Hold_HolderStore self
  @returns   the result
**/
extern ApiString Hold_HolderStore_GetName(Hold_HolderStore self);

/**
  Get for memops.Implementation.TopObject.packageLocator

Package locator 
relevant for TopObject
  @param  Hold_HolderStore self
  @returns   the result
**/
extern Impl_PackageLocator Hold_HolderStore_GetPackageLocator(Hold_HolderStore self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Hold_HolderStore self
  @returns   the result
**/
extern ApiString Hold_HolderStore_GetPackageName(Hold_HolderStore self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Hold_HolderStore self
  @returns   the result
**/
extern ApiString Hold_HolderStore_GetPackageShortName(Hold_HolderStore self);

/**
  Get for ccp.lims.Holder.HolderStore.parent

link to parent object - 
synonym for memopsRoot
  @param  Hold_HolderStore self
  @returns   the result
**/
extern Impl_MemopsRoot Hold_HolderStore_GetParent(Hold_HolderStore self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Hold_HolderStore self
  @returns   the result
**/
extern ApiString Hold_HolderStore_GetQualifiedName(Hold_HolderStore self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Hold_HolderStore self
  @returns   the result
**/
extern Impl_MemopsRoot Hold_HolderStore_GetRoot(Hold_HolderStore self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Hold_HolderStore self
  @returns   the result
**/
extern Impl_TopObject Hold_HolderStore_GetTopObject(Hold_HolderStore self);

/**
  Constructor for ccp.lims.Holder.HolderStore
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Hold_HolderStore Hold_HolderStore_Init(Impl_MemopsRoot parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.Holder.HolderStore
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
extern Hold_HolderStore Hold_HolderStore_Init_reqd(Impl_MemopsRoot parent, char * name);

/**
  Factory function to create ccp.lims.Holder.Holder
  @param  Hold_HolderStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Hold_Holder Hold_HolderStore_NewHolder(Hold_HolderStore self, ApiMap attrlinks);

/**
  Factory function to create ccp.lims.Holder.HolderType
  @param  Hold_HolderStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Hold_HolderType Hold_HolderStore_NewHolderType(Hold_HolderStore self, ApiMap attrlinks);

/**
  Factory function to create ccp.lims.Holder.HolderType
  @param  Hold_HolderStore self
  @param  ApiSet holderCategories
  @param  char * name
  @returns  the new object
**/
extern Hold_HolderType Hold_HolderStore_NewHolderType_reqd(Hold_HolderStore self, ApiSet holderCategories, char * name);

/**
  Factory function to create ccp.lims.Holder.Holder
  @param  Hold_HolderStore self
  @param  ApiSet holderCategories
  @param  char * name
  @returns  the new object
**/
extern Hold_Holder Hold_HolderStore_NewHolder_reqd(Hold_HolderStore self, ApiSet holderCategories, char * name);

/**
  Factory function to create ccp.lims.Holder.PinType
  @param  Hold_HolderStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Hold_PinType Hold_HolderStore_NewPinType(Hold_HolderStore self, ApiMap attrlinks);

/**
  Factory function to create ccp.lims.Holder.PinType
  @param  Hold_HolderStore self
  @param  ApiSet holderCategories
  @param  char * name
  @returns  the new object
**/
extern Hold_PinType Hold_HolderStore_NewPinType_reqd(Hold_HolderStore self, ApiSet holderCategories, char * name);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderStore self
  @param  Impl_ApplicationData value
**/
extern void *Hold_HolderStore_RemoveApplicationData(Hold_HolderStore self, Impl_ApplicationData value);

/**
  SetAttr for ccp.lims.Holder.HolderStore
  @param  Hold_HolderStore self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Hold_HolderStore_Set(Hold_HolderStore self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Hold_HolderStore self
  @param  Acco_AccessObject value
**/
extern void *Hold_HolderStore_SetAccess(Hold_HolderStore self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Hold_HolderStore self
  @param  ApiList values
**/
extern void *Hold_HolderStore_SetApplicationData(Hold_HolderStore self, ApiList values);

/**
  Set for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Hold_HolderStore self
  @param  ApiString value
**/
extern void *Hold_HolderStore_SetCreatedBy(Hold_HolderStore self, ApiString value);

/**
  Set for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Hold_HolderStore self
  @param  ApiString value
**/
extern void *Hold_HolderStore_SetGuid(Hold_HolderStore self, ApiString value);

/**
  Set for memops.Implementation.TopObject.isModifiable

True if the data 
corresponding to the storage may be modified. If isModifiable is false 
for a given package, attemps to modify the data will raise an error. 
Note that isModifiable can be set to true even if the corresponding file 
is read-only. 

For a Project, this atribute defines whether the 
Implementation package (not the entire project contents) can be 
modified. If the Implementation package is Read-Only, this will prohibit 
many changes in the other packages as well.

This parameter can be 
freely modified by users, so it is not a security feature, but rather a 
protection against accidental changes.
  @param  Hold_HolderStore self
  @param  ApiBoolean value
**/
extern void *Hold_HolderStore_SetIsModifiable(Hold_HolderStore self, ApiBoolean value);

/**
  Set for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Hold_HolderStore self
  @param  ApiString value
**/
extern void *Hold_HolderStore_SetLastUnlockedBy(Hold_HolderStore self, ApiString value);

/**
  Set for ccp.lims.Holder.HolderStore.name

name of HolderStore
  @param  Hold_HolderStore self
  @param  ApiString value
**/
extern void *Hold_HolderStore_SetName(Hold_HolderStore self, ApiString value);

/**
  Sorted for ccp.lims.Holder.HolderStore.holderTypes

child link to class 
AbstractHolderType
  @param  Hold_HolderStore self
  @returns   the result
**/
extern ApiList Hold_HolderStore_SortedHolderTypes(Hold_HolderStore self);

/**
  Sorted for ccp.lims.Holder.HolderStore.holders

child link to class 
Holder
  @param  Hold_HolderStore self
  @returns   the result
**/
extern ApiList Hold_HolderStore_SortedHolders(Hold_HolderStore self);

#endif /* __incl__ccp_api_lims_Holder_HolderStore_h__ */
