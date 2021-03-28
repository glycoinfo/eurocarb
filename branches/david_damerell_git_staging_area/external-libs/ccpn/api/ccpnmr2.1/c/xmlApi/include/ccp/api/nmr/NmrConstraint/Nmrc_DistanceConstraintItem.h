
#ifndef __incl__ccp_api_nmr_NmrConstraint_DistanceConstraintItem_h__
#define __incl__ccp_api_nmr_NmrConstraint_DistanceConstraintItem_h__

#include "ccp.h"

/*
  Pair of Resonances involved in a distance restraint
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DistanceConstraintItem self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_DistanceConstraintItem_AddApplicationData(Nmrc_DistanceConstraintItem self, Impl_ApplicationData value);

/**
  Add for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_DistanceConstraintItem self
  @param  Nmrc_FixedResonance value
**/
extern void *Nmrc_DistanceConstraintItem_AddOrderedResonance(Nmrc_DistanceConstraintItem self, Nmrc_FixedResonance value);

/**
  CheckAllValid for ccp.nmr.NmrConstraint.DistanceConstraintItem
  @param  Nmrc_DistanceConstraintItem self
  @param  ApiBoolean complete
**/
extern void *Nmrc_DistanceConstraintItem_CheckAllValid(Nmrc_DistanceConstraintItem self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrConstraint.DistanceConstraintItem
  @param  Nmrc_DistanceConstraintItem self
  @param  ApiBoolean complete
**/
extern void *Nmrc_DistanceConstraintItem_CheckValid(Nmrc_DistanceConstraintItem self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DistanceConstraintItem self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_DistanceConstraintItem_FindAllApplicationData(Nmrc_DistanceConstraintItem self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DistanceConstraintItem self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_DistanceConstraintItem_FindAllApplicationData_keyval0(Nmrc_DistanceConstraintItem self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DistanceConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_DistanceConstraintItem_FindAllApplicationData_keyval1(Nmrc_DistanceConstraintItem self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DistanceConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_DistanceConstraintItem_FindAllApplicationData_keyval2(Nmrc_DistanceConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DistanceConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_DistanceConstraintItem_FindAllApplicationData_keyval3(Nmrc_DistanceConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DistanceConstraintItem self
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
extern ApiList Nmrc_DistanceConstraintItem_FindAllApplicationData_keyval4(Nmrc_DistanceConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_DistanceConstraintItem self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_DistanceConstraintItem_FindAllOrderedResonances(Nmrc_DistanceConstraintItem self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_DistanceConstraintItem self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_DistanceConstraintItem_FindAllOrderedResonances_keyval0(Nmrc_DistanceConstraintItem self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_DistanceConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_DistanceConstraintItem_FindAllOrderedResonances_keyval1(Nmrc_DistanceConstraintItem self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_DistanceConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_DistanceConstraintItem_FindAllOrderedResonances_keyval2(Nmrc_DistanceConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_DistanceConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_DistanceConstraintItem_FindAllOrderedResonances_keyval3(Nmrc_DistanceConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_DistanceConstraintItem self
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
extern ApiList Nmrc_DistanceConstraintItem_FindAllOrderedResonances_keyval4(Nmrc_DistanceConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_DistanceConstraintItem self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DistanceConstraintItem_FindAllResonances(Nmrc_DistanceConstraintItem self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_DistanceConstraintItem self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DistanceConstraintItem_FindAllResonances_keyval0(Nmrc_DistanceConstraintItem self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_DistanceConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DistanceConstraintItem_FindAllResonances_keyval1(Nmrc_DistanceConstraintItem self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_DistanceConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DistanceConstraintItem_FindAllResonances_keyval2(Nmrc_DistanceConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_DistanceConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DistanceConstraintItem_FindAllResonances_keyval3(Nmrc_DistanceConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_DistanceConstraintItem self
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
extern ApiSet Nmrc_DistanceConstraintItem_FindAllResonances_keyval4(Nmrc_DistanceConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DistanceConstraintItem self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_DistanceConstraintItem_FindFirstApplicationData(Nmrc_DistanceConstraintItem self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DistanceConstraintItem self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_DistanceConstraintItem_FindFirstApplicationData_keyval0(Nmrc_DistanceConstraintItem self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DistanceConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_DistanceConstraintItem_FindFirstApplicationData_keyval1(Nmrc_DistanceConstraintItem self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DistanceConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_DistanceConstraintItem_FindFirstApplicationData_keyval2(Nmrc_DistanceConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DistanceConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_DistanceConstraintItem_FindFirstApplicationData_keyval3(Nmrc_DistanceConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DistanceConstraintItem self
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
extern Impl_ApplicationData Nmrc_DistanceConstraintItem_FindFirstApplicationData_keyval4(Nmrc_DistanceConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_DistanceConstraintItem self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_DistanceConstraintItem_FindFirstOrderedResonance(Nmrc_DistanceConstraintItem self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_DistanceConstraintItem self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_DistanceConstraintItem_FindFirstOrderedResonance_keyval0(Nmrc_DistanceConstraintItem self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_DistanceConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_DistanceConstraintItem_FindFirstOrderedResonance_keyval1(Nmrc_DistanceConstraintItem self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_DistanceConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_DistanceConstraintItem_FindFirstOrderedResonance_keyval2(Nmrc_DistanceConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_DistanceConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_DistanceConstraintItem_FindFirstOrderedResonance_keyval3(Nmrc_DistanceConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_DistanceConstraintItem self
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
extern Nmrc_FixedResonance Nmrc_DistanceConstraintItem_FindFirstOrderedResonance_keyval4(Nmrc_DistanceConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_DistanceConstraintItem self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_DistanceConstraintItem_FindFirstResonance(Nmrc_DistanceConstraintItem self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_DistanceConstraintItem self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_DistanceConstraintItem_FindFirstResonance_keyval0(Nmrc_DistanceConstraintItem self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_DistanceConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_DistanceConstraintItem_FindFirstResonance_keyval1(Nmrc_DistanceConstraintItem self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_DistanceConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_DistanceConstraintItem_FindFirstResonance_keyval2(Nmrc_DistanceConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_DistanceConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_DistanceConstraintItem_FindFirstResonance_keyval3(Nmrc_DistanceConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_DistanceConstraintItem self
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
extern Nmrc_FixedResonance Nmrc_DistanceConstraintItem_FindFirstResonance_keyval4(Nmrc_DistanceConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrConstraint.DistanceConstraintItem
  @param  Nmrc_DistanceConstraintItem self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmrc_DistanceConstraintItem_Get(Nmrc_DistanceConstraintItem self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_DistanceConstraintItem self
  @returns   the result
**/
extern Acco_AccessObject Nmrc_DistanceConstraintItem_GetAccess(Nmrc_DistanceConstraintItem self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmrc_DistanceConstraintItem self
  @returns   the result
**/
extern Acco_AccessObject Nmrc_DistanceConstraintItem_GetActiveAccess(Nmrc_DistanceConstraintItem self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DistanceConstraintItem self
  @returns   the result
**/
extern ApiList Nmrc_DistanceConstraintItem_GetApplicationData(Nmrc_DistanceConstraintItem self);

/**
  GetByKey for ccp.nmr.NmrConstraint.DistanceConstraintItem
  @param  Nmrc_DistanceConstraintItem self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmrc_DistanceConstraintItem Nmrc_DistanceConstraintItem_GetByKey(Nmrc_DistanceConstraintItem self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmrc_DistanceConstraintItem self
  @returns   the result
**/
extern ApiString Nmrc_DistanceConstraintItem_GetClassName(Nmrc_DistanceConstraintItem self);

/**
  Get for ccp.nmr.NmrConstraint.DistanceConstraintItem.constraint

parent 
link
  @param  Nmrc_DistanceConstraintItem self
  @returns   the result
**/
extern Nmrc_DistanceConstraint Nmrc_DistanceConstraintItem_GetConstraint(Nmrc_DistanceConstraintItem self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmrc_DistanceConstraintItem self
  @returns   the result
**/
extern ApiList Nmrc_DistanceConstraintItem_GetFieldNames(Nmrc_DistanceConstraintItem self);

/**
  Get for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.firstResonance

First 
resonance of the two in 'resonances'. Used to define ordering of 
resonances.
  @param  Nmrc_DistanceConstraintItem self
  @returns   the result
**/
extern Nmrc_FixedResonance Nmrc_DistanceConstraintItem_GetFirstResonance(Nmrc_DistanceConstraintItem self);

/**
  GetFullKey for ccp.nmr.NmrConstraint.DistanceConstraintItem
  @param  Nmrc_DistanceConstraintItem self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmrc_DistanceConstraintItem_GetFullKey(Nmrc_DistanceConstraintItem self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmrc_DistanceConstraintItem self
  @returns   the result
**/
extern ApiBoolean Nmrc_DistanceConstraintItem_GetInConstructor(Nmrc_DistanceConstraintItem self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmrc_DistanceConstraintItem self
  @returns   the result
**/
extern ApiBoolean Nmrc_DistanceConstraintItem_GetIsDeleted(Nmrc_DistanceConstraintItem self);

/**
  GetLocalKey for ccp.nmr.NmrConstraint.DistanceConstraintItem
  @param  Nmrc_DistanceConstraintItem self
  @returns  Local object key
**/
extern ApiObject Nmrc_DistanceConstraintItem_GetLocalKey(Nmrc_DistanceConstraintItem self);

/**
  Get for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_DistanceConstraintItem self
  @returns   the result
**/
extern ApiList Nmrc_DistanceConstraintItem_GetOrderedResonances(Nmrc_DistanceConstraintItem self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmrc_DistanceConstraintItem self
  @returns   the result
**/
extern ApiString Nmrc_DistanceConstraintItem_GetPackageName(Nmrc_DistanceConstraintItem self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmrc_DistanceConstraintItem self
  @returns   the result
**/
extern ApiString Nmrc_DistanceConstraintItem_GetPackageShortName(Nmrc_DistanceConstraintItem self);

/**
  Get for ccp.nmr.NmrConstraint.DistanceConstraintItem.parent

link to 
parent object - synonym for constraint
  @param  Nmrc_DistanceConstraintItem self
  @returns   the result
**/
extern Nmrc_DistanceConstraint Nmrc_DistanceConstraintItem_GetParent(Nmrc_DistanceConstraintItem self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmrc_DistanceConstraintItem self
  @returns   the result
**/
extern ApiString Nmrc_DistanceConstraintItem_GetQualifiedName(Nmrc_DistanceConstraintItem self);

/**
  Get for ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_DistanceConstraintItem self
  @returns   the result
**/
extern ApiSet Nmrc_DistanceConstraintItem_GetResonances(Nmrc_DistanceConstraintItem self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmrc_DistanceConstraintItem self
  @returns   the result
**/
extern Impl_MemopsRoot Nmrc_DistanceConstraintItem_GetRoot(Nmrc_DistanceConstraintItem self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmrc_DistanceConstraintItem self
  @returns   the result
**/
extern Impl_TopObject Nmrc_DistanceConstraintItem_GetTopObject(Nmrc_DistanceConstraintItem self);

/**
  Constructor for ccp.nmr.NmrConstraint.DistanceConstraintItem
  @param  Nmrc_DistanceConstraint parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrc_DistanceConstraintItem Nmrc_DistanceConstraintItem_Init(Nmrc_DistanceConstraint parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrConstraint.DistanceConstraintItem
  @param  Nmrc_DistanceConstraint parent
  @param  ApiSet resonances
  @returns  the new object
**/
extern Nmrc_DistanceConstraintItem Nmrc_DistanceConstraintItem_Init_reqd(Nmrc_DistanceConstraint parent, ApiSet resonances);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DistanceConstraintItem self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_DistanceConstraintItem_RemoveApplicationData(Nmrc_DistanceConstraintItem self, Impl_ApplicationData value);

/**
  Remove for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_DistanceConstraintItem self
  @param  Nmrc_FixedResonance value
**/
extern void *Nmrc_DistanceConstraintItem_RemoveOrderedResonance(Nmrc_DistanceConstraintItem self, Nmrc_FixedResonance value);

/**
  SetAttr for ccp.nmr.NmrConstraint.DistanceConstraintItem
  @param  Nmrc_DistanceConstraintItem self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmrc_DistanceConstraintItem_Set(Nmrc_DistanceConstraintItem self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_DistanceConstraintItem self
  @param  Acco_AccessObject value
**/
extern void *Nmrc_DistanceConstraintItem_SetAccess(Nmrc_DistanceConstraintItem self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DistanceConstraintItem self
  @param  ApiList values
**/
extern void *Nmrc_DistanceConstraintItem_SetApplicationData(Nmrc_DistanceConstraintItem self, ApiList values);

/**
  Set for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.firstResonance

First 
resonance of the two in 'resonances'. Used to define ordering of 
resonances.
  @param  Nmrc_DistanceConstraintItem self
  @param  Nmrc_FixedResonance value
**/
extern void *Nmrc_DistanceConstraintItem_SetFirstResonance(Nmrc_DistanceConstraintItem self, Nmrc_FixedResonance value);

/**
  Set for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_DistanceConstraintItem self
  @param  ApiList values
**/
extern void *Nmrc_DistanceConstraintItem_SetOrderedResonances(Nmrc_DistanceConstraintItem self, ApiList values);

/**
  Set for ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_DistanceConstraintItem self
  @param  ApiSet values
**/
extern void *Nmrc_DistanceConstraintItem_SetResonances(Nmrc_DistanceConstraintItem self, ApiSet values);

/**
  Sorted for ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair 
of resonances constrained in the PairWiseConstraint
  @param  Nmrc_DistanceConstraintItem self
  @returns   the result
**/
extern ApiList Nmrc_DistanceConstraintItem_SortedResonances(Nmrc_DistanceConstraintItem self);

#endif /* __incl__ccp_api_nmr_NmrConstraint_DistanceConstraintItem_h__ */
