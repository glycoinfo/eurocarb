
#ifndef __incl__ccp_api_general_Taxonomy_Taxonomy_h__
#define __incl__ccp_api_general_Taxonomy_Taxonomy_h__

#include "ccp.h"

/*
  TopObject for Taxonomy
*/

/* package ccp.api.general.Taxonomy */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_Taxonomy self
  @param  Impl_ApplicationData value
**/
extern void *Taxo_Taxonomy_AddApplicationData(Taxo_Taxonomy self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.general.Taxonomy.Taxonomy
  @param  Taxo_Taxonomy self
  @param  ApiBoolean complete
**/
extern void *Taxo_Taxonomy_CheckAllValid(Taxo_Taxonomy self, ApiBoolean complete);

/**
  CheckValid for ccp.general.Taxonomy.Taxonomy
  @param  Taxo_Taxonomy self
  @param  ApiBoolean complete
**/
extern void *Taxo_Taxonomy_CheckValid(Taxo_Taxonomy self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Taxo_Taxonomy self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Taxo_Taxonomy_FindAllActiveRepositories(Taxo_Taxonomy self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Taxo_Taxonomy self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Taxo_Taxonomy_FindAllActiveRepositories_keyval0(Taxo_Taxonomy self);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Taxo_Taxonomy self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Taxo_Taxonomy_FindAllActiveRepositories_keyval1(Taxo_Taxonomy self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Taxo_Taxonomy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Taxo_Taxonomy_FindAllActiveRepositories_keyval2(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Taxo_Taxonomy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Taxo_Taxonomy_FindAllActiveRepositories_keyval3(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Taxo_Taxonomy self
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
extern ApiList Taxo_Taxonomy_FindAllActiveRepositories_keyval4(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_Taxonomy self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Taxo_Taxonomy_FindAllApplicationData(Taxo_Taxonomy self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_Taxonomy self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Taxo_Taxonomy_FindAllApplicationData_keyval0(Taxo_Taxonomy self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_Taxonomy self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Taxo_Taxonomy_FindAllApplicationData_keyval1(Taxo_Taxonomy self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_Taxonomy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Taxo_Taxonomy_FindAllApplicationData_keyval2(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_Taxonomy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Taxo_Taxonomy_FindAllApplicationData_keyval3(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_Taxonomy self
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
extern ApiList Taxo_Taxonomy_FindAllApplicationData_keyval4(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Taxonomy.Taxonomy.naturalSources

child link to 
class NaturalSource
  @param  Taxo_Taxonomy self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Taxo_Taxonomy_FindAllNaturalSources(Taxo_Taxonomy self, ApiMap conditions);

/**
  FindAll for ccp.general.Taxonomy.Taxonomy.naturalSources

child link to 
class NaturalSource
  @param  Taxo_Taxonomy self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Taxo_Taxonomy_FindAllNaturalSources_keyval0(Taxo_Taxonomy self);

/**
  FindAll for ccp.general.Taxonomy.Taxonomy.naturalSources

child link to 
class NaturalSource
  @param  Taxo_Taxonomy self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Taxo_Taxonomy_FindAllNaturalSources_keyval1(Taxo_Taxonomy self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Taxonomy.Taxonomy.naturalSources

child link to 
class NaturalSource
  @param  Taxo_Taxonomy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Taxo_Taxonomy_FindAllNaturalSources_keyval2(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Taxonomy.Taxonomy.naturalSources

child link to 
class NaturalSource
  @param  Taxo_Taxonomy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Taxo_Taxonomy_FindAllNaturalSources_keyval3(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Taxonomy.Taxonomy.naturalSources

child link to 
class NaturalSource
  @param  Taxo_Taxonomy self
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
extern ApiSet Taxo_Taxonomy_FindAllNaturalSources_keyval4(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Taxo_Taxonomy self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Taxo_Taxonomy_FindFirstActiveRepository(Taxo_Taxonomy self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Taxo_Taxonomy self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Taxo_Taxonomy_FindFirstActiveRepository_keyval0(Taxo_Taxonomy self);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Taxo_Taxonomy self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Taxo_Taxonomy_FindFirstActiveRepository_keyval1(Taxo_Taxonomy self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Taxo_Taxonomy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Taxo_Taxonomy_FindFirstActiveRepository_keyval2(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Taxo_Taxonomy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Taxo_Taxonomy_FindFirstActiveRepository_keyval3(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Taxo_Taxonomy self
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
extern Impl_Repository Taxo_Taxonomy_FindFirstActiveRepository_keyval4(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_Taxonomy self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Taxo_Taxonomy_FindFirstApplicationData(Taxo_Taxonomy self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_Taxonomy self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Taxo_Taxonomy_FindFirstApplicationData_keyval0(Taxo_Taxonomy self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_Taxonomy self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Taxo_Taxonomy_FindFirstApplicationData_keyval1(Taxo_Taxonomy self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_Taxonomy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Taxo_Taxonomy_FindFirstApplicationData_keyval2(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_Taxonomy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Taxo_Taxonomy_FindFirstApplicationData_keyval3(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_Taxonomy self
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
extern Impl_ApplicationData Taxo_Taxonomy_FindFirstApplicationData_keyval4(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Taxonomy.Taxonomy.naturalSources

child link 
to class NaturalSource
  @param  Taxo_Taxonomy self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Taxo_NaturalSource Taxo_Taxonomy_FindFirstNaturalSource(Taxo_Taxonomy self, ApiMap conditions);

/**
  FindFirst for ccp.general.Taxonomy.Taxonomy.naturalSources

child link 
to class NaturalSource
  @param  Taxo_Taxonomy self
  @returns  the first value that satisfies the conditions 
**/
extern Taxo_NaturalSource Taxo_Taxonomy_FindFirstNaturalSource_keyval0(Taxo_Taxonomy self);

/**
  FindFirst for ccp.general.Taxonomy.Taxonomy.naturalSources

child link 
to class NaturalSource
  @param  Taxo_Taxonomy self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Taxo_NaturalSource Taxo_Taxonomy_FindFirstNaturalSource_keyval1(Taxo_Taxonomy self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Taxonomy.Taxonomy.naturalSources

child link 
to class NaturalSource
  @param  Taxo_Taxonomy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Taxo_NaturalSource Taxo_Taxonomy_FindFirstNaturalSource_keyval2(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Taxonomy.Taxonomy.naturalSources

child link 
to class NaturalSource
  @param  Taxo_Taxonomy self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Taxo_NaturalSource Taxo_Taxonomy_FindFirstNaturalSource_keyval3(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Taxonomy.Taxonomy.naturalSources

child link 
to class NaturalSource
  @param  Taxo_Taxonomy self
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
extern Taxo_NaturalSource Taxo_Taxonomy_FindFirstNaturalSource_keyval4(Taxo_Taxonomy self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.general.Taxonomy.Taxonomy
  @param  Taxo_Taxonomy self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Taxo_Taxonomy_Get(Taxo_Taxonomy self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Taxo_Taxonomy self
  @returns   the result
**/
extern Acco_AccessObject Taxo_Taxonomy_GetAccess(Taxo_Taxonomy self);

/**
  Get for memops.Implementation.TopObject.activeRepositories

Repositories 
on package search path that contains a copy of TopObject
  @param  Taxo_Taxonomy self
  @returns   the result
**/
extern ApiList Taxo_Taxonomy_GetActiveRepositories(Taxo_Taxonomy self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_Taxonomy self
  @returns   the result
**/
extern ApiList Taxo_Taxonomy_GetApplicationData(Taxo_Taxonomy self);

/**
  GetByKey for ccp.general.Taxonomy.Taxonomy
  @param  Taxo_Taxonomy self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Taxo_Taxonomy Taxo_Taxonomy_GetByKey(Taxo_Taxonomy self, Impl_MemopsRoot startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Taxo_Taxonomy self
  @returns   the result
**/
extern ApiString Taxo_Taxonomy_GetClassName(Taxo_Taxonomy self);

/**
  Get for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Taxo_Taxonomy self
  @returns   the result
**/
extern ApiString Taxo_Taxonomy_GetCreatedBy(Taxo_Taxonomy self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Taxo_Taxonomy self
  @returns   the result
**/
extern ApiList Taxo_Taxonomy_GetFieldNames(Taxo_Taxonomy self);

/**
  GetFullKey for ccp.general.Taxonomy.Taxonomy
  @param  Taxo_Taxonomy self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Taxo_Taxonomy_GetFullKey(Taxo_Taxonomy self, ApiBoolean useGuid);

/**
  Get for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Taxo_Taxonomy self
  @returns   the result
**/
extern ApiString Taxo_Taxonomy_GetGuid(Taxo_Taxonomy self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Taxo_Taxonomy self
  @returns   the result
**/
extern ApiBoolean Taxo_Taxonomy_GetInConstructor(Taxo_Taxonomy self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Taxo_Taxonomy self
  @returns   the result
**/
extern ApiBoolean Taxo_Taxonomy_GetIsDeleted(Taxo_Taxonomy self);

/**
  Get for memops.Implementation.TopObject.isLoaded

Implementation 
attribute, set automatically. True if the data in the Storage are loaded 
into memory. As data are loaded automatically, this attribute should be 
of interest only for the implementation.
  @param  Taxo_Taxonomy self
  @returns   the result
**/
extern ApiBoolean Taxo_Taxonomy_GetIsLoaded(Taxo_Taxonomy self);

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
  @param  Taxo_Taxonomy self
  @returns   the result
**/
extern ApiBoolean Taxo_Taxonomy_GetIsModifiable(Taxo_Taxonomy self);

/**
  Get for memops.Implementation.TopObject.isModified

Implementation 
attribute. True if the data corresponding to the Storage have been 
modified since being loaded. Serves to indicate which data need to be 
saved.
  @param  Taxo_Taxonomy self
  @returns   the result
**/
extern ApiBoolean Taxo_Taxonomy_GetIsModified(Taxo_Taxonomy self);

/**
  Get for memops.Implementation.TopObject.isReading

Implementation 
attribute, set automatically. True if the data corresponding to the 
Storage are in the process of being read. As data loading is handled 
automatically, this attribute should be relevant only for the 
implementation, or possibly for programmers of multithreaded programs. 
Serves to suppress notifiers and validity checking during reading. Note 
that objects are not valid until the data loading is completed.
  @param  Taxo_Taxonomy self
  @returns   the result
**/
extern ApiBoolean Taxo_Taxonomy_GetIsReading(Taxo_Taxonomy self);

/**
  Get for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Taxo_Taxonomy self
  @returns   the result
**/
extern ApiString Taxo_Taxonomy_GetLastUnlockedBy(Taxo_Taxonomy self);

/**
  GetLocalKey for ccp.general.Taxonomy.Taxonomy
  @param  Taxo_Taxonomy self
  @returns  Local object key
**/
extern ApiObject Taxo_Taxonomy_GetLocalKey(Taxo_Taxonomy self);

/**
  Get for ccp.general.Taxonomy.Taxonomy.memopsRoot

parent link
  @param  Taxo_Taxonomy self
  @returns   the result
**/
extern Impl_MemopsRoot Taxo_Taxonomy_GetMemopsRoot(Taxo_Taxonomy self);

/**
  Get for ccp.general.Taxonomy.Taxonomy.name

name of Taxonomy
  @param  Taxo_Taxonomy self
  @returns   the result
**/
extern ApiString Taxo_Taxonomy_GetName(Taxo_Taxonomy self);

/**
  Get for ccp.general.Taxonomy.Taxonomy.naturalSources

child link to 
class NaturalSource
  @param  Taxo_Taxonomy self
  @returns   the result
**/
extern ApiSet Taxo_Taxonomy_GetNaturalSources(Taxo_Taxonomy self);

/**
  Get for memops.Implementation.TopObject.packageLocator

Package locator 
relevant for TopObject
  @param  Taxo_Taxonomy self
  @returns   the result
**/
extern Impl_PackageLocator Taxo_Taxonomy_GetPackageLocator(Taxo_Taxonomy self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Taxo_Taxonomy self
  @returns   the result
**/
extern ApiString Taxo_Taxonomy_GetPackageName(Taxo_Taxonomy self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Taxo_Taxonomy self
  @returns   the result
**/
extern ApiString Taxo_Taxonomy_GetPackageShortName(Taxo_Taxonomy self);

/**
  Get for ccp.general.Taxonomy.Taxonomy.parent

link to parent object - 
synonym for memopsRoot
  @param  Taxo_Taxonomy self
  @returns   the result
**/
extern Impl_MemopsRoot Taxo_Taxonomy_GetParent(Taxo_Taxonomy self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Taxo_Taxonomy self
  @returns   the result
**/
extern ApiString Taxo_Taxonomy_GetQualifiedName(Taxo_Taxonomy self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Taxo_Taxonomy self
  @returns   the result
**/
extern Impl_MemopsRoot Taxo_Taxonomy_GetRoot(Taxo_Taxonomy self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Taxo_Taxonomy self
  @returns   the result
**/
extern Impl_TopObject Taxo_Taxonomy_GetTopObject(Taxo_Taxonomy self);

/**
  Constructor for ccp.general.Taxonomy.Taxonomy
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Taxo_Taxonomy Taxo_Taxonomy_Init(Impl_MemopsRoot parent, ApiMap attrlinks);

/**
  Constructor for ccp.general.Taxonomy.Taxonomy
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
extern Taxo_Taxonomy Taxo_Taxonomy_Init_reqd(Impl_MemopsRoot parent, char * name);

/**
  Factory function to create ccp.general.Taxonomy.NaturalSource
  @param  Taxo_Taxonomy self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Taxo_NaturalSource Taxo_Taxonomy_NewNaturalSource(Taxo_Taxonomy self, ApiMap attrlinks);

/**
  Factory function to create ccp.general.Taxonomy.NaturalSource
  @param  Taxo_Taxonomy self
  @param  char * organismName
  @returns  the new object
**/
extern Taxo_NaturalSource Taxo_Taxonomy_NewNaturalSource_reqd(Taxo_Taxonomy self, char * organismName);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_Taxonomy self
  @param  Impl_ApplicationData value
**/
extern void *Taxo_Taxonomy_RemoveApplicationData(Taxo_Taxonomy self, Impl_ApplicationData value);

/**
  SetAttr for ccp.general.Taxonomy.Taxonomy
  @param  Taxo_Taxonomy self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Taxo_Taxonomy_Set(Taxo_Taxonomy self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Taxo_Taxonomy self
  @param  Acco_AccessObject value
**/
extern void *Taxo_Taxonomy_SetAccess(Taxo_Taxonomy self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Taxo_Taxonomy self
  @param  ApiList values
**/
extern void *Taxo_Taxonomy_SetApplicationData(Taxo_Taxonomy self, ApiList values);

/**
  Set for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Taxo_Taxonomy self
  @param  ApiString value
**/
extern void *Taxo_Taxonomy_SetCreatedBy(Taxo_Taxonomy self, ApiString value);

/**
  Set for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Taxo_Taxonomy self
  @param  ApiString value
**/
extern void *Taxo_Taxonomy_SetGuid(Taxo_Taxonomy self, ApiString value);

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
  @param  Taxo_Taxonomy self
  @param  ApiBoolean value
**/
extern void *Taxo_Taxonomy_SetIsModifiable(Taxo_Taxonomy self, ApiBoolean value);

/**
  Set for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Taxo_Taxonomy self
  @param  ApiString value
**/
extern void *Taxo_Taxonomy_SetLastUnlockedBy(Taxo_Taxonomy self, ApiString value);

/**
  Set for ccp.general.Taxonomy.Taxonomy.name

name of Taxonomy
  @param  Taxo_Taxonomy self
  @param  ApiString value
**/
extern void *Taxo_Taxonomy_SetName(Taxo_Taxonomy self, ApiString value);

/**
  Sorted for ccp.general.Taxonomy.Taxonomy.naturalSources

child link to 
class NaturalSource
  @param  Taxo_Taxonomy self
  @returns   the result
**/
extern ApiList Taxo_Taxonomy_SortedNaturalSources(Taxo_Taxonomy self);

#endif /* __incl__ccp_api_general_Taxonomy_Taxonomy_h__ */
