
#ifndef __incl__ccpnmr_api_NameMapping_NameMappingStore_h__
#define __incl__ccpnmr_api_NameMapping_NameMappingStore_h__

#include "ccp.h"

/*
  grouping of NameMappings
*/

/* package ccpnmr.api.NameMapping */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMappingStore self
  @param  Impl_ApplicationData value
**/
extern void *Nmap_NameMappingStore_AddApplicationData(Nmap_NameMappingStore self, Impl_ApplicationData value);

/**
  CheckAllValid for ccpnmr.NameMapping.NameMappingStore
  @param  Nmap_NameMappingStore self
  @param  ApiBoolean complete
**/
extern void *Nmap_NameMappingStore_CheckAllValid(Nmap_NameMappingStore self, ApiBoolean complete);

/**
  CheckValid for ccpnmr.NameMapping.NameMappingStore
  @param  Nmap_NameMappingStore self
  @param  ApiBoolean complete
**/
extern void *Nmap_NameMappingStore_CheckValid(Nmap_NameMappingStore self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmap_NameMappingStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmap_NameMappingStore_FindAllActiveRepositories(Nmap_NameMappingStore self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmap_NameMappingStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmap_NameMappingStore_FindAllActiveRepositories_keyval0(Nmap_NameMappingStore self);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmap_NameMappingStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmap_NameMappingStore_FindAllActiveRepositories_keyval1(Nmap_NameMappingStore self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmap_NameMappingStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmap_NameMappingStore_FindAllActiveRepositories_keyval2(Nmap_NameMappingStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmap_NameMappingStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmap_NameMappingStore_FindAllActiveRepositories_keyval3(Nmap_NameMappingStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmap_NameMappingStore self
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
extern ApiList Nmap_NameMappingStore_FindAllActiveRepositories_keyval4(Nmap_NameMappingStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMappingStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmap_NameMappingStore_FindAllApplicationData(Nmap_NameMappingStore self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMappingStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmap_NameMappingStore_FindAllApplicationData_keyval0(Nmap_NameMappingStore self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMappingStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmap_NameMappingStore_FindAllApplicationData_keyval1(Nmap_NameMappingStore self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMappingStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmap_NameMappingStore_FindAllApplicationData_keyval2(Nmap_NameMappingStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMappingStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmap_NameMappingStore_FindAllApplicationData_keyval3(Nmap_NameMappingStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMappingStore self
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
extern ApiList Nmap_NameMappingStore_FindAllApplicationData_keyval4(Nmap_NameMappingStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccpnmr.NameMapping.NameMappingStore.nameMappings

child link 
to class NameMapping
  @param  Nmap_NameMappingStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMappingStore_FindAllNameMappings(Nmap_NameMappingStore self, ApiMap conditions);

/**
  FindAll for ccpnmr.NameMapping.NameMappingStore.nameMappings

child link 
to class NameMapping
  @param  Nmap_NameMappingStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMappingStore_FindAllNameMappings_keyval0(Nmap_NameMappingStore self);

/**
  FindAll for ccpnmr.NameMapping.NameMappingStore.nameMappings

child link 
to class NameMapping
  @param  Nmap_NameMappingStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMappingStore_FindAllNameMappings_keyval1(Nmap_NameMappingStore self, char * key, ApiObject value);

/**
  FindAll for ccpnmr.NameMapping.NameMappingStore.nameMappings

child link 
to class NameMapping
  @param  Nmap_NameMappingStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMappingStore_FindAllNameMappings_keyval2(Nmap_NameMappingStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccpnmr.NameMapping.NameMappingStore.nameMappings

child link 
to class NameMapping
  @param  Nmap_NameMappingStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmap_NameMappingStore_FindAllNameMappings_keyval3(Nmap_NameMappingStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccpnmr.NameMapping.NameMappingStore.nameMappings

child link 
to class NameMapping
  @param  Nmap_NameMappingStore self
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
extern ApiSet Nmap_NameMappingStore_FindAllNameMappings_keyval4(Nmap_NameMappingStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmap_NameMappingStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Nmap_NameMappingStore_FindFirstActiveRepository(Nmap_NameMappingStore self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmap_NameMappingStore self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Nmap_NameMappingStore_FindFirstActiveRepository_keyval0(Nmap_NameMappingStore self);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmap_NameMappingStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Nmap_NameMappingStore_FindFirstActiveRepository_keyval1(Nmap_NameMappingStore self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmap_NameMappingStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Nmap_NameMappingStore_FindFirstActiveRepository_keyval2(Nmap_NameMappingStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmap_NameMappingStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Nmap_NameMappingStore_FindFirstActiveRepository_keyval3(Nmap_NameMappingStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Nmap_NameMappingStore self
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
extern Impl_Repository Nmap_NameMappingStore_FindFirstActiveRepository_keyval4(Nmap_NameMappingStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMappingStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmap_NameMappingStore_FindFirstApplicationData(Nmap_NameMappingStore self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMappingStore self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmap_NameMappingStore_FindFirstApplicationData_keyval0(Nmap_NameMappingStore self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMappingStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmap_NameMappingStore_FindFirstApplicationData_keyval1(Nmap_NameMappingStore self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMappingStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmap_NameMappingStore_FindFirstApplicationData_keyval2(Nmap_NameMappingStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMappingStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmap_NameMappingStore_FindFirstApplicationData_keyval3(Nmap_NameMappingStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMappingStore self
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
extern Impl_ApplicationData Nmap_NameMappingStore_FindFirstApplicationData_keyval4(Nmap_NameMappingStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccpnmr.NameMapping.NameMappingStore.nameMappings

child 
link to class NameMapping
  @param  Nmap_NameMappingStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_NameMapping Nmap_NameMappingStore_FindFirstNameMapping(Nmap_NameMappingStore self, ApiMap conditions);

/**
  FindFirst for ccpnmr.NameMapping.NameMappingStore.nameMappings

child 
link to class NameMapping
  @param  Nmap_NameMappingStore self
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_NameMapping Nmap_NameMappingStore_FindFirstNameMapping_keyval0(Nmap_NameMappingStore self);

/**
  FindFirst for ccpnmr.NameMapping.NameMappingStore.nameMappings

child 
link to class NameMapping
  @param  Nmap_NameMappingStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_NameMapping Nmap_NameMappingStore_FindFirstNameMapping_keyval1(Nmap_NameMappingStore self, char * key, ApiObject value);

/**
  FindFirst for ccpnmr.NameMapping.NameMappingStore.nameMappings

child 
link to class NameMapping
  @param  Nmap_NameMappingStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_NameMapping Nmap_NameMappingStore_FindFirstNameMapping_keyval2(Nmap_NameMappingStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccpnmr.NameMapping.NameMappingStore.nameMappings

child 
link to class NameMapping
  @param  Nmap_NameMappingStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmap_NameMapping Nmap_NameMappingStore_FindFirstNameMapping_keyval3(Nmap_NameMappingStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccpnmr.NameMapping.NameMappingStore.nameMappings

child 
link to class NameMapping
  @param  Nmap_NameMappingStore self
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
extern Nmap_NameMapping Nmap_NameMappingStore_FindFirstNameMapping_keyval4(Nmap_NameMappingStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccpnmr.NameMapping.NameMappingStore
  @param  Nmap_NameMappingStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmap_NameMappingStore_Get(Nmap_NameMappingStore self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmap_NameMappingStore self
  @returns   the result
**/
extern Acco_AccessObject Nmap_NameMappingStore_GetAccess(Nmap_NameMappingStore self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmap_NameMappingStore self
  @returns   the result
**/
extern Acco_AccessObject Nmap_NameMappingStore_GetActiveAccess(Nmap_NameMappingStore self);

/**
  Get for memops.Implementation.TopObject.activeRepositories

Repositories 
on package search path that contains a copy of TopObject
  @param  Nmap_NameMappingStore self
  @returns   the result
**/
extern ApiList Nmap_NameMappingStore_GetActiveRepositories(Nmap_NameMappingStore self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMappingStore self
  @returns   the result
**/
extern ApiList Nmap_NameMappingStore_GetApplicationData(Nmap_NameMappingStore self);

/**
  GetByKey for ccpnmr.NameMapping.NameMappingStore
  @param  Nmap_NameMappingStore self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmap_NameMappingStore Nmap_NameMappingStore_GetByKey(Nmap_NameMappingStore self, Impl_MemopsRoot startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmap_NameMappingStore self
  @returns   the result
**/
extern ApiString Nmap_NameMappingStore_GetClassName(Nmap_NameMappingStore self);

/**
  Get for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Nmap_NameMappingStore self
  @returns   the result
**/
extern ApiString Nmap_NameMappingStore_GetCreatedBy(Nmap_NameMappingStore self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmap_NameMappingStore self
  @returns   the result
**/
extern ApiList Nmap_NameMappingStore_GetFieldNames(Nmap_NameMappingStore self);

/**
  GetFullKey for ccpnmr.NameMapping.NameMappingStore
  @param  Nmap_NameMappingStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmap_NameMappingStore_GetFullKey(Nmap_NameMappingStore self, ApiBoolean useGuid);

/**
  Get for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Nmap_NameMappingStore self
  @returns   the result
**/
extern ApiString Nmap_NameMappingStore_GetGuid(Nmap_NameMappingStore self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmap_NameMappingStore self
  @returns   the result
**/
extern ApiBoolean Nmap_NameMappingStore_GetInConstructor(Nmap_NameMappingStore self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmap_NameMappingStore self
  @returns   the result
**/
extern ApiBoolean Nmap_NameMappingStore_GetIsDeleted(Nmap_NameMappingStore self);

/**
  Get for memops.Implementation.TopObject.isLoaded

Implementation 
attribute, set automatically. True if the data in the Storage are loaded 
into memory. As data are loaded automatically, this attribute should be 
of interest only for the implementation.
  @param  Nmap_NameMappingStore self
  @returns   the result
**/
extern ApiBoolean Nmap_NameMappingStore_GetIsLoaded(Nmap_NameMappingStore self);

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
  @param  Nmap_NameMappingStore self
  @returns   the result
**/
extern ApiBoolean Nmap_NameMappingStore_GetIsModifiable(Nmap_NameMappingStore self);

/**
  Get for memops.Implementation.TopObject.isModified

Implementation 
attribute. True if the data corresponding to the Storage have been 
modified since being loaded. Serves to indicate which data need to be 
saved.
  @param  Nmap_NameMappingStore self
  @returns   the result
**/
extern ApiBoolean Nmap_NameMappingStore_GetIsModified(Nmap_NameMappingStore self);

/**
  Get for memops.Implementation.TopObject.isReading

Implementation 
attribute, set automatically. True if the data corresponding to the 
Storage are in the process of being read. As data loading is handled 
automatically, this attribute should be relevant only for the 
implementation, or possibly for programmers of multithreaded programs. 
Serves to suppress notifiers and validity checking during reading. Note 
that objects are not valid until the data loading is completed.
  @param  Nmap_NameMappingStore self
  @returns   the result
**/
extern ApiBoolean Nmap_NameMappingStore_GetIsReading(Nmap_NameMappingStore self);

/**
  Get for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Nmap_NameMappingStore self
  @returns   the result
**/
extern ApiString Nmap_NameMappingStore_GetLastUnlockedBy(Nmap_NameMappingStore self);

/**
  GetLocalKey for ccpnmr.NameMapping.NameMappingStore
  @param  Nmap_NameMappingStore self
  @returns  Local object key
**/
extern ApiObject Nmap_NameMappingStore_GetLocalKey(Nmap_NameMappingStore self);

/**
  Get for ccpnmr.NameMapping.NameMappingStore.memopsRoot

parent link
  @param  Nmap_NameMappingStore self
  @returns   the result
**/
extern Impl_MemopsRoot Nmap_NameMappingStore_GetMemopsRoot(Nmap_NameMappingStore self);

/**
  Get for ccpnmr.NameMapping.NameMappingStore.name

name of 
NameMappingStore
  @param  Nmap_NameMappingStore self
  @returns   the result
**/
extern ApiString Nmap_NameMappingStore_GetName(Nmap_NameMappingStore self);

/**
  Get for ccpnmr.NameMapping.NameMappingStore.nameMappings

child link to 
class NameMapping
  @param  Nmap_NameMappingStore self
  @returns   the result
**/
extern ApiSet Nmap_NameMappingStore_GetNameMappings(Nmap_NameMappingStore self);

/**
  Get for memops.Implementation.TopObject.packageLocator

Package locator 
relevant for TopObject
  @param  Nmap_NameMappingStore self
  @returns   the result
**/
extern Impl_PackageLocator Nmap_NameMappingStore_GetPackageLocator(Nmap_NameMappingStore self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmap_NameMappingStore self
  @returns   the result
**/
extern ApiString Nmap_NameMappingStore_GetPackageName(Nmap_NameMappingStore self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmap_NameMappingStore self
  @returns   the result
**/
extern ApiString Nmap_NameMappingStore_GetPackageShortName(Nmap_NameMappingStore self);

/**
  Get for ccpnmr.NameMapping.NameMappingStore.parent

link to parent 
object - synonym for memopsRoot
  @param  Nmap_NameMappingStore self
  @returns   the result
**/
extern Impl_MemopsRoot Nmap_NameMappingStore_GetParent(Nmap_NameMappingStore self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmap_NameMappingStore self
  @returns   the result
**/
extern ApiString Nmap_NameMappingStore_GetQualifiedName(Nmap_NameMappingStore self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmap_NameMappingStore self
  @returns   the result
**/
extern Impl_MemopsRoot Nmap_NameMappingStore_GetRoot(Nmap_NameMappingStore self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmap_NameMappingStore self
  @returns   the result
**/
extern Impl_TopObject Nmap_NameMappingStore_GetTopObject(Nmap_NameMappingStore self);

/**
  Constructor for ccpnmr.NameMapping.NameMappingStore
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmap_NameMappingStore Nmap_NameMappingStore_Init(Impl_MemopsRoot parent, ApiMap attrlinks);

/**
  Constructor for ccpnmr.NameMapping.NameMappingStore
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
extern Nmap_NameMappingStore Nmap_NameMappingStore_Init_reqd(Impl_MemopsRoot parent, char * name);

/**
  Factory function to create ccpnmr.NameMapping.NameMapping
  @param  Nmap_NameMappingStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmap_NameMapping Nmap_NameMappingStore_NewNameMapping(Nmap_NameMappingStore self, ApiMap attrlinks);

/**
  Factory function to create ccpnmr.NameMapping.NameMapping
  @param  Nmap_NameMappingStore self
  @param  char * formatName
  @param  char * namingSystem
  @returns  the new object
**/
extern Nmap_NameMapping Nmap_NameMappingStore_NewNameMapping_reqd(Nmap_NameMappingStore self, char * formatName, char * namingSystem);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMappingStore self
  @param  Impl_ApplicationData value
**/
extern void *Nmap_NameMappingStore_RemoveApplicationData(Nmap_NameMappingStore self, Impl_ApplicationData value);

/**
  SetAttr for ccpnmr.NameMapping.NameMappingStore
  @param  Nmap_NameMappingStore self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmap_NameMappingStore_Set(Nmap_NameMappingStore self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmap_NameMappingStore self
  @param  Acco_AccessObject value
**/
extern void *Nmap_NameMappingStore_SetAccess(Nmap_NameMappingStore self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmap_NameMappingStore self
  @param  ApiList values
**/
extern void *Nmap_NameMappingStore_SetApplicationData(Nmap_NameMappingStore self, ApiList values);

/**
  Set for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Nmap_NameMappingStore self
  @param  ApiString value
**/
extern void *Nmap_NameMappingStore_SetCreatedBy(Nmap_NameMappingStore self, ApiString value);

/**
  Set for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Nmap_NameMappingStore self
  @param  ApiString value
**/
extern void *Nmap_NameMappingStore_SetGuid(Nmap_NameMappingStore self, ApiString value);

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
  @param  Nmap_NameMappingStore self
  @param  ApiBoolean value
**/
extern void *Nmap_NameMappingStore_SetIsModifiable(Nmap_NameMappingStore self, ApiBoolean value);

/**
  Set for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Nmap_NameMappingStore self
  @param  ApiString value
**/
extern void *Nmap_NameMappingStore_SetLastUnlockedBy(Nmap_NameMappingStore self, ApiString value);

/**
  Set for ccpnmr.NameMapping.NameMappingStore.name

name of 
NameMappingStore
  @param  Nmap_NameMappingStore self
  @param  ApiString value
**/
extern void *Nmap_NameMappingStore_SetName(Nmap_NameMappingStore self, ApiString value);

/**
  Sorted for ccpnmr.NameMapping.NameMappingStore.nameMappings

child link 
to class NameMapping
  @param  Nmap_NameMappingStore self
  @returns   the result
**/
extern ApiList Nmap_NameMappingStore_SortedNameMappings(Nmap_NameMappingStore self);

#endif /* __incl__ccpnmr_api_NameMapping_NameMappingStore_h__ */
