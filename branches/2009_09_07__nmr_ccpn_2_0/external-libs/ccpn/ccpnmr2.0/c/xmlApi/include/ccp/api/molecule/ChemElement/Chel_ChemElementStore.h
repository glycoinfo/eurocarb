
#ifndef __incl__ccp_api_molecule_ChemElement_ChemElementStore_h__
#define __incl__ccp_api_molecule_ChemElement_ChemElementStore_h__

#include "ccp.h"

/*
  Grouping of ChemElement information
*/

/* package ccp.api.molecule.ChemElement */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_ChemElementStore self
  @param  Impl_ApplicationData value
**/
extern void *Chel_ChemElementStore_AddApplicationData(Chel_ChemElementStore self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.molecule.ChemElement.ChemElementStore
  @param  Chel_ChemElementStore self
  @param  ApiBoolean complete
**/
extern void *Chel_ChemElementStore_CheckAllValid(Chel_ChemElementStore self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.ChemElement.ChemElementStore
  @param  Chel_ChemElementStore self
  @param  ApiBoolean complete
**/
extern void *Chel_ChemElementStore_CheckValid(Chel_ChemElementStore self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chel_ChemElementStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chel_ChemElementStore_FindAllActiveRepositories(Chel_ChemElementStore self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chel_ChemElementStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chel_ChemElementStore_FindAllActiveRepositories_keyval0(Chel_ChemElementStore self);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chel_ChemElementStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chel_ChemElementStore_FindAllActiveRepositories_keyval1(Chel_ChemElementStore self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chel_ChemElementStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chel_ChemElementStore_FindAllActiveRepositories_keyval2(Chel_ChemElementStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chel_ChemElementStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chel_ChemElementStore_FindAllActiveRepositories_keyval3(Chel_ChemElementStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chel_ChemElementStore self
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
extern ApiList Chel_ChemElementStore_FindAllActiveRepositories_keyval4(Chel_ChemElementStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_ChemElementStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chel_ChemElementStore_FindAllApplicationData(Chel_ChemElementStore self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_ChemElementStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chel_ChemElementStore_FindAllApplicationData_keyval0(Chel_ChemElementStore self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_ChemElementStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chel_ChemElementStore_FindAllApplicationData_keyval1(Chel_ChemElementStore self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_ChemElementStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chel_ChemElementStore_FindAllApplicationData_keyval2(Chel_ChemElementStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_ChemElementStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Chel_ChemElementStore_FindAllApplicationData_keyval3(Chel_ChemElementStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_ChemElementStore self
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
extern ApiList Chel_ChemElementStore_FindAllApplicationData_keyval4(Chel_ChemElementStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.ChemElement.ChemElementStore.chemElements

child link to 
class ChemElement
  @param  Chel_ChemElementStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chel_ChemElementStore_FindAllChemElements(Chel_ChemElementStore self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.ChemElement.ChemElementStore.chemElements

child link to 
class ChemElement
  @param  Chel_ChemElementStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chel_ChemElementStore_FindAllChemElements_keyval0(Chel_ChemElementStore self);

/**
  FindAll for 
ccp.molecule.ChemElement.ChemElementStore.chemElements

child link to 
class ChemElement
  @param  Chel_ChemElementStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chel_ChemElementStore_FindAllChemElements_keyval1(Chel_ChemElementStore self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.ChemElement.ChemElementStore.chemElements

child link to 
class ChemElement
  @param  Chel_ChemElementStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chel_ChemElementStore_FindAllChemElements_keyval2(Chel_ChemElementStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.ChemElement.ChemElementStore.chemElements

child link to 
class ChemElement
  @param  Chel_ChemElementStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Chel_ChemElementStore_FindAllChemElements_keyval3(Chel_ChemElementStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.ChemElement.ChemElementStore.chemElements

child link to 
class ChemElement
  @param  Chel_ChemElementStore self
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
extern ApiSet Chel_ChemElementStore_FindAllChemElements_keyval4(Chel_ChemElementStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chel_ChemElementStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Chel_ChemElementStore_FindFirstActiveRepository(Chel_ChemElementStore self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chel_ChemElementStore self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Chel_ChemElementStore_FindFirstActiveRepository_keyval0(Chel_ChemElementStore self);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chel_ChemElementStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Chel_ChemElementStore_FindFirstActiveRepository_keyval1(Chel_ChemElementStore self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chel_ChemElementStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Chel_ChemElementStore_FindFirstActiveRepository_keyval2(Chel_ChemElementStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chel_ChemElementStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Chel_ChemElementStore_FindFirstActiveRepository_keyval3(Chel_ChemElementStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Chel_ChemElementStore self
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
extern Impl_Repository Chel_ChemElementStore_FindFirstActiveRepository_keyval4(Chel_ChemElementStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_ChemElementStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chel_ChemElementStore_FindFirstApplicationData(Chel_ChemElementStore self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_ChemElementStore self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chel_ChemElementStore_FindFirstApplicationData_keyval0(Chel_ChemElementStore self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_ChemElementStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chel_ChemElementStore_FindFirstApplicationData_keyval1(Chel_ChemElementStore self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_ChemElementStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chel_ChemElementStore_FindFirstApplicationData_keyval2(Chel_ChemElementStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_ChemElementStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Chel_ChemElementStore_FindFirstApplicationData_keyval3(Chel_ChemElementStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_ChemElementStore self
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
extern Impl_ApplicationData Chel_ChemElementStore_FindFirstApplicationData_keyval4(Chel_ChemElementStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.ChemElement.ChemElementStore.chemElements

child link to 
class ChemElement
  @param  Chel_ChemElementStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Chel_ChemElement Chel_ChemElementStore_FindFirstChemElement(Chel_ChemElementStore self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.ChemElement.ChemElementStore.chemElements

child link to 
class ChemElement
  @param  Chel_ChemElementStore self
  @returns  the first value that satisfies the conditions 
**/
extern Chel_ChemElement Chel_ChemElementStore_FindFirstChemElement_keyval0(Chel_ChemElementStore self);

/**
  FindFirst for 
ccp.molecule.ChemElement.ChemElementStore.chemElements

child link to 
class ChemElement
  @param  Chel_ChemElementStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Chel_ChemElement Chel_ChemElementStore_FindFirstChemElement_keyval1(Chel_ChemElementStore self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.ChemElement.ChemElementStore.chemElements

child link to 
class ChemElement
  @param  Chel_ChemElementStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Chel_ChemElement Chel_ChemElementStore_FindFirstChemElement_keyval2(Chel_ChemElementStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.ChemElement.ChemElementStore.chemElements

child link to 
class ChemElement
  @param  Chel_ChemElementStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Chel_ChemElement Chel_ChemElementStore_FindFirstChemElement_keyval3(Chel_ChemElementStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.ChemElement.ChemElementStore.chemElements

child link to 
class ChemElement
  @param  Chel_ChemElementStore self
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
extern Chel_ChemElement Chel_ChemElementStore_FindFirstChemElement_keyval4(Chel_ChemElementStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.ChemElement.ChemElementStore
  @param  Chel_ChemElementStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Chel_ChemElementStore_Get(Chel_ChemElementStore self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chel_ChemElementStore self
  @returns   the result
**/
extern Acco_AccessObject Chel_ChemElementStore_GetAccess(Chel_ChemElementStore self);

/**
  Get for memops.Implementation.TopObject.activeRepositories

Repositories 
on package search path that contains a copy of TopObject
  @param  Chel_ChemElementStore self
  @returns   the result
**/
extern ApiList Chel_ChemElementStore_GetActiveRepositories(Chel_ChemElementStore self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_ChemElementStore self
  @returns   the result
**/
extern ApiList Chel_ChemElementStore_GetApplicationData(Chel_ChemElementStore self);

/**
  GetByKey for ccp.molecule.ChemElement.ChemElementStore
  @param  Chel_ChemElementStore self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Chel_ChemElementStore Chel_ChemElementStore_GetByKey(Chel_ChemElementStore self, Impl_MemopsRoot startObj, ApiList fullKey);

/**
  Get for ccp.molecule.ChemElement.ChemElementStore.chemElements

child 
link to class ChemElement
  @param  Chel_ChemElementStore self
  @returns   the result
**/
extern ApiSet Chel_ChemElementStore_GetChemElements(Chel_ChemElementStore self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Chel_ChemElementStore self
  @returns   the result
**/
extern ApiString Chel_ChemElementStore_GetClassName(Chel_ChemElementStore self);

/**
  Get for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Chel_ChemElementStore self
  @returns   the result
**/
extern ApiString Chel_ChemElementStore_GetCreatedBy(Chel_ChemElementStore self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Chel_ChemElementStore self
  @returns   the result
**/
extern ApiList Chel_ChemElementStore_GetFieldNames(Chel_ChemElementStore self);

/**
  GetFullKey for ccp.molecule.ChemElement.ChemElementStore
  @param  Chel_ChemElementStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Chel_ChemElementStore_GetFullKey(Chel_ChemElementStore self, ApiBoolean useGuid);

/**
  Get for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Chel_ChemElementStore self
  @returns   the result
**/
extern ApiString Chel_ChemElementStore_GetGuid(Chel_ChemElementStore self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Chel_ChemElementStore self
  @returns   the result
**/
extern ApiBoolean Chel_ChemElementStore_GetInConstructor(Chel_ChemElementStore self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Chel_ChemElementStore self
  @returns   the result
**/
extern ApiBoolean Chel_ChemElementStore_GetIsDeleted(Chel_ChemElementStore self);

/**
  Get for memops.Implementation.TopObject.isLoaded

Implementation 
attribute, set automatically. True if the data in the Storage are loaded 
into memory. As data are loaded automatically, this attribute should be 
of interest only for the implementation.
  @param  Chel_ChemElementStore self
  @returns   the result
**/
extern ApiBoolean Chel_ChemElementStore_GetIsLoaded(Chel_ChemElementStore self);

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
  @param  Chel_ChemElementStore self
  @returns   the result
**/
extern ApiBoolean Chel_ChemElementStore_GetIsModifiable(Chel_ChemElementStore self);

/**
  Get for memops.Implementation.TopObject.isModified

Implementation 
attribute. True if the data corresponding to the Storage have been 
modified since being loaded. Serves to indicate which data need to be 
saved.
  @param  Chel_ChemElementStore self
  @returns   the result
**/
extern ApiBoolean Chel_ChemElementStore_GetIsModified(Chel_ChemElementStore self);

/**
  Get for memops.Implementation.TopObject.isReading

Implementation 
attribute, set automatically. True if the data corresponding to the 
Storage are in the process of being read. As data loading is handled 
automatically, this attribute should be relevant only for the 
implementation, or possibly for programmers of multithreaded programs. 
Serves to suppress notifiers and validity checking during reading. Note 
that objects are not valid until the data loading is completed.
  @param  Chel_ChemElementStore self
  @returns   the result
**/
extern ApiBoolean Chel_ChemElementStore_GetIsReading(Chel_ChemElementStore self);

/**
  Get for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Chel_ChemElementStore self
  @returns   the result
**/
extern ApiString Chel_ChemElementStore_GetLastUnlockedBy(Chel_ChemElementStore self);

/**
  GetLocalKey for ccp.molecule.ChemElement.ChemElementStore
  @param  Chel_ChemElementStore self
  @returns  Local object key
**/
extern ApiObject Chel_ChemElementStore_GetLocalKey(Chel_ChemElementStore self);

/**
  Get for ccp.molecule.ChemElement.ChemElementStore.memopsRoot

parent 
link
  @param  Chel_ChemElementStore self
  @returns   the result
**/
extern Impl_MemopsRoot Chel_ChemElementStore_GetMemopsRoot(Chel_ChemElementStore self);

/**
  Get for ccp.molecule.ChemElement.ChemElementStore.name

name of 
ChemElementGroup
  @param  Chel_ChemElementStore self
  @returns   the result
**/
extern ApiString Chel_ChemElementStore_GetName(Chel_ChemElementStore self);

/**
  Get for memops.Implementation.TopObject.packageLocator

Package locator 
relevant for TopObject
  @param  Chel_ChemElementStore self
  @returns   the result
**/
extern Impl_PackageLocator Chel_ChemElementStore_GetPackageLocator(Chel_ChemElementStore self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Chel_ChemElementStore self
  @returns   the result
**/
extern ApiString Chel_ChemElementStore_GetPackageName(Chel_ChemElementStore self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Chel_ChemElementStore self
  @returns   the result
**/
extern ApiString Chel_ChemElementStore_GetPackageShortName(Chel_ChemElementStore self);

/**
  Get for ccp.molecule.ChemElement.ChemElementStore.parent

link to parent 
object - synonym for memopsRoot
  @param  Chel_ChemElementStore self
  @returns   the result
**/
extern Impl_MemopsRoot Chel_ChemElementStore_GetParent(Chel_ChemElementStore self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Chel_ChemElementStore self
  @returns   the result
**/
extern ApiString Chel_ChemElementStore_GetQualifiedName(Chel_ChemElementStore self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Chel_ChemElementStore self
  @returns   the result
**/
extern Impl_MemopsRoot Chel_ChemElementStore_GetRoot(Chel_ChemElementStore self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Chel_ChemElementStore self
  @returns   the result
**/
extern Impl_TopObject Chel_ChemElementStore_GetTopObject(Chel_ChemElementStore self);

/**
  Constructor for ccp.molecule.ChemElement.ChemElementStore
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Chel_ChemElementStore Chel_ChemElementStore_Init(Impl_MemopsRoot parent, ApiMap attrlinks);

/**
  Constructor for ccp.molecule.ChemElement.ChemElementStore
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
extern Chel_ChemElementStore Chel_ChemElementStore_Init_reqd(Impl_MemopsRoot parent, char * name);

/**
  Factory function to create ccp.molecule.ChemElement.ChemElement
  @param  Chel_ChemElementStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Chel_ChemElement Chel_ChemElementStore_NewChemElement(Chel_ChemElementStore self, ApiMap attrlinks);

/**
  Factory function to create ccp.molecule.ChemElement.ChemElement
  @param  Chel_ChemElementStore self
  @param  char * symbol
  @returns  the new object
**/
extern Chel_ChemElement Chel_ChemElementStore_NewChemElement_reqd(Chel_ChemElementStore self, char * symbol);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_ChemElementStore self
  @param  Impl_ApplicationData value
**/
extern void *Chel_ChemElementStore_RemoveApplicationData(Chel_ChemElementStore self, Impl_ApplicationData value);

/**
  SetAttr for ccp.molecule.ChemElement.ChemElementStore
  @param  Chel_ChemElementStore self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Chel_ChemElementStore_Set(Chel_ChemElementStore self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Chel_ChemElementStore self
  @param  Acco_AccessObject value
**/
extern void *Chel_ChemElementStore_SetAccess(Chel_ChemElementStore self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Chel_ChemElementStore self
  @param  ApiList values
**/
extern void *Chel_ChemElementStore_SetApplicationData(Chel_ChemElementStore self, ApiList values);

/**
  Set for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Chel_ChemElementStore self
  @param  ApiString value
**/
extern void *Chel_ChemElementStore_SetCreatedBy(Chel_ChemElementStore self, ApiString value);

/**
  Set for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Chel_ChemElementStore self
  @param  ApiString value
**/
extern void *Chel_ChemElementStore_SetGuid(Chel_ChemElementStore self, ApiString value);

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
  @param  Chel_ChemElementStore self
  @param  ApiBoolean value
**/
extern void *Chel_ChemElementStore_SetIsModifiable(Chel_ChemElementStore self, ApiBoolean value);

/**
  Set for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Chel_ChemElementStore self
  @param  ApiString value
**/
extern void *Chel_ChemElementStore_SetLastUnlockedBy(Chel_ChemElementStore self, ApiString value);

/**
  Set for ccp.molecule.ChemElement.ChemElementStore.name

name of 
ChemElementGroup
  @param  Chel_ChemElementStore self
  @param  ApiString value
**/
extern void *Chel_ChemElementStore_SetName(Chel_ChemElementStore self, ApiString value);

/**
  Sorted for ccp.molecule.ChemElement.ChemElementStore.chemElements

child 
link to class ChemElement
  @param  Chel_ChemElementStore self
  @returns   the result
**/
extern ApiList Chel_ChemElementStore_SortedChemElements(Chel_ChemElementStore self);

#endif /* __incl__ccp_api_molecule_ChemElement_ChemElementStore_h__ */
