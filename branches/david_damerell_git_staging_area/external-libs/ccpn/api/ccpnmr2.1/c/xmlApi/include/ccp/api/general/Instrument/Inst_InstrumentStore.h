
#ifndef __incl__ccp_api_general_Instrument_InstrumentStore_h__
#define __incl__ccp_api_general_Instrument_InstrumentStore_h__

#include "ccp.h"

/*
  grouping for Instrument data
*/

/* package ccp.api.general.Instrument */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_InstrumentStore self
  @param  Impl_ApplicationData value
**/
extern void *Inst_InstrumentStore_AddApplicationData(Inst_InstrumentStore self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.general.Instrument.InstrumentStore
  @param  Inst_InstrumentStore self
  @param  ApiBoolean complete
**/
extern void *Inst_InstrumentStore_CheckAllValid(Inst_InstrumentStore self, ApiBoolean complete);

/**
  CheckValid for ccp.general.Instrument.InstrumentStore
  @param  Inst_InstrumentStore self
  @param  ApiBoolean complete
**/
extern void *Inst_InstrumentStore_CheckValid(Inst_InstrumentStore self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Inst_InstrumentStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_InstrumentStore_FindAllActiveRepositories(Inst_InstrumentStore self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Inst_InstrumentStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_InstrumentStore_FindAllActiveRepositories_keyval0(Inst_InstrumentStore self);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Inst_InstrumentStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_InstrumentStore_FindAllActiveRepositories_keyval1(Inst_InstrumentStore self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Inst_InstrumentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_InstrumentStore_FindAllActiveRepositories_keyval2(Inst_InstrumentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Inst_InstrumentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_InstrumentStore_FindAllActiveRepositories_keyval3(Inst_InstrumentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Inst_InstrumentStore self
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
extern ApiList Inst_InstrumentStore_FindAllActiveRepositories_keyval4(Inst_InstrumentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_InstrumentStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_InstrumentStore_FindAllApplicationData(Inst_InstrumentStore self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_InstrumentStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_InstrumentStore_FindAllApplicationData_keyval0(Inst_InstrumentStore self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_InstrumentStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_InstrumentStore_FindAllApplicationData_keyval1(Inst_InstrumentStore self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_InstrumentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_InstrumentStore_FindAllApplicationData_keyval2(Inst_InstrumentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_InstrumentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Inst_InstrumentStore_FindAllApplicationData_keyval3(Inst_InstrumentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_InstrumentStore self
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
extern ApiList Inst_InstrumentStore_FindAllApplicationData_keyval4(Inst_InstrumentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.general.Instrument.InstrumentStore.instruments

child 
link to class AbstractInstrument
  @param  Inst_InstrumentStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_InstrumentStore_FindAllInstruments(Inst_InstrumentStore self, ApiMap conditions);

/**
  FindAll for ccp.general.Instrument.InstrumentStore.instruments

child 
link to class AbstractInstrument
  @param  Inst_InstrumentStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_InstrumentStore_FindAllInstruments_keyval0(Inst_InstrumentStore self);

/**
  FindAll for ccp.general.Instrument.InstrumentStore.instruments

child 
link to class AbstractInstrument
  @param  Inst_InstrumentStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_InstrumentStore_FindAllInstruments_keyval1(Inst_InstrumentStore self, char * key, ApiObject value);

/**
  FindAll for ccp.general.Instrument.InstrumentStore.instruments

child 
link to class AbstractInstrument
  @param  Inst_InstrumentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_InstrumentStore_FindAllInstruments_keyval2(Inst_InstrumentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.general.Instrument.InstrumentStore.instruments

child 
link to class AbstractInstrument
  @param  Inst_InstrumentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Inst_InstrumentStore_FindAllInstruments_keyval3(Inst_InstrumentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.general.Instrument.InstrumentStore.instruments

child 
link to class AbstractInstrument
  @param  Inst_InstrumentStore self
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
extern ApiSet Inst_InstrumentStore_FindAllInstruments_keyval4(Inst_InstrumentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Inst_InstrumentStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Inst_InstrumentStore_FindFirstActiveRepository(Inst_InstrumentStore self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Inst_InstrumentStore self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Inst_InstrumentStore_FindFirstActiveRepository_keyval0(Inst_InstrumentStore self);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Inst_InstrumentStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Inst_InstrumentStore_FindFirstActiveRepository_keyval1(Inst_InstrumentStore self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Inst_InstrumentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Inst_InstrumentStore_FindFirstActiveRepository_keyval2(Inst_InstrumentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Inst_InstrumentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Inst_InstrumentStore_FindFirstActiveRepository_keyval3(Inst_InstrumentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Inst_InstrumentStore self
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
extern Impl_Repository Inst_InstrumentStore_FindFirstActiveRepository_keyval4(Inst_InstrumentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_InstrumentStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Inst_InstrumentStore_FindFirstApplicationData(Inst_InstrumentStore self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_InstrumentStore self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Inst_InstrumentStore_FindFirstApplicationData_keyval0(Inst_InstrumentStore self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_InstrumentStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Inst_InstrumentStore_FindFirstApplicationData_keyval1(Inst_InstrumentStore self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_InstrumentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Inst_InstrumentStore_FindFirstApplicationData_keyval2(Inst_InstrumentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_InstrumentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Inst_InstrumentStore_FindFirstApplicationData_keyval3(Inst_InstrumentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_InstrumentStore self
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
extern Impl_ApplicationData Inst_InstrumentStore_FindFirstApplicationData_keyval4(Inst_InstrumentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.general.Instrument.InstrumentStore.instruments

child 
link to class AbstractInstrument
  @param  Inst_InstrumentStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Inst_AbstractInstrument Inst_InstrumentStore_FindFirstInstrument(Inst_InstrumentStore self, ApiMap conditions);

/**
  FindFirst for ccp.general.Instrument.InstrumentStore.instruments

child 
link to class AbstractInstrument
  @param  Inst_InstrumentStore self
  @returns  the first value that satisfies the conditions 
**/
extern Inst_AbstractInstrument Inst_InstrumentStore_FindFirstInstrument_keyval0(Inst_InstrumentStore self);

/**
  FindFirst for ccp.general.Instrument.InstrumentStore.instruments

child 
link to class AbstractInstrument
  @param  Inst_InstrumentStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Inst_AbstractInstrument Inst_InstrumentStore_FindFirstInstrument_keyval1(Inst_InstrumentStore self, char * key, ApiObject value);

/**
  FindFirst for ccp.general.Instrument.InstrumentStore.instruments

child 
link to class AbstractInstrument
  @param  Inst_InstrumentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Inst_AbstractInstrument Inst_InstrumentStore_FindFirstInstrument_keyval2(Inst_InstrumentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.general.Instrument.InstrumentStore.instruments

child 
link to class AbstractInstrument
  @param  Inst_InstrumentStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Inst_AbstractInstrument Inst_InstrumentStore_FindFirstInstrument_keyval3(Inst_InstrumentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.general.Instrument.InstrumentStore.instruments

child 
link to class AbstractInstrument
  @param  Inst_InstrumentStore self
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
extern Inst_AbstractInstrument Inst_InstrumentStore_FindFirstInstrument_keyval4(Inst_InstrumentStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.general.Instrument.InstrumentStore
  @param  Inst_InstrumentStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Inst_InstrumentStore_Get(Inst_InstrumentStore self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Inst_InstrumentStore self
  @returns   the result
**/
extern Acco_AccessObject Inst_InstrumentStore_GetAccess(Inst_InstrumentStore self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Inst_InstrumentStore self
  @returns   the result
**/
extern Acco_AccessObject Inst_InstrumentStore_GetActiveAccess(Inst_InstrumentStore self);

/**
  Get for memops.Implementation.TopObject.activeRepositories

Repositories 
on package search path that contains a copy of TopObject
  @param  Inst_InstrumentStore self
  @returns   the result
**/
extern ApiList Inst_InstrumentStore_GetActiveRepositories(Inst_InstrumentStore self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_InstrumentStore self
  @returns   the result
**/
extern ApiList Inst_InstrumentStore_GetApplicationData(Inst_InstrumentStore self);

/**
  GetByKey for ccp.general.Instrument.InstrumentStore
  @param  Inst_InstrumentStore self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Inst_InstrumentStore Inst_InstrumentStore_GetByKey(Inst_InstrumentStore self, Impl_MemopsRoot startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Inst_InstrumentStore self
  @returns   the result
**/
extern ApiString Inst_InstrumentStore_GetClassName(Inst_InstrumentStore self);

/**
  Get for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Inst_InstrumentStore self
  @returns   the result
**/
extern ApiString Inst_InstrumentStore_GetCreatedBy(Inst_InstrumentStore self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Inst_InstrumentStore self
  @returns   the result
**/
extern ApiList Inst_InstrumentStore_GetFieldNames(Inst_InstrumentStore self);

/**
  GetFullKey for ccp.general.Instrument.InstrumentStore
  @param  Inst_InstrumentStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Inst_InstrumentStore_GetFullKey(Inst_InstrumentStore self, ApiBoolean useGuid);

/**
  Get for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Inst_InstrumentStore self
  @returns   the result
**/
extern ApiString Inst_InstrumentStore_GetGuid(Inst_InstrumentStore self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Inst_InstrumentStore self
  @returns   the result
**/
extern ApiBoolean Inst_InstrumentStore_GetInConstructor(Inst_InstrumentStore self);

/**
  Get for ccp.general.Instrument.InstrumentStore.instruments

child link 
to class AbstractInstrument
  @param  Inst_InstrumentStore self
  @returns   the result
**/
extern ApiSet Inst_InstrumentStore_GetInstruments(Inst_InstrumentStore self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Inst_InstrumentStore self
  @returns   the result
**/
extern ApiBoolean Inst_InstrumentStore_GetIsDeleted(Inst_InstrumentStore self);

/**
  Get for memops.Implementation.TopObject.isLoaded

Implementation 
attribute, set automatically. True if the data in the Storage are loaded 
into memory. As data are loaded automatically, this attribute should be 
of interest only for the implementation.
  @param  Inst_InstrumentStore self
  @returns   the result
**/
extern ApiBoolean Inst_InstrumentStore_GetIsLoaded(Inst_InstrumentStore self);

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
  @param  Inst_InstrumentStore self
  @returns   the result
**/
extern ApiBoolean Inst_InstrumentStore_GetIsModifiable(Inst_InstrumentStore self);

/**
  Get for memops.Implementation.TopObject.isModified

Implementation 
attribute. True if the data corresponding to the Storage have been 
modified since being loaded. Serves to indicate which data need to be 
saved.
  @param  Inst_InstrumentStore self
  @returns   the result
**/
extern ApiBoolean Inst_InstrumentStore_GetIsModified(Inst_InstrumentStore self);

/**
  Get for memops.Implementation.TopObject.isReading

Implementation 
attribute, set automatically. True if the data corresponding to the 
Storage are in the process of being read. As data loading is handled 
automatically, this attribute should be relevant only for the 
implementation, or possibly for programmers of multithreaded programs. 
Serves to suppress notifiers and validity checking during reading. Note 
that objects are not valid until the data loading is completed.
  @param  Inst_InstrumentStore self
  @returns   the result
**/
extern ApiBoolean Inst_InstrumentStore_GetIsReading(Inst_InstrumentStore self);

/**
  Get for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Inst_InstrumentStore self
  @returns   the result
**/
extern ApiString Inst_InstrumentStore_GetLastUnlockedBy(Inst_InstrumentStore self);

/**
  GetLocalKey for ccp.general.Instrument.InstrumentStore
  @param  Inst_InstrumentStore self
  @returns  Local object key
**/
extern ApiObject Inst_InstrumentStore_GetLocalKey(Inst_InstrumentStore self);

/**
  Get for ccp.general.Instrument.InstrumentStore.memopsRoot

parent link
  @param  Inst_InstrumentStore self
  @returns   the result
**/
extern Impl_MemopsRoot Inst_InstrumentStore_GetMemopsRoot(Inst_InstrumentStore self);

/**
  Get for ccp.general.Instrument.InstrumentStore.name

name of 
InstrumentGroup
  @param  Inst_InstrumentStore self
  @returns   the result
**/
extern ApiString Inst_InstrumentStore_GetName(Inst_InstrumentStore self);

/**
  Get for memops.Implementation.TopObject.packageLocator

Package locator 
relevant for TopObject
  @param  Inst_InstrumentStore self
  @returns   the result
**/
extern Impl_PackageLocator Inst_InstrumentStore_GetPackageLocator(Inst_InstrumentStore self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Inst_InstrumentStore self
  @returns   the result
**/
extern ApiString Inst_InstrumentStore_GetPackageName(Inst_InstrumentStore self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Inst_InstrumentStore self
  @returns   the result
**/
extern ApiString Inst_InstrumentStore_GetPackageShortName(Inst_InstrumentStore self);

/**
  Get for ccp.general.Instrument.InstrumentStore.parent

link to parent 
object - synonym for memopsRoot
  @param  Inst_InstrumentStore self
  @returns   the result
**/
extern Impl_MemopsRoot Inst_InstrumentStore_GetParent(Inst_InstrumentStore self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Inst_InstrumentStore self
  @returns   the result
**/
extern ApiString Inst_InstrumentStore_GetQualifiedName(Inst_InstrumentStore self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Inst_InstrumentStore self
  @returns   the result
**/
extern Impl_MemopsRoot Inst_InstrumentStore_GetRoot(Inst_InstrumentStore self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Inst_InstrumentStore self
  @returns   the result
**/
extern Impl_TopObject Inst_InstrumentStore_GetTopObject(Inst_InstrumentStore self);

/**
  Constructor for ccp.general.Instrument.InstrumentStore
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Inst_InstrumentStore Inst_InstrumentStore_Init(Impl_MemopsRoot parent, ApiMap attrlinks);

/**
  Constructor for ccp.general.Instrument.InstrumentStore
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
extern Inst_InstrumentStore Inst_InstrumentStore_Init_reqd(Impl_MemopsRoot parent, char * name);

/**
  Factory function to create ccp.general.Instrument.Column
  @param  Inst_InstrumentStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Inst_Column Inst_InstrumentStore_NewColumn(Inst_InstrumentStore self, ApiMap attrlinks);

/**
  Factory function to create ccp.general.Instrument.Column
  @param  Inst_InstrumentStore self
  @param  char * name
  @returns  the new object
**/
extern Inst_Column Inst_InstrumentStore_NewColumn_reqd(Inst_InstrumentStore self, char * name);

/**
  Factory function to create ccp.general.Instrument.Instrument
  @param  Inst_InstrumentStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Inst_Instrument Inst_InstrumentStore_NewInstrument(Inst_InstrumentStore self, ApiMap attrlinks);

/**
  Factory function to create ccp.general.Instrument.Instrument
  @param  Inst_InstrumentStore self
  @param  char * name
  @returns  the new object
**/
extern Inst_Instrument Inst_InstrumentStore_NewInstrument_reqd(Inst_InstrumentStore self, char * name);

/**
  Factory function to create ccp.general.Instrument.NmrProbe
  @param  Inst_InstrumentStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Inst_NmrProbe Inst_InstrumentStore_NewNmrProbe(Inst_InstrumentStore self, ApiMap attrlinks);

/**
  Factory function to create ccp.general.Instrument.NmrProbe
  @param  Inst_InstrumentStore self
  @param  char * name
  @returns  the new object
**/
extern Inst_NmrProbe Inst_InstrumentStore_NewNmrProbe_reqd(Inst_InstrumentStore self, char * name);

/**
  Factory function to create ccp.general.Instrument.NmrSpectrometer
  @param  Inst_InstrumentStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Inst_NmrSpectrometer Inst_InstrumentStore_NewNmrSpectrometer(Inst_InstrumentStore self, ApiMap attrlinks);

/**
  Factory function to create ccp.general.Instrument.NmrSpectrometer
  @param  Inst_InstrumentStore self
  @param  char * name
  @returns  the new object
**/
extern Inst_NmrSpectrometer Inst_InstrumentStore_NewNmrSpectrometer_reqd(Inst_InstrumentStore self, char * name);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_InstrumentStore self
  @param  Impl_ApplicationData value
**/
extern void *Inst_InstrumentStore_RemoveApplicationData(Inst_InstrumentStore self, Impl_ApplicationData value);

/**
  SetAttr for ccp.general.Instrument.InstrumentStore
  @param  Inst_InstrumentStore self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Inst_InstrumentStore_Set(Inst_InstrumentStore self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Inst_InstrumentStore self
  @param  Acco_AccessObject value
**/
extern void *Inst_InstrumentStore_SetAccess(Inst_InstrumentStore self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Inst_InstrumentStore self
  @param  ApiList values
**/
extern void *Inst_InstrumentStore_SetApplicationData(Inst_InstrumentStore self, ApiList values);

/**
  Set for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Inst_InstrumentStore self
  @param  ApiString value
**/
extern void *Inst_InstrumentStore_SetCreatedBy(Inst_InstrumentStore self, ApiString value);

/**
  Set for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Inst_InstrumentStore self
  @param  ApiString value
**/
extern void *Inst_InstrumentStore_SetGuid(Inst_InstrumentStore self, ApiString value);

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
  @param  Inst_InstrumentStore self
  @param  ApiBoolean value
**/
extern void *Inst_InstrumentStore_SetIsModifiable(Inst_InstrumentStore self, ApiBoolean value);

/**
  Set for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Inst_InstrumentStore self
  @param  ApiString value
**/
extern void *Inst_InstrumentStore_SetLastUnlockedBy(Inst_InstrumentStore self, ApiString value);

/**
  Set for ccp.general.Instrument.InstrumentStore.name

name of 
InstrumentGroup
  @param  Inst_InstrumentStore self
  @param  ApiString value
**/
extern void *Inst_InstrumentStore_SetName(Inst_InstrumentStore self, ApiString value);

/**
  Sorted for ccp.general.Instrument.InstrumentStore.instruments

child 
link to class AbstractInstrument
  @param  Inst_InstrumentStore self
  @returns   the result
**/
extern ApiList Inst_InstrumentStore_SortedInstruments(Inst_InstrumentStore self);

#endif /* __incl__ccp_api_general_Instrument_InstrumentStore_h__ */
