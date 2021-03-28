
#ifndef __incl__ccp_api_lims_Sample_SampleStore_h__
#define __incl__ccp_api_lims_Sample_SampleStore_h__

#include "ccp.h"

/*
  TopObject for package Sample
*/

/* package ccp.api.lims.Sample */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_SampleStore self
  @param  Impl_ApplicationData value
**/
extern void *Sam_SampleStore_AddApplicationData(Sam_SampleStore self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.lims.Sample.SampleStore
  @param  Sam_SampleStore self
  @param  ApiBoolean complete
**/
extern void *Sam_SampleStore_CheckAllValid(Sam_SampleStore self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.Sample.SampleStore
  @param  Sam_SampleStore self
  @param  ApiBoolean complete
**/
extern void *Sam_SampleStore_CheckValid(Sam_SampleStore self, ApiBoolean complete);

/**
  FindAll for ccp.lims.Sample.SampleStore.abstractSamples

child link to 
class AbstractSample
  @param  Sam_SampleStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_SampleStore_FindAllAbstractSamples(Sam_SampleStore self, ApiMap conditions);

/**
  FindAll for ccp.lims.Sample.SampleStore.abstractSamples

child link to 
class AbstractSample
  @param  Sam_SampleStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_SampleStore_FindAllAbstractSamples_keyval0(Sam_SampleStore self);

/**
  FindAll for ccp.lims.Sample.SampleStore.abstractSamples

child link to 
class AbstractSample
  @param  Sam_SampleStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_SampleStore_FindAllAbstractSamples_keyval1(Sam_SampleStore self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Sample.SampleStore.abstractSamples

child link to 
class AbstractSample
  @param  Sam_SampleStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_SampleStore_FindAllAbstractSamples_keyval2(Sam_SampleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Sample.SampleStore.abstractSamples

child link to 
class AbstractSample
  @param  Sam_SampleStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_SampleStore_FindAllAbstractSamples_keyval3(Sam_SampleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Sample.SampleStore.abstractSamples

child link to 
class AbstractSample
  @param  Sam_SampleStore self
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
extern ApiSet Sam_SampleStore_FindAllAbstractSamples_keyval4(Sam_SampleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Sam_SampleStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Sam_SampleStore_FindAllActiveRepositories(Sam_SampleStore self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Sam_SampleStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Sam_SampleStore_FindAllActiveRepositories_keyval0(Sam_SampleStore self);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Sam_SampleStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Sam_SampleStore_FindAllActiveRepositories_keyval1(Sam_SampleStore self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Sam_SampleStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Sam_SampleStore_FindAllActiveRepositories_keyval2(Sam_SampleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Sam_SampleStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Sam_SampleStore_FindAllActiveRepositories_keyval3(Sam_SampleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Sam_SampleStore self
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
extern ApiList Sam_SampleStore_FindAllActiveRepositories_keyval4(Sam_SampleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_SampleStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Sam_SampleStore_FindAllApplicationData(Sam_SampleStore self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_SampleStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Sam_SampleStore_FindAllApplicationData_keyval0(Sam_SampleStore self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_SampleStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Sam_SampleStore_FindAllApplicationData_keyval1(Sam_SampleStore self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_SampleStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Sam_SampleStore_FindAllApplicationData_keyval2(Sam_SampleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_SampleStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Sam_SampleStore_FindAllApplicationData_keyval3(Sam_SampleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_SampleStore self
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
extern ApiList Sam_SampleStore_FindAllApplicationData_keyval4(Sam_SampleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Sample.SampleStore.abstractSamples

child link to 
class AbstractSample
  @param  Sam_SampleStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Sam_AbstractSample Sam_SampleStore_FindFirstAbstractSample(Sam_SampleStore self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Sample.SampleStore.abstractSamples

child link to 
class AbstractSample
  @param  Sam_SampleStore self
  @returns  the first value that satisfies the conditions 
**/
extern Sam_AbstractSample Sam_SampleStore_FindFirstAbstractSample_keyval0(Sam_SampleStore self);

/**
  FindFirst for ccp.lims.Sample.SampleStore.abstractSamples

child link to 
class AbstractSample
  @param  Sam_SampleStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Sam_AbstractSample Sam_SampleStore_FindFirstAbstractSample_keyval1(Sam_SampleStore self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Sample.SampleStore.abstractSamples

child link to 
class AbstractSample
  @param  Sam_SampleStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Sam_AbstractSample Sam_SampleStore_FindFirstAbstractSample_keyval2(Sam_SampleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Sample.SampleStore.abstractSamples

child link to 
class AbstractSample
  @param  Sam_SampleStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Sam_AbstractSample Sam_SampleStore_FindFirstAbstractSample_keyval3(Sam_SampleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Sample.SampleStore.abstractSamples

child link to 
class AbstractSample
  @param  Sam_SampleStore self
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
extern Sam_AbstractSample Sam_SampleStore_FindFirstAbstractSample_keyval4(Sam_SampleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Sam_SampleStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Sam_SampleStore_FindFirstActiveRepository(Sam_SampleStore self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Sam_SampleStore self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Sam_SampleStore_FindFirstActiveRepository_keyval0(Sam_SampleStore self);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Sam_SampleStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Sam_SampleStore_FindFirstActiveRepository_keyval1(Sam_SampleStore self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Sam_SampleStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Sam_SampleStore_FindFirstActiveRepository_keyval2(Sam_SampleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Sam_SampleStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Sam_SampleStore_FindFirstActiveRepository_keyval3(Sam_SampleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Sam_SampleStore self
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
extern Impl_Repository Sam_SampleStore_FindFirstActiveRepository_keyval4(Sam_SampleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_SampleStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Sam_SampleStore_FindFirstApplicationData(Sam_SampleStore self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_SampleStore self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Sam_SampleStore_FindFirstApplicationData_keyval0(Sam_SampleStore self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_SampleStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Sam_SampleStore_FindFirstApplicationData_keyval1(Sam_SampleStore self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_SampleStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Sam_SampleStore_FindFirstApplicationData_keyval2(Sam_SampleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_SampleStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Sam_SampleStore_FindFirstApplicationData_keyval3(Sam_SampleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_SampleStore self
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
extern Impl_ApplicationData Sam_SampleStore_FindFirstApplicationData_keyval4(Sam_SampleStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.Sample.SampleStore
  @param  Sam_SampleStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Sam_SampleStore_Get(Sam_SampleStore self, ApiString name);

/**
  Get for ccp.lims.Sample.SampleStore.abstractSamples

child link to class 
AbstractSample
  @param  Sam_SampleStore self
  @returns   the result
**/
extern ApiSet Sam_SampleStore_GetAbstractSamples(Sam_SampleStore self);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Sam_SampleStore self
  @returns   the result
**/
extern Acco_AccessObject Sam_SampleStore_GetAccess(Sam_SampleStore self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Sam_SampleStore self
  @returns   the result
**/
extern Acco_AccessObject Sam_SampleStore_GetActiveAccess(Sam_SampleStore self);

/**
  Get for memops.Implementation.TopObject.activeRepositories

Repositories 
on package search path that contains a copy of TopObject
  @param  Sam_SampleStore self
  @returns   the result
**/
extern ApiList Sam_SampleStore_GetActiveRepositories(Sam_SampleStore self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_SampleStore self
  @returns   the result
**/
extern ApiList Sam_SampleStore_GetApplicationData(Sam_SampleStore self);

/**
  GetByKey for ccp.lims.Sample.SampleStore
  @param  Sam_SampleStore self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Sam_SampleStore Sam_SampleStore_GetByKey(Sam_SampleStore self, Impl_MemopsRoot startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Sam_SampleStore self
  @returns   the result
**/
extern ApiString Sam_SampleStore_GetClassName(Sam_SampleStore self);

/**
  Get for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Sam_SampleStore self
  @returns   the result
**/
extern ApiString Sam_SampleStore_GetCreatedBy(Sam_SampleStore self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Sam_SampleStore self
  @returns   the result
**/
extern ApiList Sam_SampleStore_GetFieldNames(Sam_SampleStore self);

/**
  GetFullKey for ccp.lims.Sample.SampleStore
  @param  Sam_SampleStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Sam_SampleStore_GetFullKey(Sam_SampleStore self, ApiBoolean useGuid);

/**
  Get for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Sam_SampleStore self
  @returns   the result
**/
extern ApiString Sam_SampleStore_GetGuid(Sam_SampleStore self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Sam_SampleStore self
  @returns   the result
**/
extern ApiBoolean Sam_SampleStore_GetInConstructor(Sam_SampleStore self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Sam_SampleStore self
  @returns   the result
**/
extern ApiBoolean Sam_SampleStore_GetIsDeleted(Sam_SampleStore self);

/**
  Get for memops.Implementation.TopObject.isLoaded

Implementation 
attribute, set automatically. True if the data in the Storage are loaded 
into memory. As data are loaded automatically, this attribute should be 
of interest only for the implementation.
  @param  Sam_SampleStore self
  @returns   the result
**/
extern ApiBoolean Sam_SampleStore_GetIsLoaded(Sam_SampleStore self);

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
  @param  Sam_SampleStore self
  @returns   the result
**/
extern ApiBoolean Sam_SampleStore_GetIsModifiable(Sam_SampleStore self);

/**
  Get for memops.Implementation.TopObject.isModified

Implementation 
attribute. True if the data corresponding to the Storage have been 
modified since being loaded. Serves to indicate which data need to be 
saved.
  @param  Sam_SampleStore self
  @returns   the result
**/
extern ApiBoolean Sam_SampleStore_GetIsModified(Sam_SampleStore self);

/**
  Get for memops.Implementation.TopObject.isReading

Implementation 
attribute, set automatically. True if the data corresponding to the 
Storage are in the process of being read. As data loading is handled 
automatically, this attribute should be relevant only for the 
implementation, or possibly for programmers of multithreaded programs. 
Serves to suppress notifiers and validity checking during reading. Note 
that objects are not valid until the data loading is completed.
  @param  Sam_SampleStore self
  @returns   the result
**/
extern ApiBoolean Sam_SampleStore_GetIsReading(Sam_SampleStore self);

/**
  Get for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Sam_SampleStore self
  @returns   the result
**/
extern ApiString Sam_SampleStore_GetLastUnlockedBy(Sam_SampleStore self);

/**
  GetLocalKey for ccp.lims.Sample.SampleStore
  @param  Sam_SampleStore self
  @returns  Local object key
**/
extern ApiObject Sam_SampleStore_GetLocalKey(Sam_SampleStore self);

/**
  Get for ccp.lims.Sample.SampleStore.memopsRoot

parent link
  @param  Sam_SampleStore self
  @returns   the result
**/
extern Impl_MemopsRoot Sam_SampleStore_GetMemopsRoot(Sam_SampleStore self);

/**
  Get for ccp.lims.Sample.SampleStore.name

name of SampleStore
  @param  Sam_SampleStore self
  @returns   the result
**/
extern ApiString Sam_SampleStore_GetName(Sam_SampleStore self);

/**
  Get for memops.Implementation.TopObject.packageLocator

Package locator 
relevant for TopObject
  @param  Sam_SampleStore self
  @returns   the result
**/
extern Impl_PackageLocator Sam_SampleStore_GetPackageLocator(Sam_SampleStore self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Sam_SampleStore self
  @returns   the result
**/
extern ApiString Sam_SampleStore_GetPackageName(Sam_SampleStore self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Sam_SampleStore self
  @returns   the result
**/
extern ApiString Sam_SampleStore_GetPackageShortName(Sam_SampleStore self);

/**
  Get for ccp.lims.Sample.SampleStore.parent

link to parent object - 
synonym for memopsRoot
  @param  Sam_SampleStore self
  @returns   the result
**/
extern Impl_MemopsRoot Sam_SampleStore_GetParent(Sam_SampleStore self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Sam_SampleStore self
  @returns   the result
**/
extern ApiString Sam_SampleStore_GetQualifiedName(Sam_SampleStore self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Sam_SampleStore self
  @returns   the result
**/
extern Impl_MemopsRoot Sam_SampleStore_GetRoot(Sam_SampleStore self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Sam_SampleStore self
  @returns   the result
**/
extern Impl_TopObject Sam_SampleStore_GetTopObject(Sam_SampleStore self);

/**
  Constructor for ccp.lims.Sample.SampleStore
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Sam_SampleStore Sam_SampleStore_Init(Impl_MemopsRoot parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.Sample.SampleStore
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
extern Sam_SampleStore Sam_SampleStore_Init_reqd(Impl_MemopsRoot parent, char * name);

/**
  Factory function to create ccp.lims.Sample.CrystalSample
  @param  Sam_SampleStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Sam_CrystalSample Sam_SampleStore_NewCrystalSample(Sam_SampleStore self, ApiMap attrlinks);

/**
  Factory function to create ccp.lims.Sample.CrystalSample
  @param  Sam_SampleStore self
  @param  char * name
  @param  ApiSet sampleCategories
  @returns  the new object
**/
extern Sam_CrystalSample Sam_SampleStore_NewCrystalSample_reqd(Sam_SampleStore self, char * name, ApiSet sampleCategories);

/**
  Factory function to create ccp.lims.Sample.RefSample
  @param  Sam_SampleStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Sam_RefSample Sam_SampleStore_NewRefSample(Sam_SampleStore self, ApiMap attrlinks);

/**
  Factory function to create ccp.lims.Sample.RefSample
  @param  Sam_SampleStore self
  @param  char * name
  @param  ApiSet sampleCategories
  @returns  the new object
**/
extern Sam_RefSample Sam_SampleStore_NewRefSample_reqd(Sam_SampleStore self, char * name, ApiSet sampleCategories);

/**
  Factory function to create ccp.lims.Sample.Sample
  @param  Sam_SampleStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Sam_Sample Sam_SampleStore_NewSample(Sam_SampleStore self, ApiMap attrlinks);

/**
  Factory function to create ccp.lims.Sample.Sample
  @param  Sam_SampleStore self
  @param  char * name
  @param  ApiSet sampleCategories
  @returns  the new object
**/
extern Sam_Sample Sam_SampleStore_NewSample_reqd(Sam_SampleStore self, char * name, ApiSet sampleCategories);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_SampleStore self
  @param  Impl_ApplicationData value
**/
extern void *Sam_SampleStore_RemoveApplicationData(Sam_SampleStore self, Impl_ApplicationData value);

/**
  SetAttr for ccp.lims.Sample.SampleStore
  @param  Sam_SampleStore self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Sam_SampleStore_Set(Sam_SampleStore self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Sam_SampleStore self
  @param  Acco_AccessObject value
**/
extern void *Sam_SampleStore_SetAccess(Sam_SampleStore self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_SampleStore self
  @param  ApiList values
**/
extern void *Sam_SampleStore_SetApplicationData(Sam_SampleStore self, ApiList values);

/**
  Set for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Sam_SampleStore self
  @param  ApiString value
**/
extern void *Sam_SampleStore_SetCreatedBy(Sam_SampleStore self, ApiString value);

/**
  Set for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Sam_SampleStore self
  @param  ApiString value
**/
extern void *Sam_SampleStore_SetGuid(Sam_SampleStore self, ApiString value);

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
  @param  Sam_SampleStore self
  @param  ApiBoolean value
**/
extern void *Sam_SampleStore_SetIsModifiable(Sam_SampleStore self, ApiBoolean value);

/**
  Set for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Sam_SampleStore self
  @param  ApiString value
**/
extern void *Sam_SampleStore_SetLastUnlockedBy(Sam_SampleStore self, ApiString value);

/**
  Set for ccp.lims.Sample.SampleStore.name

name of SampleStore
  @param  Sam_SampleStore self
  @param  ApiString value
**/
extern void *Sam_SampleStore_SetName(Sam_SampleStore self, ApiString value);

/**
  Sorted for ccp.lims.Sample.SampleStore.abstractSamples

child link to 
class AbstractSample
  @param  Sam_SampleStore self
  @returns   the result
**/
extern ApiList Sam_SampleStore_SortedAbstractSamples(Sam_SampleStore self);

#endif /* __incl__ccp_api_lims_Sample_SampleStore_h__ */
