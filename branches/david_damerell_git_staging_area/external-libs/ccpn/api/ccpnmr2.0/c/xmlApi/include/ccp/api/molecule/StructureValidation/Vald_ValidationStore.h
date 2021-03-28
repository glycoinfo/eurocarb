
#ifndef __incl__ccp_api_molecule_StructureValidation_ValidationStore_h__
#define __incl__ccp_api_molecule_StructureValidation_ValidationStore_h__

#include "ccp.h"

/*
  TopObject for StructureValidation package
*/

/* package ccp.api.molecule.StructureValidation */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ValidationStore self
  @param  Impl_ApplicationData value
**/
extern void *Vald_ValidationStore_AddApplicationData(Vald_ValidationStore self, Impl_ApplicationData value);

/**
  CheckAllValid for 
ccp.molecule.StructureValidation.ValidationStore
  @param  Vald_ValidationStore self
  @param  ApiBoolean complete
**/
extern void *Vald_ValidationStore_CheckAllValid(Vald_ValidationStore self, ApiBoolean complete);

/**
  CheckValid for ccp.molecule.StructureValidation.ValidationStore
  @param  Vald_ValidationStore self
  @param  ApiBoolean complete
**/
extern void *Vald_ValidationStore_CheckValid(Vald_ValidationStore self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Vald_ValidationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_ValidationStore_FindAllActiveRepositories(Vald_ValidationStore self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Vald_ValidationStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_ValidationStore_FindAllActiveRepositories_keyval0(Vald_ValidationStore self);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Vald_ValidationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_ValidationStore_FindAllActiveRepositories_keyval1(Vald_ValidationStore self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Vald_ValidationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_ValidationStore_FindAllActiveRepositories_keyval2(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Vald_ValidationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_ValidationStore_FindAllActiveRepositories_keyval3(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Vald_ValidationStore self
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
extern ApiList Vald_ValidationStore_FindAllActiveRepositories_keyval4(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ValidationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_ValidationStore_FindAllApplicationData(Vald_ValidationStore self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ValidationStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_ValidationStore_FindAllApplicationData_keyval0(Vald_ValidationStore self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ValidationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_ValidationStore_FindAllApplicationData_keyval1(Vald_ValidationStore self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ValidationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_ValidationStore_FindAllApplicationData_keyval2(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ValidationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Vald_ValidationStore_FindAllApplicationData_keyval3(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ValidationStore self
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
extern ApiList Vald_ValidationStore_FindAllApplicationData_keyval4(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.molecule.StructureValidation.ValidationStore.validationResults

child 
link to class ValidationResult
  @param  Vald_ValidationStore self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_ValidationStore_FindAllValidationResults(Vald_ValidationStore self, ApiMap conditions);

/**
  FindAll for 
ccp.molecule.StructureValidation.ValidationStore.validationResults

child 
link to class ValidationResult
  @param  Vald_ValidationStore self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_ValidationStore_FindAllValidationResults_keyval0(Vald_ValidationStore self);

/**
  FindAll for 
ccp.molecule.StructureValidation.ValidationStore.validationResults

child 
link to class ValidationResult
  @param  Vald_ValidationStore self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_ValidationStore_FindAllValidationResults_keyval1(Vald_ValidationStore self, char * key, ApiObject value);

/**
  FindAll for 
ccp.molecule.StructureValidation.ValidationStore.validationResults

child 
link to class ValidationResult
  @param  Vald_ValidationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_ValidationStore_FindAllValidationResults_keyval2(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.molecule.StructureValidation.ValidationStore.validationResults

child 
link to class ValidationResult
  @param  Vald_ValidationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Vald_ValidationStore_FindAllValidationResults_keyval3(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.molecule.StructureValidation.ValidationStore.validationResults

child 
link to class ValidationResult
  @param  Vald_ValidationStore self
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
extern ApiSet Vald_ValidationStore_FindAllValidationResults_keyval4(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Vald_ValidationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Vald_ValidationStore_FindFirstActiveRepository(Vald_ValidationStore self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Vald_ValidationStore self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Vald_ValidationStore_FindFirstActiveRepository_keyval0(Vald_ValidationStore self);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Vald_ValidationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Vald_ValidationStore_FindFirstActiveRepository_keyval1(Vald_ValidationStore self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Vald_ValidationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Vald_ValidationStore_FindFirstActiveRepository_keyval2(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Vald_ValidationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_Repository Vald_ValidationStore_FindFirstActiveRepository_keyval3(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.TopObject.activeRepositories

Repositories on 
package search path that contains a copy of TopObject
  @param  Vald_ValidationStore self
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
extern Impl_Repository Vald_ValidationStore_FindFirstActiveRepository_keyval4(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ValidationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_ValidationStore_FindFirstApplicationData(Vald_ValidationStore self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ValidationStore self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_ValidationStore_FindFirstApplicationData_keyval0(Vald_ValidationStore self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ValidationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_ValidationStore_FindFirstApplicationData_keyval1(Vald_ValidationStore self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ValidationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_ValidationStore_FindFirstApplicationData_keyval2(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ValidationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Vald_ValidationStore_FindFirstApplicationData_keyval3(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ValidationStore self
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
extern Impl_ApplicationData Vald_ValidationStore_FindFirstApplicationData_keyval4(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.molecule.StructureValidation.ValidationStore.validationResults

child 
link to class ValidationResult
  @param  Vald_ValidationStore self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Vald_ValidationResult Vald_ValidationStore_FindFirstValidationResult(Vald_ValidationStore self, ApiMap conditions);

/**
  FindFirst for 
ccp.molecule.StructureValidation.ValidationStore.validationResults

child 
link to class ValidationResult
  @param  Vald_ValidationStore self
  @returns  the first value that satisfies the conditions 
**/
extern Vald_ValidationResult Vald_ValidationStore_FindFirstValidationResult_keyval0(Vald_ValidationStore self);

/**
  FindFirst for 
ccp.molecule.StructureValidation.ValidationStore.validationResults

child 
link to class ValidationResult
  @param  Vald_ValidationStore self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Vald_ValidationResult Vald_ValidationStore_FindFirstValidationResult_keyval1(Vald_ValidationStore self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.molecule.StructureValidation.ValidationStore.validationResults

child 
link to class ValidationResult
  @param  Vald_ValidationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Vald_ValidationResult Vald_ValidationStore_FindFirstValidationResult_keyval2(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.molecule.StructureValidation.ValidationStore.validationResults

child 
link to class ValidationResult
  @param  Vald_ValidationStore self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Vald_ValidationResult Vald_ValidationStore_FindFirstValidationResult_keyval3(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.molecule.StructureValidation.ValidationStore.validationResults

child 
link to class ValidationResult
  @param  Vald_ValidationStore self
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
extern Vald_ValidationResult Vald_ValidationStore_FindFirstValidationResult_keyval4(Vald_ValidationStore self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.molecule.StructureValidation.ValidationStore
  @param  Vald_ValidationStore self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Vald_ValidationStore_Get(Vald_ValidationStore self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Vald_ValidationStore self
  @returns   the result
**/
extern Acco_AccessObject Vald_ValidationStore_GetAccess(Vald_ValidationStore self);

/**
  Get for memops.Implementation.TopObject.activeRepositories

Repositories 
on package search path that contains a copy of TopObject
  @param  Vald_ValidationStore self
  @returns   the result
**/
extern ApiList Vald_ValidationStore_GetActiveRepositories(Vald_ValidationStore self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ValidationStore self
  @returns   the result
**/
extern ApiList Vald_ValidationStore_GetApplicationData(Vald_ValidationStore self);

/**
  GetByKey for ccp.molecule.StructureValidation.ValidationStore
  @param  Vald_ValidationStore self
  @param  Impl_MemopsRoot startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Vald_ValidationStore Vald_ValidationStore_GetByKey(Vald_ValidationStore self, Impl_MemopsRoot startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Vald_ValidationStore self
  @returns   the result
**/
extern ApiString Vald_ValidationStore_GetClassName(Vald_ValidationStore self);

/**
  Get for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Vald_ValidationStore self
  @returns   the result
**/
extern ApiString Vald_ValidationStore_GetCreatedBy(Vald_ValidationStore self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Vald_ValidationStore self
  @returns   the result
**/
extern ApiList Vald_ValidationStore_GetFieldNames(Vald_ValidationStore self);

/**
  GetFullKey for ccp.molecule.StructureValidation.ValidationStore
  @param  Vald_ValidationStore self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Vald_ValidationStore_GetFullKey(Vald_ValidationStore self, ApiBoolean useGuid);

/**
  Get for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Vald_ValidationStore self
  @returns   the result
**/
extern ApiString Vald_ValidationStore_GetGuid(Vald_ValidationStore self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Vald_ValidationStore self
  @returns   the result
**/
extern ApiBoolean Vald_ValidationStore_GetInConstructor(Vald_ValidationStore self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Vald_ValidationStore self
  @returns   the result
**/
extern ApiBoolean Vald_ValidationStore_GetIsDeleted(Vald_ValidationStore self);

/**
  Get for memops.Implementation.TopObject.isLoaded

Implementation 
attribute, set automatically. True if the data in the Storage are loaded 
into memory. As data are loaded automatically, this attribute should be 
of interest only for the implementation.
  @param  Vald_ValidationStore self
  @returns   the result
**/
extern ApiBoolean Vald_ValidationStore_GetIsLoaded(Vald_ValidationStore self);

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
  @param  Vald_ValidationStore self
  @returns   the result
**/
extern ApiBoolean Vald_ValidationStore_GetIsModifiable(Vald_ValidationStore self);

/**
  Get for memops.Implementation.TopObject.isModified

Implementation 
attribute. True if the data corresponding to the Storage have been 
modified since being loaded. Serves to indicate which data need to be 
saved.
  @param  Vald_ValidationStore self
  @returns   the result
**/
extern ApiBoolean Vald_ValidationStore_GetIsModified(Vald_ValidationStore self);

/**
  Get for memops.Implementation.TopObject.isReading

Implementation 
attribute, set automatically. True if the data corresponding to the 
Storage are in the process of being read. As data loading is handled 
automatically, this attribute should be relevant only for the 
implementation, or possibly for programmers of multithreaded programs. 
Serves to suppress notifiers and validity checking during reading. Note 
that objects are not valid until the data loading is completed.
  @param  Vald_ValidationStore self
  @returns   the result
**/
extern ApiBoolean Vald_ValidationStore_GetIsReading(Vald_ValidationStore self);

/**
  Get for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Vald_ValidationStore self
  @returns   the result
**/
extern ApiString Vald_ValidationStore_GetLastUnlockedBy(Vald_ValidationStore self);

/**
  GetLocalKey for 
ccp.molecule.StructureValidation.ValidationStore
  @param  Vald_ValidationStore self
  @returns  Local object key
**/
extern ApiObject Vald_ValidationStore_GetLocalKey(Vald_ValidationStore self);

/**
  Get for 
ccp.molecule.StructureValidation.ValidationStore.memopsRoot

parent 
link
  @param  Vald_ValidationStore self
  @returns   the result
**/
extern Impl_MemopsRoot Vald_ValidationStore_GetMemopsRoot(Vald_ValidationStore self);

/**
  Get for ccp.molecule.StructureValidation.ValidationStore.name
  @param  Vald_ValidationStore self
  @returns   the result
**/
extern ApiString Vald_ValidationStore_GetName(Vald_ValidationStore self);

/**
  Get for 
ccp.molecule.StructureValidation.ValidationStore.nmrConstraintStore

NmrConstraintStore 
that validation refres to
  @param  Vald_ValidationStore self
  @returns   the result
**/
extern Nmrc_NmrConstraintStore Vald_ValidationStore_GetNmrConstraintStore(Vald_ValidationStore self);

/**
  Get for 
ccp.molecule.StructureValidation.ValidationStore.nmrProject

NmrProject 
that validation refres to
  @param  Vald_ValidationStore self
  @returns   the result
**/
extern Nmr_NmrProject Vald_ValidationStore_GetNmrProject(Vald_ValidationStore self);

/**
  Get for memops.Implementation.TopObject.packageLocator

Package locator 
relevant for TopObject
  @param  Vald_ValidationStore self
  @returns   the result
**/
extern Impl_PackageLocator Vald_ValidationStore_GetPackageLocator(Vald_ValidationStore self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Vald_ValidationStore self
  @returns   the result
**/
extern ApiString Vald_ValidationStore_GetPackageName(Vald_ValidationStore self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Vald_ValidationStore self
  @returns   the result
**/
extern ApiString Vald_ValidationStore_GetPackageShortName(Vald_ValidationStore self);

/**
  Get for 
ccp.molecule.StructureValidation.ValidationStore.parent

link 
to parent object - synonym for memopsRoot
  @param  Vald_ValidationStore self
  @returns   the result
**/
extern Impl_MemopsRoot Vald_ValidationStore_GetParent(Vald_ValidationStore self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Vald_ValidationStore self
  @returns   the result
**/
extern ApiString Vald_ValidationStore_GetQualifiedName(Vald_ValidationStore self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Vald_ValidationStore self
  @returns   the result
**/
extern Impl_MemopsRoot Vald_ValidationStore_GetRoot(Vald_ValidationStore self);

/**
  Get for 
ccp.molecule.StructureValidation.ValidationStore.structureEnsemble

strucureEnsemble 
that is being validated
  @param  Vald_ValidationStore self
  @returns   the result
**/
extern Coor_StructureEnsemble Vald_ValidationStore_GetStructureEnsemble(Vald_ValidationStore self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Vald_ValidationStore self
  @returns   the result
**/
extern Impl_TopObject Vald_ValidationStore_GetTopObject(Vald_ValidationStore self);

/**
  Get for 
ccp.molecule.StructureValidation.ValidationStore.validationResults

child 
link to class ValidationResult
  @param  Vald_ValidationStore self
  @returns   the result
**/
extern ApiSet Vald_ValidationStore_GetValidationResults(Vald_ValidationStore self);

/**
  Constructor for 
ccp.molecule.StructureValidation.ValidationStore
  @param  Impl_MemopsRoot parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Vald_ValidationStore Vald_ValidationStore_Init(Impl_MemopsRoot parent, ApiMap attrlinks);

/**
  Constructor for 
ccp.molecule.StructureValidation.ValidationStore
  @param  Impl_MemopsRoot parent
  @param  char * name
  @returns  the new object
**/
extern Vald_ValidationStore Vald_ValidationStore_Init_reqd(Impl_MemopsRoot parent, char * name);

/**
  Factory function to create 
ccp.molecule.StructureValidation.AtomValidation
  @param  Vald_ValidationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Vald_AtomValidation Vald_ValidationStore_NewAtomValidation(Vald_ValidationStore self, ApiMap attrlinks);

/**
  Factory function to create 
ccp.molecule.StructureValidation.AtomValidation
  @param  Vald_ValidationStore self
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
extern Vald_AtomValidation Vald_ValidationStore_NewAtomValidation_reqd(Vald_ValidationStore self, char * context, char * keyword);

/**
  Factory function to create 
ccp.molecule.StructureValidation.ChainValidation
  @param  Vald_ValidationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Vald_ChainValidation Vald_ValidationStore_NewChainValidation(Vald_ValidationStore self, ApiMap attrlinks);

/**
  Factory function to create 
ccp.molecule.StructureValidation.ChainValidation
  @param  Vald_ValidationStore self
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
extern Vald_ChainValidation Vald_ValidationStore_NewChainValidation_reqd(Vald_ValidationStore self, char * context, char * keyword);

/**
  Factory function to create 
ccp.molecule.StructureValidation.EnsembleValidation
  @param  Vald_ValidationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Vald_EnsembleValidation Vald_ValidationStore_NewEnsembleValidation(Vald_ValidationStore self, ApiMap attrlinks);

/**
  Factory function to create 
ccp.molecule.StructureValidation.EnsembleValidation
  @param  Vald_ValidationStore self
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
extern Vald_EnsembleValidation Vald_ValidationStore_NewEnsembleValidation_reqd(Vald_ValidationStore self, char * context, char * keyword);

/**
  Factory function to create 
ccp.molecule.StructureValidation.EntryValidation
  @param  Vald_ValidationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Vald_EntryValidation Vald_ValidationStore_NewEntryValidation(Vald_ValidationStore self, ApiMap attrlinks);

/**
  Factory function to create 
ccp.molecule.StructureValidation.EntryValidation
  @param  Vald_ValidationStore self
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
extern Vald_EntryValidation Vald_ValidationStore_NewEntryValidation_reqd(Vald_ValidationStore self, char * context, char * keyword);

/**
  Factory function to create 
ccp.molecule.StructureValidation.NmrConstraintListValidation
  @param  Vald_ValidationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Vald_NmrConstraintListValidation Vald_ValidationStore_NewNmrConstraintListValidation(Vald_ValidationStore self, ApiMap attrlinks);

/**
  Factory function to create 
ccp.molecule.StructureValidation.NmrConstraintListValidation
  @param  Vald_ValidationStore self
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
extern Vald_NmrConstraintListValidation Vald_ValidationStore_NewNmrConstraintListValidation_reqd(Vald_ValidationStore self, char * context, char * keyword);

/**
  Factory function to create 
ccp.molecule.StructureValidation.NmrConstraintValidation
  @param  Vald_ValidationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Vald_NmrConstraintValidation Vald_ValidationStore_NewNmrConstraintValidation(Vald_ValidationStore self, ApiMap attrlinks);

/**
  Factory function to create 
ccp.molecule.StructureValidation.NmrConstraintValidation
  @param  Vald_ValidationStore self
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
extern Vald_NmrConstraintValidation Vald_ValidationStore_NewNmrConstraintValidation_reqd(Vald_ValidationStore self, char * context, char * keyword);

/**
  Factory function to create 
ccp.molecule.StructureValidation.NmrMeasurementListValidation
  @param  Vald_ValidationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Vald_NmrMeasurementListValidation Vald_ValidationStore_NewNmrMeasurementListValidation(Vald_ValidationStore self, ApiMap attrlinks);

/**
  Factory function to create 
ccp.molecule.StructureValidation.NmrMeasurementListValidation
  @param  Vald_ValidationStore self
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
extern Vald_NmrMeasurementListValidation Vald_ValidationStore_NewNmrMeasurementListValidation_reqd(Vald_ValidationStore self, char * context, char * keyword);

/**
  Factory function to create 
ccp.molecule.StructureValidation.NmrMeasurementValidation
  @param  Vald_ValidationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Vald_NmrMeasurementValidation Vald_ValidationStore_NewNmrMeasurementValidation(Vald_ValidationStore self, ApiMap attrlinks);

/**
  Factory function to create 
ccp.molecule.StructureValidation.NmrMeasurementValidation
  @param  Vald_ValidationStore self
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
extern Vald_NmrMeasurementValidation Vald_ValidationStore_NewNmrMeasurementValidation_reqd(Vald_ValidationStore self, char * context, char * keyword);

/**
  Factory function to create 
ccp.molecule.StructureValidation.PeakListValidation
  @param  Vald_ValidationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Vald_PeakListValidation Vald_ValidationStore_NewPeakListValidation(Vald_ValidationStore self, ApiMap attrlinks);

/**
  Factory function to create 
ccp.molecule.StructureValidation.PeakListValidation
  @param  Vald_ValidationStore self
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
extern Vald_PeakListValidation Vald_ValidationStore_NewPeakListValidation_reqd(Vald_ValidationStore self, char * context, char * keyword);

/**
  Factory function to create 
ccp.molecule.StructureValidation.PeakValidation
  @param  Vald_ValidationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Vald_PeakValidation Vald_ValidationStore_NewPeakValidation(Vald_ValidationStore self, ApiMap attrlinks);

/**
  Factory function to create 
ccp.molecule.StructureValidation.PeakValidation
  @param  Vald_ValidationStore self
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
extern Vald_PeakValidation Vald_ValidationStore_NewPeakValidation_reqd(Vald_ValidationStore self, char * context, char * keyword);

/**
  Factory function to create 
ccp.molecule.StructureValidation.ResidueValidation
  @param  Vald_ValidationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Vald_ResidueValidation Vald_ValidationStore_NewResidueValidation(Vald_ValidationStore self, ApiMap attrlinks);

/**
  Factory function to create 
ccp.molecule.StructureValidation.ResidueValidation
  @param  Vald_ValidationStore self
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
extern Vald_ResidueValidation Vald_ValidationStore_NewResidueValidation_reqd(Vald_ValidationStore self, char * context, char * keyword);

/**
  Factory function to create 
ccp.molecule.StructureValidation.StructureValidation
  @param  Vald_ValidationStore self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Vald_StructureValidation Vald_ValidationStore_NewStructureValidation(Vald_ValidationStore self, ApiMap attrlinks);

/**
  Factory function to create 
ccp.molecule.StructureValidation.StructureValidation
  @param  Vald_ValidationStore self
  @param  char * context
  @param  char * keyword
  @returns  the new object
**/
extern Vald_StructureValidation Vald_ValidationStore_NewStructureValidation_reqd(Vald_ValidationStore self, char * context, char * keyword);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ValidationStore self
  @param  Impl_ApplicationData value
**/
extern void *Vald_ValidationStore_RemoveApplicationData(Vald_ValidationStore self, Impl_ApplicationData value);

/**
  SetAttr for ccp.molecule.StructureValidation.ValidationStore
  @param  Vald_ValidationStore self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Vald_ValidationStore_Set(Vald_ValidationStore self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Vald_ValidationStore self
  @param  Acco_AccessObject value
**/
extern void *Vald_ValidationStore_SetAccess(Vald_ValidationStore self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Vald_ValidationStore self
  @param  ApiList values
**/
extern void *Vald_ValidationStore_SetApplicationData(Vald_ValidationStore self, ApiList values);

/**
  Set for memops.Implementation.TopObject.createdBy

user who created 
TopObject.
  @param  Vald_ValidationStore self
  @param  ApiString value
**/
extern void *Vald_ValidationStore_SetCreatedBy(Vald_ValidationStore self, ApiString value);

/**
  Set for memops.Implementation.TopObject.guid

global unique identifier - 
set by implementation.
  @param  Vald_ValidationStore self
  @param  ApiString value
**/
extern void *Vald_ValidationStore_SetGuid(Vald_ValidationStore self, ApiString value);

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
  @param  Vald_ValidationStore self
  @param  ApiBoolean value
**/
extern void *Vald_ValidationStore_SetIsModifiable(Vald_ValidationStore self, ApiBoolean value);

/**
  Set for memops.Implementation.TopObject.lastUnlockedBy

User who last 
set TopObject.isModifiable to True.  Used to track if data have been 
modified. Provided data have isModifiable set to False, any modification 
in the underlying data will show up on lastUnlockedBy.
  @param  Vald_ValidationStore self
  @param  ApiString value
**/
extern void *Vald_ValidationStore_SetLastUnlockedBy(Vald_ValidationStore self, ApiString value);

/**
  Set for ccp.molecule.StructureValidation.ValidationStore.name
  @param  Vald_ValidationStore self
  @param  ApiString value
**/
extern void *Vald_ValidationStore_SetName(Vald_ValidationStore self, ApiString value);

/**
  Set for 
ccp.molecule.StructureValidation.ValidationStore.nmrConstraintStore

NmrConstraintStore 
that validation refres to
  @param  Vald_ValidationStore self
  @param  Nmrc_NmrConstraintStore value
**/
extern void *Vald_ValidationStore_SetNmrConstraintStore(Vald_ValidationStore self, Nmrc_NmrConstraintStore value);

/**
  Set for 
ccp.molecule.StructureValidation.ValidationStore.nmrProject

NmrProject 
that validation refres to
  @param  Vald_ValidationStore self
  @param  Nmr_NmrProject value
**/
extern void *Vald_ValidationStore_SetNmrProject(Vald_ValidationStore self, Nmr_NmrProject value);

/**
  Set for 
ccp.molecule.StructureValidation.ValidationStore.structureEnsemble

strucureEnsemble 
that is being validated
  @param  Vald_ValidationStore self
  @param  Coor_StructureEnsemble value
**/
extern void *Vald_ValidationStore_SetStructureEnsemble(Vald_ValidationStore self, Coor_StructureEnsemble value);

/**
  Sorted for 
ccp.molecule.StructureValidation.ValidationStore.validationResults

child 
link to class ValidationResult
  @param  Vald_ValidationStore self
  @returns   the result
**/
extern ApiList Vald_ValidationStore_SortedValidationResults(Vald_ValidationStore self);

#endif /* __incl__ccp_api_molecule_StructureValidation_ValidationStore_h__ */
