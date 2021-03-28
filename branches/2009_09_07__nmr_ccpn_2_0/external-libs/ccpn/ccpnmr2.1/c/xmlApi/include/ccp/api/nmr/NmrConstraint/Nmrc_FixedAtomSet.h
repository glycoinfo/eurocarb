
#ifndef __incl__ccp_api_nmr_NmrConstraint_FixedAtomSet_h__
#define __incl__ccp_api_nmr_NmrConstraint_FixedAtomSet_h__

#include "ccp.h"

/*
  Fixed version of AtomSet. When a Structure Generation run is started, AtomSets and ResonanceSets are copied to FixedAtomSets and FixedResonanceSets in order to preserve the Resonance-Atom assignment valid for a StructureGeneration and the associated ConstraintLists.
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedAtomSet self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_FixedAtomSet_AddApplicationData(Nmrc_FixedAtomSet self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  Mols_Atom value
**/
extern void *Nmrc_FixedAtomSet_AddAtom(Nmrc_FixedAtomSet self, Mols_Atom value);

/**
  Add for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @param  Nmrc_FixedResonanceSet value
**/
extern void *Nmrc_FixedAtomSet_AddResonanceSet(Nmrc_FixedAtomSet self, Nmrc_FixedResonanceSet value);

/**
  CheckAllValid for ccp.nmr.NmrConstraint.FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  ApiBoolean complete
**/
extern void *Nmrc_FixedAtomSet_CheckAllValid(Nmrc_FixedAtomSet self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrConstraint.FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  ApiBoolean complete
**/
extern void *Nmrc_FixedAtomSet_CheckValid(Nmrc_FixedAtomSet self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedAtomSet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_FixedAtomSet_FindAllApplicationData(Nmrc_FixedAtomSet self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedAtomSet self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_FixedAtomSet_FindAllApplicationData_keyval0(Nmrc_FixedAtomSet self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedAtomSet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_FixedAtomSet_FindAllApplicationData_keyval1(Nmrc_FixedAtomSet self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_FixedAtomSet_FindAllApplicationData_keyval2(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_FixedAtomSet_FindAllApplicationData_keyval3(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedAtomSet self
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
extern ApiList Nmrc_FixedAtomSet_FindAllApplicationData_keyval4(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedAtomSet_FindAllAtoms(Nmrc_FixedAtomSet self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedAtomSet_FindAllAtoms_keyval0(Nmrc_FixedAtomSet self);

/**
  FindAll for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedAtomSet_FindAllAtoms_keyval1(Nmrc_FixedAtomSet self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedAtomSet_FindAllAtoms_keyval2(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedAtomSet_FindAllAtoms_keyval3(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
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
extern ApiSet Nmrc_FixedAtomSet_FindAllAtoms_keyval4(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedAtomSet_FindAllResonanceSets(Nmrc_FixedAtomSet self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedAtomSet_FindAllResonanceSets_keyval0(Nmrc_FixedAtomSet self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedAtomSet_FindAllResonanceSets_keyval1(Nmrc_FixedAtomSet self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedAtomSet_FindAllResonanceSets_keyval2(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedAtomSet_FindAllResonanceSets_keyval3(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
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
extern ApiSet Nmrc_FixedAtomSet_FindAllResonanceSets_keyval4(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedAtomSet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_FixedAtomSet_FindFirstApplicationData(Nmrc_FixedAtomSet self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedAtomSet self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_FixedAtomSet_FindFirstApplicationData_keyval0(Nmrc_FixedAtomSet self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedAtomSet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_FixedAtomSet_FindFirstApplicationData_keyval1(Nmrc_FixedAtomSet self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_FixedAtomSet_FindFirstApplicationData_keyval2(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_FixedAtomSet_FindFirstApplicationData_keyval3(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedAtomSet self
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
extern Impl_ApplicationData Nmrc_FixedAtomSet_FindFirstApplicationData_keyval4(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Atom Nmrc_FixedAtomSet_FindFirstAtom(Nmrc_FixedAtomSet self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Atom Nmrc_FixedAtomSet_FindFirstAtom_keyval0(Nmrc_FixedAtomSet self);

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Atom Nmrc_FixedAtomSet_FindFirstAtom_keyval1(Nmrc_FixedAtomSet self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Atom Nmrc_FixedAtomSet_FindFirstAtom_keyval2(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Mols_Atom Nmrc_FixedAtomSet_FindFirstAtom_keyval3(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
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
extern Mols_Atom Nmrc_FixedAtomSet_FindFirstAtom_keyval4(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonanceSet Nmrc_FixedAtomSet_FindFirstResonanceSet(Nmrc_FixedAtomSet self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonanceSet Nmrc_FixedAtomSet_FindFirstResonanceSet_keyval0(Nmrc_FixedAtomSet self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonanceSet Nmrc_FixedAtomSet_FindFirstResonanceSet_keyval1(Nmrc_FixedAtomSet self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonanceSet Nmrc_FixedAtomSet_FindFirstResonanceSet_keyval2(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonanceSet Nmrc_FixedAtomSet_FindFirstResonanceSet_keyval3(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
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
extern Nmrc_FixedResonanceSet Nmrc_FixedAtomSet_FindFirstResonanceSet_keyval4(Nmrc_FixedAtomSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrConstraint.FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmrc_FixedAtomSet_Get(Nmrc_FixedAtomSet self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
extern Acco_AccessObject Nmrc_FixedAtomSet_GetAccess(Nmrc_FixedAtomSet self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
extern Acco_AccessObject Nmrc_FixedAtomSet_GetActiveAccess(Nmrc_FixedAtomSet self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
extern ApiList Nmrc_FixedAtomSet_GetApplicationData(Nmrc_FixedAtomSet self);

/**
  Get for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
extern ApiSet Nmrc_FixedAtomSet_GetAtoms(Nmrc_FixedAtomSet self);

/**
  GetByKey for ccp.nmr.NmrConstraint.FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmrc_FixedAtomSet Nmrc_FixedAtomSet_GetByKey(Nmrc_FixedAtomSet self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
extern ApiString Nmrc_FixedAtomSet_GetClassName(Nmrc_FixedAtomSet self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
extern ApiList Nmrc_FixedAtomSet_GetFieldNames(Nmrc_FixedAtomSet self);

/**
  GetFullKey for ccp.nmr.NmrConstraint.FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmrc_FixedAtomSet_GetFullKey(Nmrc_FixedAtomSet self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
extern ApiBoolean Nmrc_FixedAtomSet_GetInConstructor(Nmrc_FixedAtomSet self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
extern ApiBoolean Nmrc_FixedAtomSet_GetIsDeleted(Nmrc_FixedAtomSet self);

/**
  GetLocalKey for ccp.nmr.NmrConstraint.FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @returns  Local object key
**/
extern ApiObject Nmrc_FixedAtomSet_GetLocalKey(Nmrc_FixedAtomSet self);

/**
  Get for ccp.nmr.NmrConstraint.FixedAtomSet.name

name of FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
extern ApiString Nmrc_FixedAtomSet_GetName(Nmrc_FixedAtomSet self);

/**
  Get for ccp.nmr.NmrConstraint.FixedAtomSet.nmrConstraintStore

parent 
link
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
extern Nmrc_NmrConstraintStore Nmrc_FixedAtomSet_GetNmrConstraintStore(Nmrc_FixedAtomSet self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
extern ApiString Nmrc_FixedAtomSet_GetPackageName(Nmrc_FixedAtomSet self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
extern ApiString Nmrc_FixedAtomSet_GetPackageShortName(Nmrc_FixedAtomSet self);

/**
  Get for ccp.nmr.NmrConstraint.FixedAtomSet.parent

link to parent object 
- synonym for nmrConstraintStore
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
extern Nmrc_NmrConstraintStore Nmrc_FixedAtomSet_GetParent(Nmrc_FixedAtomSet self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
extern ApiString Nmrc_FixedAtomSet_GetQualifiedName(Nmrc_FixedAtomSet self);

/**
  Get for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
extern ApiSet Nmrc_FixedAtomSet_GetResonanceSets(Nmrc_FixedAtomSet self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
extern Impl_MemopsRoot Nmrc_FixedAtomSet_GetRoot(Nmrc_FixedAtomSet self);

/**
  Get for ccp.nmr.NmrConstraint.FixedAtomSet.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
extern ApiInteger Nmrc_FixedAtomSet_GetSerial(Nmrc_FixedAtomSet self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
extern Impl_TopObject Nmrc_FixedAtomSet_GetTopObject(Nmrc_FixedAtomSet self);

/**
  Constructor for ccp.nmr.NmrConstraint.FixedAtomSet
  @param  Nmrc_NmrConstraintStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrc_FixedAtomSet Nmrc_FixedAtomSet_Init(Nmrc_NmrConstraintStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrConstraint.FixedAtomSet
  @param  Nmrc_NmrConstraintStore parent
  @param  ApiSet atoms
  @returns  the new object
**/
extern Nmrc_FixedAtomSet Nmrc_FixedAtomSet_Init_reqd(Nmrc_NmrConstraintStore parent, ApiSet atoms);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedAtomSet self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_FixedAtomSet_RemoveApplicationData(Nmrc_FixedAtomSet self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  Mols_Atom value
**/
extern void *Nmrc_FixedAtomSet_RemoveAtom(Nmrc_FixedAtomSet self, Mols_Atom value);

/**
  Remove for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @param  Nmrc_FixedResonanceSet value
**/
extern void *Nmrc_FixedAtomSet_RemoveResonanceSet(Nmrc_FixedAtomSet self, Nmrc_FixedResonanceSet value);

/**
  SetAttr for ccp.nmr.NmrConstraint.FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmrc_FixedAtomSet_Set(Nmrc_FixedAtomSet self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_FixedAtomSet self
  @param  Acco_AccessObject value
**/
extern void *Nmrc_FixedAtomSet_SetAccess(Nmrc_FixedAtomSet self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedAtomSet self
  @param  ApiList values
**/
extern void *Nmrc_FixedAtomSet_SetApplicationData(Nmrc_FixedAtomSet self, ApiList values);

/**
  Set for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  ApiSet values
**/
extern void *Nmrc_FixedAtomSet_SetAtoms(Nmrc_FixedAtomSet self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.FixedAtomSet.name

name of FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @param  ApiString value
**/
extern void *Nmrc_FixedAtomSet_SetName(Nmrc_FixedAtomSet self, ApiString value);

/**
  Set for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @param  ApiSet values
**/
extern void *Nmrc_FixedAtomSet_SetResonanceSets(Nmrc_FixedAtomSet self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.FixedAtomSet.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrc_FixedAtomSet self
  @param  ApiInteger value
**/
extern void *Nmrc_FixedAtomSet_SetSerial(Nmrc_FixedAtomSet self, ApiInteger value);

/**
  Sorted for ccp.nmr.NmrConstraint.FixedAtomSet.atoms

Atoms making up 
FixedAtomSet
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
extern ApiList Nmrc_FixedAtomSet_SortedAtoms(Nmrc_FixedAtomSet self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.FixedAtomSet.resonanceSets

FixedResonanceSets 
associated with FixedAtomSet.
  @param  Nmrc_FixedAtomSet self
  @returns   the result
**/
extern ApiList Nmrc_FixedAtomSet_SortedResonanceSets(Nmrc_FixedAtomSet self);

#endif /* __incl__ccp_api_nmr_NmrConstraint_FixedAtomSet_h__ */
