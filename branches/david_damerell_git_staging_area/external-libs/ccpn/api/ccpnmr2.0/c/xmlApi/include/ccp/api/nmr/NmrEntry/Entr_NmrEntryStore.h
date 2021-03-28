
#ifndef __incl__ccp_api_nmr_NmrEntry_NmrEntryStore_h__
#define __incl__ccp_api_nmr_NmrEntry_NmrEntryStore_h__

#include "ccp.h"

/*
  Grouping of NmrEntry information
*/

/* package ccp.api.nmr.NmrEntry */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_NmrEntryStore self
  @param  Impl_ApplicationData value
**/
extern void *Entr_NmrEntryStore_AddApplicationData(Entr_NmrEntryStore self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.nmr.NmrEntry.NmrEntryStore
  @param  Entr_NmrEntryStore self
  @param  ApiBoolean complete
**/
extern void *Entr_NmrEntryStore_CheckAllValid(Entr_NmrEntryStore self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrEntry.NmrEntryStore
  @param  Entr_NmrEntryStore self
  @param  ApiBoolean complete
**/
extern void *Entr_NmrEntryStore_CheckValid(Entr_NmrEntryStore self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Entr_NmrEntryStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_NmrEntryStore_FindAllActiveRepositories(Entr_NmrEntryStore self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Entr_NmrEntryStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_NmrEntryStore_FindAllActiveRepositories_keyval0(Entr_NmrEntryStore self);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Entr_NmrEntryStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_NmrEntryStore_FindAllActiveRepositories_keyval1(Entr_NmrEntryStore self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Entr_NmrEntryStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_NmrEntryStore_FindAllActiveRepositories_keyval2(Entr_NmrEntryStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Entr_NmrEntryStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_NmrEntryStore_FindAllActiveRepositories_keyval3(Entr_NmrEntryStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Entr_NmrEntryStore self
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
extern ApiList Entr_NmrEntryStore_FindAllActiveRepositories_keyval4(Entr_NmrEntryStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_NmrEntryStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_NmrEntryStore_FindAllApplicationData(Entr_NmrEntryStore self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_NmrEntryStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_NmrEntryStore_FindAllApplicationData_keyval0(Entr_NmrEntryStore self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_NmrEntryStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_NmrEntryStore_FindAllApplicationData_keyval1(Entr_NmrEntryStore self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_NmrEntryStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_NmrEntryStore_FindAllApplicationData_keyval2(Entr_NmrEntryStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_NmrEntryStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Entr_NmrEntryStore_FindAllApplicationData_keyval3(Entr_NmrEntryStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_NmrEntryStore self
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
extern ApiList Entr_NmrEntryStore_FindAllApplicationData_keyval4(Entr_NmrEntryStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrEntry.NmrEntryStore.entries

child link to class 
Entry
  @param  Entr_NmrEntryStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_NmrEntryStore_FindAllEntries(Entr_NmrEntryStore self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrEntry.NmrEntryStore.entries

child link to class 
Entry
  @param  Entr_NmrEntryStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_NmrEntryStore_FindAllEntries_keyval0(Entr_NmrEntryStore self);

/**
  FindAll for ccp.nmr.NmrEntry.NmrEntryStore.entries

child link to class 
Entry
  @param  Entr_NmrEntryStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_NmrEntryStore_FindAllEntries_keyval1(Entr_NmrEntryStore self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrEntry.NmrEntryStore.entries

child link to class 
Entry
  @param  Entr_NmrEntryStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_NmrEntryStore_FindAllEntries_keyval2(Entr_NmrEntryStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrEntry.NmrEntryStore.entries

child link to class 
Entry
  @param  Entr_NmrEntryStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_NmrEntryStore_FindAllEntries_keyval3(Entr_NmrEntryStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrEntry.NmrEntryStore.entries

child link to class 
Entry
  @param  Entr_NmrEntryStore self
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
extern ApiSet Entr_NmrEntryStore_FindAllEntries_keyval4(Entr_NmrEntryStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrEntry.NmrEntryStore.studies

child link to class 
Study
  @param  Entr_NmrEntryStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_NmrEntryStore_FindAllStudies(Entr_NmrEntryStore self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrEntry.NmrEntryStore.studies

child link to class 
Study
  @param  Entr_NmrEntryStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_NmrEntryStore_FindAllStudies_keyval0(Entr_NmrEntryStore self);

/**
  FindAll for ccp.nmr.NmrEntry.NmrEntryStore.studies

child link to class 
Study
  @param  Entr_NmrEntryStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_NmrEntryStore_FindAllStudies_keyval1(Entr_NmrEntryStore self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrEntry.NmrEntryStore.studies

child link to class 
Study
  @param  Entr_NmrEntryStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_NmrEntryStore_FindAllStudies_keyval2(Entr_NmrEntryStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrEntry.NmrEntryStore.studies

child link to class 
Study
  @param  Entr_NmrEntryStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Entr_NmrEntryStore_FindAllStudies_keyval3(Entr_NmrEntryStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrEntry.NmrEntryStore.studies

child link to class 
Study
  @param  Entr_NmrEntryStore self
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
extern ApiSet Entr_NmrEntryStore_FindAllStudies_keyval4(Entr_NmrEntryStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Entr_NmrEntryStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Entr_NmrEntryStore_FindFirstActiveRepository(Entr_NmrEntryStore self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Entr_NmrEntryStore self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Entr_NmrEntryStore_FindFirstActiveRepository_keyval0(Entr_NmrEntryStore self);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Entr_NmrEntryStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Entr_NmrEntryStore_FindFirstActiveRepository_keyval1(Entr_NmrEntryStore self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Entr_NmrEntryStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Entr_NmrEntryStore_FindFirstActiveRepository_keyval2(Entr_NmrEntryStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Entr_NmrEntryStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Entr_NmrEntryStore_FindFirstActiveRepository_keyval3(Entr_NmrEntryStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Entr_NmrEntryStore self
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
extern Impl_Repository Entr_NmrEntryStore_FindFirstActiveRepository_keyval4(Entr_NmrEntryStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_NmrEntryStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Entr_NmrEntryStore_FindFirstApplicationData(Entr_NmrEntryStore self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_NmrEntryStore self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Entr_NmrEntryStore_FindFirstApplicationData_keyval0(Entr_NmrEntryStore self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_NmrEntryStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Entr_NmrEntryStore_FindFirstApplicationData_keyval1(Entr_NmrEntryStore self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_NmrEntryStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Entr_NmrEntryStore_FindFirstApplicationData_keyval2(Entr_NmrEntryStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_NmrEntryStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Entr_NmrEntryStore_FindFirstApplicationData_keyval3(Entr_NmrEntryStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_NmrEntryStore self
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
extern Impl_ApplicationData Entr_NmrEntryStore_FindFirstApplicationData_keyval4(Entr_NmrEntryStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrEntry.NmrEntryStore.entries

child link to 
class Entry
  @param  Entr_NmrEntryStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Entr_NmrEntryStore_FindFirstEntry(Entr_NmrEntryStore self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrEntry.NmrEntryStore.entries

child link to 
class Entry
  @param  Entr_NmrEntryStore self
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Entr_NmrEntryStore_FindFirstEntry_keyval0(Entr_NmrEntryStore self);

/**
  FindFirst for ccp.nmr.NmrEntry.NmrEntryStore.entries

child link to 
class Entry
  @param  Entr_NmrEntryStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Entr_NmrEntryStore_FindFirstEntry_keyval1(Entr_NmrEntryStore self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrEntry.NmrEntryStore.entries

child link to 
class Entry
  @param  Entr_NmrEntryStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Entr_NmrEntryStore_FindFirstEntry_keyval2(Entr_NmrEntryStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrEntry.NmrEntryStore.entries

child link to 
class Entry
  @param  Entr_NmrEntryStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Entr_NmrEntryStore_FindFirstEntry_keyval3(Entr_NmrEntryStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrEntry.NmrEntryStore.entries

child link to 
class Entry
  @param  Entr_NmrEntryStore self
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
extern Entr_Entry Entr_NmrEntryStore_FindFirstEntry_keyval4(Entr_NmrEntryStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrEntry.NmrEntryStore.studies

child link to 
class Study
  @param  Entr_NmrEntryStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Study Entr_NmrEntryStore_FindFirstStudy(Entr_NmrEntryStore self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrEntry.NmrEntryStore.studies

child link to 
class Study
  @param  Entr_NmrEntryStore self
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Study Entr_NmrEntryStore_FindFirstStudy_keyval0(Entr_NmrEntryStore self);

/**
  FindFirst for ccp.nmr.NmrEntry.NmrEntryStore.studies

child link to 
class Study
  @param  Entr_NmrEntryStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Study Entr_NmrEntryStore_FindFirstStudy_keyval1(Entr_NmrEntryStore self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrEntry.NmrEntryStore.studies

child link to 
class Study
  @param  Entr_NmrEntryStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Study Entr_NmrEntryStore_FindFirstStudy_keyval2(Entr_NmrEntryStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrEntry.NmrEntryStore.studies

child link to 
class Study
  @param  Entr_NmrEntryStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Study Entr_NmrEntryStore_FindFirstStudy_keyval3(Entr_NmrEntryStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrEntry.NmrEntryStore.studies

child link to 
class Study
  @param  Entr_NmrEntryStore self
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
extern Entr_Study Entr_NmrEntryStore_FindFirstStudy_keyval4(Entr_NmrEntryStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrEntry.NmrEntryStore
  @param  Entr_NmrEntryStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Entr_NmrEntryStore_Get(Entr_NmrEntryStore self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Entr_NmrEntryStore self
  @returns   the result
**/
extern Acco_AccessObject Entr_NmrEntryStore_GetAccess(Entr_NmrEntryStore self);

/**
  Get for memops.Implementation.TopObject.activeRepositories

Repositories 
on package search path that contains a copy of TopObject
  @param  Entr_NmrEntryStore self
  @returns   the result
**/
extern ApiList Entr_NmrEntryStore_GetActiveRepositories(Entr_NmrEntryStore self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_NmrEntryStore self
  @returns   the result
**/
extern ApiList Entr_NmrEntryStore_GetApplicationData(Entr_NmrEntryStore self);

/**
  GetByKey for ccp.nmr.NmrEntry.NmrEntryStore
  @param  Entr_NmrEntryStore self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Entr_NmrEntryStore Entr_NmrEntryStore_GetByKey(Entr_NmrEntryStore self, Impl_MemopsRoot startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Entr_NmrEntryStore self
  @returns   the result
**/
extern ApiString Entr_NmrEntryStore_GetClassName(Entr_NmrEntryStore self);

/**
  Get for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Entr_NmrEntryStore self
  @returns   the result
**/
extern ApiString Entr_NmrEntryStore_GetCreatedBy(Entr_NmrEntryStore self);

/**
  Get for ccp.nmr.NmrEntry.NmrEntryStore.entries

child link to class 
Entry
  @param  Entr_NmrEntryStore self
  @returns   the result
**/
extern ApiSet Entr_NmrEntryStore_GetEntries(Entr_NmrEntryStore self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Entr_NmrEntryStore self
  @returns   the result
**/
extern ApiList Entr_NmrEntryStore_GetFieldNames(Entr_NmrEntryStore self);

/**
  GetFullKey for ccp.nmr.NmrEntry.NmrEntryStore
  @param  Entr_NmrEntryStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Entr_NmrEntryStore_GetFullKey(Entr_NmrEntryStore self, ApiBoolean useGuid);

/**
  Get for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Entr_NmrEntryStore self
  @returns   the result
**/
extern ApiString Entr_NmrEntryStore_GetGuid(Entr_NmrEntryStore self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Entr_NmrEntryStore self
  @returns   the result
**/
extern ApiBoolean Entr_NmrEntryStore_GetInConstructor(Entr_NmrEntryStore self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Entr_NmrEntryStore self
  @returns   the result
**/
extern ApiBoolean Entr_NmrEntryStore_GetIsDeleted(Entr_NmrEntryStore self);

/**
  Get for memops.Implementation.TopObject.isLoaded

Implementation 
attribute, set automatically. True if the data in the Storage are loaded 
into memory. As data are loaded automatically, this attribute should be 
of interest only for the implementation.
  @param  Entr_NmrEntryStore self
  @returns   the result
**/
extern ApiBoolean Entr_NmrEntryStore_GetIsLoaded(Entr_NmrEntryStore self);

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
  @param  Entr_NmrEntryStore self
  @returns   the result
**/
extern ApiBoolean Entr_NmrEntryStore_GetIsModifiable(Entr_NmrEntryStore self);

/**
  Get for memops.Implementation.TopObject.isModified

Implementation 
attribute. True if the data corresponding to the Storage have been 
modified since being loaded. Serves to indicate which data need to be 
saved.
  @param  Entr_NmrEntryStore self
  @returns   the result
**/
extern ApiBoolean Entr_NmrEntryStore_GetIsModified(Entr_NmrEntryStore self);

/**
  Get for memops.Implementation.TopObject.isReading

Implementation 
attribute, set automatically. True if the data corresponding to the 
Storage are in the process of being read. As data loading is handled 
automatically, this attribute should be relevant only for the 
implementation, or possibly for programmers of multithreaded programs. 
Serves to suppress notifiers and validity checking during reading. Note 
that objects are not valid until the data loading is completed.
  @param  Entr_NmrEntryStore self
  @returns   the result
**/
extern ApiBoolean Entr_NmrEntryStore_GetIsReading(Entr_NmrEntryStore self);

/**
  Get for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Entr_NmrEntryStore self
  @returns   the result
**/
extern ApiString Entr_NmrEntryStore_GetLastUnlockedBy(Entr_NmrEntryStore self);

/**
  GetLocalKey for ccp.nmr.NmrEntry.NmrEntryStore
  @param  Entr_NmrEntryStore self
  @returns  Local object key
**/
extern ApiObject Entr_NmrEntryStore_GetLocalKey(Entr_NmrEntryStore self);

/**
  Get for ccp.nmr.NmrEntry.NmrEntryStore.memopsRoot

parent link
  @param  Entr_NmrEntryStore self
  @returns   the result
**/
extern Impl_MemopsRoot Entr_NmrEntryStore_GetMemopsRoot(Entr_NmrEntryStore self);

/**
  Get for ccp.nmr.NmrEntry.NmrEntryStore.name

name of NmrEntryStore
  @param  Entr_NmrEntryStore self
  @returns   the result
**/
extern ApiString Entr_NmrEntryStore_GetName(Entr_NmrEntryStore self);

/**
  Get for memops.Implementation.TopObject.packageLocator

Package locator 
relevant for TopObject
  @param  Entr_NmrEntryStore self
  @returns   the result
**/
extern Impl_PackageLocator Entr_NmrEntryStore_GetPackageLocator(Entr_NmrEntryStore self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Entr_NmrEntryStore self
  @returns   the result
**/
extern ApiString Entr_NmrEntryStore_GetPackageName(Entr_NmrEntryStore self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Entr_NmrEntryStore self
  @returns   the result
**/
extern ApiString Entr_NmrEntryStore_GetPackageShortName(Entr_NmrEntryStore self);

/**
  Get for ccp.nmr.NmrEntry.NmrEntryStore.parent

link to parent object - 
synonym for memopsRoot
  @param  Entr_NmrEntryStore self
  @returns   the result
**/
extern Impl_MemopsRoot Entr_NmrEntryStore_GetParent(Entr_NmrEntryStore self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Entr_NmrEntryStore self
  @returns   the result
**/
extern ApiString Entr_NmrEntryStore_GetQualifiedName(Entr_NmrEntryStore self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Entr_NmrEntryStore self
  @returns   the result
**/
extern Impl_MemopsRoot Entr_NmrEntryStore_GetRoot(Entr_NmrEntryStore self);

/**
  Get for ccp.nmr.NmrEntry.NmrEntryStore.studies

child link to class 
Study
  @param  Entr_NmrEntryStore self
  @returns   the result
**/
extern ApiSet Entr_NmrEntryStore_GetStudies(Entr_NmrEntryStore self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Entr_NmrEntryStore self
  @returns   the result
**/
extern Impl_TopObject Entr_NmrEntryStore_GetTopObject(Entr_NmrEntryStore self);

/**
  Constructor for ccp.nmr.NmrEntry.NmrEntryStore
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Entr_NmrEntryStore Entr_NmrEntryStore_Init(Impl_MemopsRoot parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrEntry.NmrEntryStore
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
extern Entr_NmrEntryStore Entr_NmrEntryStore_Init_reqd(Impl_MemopsRoot parent, char * name);

/**
  Factory function to create ccp.nmr.NmrEntry.Entry
  @param  Entr_NmrEntryStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Entr_Entry Entr_NmrEntryStore_NewEntry(Entr_NmrEntryStore self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.NmrEntry.Entry
  @param  Entr_NmrEntryStore self
  @param  char * name
  @returns  the new object
**/
extern Entr_Entry Entr_NmrEntryStore_NewEntry_reqd(Entr_NmrEntryStore self, char * name);

/**
  Factory function to create ccp.nmr.NmrEntry.Study
  @param  Entr_NmrEntryStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Entr_Study Entr_NmrEntryStore_NewStudy(Entr_NmrEntryStore self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.NmrEntry.Study
  @param  Entr_NmrEntryStore self
  @param  char * name
  @returns  the new object
**/
extern Entr_Study Entr_NmrEntryStore_NewStudy_reqd(Entr_NmrEntryStore self, char * name);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_NmrEntryStore self
  @param  Impl_ApplicationData value
**/
extern void *Entr_NmrEntryStore_RemoveApplicationData(Entr_NmrEntryStore self, Impl_ApplicationData value);

/**
  SetAttr for ccp.nmr.NmrEntry.NmrEntryStore
  @param  Entr_NmrEntryStore self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Entr_NmrEntryStore_Set(Entr_NmrEntryStore self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Entr_NmrEntryStore self
  @param  Acco_AccessObject value
**/
extern void *Entr_NmrEntryStore_SetAccess(Entr_NmrEntryStore self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Entr_NmrEntryStore self
  @param  ApiList values
**/
extern void *Entr_NmrEntryStore_SetApplicationData(Entr_NmrEntryStore self, ApiList values);

/**
  Set for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Entr_NmrEntryStore self
  @param  ApiString value
**/
extern void *Entr_NmrEntryStore_SetCreatedBy(Entr_NmrEntryStore self, ApiString value);

/**
  Set for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Entr_NmrEntryStore self
  @param  ApiString value
**/
extern void *Entr_NmrEntryStore_SetGuid(Entr_NmrEntryStore self, ApiString value);

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
  @param  Entr_NmrEntryStore self
  @param  ApiBoolean value
**/
extern void *Entr_NmrEntryStore_SetIsModifiable(Entr_NmrEntryStore self, ApiBoolean value);

/**
  Set for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Entr_NmrEntryStore self
  @param  ApiString value
**/
extern void *Entr_NmrEntryStore_SetLastUnlockedBy(Entr_NmrEntryStore self, ApiString value);

/**
  Set for ccp.nmr.NmrEntry.NmrEntryStore.name

name of NmrEntryStore
  @param  Entr_NmrEntryStore self
  @param  ApiString value
**/
extern void *Entr_NmrEntryStore_SetName(Entr_NmrEntryStore self, ApiString value);

/**
  Sorted for ccp.nmr.NmrEntry.NmrEntryStore.entries

child link to class 
Entry
  @param  Entr_NmrEntryStore self
  @returns   the result
**/
extern ApiList Entr_NmrEntryStore_SortedEntries(Entr_NmrEntryStore self);

/**
  Sorted for ccp.nmr.NmrEntry.NmrEntryStore.studies

child link to class 
Study
  @param  Entr_NmrEntryStore self
  @returns   the result
**/
extern ApiList Entr_NmrEntryStore_SortedStudies(Entr_NmrEntryStore self);

#endif /* __incl__ccp_api_nmr_NmrEntry_NmrEntryStore_h__ */
