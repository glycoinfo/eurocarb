
#ifndef __incl__ccp_api_nmr_Nmr_StructureGeneration_h__
#define __incl__ccp_api_nmr_Nmr_StructureGeneration_h__

#include "ccp.h"

/*
  One cycle of Nmr Structure generation, with associated constraints, protocol, parameters, etc., producing one family of structures. NB protocol etc. information still not modeled. 
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureGeneration self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_StructureGeneration_AddApplicationData(Nmr_StructureGeneration self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.Nmr.StructureGeneration.entries

Deposition Entries for 
StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  Entr_Entry value
**/
extern void *Nmr_StructureGeneration_AddEntry(Nmr_StructureGeneration self, Entr_Entry value);

/**
  Add for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @param  Calc_Run value
**/
extern void *Nmr_StructureGeneration_AddRun(Nmr_StructureGeneration self, Calc_Run value);

/**
  CheckAllValid for ccp.nmr.Nmr.StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  ApiBoolean complete
**/
extern void *Nmr_StructureGeneration_CheckAllValid(Nmr_StructureGeneration self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  ApiBoolean complete
**/
extern void *Nmr_StructureGeneration_CheckValid(Nmr_StructureGeneration self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureGeneration self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_StructureGeneration_FindAllApplicationData(Nmr_StructureGeneration self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureGeneration self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_StructureGeneration_FindAllApplicationData_keyval0(Nmr_StructureGeneration self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureGeneration self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_StructureGeneration_FindAllApplicationData_keyval1(Nmr_StructureGeneration self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureGeneration self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_StructureGeneration_FindAllApplicationData_keyval2(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureGeneration self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_StructureGeneration_FindAllApplicationData_keyval3(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureGeneration self
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
extern ApiList Nmr_StructureGeneration_FindAllApplicationData_keyval4(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.StructureGeneration.entries

Deposition Entries 
for StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_StructureGeneration_FindAllEntries(Nmr_StructureGeneration self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.StructureGeneration.entries

Deposition Entries 
for StructureGeneration
  @param  Nmr_StructureGeneration self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_StructureGeneration_FindAllEntries_keyval0(Nmr_StructureGeneration self);

/**
  FindAll for ccp.nmr.Nmr.StructureGeneration.entries

Deposition Entries 
for StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_StructureGeneration_FindAllEntries_keyval1(Nmr_StructureGeneration self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.StructureGeneration.entries

Deposition Entries 
for StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_StructureGeneration_FindAllEntries_keyval2(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.StructureGeneration.entries

Deposition Entries 
for StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_StructureGeneration_FindAllEntries_keyval3(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.StructureGeneration.entries

Deposition Entries 
for StructureGeneration
  @param  Nmr_StructureGeneration self
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
extern ApiSet Nmr_StructureGeneration_FindAllEntries_keyval4(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_StructureGeneration_FindAllRuns(Nmr_StructureGeneration self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_StructureGeneration_FindAllRuns_keyval0(Nmr_StructureGeneration self);

/**
  FindAll for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_StructureGeneration_FindAllRuns_keyval1(Nmr_StructureGeneration self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_StructureGeneration_FindAllRuns_keyval2(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_StructureGeneration_FindAllRuns_keyval3(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
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
extern ApiSet Nmr_StructureGeneration_FindAllRuns_keyval4(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureGeneration self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_StructureGeneration_FindFirstApplicationData(Nmr_StructureGeneration self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureGeneration self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_StructureGeneration_FindFirstApplicationData_keyval0(Nmr_StructureGeneration self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureGeneration self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_StructureGeneration_FindFirstApplicationData_keyval1(Nmr_StructureGeneration self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureGeneration self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_StructureGeneration_FindFirstApplicationData_keyval2(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureGeneration self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_StructureGeneration_FindFirstApplicationData_keyval3(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureGeneration self
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
extern Impl_ApplicationData Nmr_StructureGeneration_FindFirstApplicationData_keyval4(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.StructureGeneration.entries

Deposition 
Entries for StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_StructureGeneration_FindFirstEntry(Nmr_StructureGeneration self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.StructureGeneration.entries

Deposition 
Entries for StructureGeneration
  @param  Nmr_StructureGeneration self
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_StructureGeneration_FindFirstEntry_keyval0(Nmr_StructureGeneration self);

/**
  FindFirst for ccp.nmr.Nmr.StructureGeneration.entries

Deposition 
Entries for StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_StructureGeneration_FindFirstEntry_keyval1(Nmr_StructureGeneration self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.StructureGeneration.entries

Deposition 
Entries for StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_StructureGeneration_FindFirstEntry_keyval2(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.StructureGeneration.entries

Deposition 
Entries for StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_StructureGeneration_FindFirstEntry_keyval3(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.StructureGeneration.entries

Deposition 
Entries for StructureGeneration
  @param  Nmr_StructureGeneration self
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
extern Entr_Entry Nmr_StructureGeneration_FindFirstEntry_keyval4(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Calc_Run Nmr_StructureGeneration_FindFirstRun(Nmr_StructureGeneration self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @returns  the first value that satisfies the conditions 
**/
extern Calc_Run Nmr_StructureGeneration_FindFirstRun_keyval0(Nmr_StructureGeneration self);

/**
  FindFirst for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Calc_Run Nmr_StructureGeneration_FindFirstRun_keyval1(Nmr_StructureGeneration self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Calc_Run Nmr_StructureGeneration_FindFirstRun_keyval2(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Calc_Run Nmr_StructureGeneration_FindFirstRun_keyval3(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
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
extern Calc_Run Nmr_StructureGeneration_FindFirstRun_keyval4(Nmr_StructureGeneration self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_StructureGeneration_Get(Nmr_StructureGeneration self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
extern Acco_AccessObject Nmr_StructureGeneration_GetAccess(Nmr_StructureGeneration self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
extern Acco_AccessObject Nmr_StructureGeneration_GetActiveAccess(Nmr_StructureGeneration self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
extern ApiList Nmr_StructureGeneration_GetApplicationData(Nmr_StructureGeneration self);

/**
  GetByKey for ccp.nmr.Nmr.StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_StructureGeneration Nmr_StructureGeneration_GetByKey(Nmr_StructureGeneration self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
extern ApiString Nmr_StructureGeneration_GetClassName(Nmr_StructureGeneration self);

/**
  Get for ccp.nmr.Nmr.StructureGeneration.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
extern ApiString Nmr_StructureGeneration_GetDetails(Nmr_StructureGeneration self);

/**
  Get for ccp.nmr.Nmr.StructureGeneration.entries

Deposition Entries for 
StructureGeneration
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
extern ApiSet Nmr_StructureGeneration_GetEntries(Nmr_StructureGeneration self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
extern ApiList Nmr_StructureGeneration_GetFieldNames(Nmr_StructureGeneration self);

/**
  GetFullKey for ccp.nmr.Nmr.StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmr_StructureGeneration_GetFullKey(Nmr_StructureGeneration self, ApiBoolean useGuid);

/**
  Get for ccp.nmr.Nmr.StructureGeneration.generationType

Generation type 
(denovo, refinement).
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
extern ApiString Nmr_StructureGeneration_GetGenerationType(Nmr_StructureGeneration self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
extern ApiBoolean Nmr_StructureGeneration_GetInConstructor(Nmr_StructureGeneration self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
extern ApiBoolean Nmr_StructureGeneration_GetIsDeleted(Nmr_StructureGeneration self);

/**
  GetLocalKey for ccp.nmr.Nmr.StructureGeneration
  @param  Nmr_StructureGeneration self
  @returns  Local object key
**/
extern ApiObject Nmr_StructureGeneration_GetLocalKey(Nmr_StructureGeneration self);

/**
  Get for ccp.nmr.Nmr.StructureGeneration.method

Method used for 
generating structures
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
extern Meth_Method Nmr_StructureGeneration_GetMethod(Nmr_StructureGeneration self);

/**
  Get for ccp.nmr.Nmr.StructureGeneration.name

StructureGeneration name - 
to specify more precisely the nature of the particular structure 
generation.
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
extern ApiString Nmr_StructureGeneration_GetName(Nmr_StructureGeneration self);

/**
  Get for 
ccp.nmr.Nmr.StructureGeneration.nmrConstraintStore

NmrConstraintStore 
holding constraints used in StructureGeneration
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
extern Nmrc_NmrConstraintStore Nmr_StructureGeneration_GetNmrConstraintStore(Nmr_StructureGeneration self);

/**
  Get for ccp.nmr.Nmr.StructureGeneration.nmrProject

parent link
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_StructureGeneration_GetNmrProject(Nmr_StructureGeneration self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
extern ApiString Nmr_StructureGeneration_GetPackageName(Nmr_StructureGeneration self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
extern ApiString Nmr_StructureGeneration_GetPackageShortName(Nmr_StructureGeneration self);

/**
  Get for ccp.nmr.Nmr.StructureGeneration.parent

link to parent object - 
synonym for nmrProject
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_StructureGeneration_GetParent(Nmr_StructureGeneration self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
extern ApiString Nmr_StructureGeneration_GetQualifiedName(Nmr_StructureGeneration self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_StructureGeneration_GetRoot(Nmr_StructureGeneration self);

/**
  Get for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
extern ApiSet Nmr_StructureGeneration_GetRuns(Nmr_StructureGeneration self);

/**
  Get for ccp.nmr.Nmr.StructureGeneration.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
extern ApiInteger Nmr_StructureGeneration_GetSerial(Nmr_StructureGeneration self);

/**
  Get for 
ccp.nmr.Nmr.StructureGeneration.structureEnsemble

StructureEnsemble 
generated during StructureGeneration
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
extern Coor_StructureEnsemble Nmr_StructureGeneration_GetStructureEnsemble(Nmr_StructureGeneration self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
extern Impl_TopObject Nmr_StructureGeneration_GetTopObject(Nmr_StructureGeneration self);

/**
  Constructor for ccp.nmr.Nmr.StructureGeneration
  @param  Nmr_NmrProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_StructureGeneration Nmr_StructureGeneration_Init(Nmr_NmrProject parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.StructureGeneration
  @param  Nmr_NmrProject parent
  @returns  the new object
**/
extern Nmr_StructureGeneration Nmr_StructureGeneration_Init_reqd(Nmr_NmrProject parent);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureGeneration self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_StructureGeneration_RemoveApplicationData(Nmr_StructureGeneration self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.Nmr.StructureGeneration.entries

Deposition Entries 
for StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  Entr_Entry value
**/
extern void *Nmr_StructureGeneration_RemoveEntry(Nmr_StructureGeneration self, Entr_Entry value);

/**
  Remove for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @param  Calc_Run value
**/
extern void *Nmr_StructureGeneration_RemoveRun(Nmr_StructureGeneration self, Calc_Run value);

/**
  SetAttr for ccp.nmr.Nmr.StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_StructureGeneration_Set(Nmr_StructureGeneration self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_StructureGeneration self
  @param  Acco_AccessObject value
**/
extern void *Nmr_StructureGeneration_SetAccess(Nmr_StructureGeneration self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_StructureGeneration self
  @param  ApiList values
**/
extern void *Nmr_StructureGeneration_SetApplicationData(Nmr_StructureGeneration self, ApiList values);

/**
  Set for ccp.nmr.Nmr.StructureGeneration.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_StructureGeneration self
  @param  ApiString value
**/
extern void *Nmr_StructureGeneration_SetDetails(Nmr_StructureGeneration self, ApiString value);

/**
  Set for ccp.nmr.Nmr.StructureGeneration.entries

Deposition Entries for 
StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  ApiSet values
**/
extern void *Nmr_StructureGeneration_SetEntries(Nmr_StructureGeneration self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.StructureGeneration.generationType

Generation type 
(denovo, refinement).
  @param  Nmr_StructureGeneration self
  @param  ApiString value
**/
extern void *Nmr_StructureGeneration_SetGenerationType(Nmr_StructureGeneration self, ApiString value);

/**
  Set for ccp.nmr.Nmr.StructureGeneration.method

Method used for 
generating structures
  @param  Nmr_StructureGeneration self
  @param  Meth_Method value
**/
extern void *Nmr_StructureGeneration_SetMethod(Nmr_StructureGeneration self, Meth_Method value);

/**
  Set for ccp.nmr.Nmr.StructureGeneration.name

StructureGeneration name - 
to specify more precisely the nature of the particular structure 
generation.
  @param  Nmr_StructureGeneration self
  @param  ApiString value
**/
extern void *Nmr_StructureGeneration_SetName(Nmr_StructureGeneration self, ApiString value);

/**
  Set for 
ccp.nmr.Nmr.StructureGeneration.nmrConstraintStore

NmrConstraintStore 
holding constraints used in StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  Nmrc_NmrConstraintStore value
**/
extern void *Nmr_StructureGeneration_SetNmrConstraintStore(Nmr_StructureGeneration self, Nmrc_NmrConstraintStore value);

/**
  Set for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @param  ApiSet values
**/
extern void *Nmr_StructureGeneration_SetRuns(Nmr_StructureGeneration self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.StructureGeneration.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_StructureGeneration self
  @param  ApiInteger value
**/
extern void *Nmr_StructureGeneration_SetSerial(Nmr_StructureGeneration self, ApiInteger value);

/**
  Set for 
ccp.nmr.Nmr.StructureGeneration.structureEnsemble

StructureEnsemble 
generated during StructureGeneration
  @param  Nmr_StructureGeneration self
  @param  Coor_StructureEnsemble value
**/
extern void *Nmr_StructureGeneration_SetStructureEnsemble(Nmr_StructureGeneration self, Coor_StructureEnsemble value);

/**
  Sorted for ccp.nmr.Nmr.StructureGeneration.entries

Deposition Entries 
for StructureGeneration
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
extern ApiList Nmr_StructureGeneration_SortedEntries(Nmr_StructureGeneration self);

/**
  Sorted for ccp.nmr.Nmr.StructureGeneration.runs

NmrCalc runs used in 
structure generation
  @param  Nmr_StructureGeneration self
  @returns   the result
**/
extern ApiList Nmr_StructureGeneration_SortedRuns(Nmr_StructureGeneration self);

#endif /* __incl__ccp_api_nmr_Nmr_StructureGeneration_h__ */
