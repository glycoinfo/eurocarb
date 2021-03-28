
#ifndef __incl__ccp_api_lims_ExpBlueprint_ExpBlueprintStore_h__
#define __incl__ccp_api_lims_ExpBlueprint_ExpBlueprintStore_h__

#include "ccp.h"

/*
  TopObject for ExpBlueprint package
*/

/* package ccp.api.lims.ExpBlueprint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprintStore self
  @param  Impl_ApplicationData value
**/
extern void *Expb_ExpBlueprintStore_AddApplicationData(Expb_ExpBlueprintStore self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.lims.ExpBlueprint.ExpBlueprintStore
  @param  Expb_ExpBlueprintStore self
  @param  ApiBoolean complete
**/
extern void *Expb_ExpBlueprintStore_CheckAllValid(Expb_ExpBlueprintStore self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.ExpBlueprint.ExpBlueprintStore
  @param  Expb_ExpBlueprintStore self
  @param  ApiBoolean complete
**/
extern void *Expb_ExpBlueprintStore_CheckValid(Expb_ExpBlueprintStore self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expb_ExpBlueprintStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expb_ExpBlueprintStore_FindAllActiveRepositories(Expb_ExpBlueprintStore self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expb_ExpBlueprintStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expb_ExpBlueprintStore_FindAllActiveRepositories_keyval0(Expb_ExpBlueprintStore self);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expb_ExpBlueprintStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expb_ExpBlueprintStore_FindAllActiveRepositories_keyval1(Expb_ExpBlueprintStore self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expb_ExpBlueprintStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expb_ExpBlueprintStore_FindAllActiveRepositories_keyval2(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expb_ExpBlueprintStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expb_ExpBlueprintStore_FindAllActiveRepositories_keyval3(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expb_ExpBlueprintStore self
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
extern ApiList Expb_ExpBlueprintStore_FindAllActiveRepositories_keyval4(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprintStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expb_ExpBlueprintStore_FindAllApplicationData(Expb_ExpBlueprintStore self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprintStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expb_ExpBlueprintStore_FindAllApplicationData_keyval0(Expb_ExpBlueprintStore self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprintStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expb_ExpBlueprintStore_FindAllApplicationData_keyval1(Expb_ExpBlueprintStore self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprintStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expb_ExpBlueprintStore_FindAllApplicationData_keyval2(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprintStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expb_ExpBlueprintStore_FindAllApplicationData_keyval3(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprintStore self
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
extern ApiList Expb_ExpBlueprintStore_FindAllApplicationData_keyval4(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprintStore.expBlueprints

child 
link to class ExpBlueprint
  @param  Expb_ExpBlueprintStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_ExpBlueprintStore_FindAllExpBlueprints(Expb_ExpBlueprintStore self, ApiMap conditions);

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprintStore.expBlueprints

child 
link to class ExpBlueprint
  @param  Expb_ExpBlueprintStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_ExpBlueprintStore_FindAllExpBlueprints_keyval0(Expb_ExpBlueprintStore self);

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprintStore.expBlueprints

child 
link to class ExpBlueprint
  @param  Expb_ExpBlueprintStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_ExpBlueprintStore_FindAllExpBlueprints_keyval1(Expb_ExpBlueprintStore self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprintStore.expBlueprints

child 
link to class ExpBlueprint
  @param  Expb_ExpBlueprintStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_ExpBlueprintStore_FindAllExpBlueprints_keyval2(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprintStore.expBlueprints

child 
link to class ExpBlueprint
  @param  Expb_ExpBlueprintStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_ExpBlueprintStore_FindAllExpBlueprints_keyval3(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprintStore.expBlueprints

child 
link to class ExpBlueprint
  @param  Expb_ExpBlueprintStore self
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
extern ApiSet Expb_ExpBlueprintStore_FindAllExpBlueprints_keyval4(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expb_ExpBlueprintStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Expb_ExpBlueprintStore_FindFirstActiveRepository(Expb_ExpBlueprintStore self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expb_ExpBlueprintStore self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Expb_ExpBlueprintStore_FindFirstActiveRepository_keyval0(Expb_ExpBlueprintStore self);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expb_ExpBlueprintStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Expb_ExpBlueprintStore_FindFirstActiveRepository_keyval1(Expb_ExpBlueprintStore self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expb_ExpBlueprintStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Expb_ExpBlueprintStore_FindFirstActiveRepository_keyval2(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expb_ExpBlueprintStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Expb_ExpBlueprintStore_FindFirstActiveRepository_keyval3(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Expb_ExpBlueprintStore self
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
extern Impl_Repository Expb_ExpBlueprintStore_FindFirstActiveRepository_keyval4(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprintStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expb_ExpBlueprintStore_FindFirstApplicationData(Expb_ExpBlueprintStore self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprintStore self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expb_ExpBlueprintStore_FindFirstApplicationData_keyval0(Expb_ExpBlueprintStore self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprintStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expb_ExpBlueprintStore_FindFirstApplicationData_keyval1(Expb_ExpBlueprintStore self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprintStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expb_ExpBlueprintStore_FindFirstApplicationData_keyval2(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprintStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expb_ExpBlueprintStore_FindFirstApplicationData_keyval3(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprintStore self
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
extern Impl_ApplicationData Expb_ExpBlueprintStore_FindFirstApplicationData_keyval4(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprintStore.expBlueprints

child link to 
class ExpBlueprint
  @param  Expb_ExpBlueprintStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Expb_ExpBlueprint Expb_ExpBlueprintStore_FindFirstExpBlueprint(Expb_ExpBlueprintStore self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprintStore.expBlueprints

child link to 
class ExpBlueprint
  @param  Expb_ExpBlueprintStore self
  @returns  the first value that satisfies the conditions 
**/
extern Expb_ExpBlueprint Expb_ExpBlueprintStore_FindFirstExpBlueprint_keyval0(Expb_ExpBlueprintStore self);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprintStore.expBlueprints

child link to 
class ExpBlueprint
  @param  Expb_ExpBlueprintStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Expb_ExpBlueprint Expb_ExpBlueprintStore_FindFirstExpBlueprint_keyval1(Expb_ExpBlueprintStore self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprintStore.expBlueprints

child link to 
class ExpBlueprint
  @param  Expb_ExpBlueprintStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Expb_ExpBlueprint Expb_ExpBlueprintStore_FindFirstExpBlueprint_keyval2(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprintStore.expBlueprints

child link to 
class ExpBlueprint
  @param  Expb_ExpBlueprintStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Expb_ExpBlueprint Expb_ExpBlueprintStore_FindFirstExpBlueprint_keyval3(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprintStore.expBlueprints

child link to 
class ExpBlueprint
  @param  Expb_ExpBlueprintStore self
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
extern Expb_ExpBlueprint Expb_ExpBlueprintStore_FindFirstExpBlueprint_keyval4(Expb_ExpBlueprintStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.ExpBlueprint.ExpBlueprintStore
  @param  Expb_ExpBlueprintStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Expb_ExpBlueprintStore_Get(Expb_ExpBlueprintStore self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
extern Acco_AccessObject Expb_ExpBlueprintStore_GetAccess(Expb_ExpBlueprintStore self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
extern Acco_AccessObject Expb_ExpBlueprintStore_GetActiveAccess(Expb_ExpBlueprintStore self);

/**
  Get for memops.Implementation.TopObject.activeRepositories

Repositories 
on package search path that contains a copy of TopObject
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
extern ApiList Expb_ExpBlueprintStore_GetActiveRepositories(Expb_ExpBlueprintStore self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
extern ApiList Expb_ExpBlueprintStore_GetApplicationData(Expb_ExpBlueprintStore self);

/**
  GetByKey for ccp.lims.ExpBlueprint.ExpBlueprintStore
  @param  Expb_ExpBlueprintStore self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Expb_ExpBlueprintStore Expb_ExpBlueprintStore_GetByKey(Expb_ExpBlueprintStore self, Impl_MemopsRoot startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
extern ApiString Expb_ExpBlueprintStore_GetClassName(Expb_ExpBlueprintStore self);

/**
  Get for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
extern ApiString Expb_ExpBlueprintStore_GetCreatedBy(Expb_ExpBlueprintStore self);

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprintStore.expBlueprints

child 
link to class ExpBlueprint
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
extern ApiSet Expb_ExpBlueprintStore_GetExpBlueprints(Expb_ExpBlueprintStore self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
extern ApiList Expb_ExpBlueprintStore_GetFieldNames(Expb_ExpBlueprintStore self);

/**
  GetFullKey for ccp.lims.ExpBlueprint.ExpBlueprintStore
  @param  Expb_ExpBlueprintStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Expb_ExpBlueprintStore_GetFullKey(Expb_ExpBlueprintStore self, ApiBoolean useGuid);

/**
  Get for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
extern ApiString Expb_ExpBlueprintStore_GetGuid(Expb_ExpBlueprintStore self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
extern ApiBoolean Expb_ExpBlueprintStore_GetInConstructor(Expb_ExpBlueprintStore self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
extern ApiBoolean Expb_ExpBlueprintStore_GetIsDeleted(Expb_ExpBlueprintStore self);

/**
  Get for memops.Implementation.TopObject.isLoaded

Implementation 
attribute, set automatically. True if the data in the Storage are loaded 
into memory. As data are loaded automatically, this attribute should be 
of interest only for the implementation.
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
extern ApiBoolean Expb_ExpBlueprintStore_GetIsLoaded(Expb_ExpBlueprintStore self);

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
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
extern ApiBoolean Expb_ExpBlueprintStore_GetIsModifiable(Expb_ExpBlueprintStore self);

/**
  Get for memops.Implementation.TopObject.isModified

Implementation 
attribute. True if the data corresponding to the Storage have been 
modified since being loaded. Serves to indicate which data need to be 
saved.
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
extern ApiBoolean Expb_ExpBlueprintStore_GetIsModified(Expb_ExpBlueprintStore self);

/**
  Get for memops.Implementation.TopObject.isReading

Implementation 
attribute, set automatically. True if the data corresponding to the 
Storage are in the process of being read. As data loading is handled 
automatically, this attribute should be relevant only for the 
implementation, or possibly for programmers of multithreaded programs. 
Serves to suppress notifiers and validity checking during reading. Note 
that objects are not valid until the data loading is completed.
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
extern ApiBoolean Expb_ExpBlueprintStore_GetIsReading(Expb_ExpBlueprintStore self);

/**
  Get for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
extern ApiString Expb_ExpBlueprintStore_GetLastUnlockedBy(Expb_ExpBlueprintStore self);

/**
  GetLocalKey for ccp.lims.ExpBlueprint.ExpBlueprintStore
  @param  Expb_ExpBlueprintStore self
  @returns  Local object key
**/
extern ApiObject Expb_ExpBlueprintStore_GetLocalKey(Expb_ExpBlueprintStore self);

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprintStore.memopsRoot

parent link
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
extern Impl_MemopsRoot Expb_ExpBlueprintStore_GetMemopsRoot(Expb_ExpBlueprintStore self);

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprintStore.name

name of 
ExdBlueprintStore
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
extern ApiString Expb_ExpBlueprintStore_GetName(Expb_ExpBlueprintStore self);

/**
  Get for memops.Implementation.TopObject.packageLocator

Package locator 
relevant for TopObject
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
extern Impl_PackageLocator Expb_ExpBlueprintStore_GetPackageLocator(Expb_ExpBlueprintStore self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
extern ApiString Expb_ExpBlueprintStore_GetPackageName(Expb_ExpBlueprintStore self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
extern ApiString Expb_ExpBlueprintStore_GetPackageShortName(Expb_ExpBlueprintStore self);

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprintStore.parent

link to parent 
object - synonym for memopsRoot
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
extern Impl_MemopsRoot Expb_ExpBlueprintStore_GetParent(Expb_ExpBlueprintStore self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
extern ApiString Expb_ExpBlueprintStore_GetQualifiedName(Expb_ExpBlueprintStore self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
extern Impl_MemopsRoot Expb_ExpBlueprintStore_GetRoot(Expb_ExpBlueprintStore self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
extern Impl_TopObject Expb_ExpBlueprintStore_GetTopObject(Expb_ExpBlueprintStore self);

/**
  Constructor for ccp.lims.ExpBlueprint.ExpBlueprintStore
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Expb_ExpBlueprintStore Expb_ExpBlueprintStore_Init(Impl_MemopsRoot parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.ExpBlueprint.ExpBlueprintStore
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
extern Expb_ExpBlueprintStore Expb_ExpBlueprintStore_Init_reqd(Impl_MemopsRoot parent, char * name);

/**
  Factory function to create ccp.lims.ExpBlueprint.ExpBlueprint
  @param  Expb_ExpBlueprintStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Expb_ExpBlueprint Expb_ExpBlueprintStore_NewExpBlueprint(Expb_ExpBlueprintStore self, ApiMap attrlinks);

/**
  Factory function to create ccp.lims.ExpBlueprint.ExpBlueprint
  @param  Expb_ExpBlueprintStore self
  @param  char * commonName
  @param  char * whyChosen
  @returns  the new object
**/
extern Expb_ExpBlueprint Expb_ExpBlueprintStore_NewExpBlueprint_reqd(Expb_ExpBlueprintStore self, char * commonName, char * whyChosen);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprintStore self
  @param  Impl_ApplicationData value
**/
extern void *Expb_ExpBlueprintStore_RemoveApplicationData(Expb_ExpBlueprintStore self, Impl_ApplicationData value);

/**
  SetAttr for ccp.lims.ExpBlueprint.ExpBlueprintStore
  @param  Expb_ExpBlueprintStore self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Expb_ExpBlueprintStore_Set(Expb_ExpBlueprintStore self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expb_ExpBlueprintStore self
  @param  Acco_AccessObject value
**/
extern void *Expb_ExpBlueprintStore_SetAccess(Expb_ExpBlueprintStore self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprintStore self
  @param  ApiList values
**/
extern void *Expb_ExpBlueprintStore_SetApplicationData(Expb_ExpBlueprintStore self, ApiList values);

/**
  Set for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Expb_ExpBlueprintStore self
  @param  ApiString value
**/
extern void *Expb_ExpBlueprintStore_SetCreatedBy(Expb_ExpBlueprintStore self, ApiString value);

/**
  Set for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Expb_ExpBlueprintStore self
  @param  ApiString value
**/
extern void *Expb_ExpBlueprintStore_SetGuid(Expb_ExpBlueprintStore self, ApiString value);

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
  @param  Expb_ExpBlueprintStore self
  @param  ApiBoolean value
**/
extern void *Expb_ExpBlueprintStore_SetIsModifiable(Expb_ExpBlueprintStore self, ApiBoolean value);

/**
  Set for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Expb_ExpBlueprintStore self
  @param  ApiString value
**/
extern void *Expb_ExpBlueprintStore_SetLastUnlockedBy(Expb_ExpBlueprintStore self, ApiString value);

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprintStore.name

name of 
ExdBlueprintStore
  @param  Expb_ExpBlueprintStore self
  @param  ApiString value
**/
extern void *Expb_ExpBlueprintStore_SetName(Expb_ExpBlueprintStore self, ApiString value);

/**
  Sorted for ccp.lims.ExpBlueprint.ExpBlueprintStore.expBlueprints

child 
link to class ExpBlueprint
  @param  Expb_ExpBlueprintStore self
  @returns   the result
**/
extern ApiList Expb_ExpBlueprintStore_SortedExpBlueprints(Expb_ExpBlueprintStore self);

#endif /* __incl__ccp_api_lims_ExpBlueprint_ExpBlueprintStore_h__ */
