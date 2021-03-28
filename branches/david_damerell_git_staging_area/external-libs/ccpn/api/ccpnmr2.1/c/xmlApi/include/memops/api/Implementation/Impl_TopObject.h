
#ifndef __incl__memops_api_Implementation_TopObject_h__
#define __incl__memops_api_Implementation_TopObject_h__

#include "ccp.h"

/*
  Superclass for TopObjects (except for MemopsRoot). The attributes and operations are different in File and Db implementations
*/

/* package memops.api.Implementation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_TopObject self
  @param  Impl_ApplicationData value
**/
extern void *Impl_TopObject_AddApplicationData(Impl_TopObject self, Impl_ApplicationData value);

/**
  back up TopObject to current backup location
  @param  Impl_TopObject self
**/
extern void *Impl_TopObject_Backup(Impl_TopObject self);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Impl_TopObject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Impl_TopObject_FindAllActiveRepositories(Impl_TopObject self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Impl_TopObject self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Impl_TopObject_FindAllActiveRepositories_keyval0(Impl_TopObject self);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Impl_TopObject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Impl_TopObject_FindAllActiveRepositories_keyval1(Impl_TopObject self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Impl_TopObject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Impl_TopObject_FindAllActiveRepositories_keyval2(Impl_TopObject self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Impl_TopObject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Impl_TopObject_FindAllActiveRepositories_keyval3(Impl_TopObject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Impl_TopObject self
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
extern ApiList Impl_TopObject_FindAllActiveRepositories_keyval4(Impl_TopObject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_TopObject self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Impl_TopObject_FindAllApplicationData(Impl_TopObject self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_TopObject self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Impl_TopObject_FindAllApplicationData_keyval0(Impl_TopObject self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_TopObject self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Impl_TopObject_FindAllApplicationData_keyval1(Impl_TopObject self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_TopObject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Impl_TopObject_FindAllApplicationData_keyval2(Impl_TopObject self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_TopObject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Impl_TopObject_FindAllApplicationData_keyval3(Impl_TopObject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_TopObject self
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
extern ApiList Impl_TopObject_FindAllApplicationData_keyval4(Impl_TopObject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Impl_TopObject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Impl_TopObject_FindFirstActiveRepository(Impl_TopObject self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Impl_TopObject self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Impl_TopObject_FindFirstActiveRepository_keyval0(Impl_TopObject self);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Impl_TopObject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Impl_TopObject_FindFirstActiveRepository_keyval1(Impl_TopObject self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Impl_TopObject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Impl_TopObject_FindFirstActiveRepository_keyval2(Impl_TopObject self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Impl_TopObject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Impl_TopObject_FindFirstActiveRepository_keyval3(Impl_TopObject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Impl_TopObject self
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
extern Impl_Repository Impl_TopObject_FindFirstActiveRepository_keyval4(Impl_TopObject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_TopObject self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Impl_TopObject_FindFirstApplicationData(Impl_TopObject self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_TopObject self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Impl_TopObject_FindFirstApplicationData_keyval0(Impl_TopObject self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_TopObject self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Impl_TopObject_FindFirstApplicationData_keyval1(Impl_TopObject self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_TopObject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Impl_TopObject_FindFirstApplicationData_keyval2(Impl_TopObject self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_TopObject self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Impl_TopObject_FindFirstApplicationData_keyval3(Impl_TopObject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_TopObject self
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
extern Impl_ApplicationData Impl_TopObject_FindFirstApplicationData_keyval4(Impl_TopObject self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Impl_TopObject self
  @returns   the result
**/
extern Acco_AccessObject Impl_TopObject_GetAccess(Impl_TopObject self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Impl_TopObject self
  @returns   the result
**/
extern Acco_AccessObject Impl_TopObject_GetActiveAccess(Impl_TopObject self);

/**
  Get for memops.Implementation.TopObject.activeRepositories

Repositories 
on package search path that contains a copy of TopObject
  @param  Impl_TopObject self
  @returns   the result
**/
extern ApiList Impl_TopObject_GetActiveRepositories(Impl_TopObject self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_TopObject self
  @returns   the result
**/
extern ApiList Impl_TopObject_GetApplicationData(Impl_TopObject self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Impl_TopObject self
  @returns   the result
**/
extern ApiString Impl_TopObject_GetClassName(Impl_TopObject self);

/**
  Get for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Impl_TopObject self
  @returns   the result
**/
extern ApiString Impl_TopObject_GetCreatedBy(Impl_TopObject self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Impl_TopObject self
  @returns   the result
**/
extern ApiList Impl_TopObject_GetFieldNames(Impl_TopObject self);

/**
  Get for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Impl_TopObject self
  @returns   the result
**/
extern ApiString Impl_TopObject_GetGuid(Impl_TopObject self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Impl_TopObject self
  @returns   the result
**/
extern ApiBoolean Impl_TopObject_GetInConstructor(Impl_TopObject self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Impl_TopObject self
  @returns   the result
**/
extern ApiBoolean Impl_TopObject_GetIsDeleted(Impl_TopObject self);

/**
  Get for memops.Implementation.TopObject.isLoaded

Implementation 
attribute, set automatically. True if the data in the Storage are loaded 
into memory. As data are loaded automatically, this attribute should be 
of interest only for the implementation.
  @param  Impl_TopObject self
  @returns   the result
**/
extern ApiBoolean Impl_TopObject_GetIsLoaded(Impl_TopObject self);

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
  @param  Impl_TopObject self
  @returns   the result
**/
extern ApiBoolean Impl_TopObject_GetIsModifiable(Impl_TopObject self);

/**
  Get for memops.Implementation.TopObject.isModified

Implementation 
attribute. True if the data corresponding to the Storage have been 
modified since being loaded. Serves to indicate which data need to be 
saved.
  @param  Impl_TopObject self
  @returns   the result
**/
extern ApiBoolean Impl_TopObject_GetIsModified(Impl_TopObject self);

/**
  Get for memops.Implementation.TopObject.isReading

Implementation 
attribute, set automatically. True if the data corresponding to the 
Storage are in the process of being read. As data loading is handled 
automatically, this attribute should be relevant only for the 
implementation, or possibly for programmers of multithreaded programs. 
Serves to suppress notifiers and validity checking during reading. Note 
that objects are not valid until the data loading is completed.
  @param  Impl_TopObject self
  @returns   the result
**/
extern ApiBoolean Impl_TopObject_GetIsReading(Impl_TopObject self);

/**
  Get for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Impl_TopObject self
  @returns   the result
**/
extern ApiString Impl_TopObject_GetLastUnlockedBy(Impl_TopObject self);

/**
  Get for memops.Implementation.TopObject.memopsRoot

parent link
  @param  Impl_TopObject self
  @returns   the result
**/
extern Impl_MemopsRoot Impl_TopObject_GetMemopsRoot(Impl_TopObject self);

/**
  getter for derived link packageLocator
  @param  Impl_TopObject self
  @returns   the result
**/
extern Impl_PackageLocator Impl_TopObject_GetPackageLocator(Impl_TopObject self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Impl_TopObject self
  @returns   the result
**/
extern ApiString Impl_TopObject_GetPackageName(Impl_TopObject self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Impl_TopObject self
  @returns   the result
**/
extern ApiString Impl_TopObject_GetPackageShortName(Impl_TopObject self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Impl_TopObject self
  @returns   the result
**/
extern ApiString Impl_TopObject_GetQualifiedName(Impl_TopObject self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Impl_TopObject self
  @returns   the result
**/
extern Impl_MemopsRoot Impl_TopObject_GetRoot(Impl_TopObject self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Impl_TopObject self
  @returns   the result
**/
extern Impl_TopObject Impl_TopObject_GetTopObject(Impl_TopObject self);

/**
  Load data corresponding to TopObject
  @param  Impl_TopObject self
**/
extern void *Impl_TopObject_Load(Impl_TopObject self);

/**
  Load TopObject from specific Repository
  @param  Impl_TopObject self
  @param  Impl_Repository repository
**/
extern void *Impl_TopObject_LoadFrom(Impl_TopObject self, Impl_Repository repository);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_TopObject self
  @param  Impl_ApplicationData value
**/
extern void *Impl_TopObject_RemoveApplicationData(Impl_TopObject self, Impl_ApplicationData value);

/**
  Remove data from specified repository. Will remove from disk. NB This 
operation is marked as a query because this means it may be executed on 
a deleted object. It does have the lasting side effect of changing the 
contents of the repository.
  @param  Impl_TopObject self
  @param  Impl_Repository repository
**/
extern void *Impl_TopObject_RemoveFrom(Impl_TopObject self, Impl_Repository repository);

/**
  restore data from current backup location
  @param  Impl_TopObject self
**/
extern void *Impl_TopObject_Restore(Impl_TopObject self);

/**
  Save data corresponding to TopObject
  @param  Impl_TopObject self
**/
extern void *Impl_TopObject_Save(Impl_TopObject self);

/**
  Save topObject to specified repository
  @param  Impl_TopObject self
  @param  Impl_Repository repository
**/
extern void *Impl_TopObject_SaveTo(Impl_TopObject self, Impl_Repository repository);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Impl_TopObject self
  @param  Acco_AccessObject value
**/
extern void *Impl_TopObject_SetAccess(Impl_TopObject self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Impl_TopObject self
  @param  ApiList values
**/
extern void *Impl_TopObject_SetApplicationData(Impl_TopObject self, ApiList values);

/**
  Set for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Impl_TopObject self
  @param  ApiString value
**/
extern void *Impl_TopObject_SetCreatedBy(Impl_TopObject self, ApiString value);

/**
  Set for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Impl_TopObject self
  @param  ApiString value
**/
extern void *Impl_TopObject_SetGuid(Impl_TopObject self, ApiString value);

/**
  Special setter for isModifiable. Sets lastUnlockedBy
  @param  Impl_TopObject self
  @param  ApiBoolean value
**/
extern void *Impl_TopObject_SetIsModifiable(Impl_TopObject self, ApiBoolean value);

/**
  Set for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Impl_TopObject self
  @param  ApiString value
**/
extern void *Impl_TopObject_SetLastUnlockedBy(Impl_TopObject self, ApiString value);

/**
  Set storage.isModified to True, so that the storage is saved at the next 
saveModified command. Fails if the storage is not loaded or not 
modifiable.
  @param  Impl_TopObject self
**/
extern void *Impl_TopObject_Touch(Impl_TopObject self);

#endif /* __incl__memops_api_Implementation_TopObject_h__ */
