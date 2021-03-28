
#ifndef __incl__ccp_api_nmr_NmrConstraint_JCouplingConstraintItem_h__
#define __incl__ccp_api_nmr_NmrConstraint_JCouplingConstraintItem_h__

#include "ccp.h"

/*
  Pair of Resonances involved in a J coupling restraint
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintItem self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_JCouplingConstraintItem_AddApplicationData(Nmrc_JCouplingConstraintItem self, Impl_ApplicationData value);

/**
  Add for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_JCouplingConstraintItem self
  @param  Nmrc_FixedResonance value
**/
extern void *Nmrc_JCouplingConstraintItem_AddOrderedResonance(Nmrc_JCouplingConstraintItem self, Nmrc_FixedResonance value);

/**
  CheckAllValid for ccp.nmr.NmrConstraint.JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraintItem self
  @param  ApiBoolean complete
**/
extern void *Nmrc_JCouplingConstraintItem_CheckAllValid(Nmrc_JCouplingConstraintItem self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrConstraint.JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraintItem self
  @param  ApiBoolean complete
**/
extern void *Nmrc_JCouplingConstraintItem_CheckValid(Nmrc_JCouplingConstraintItem self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintItem self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_JCouplingConstraintItem_FindAllApplicationData(Nmrc_JCouplingConstraintItem self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintItem self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_JCouplingConstraintItem_FindAllApplicationData_keyval0(Nmrc_JCouplingConstraintItem self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_JCouplingConstraintItem_FindAllApplicationData_keyval1(Nmrc_JCouplingConstraintItem self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_JCouplingConstraintItem_FindAllApplicationData_keyval2(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_JCouplingConstraintItem_FindAllApplicationData_keyval3(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintItem self
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
extern ApiList Nmrc_JCouplingConstraintItem_FindAllApplicationData_keyval4(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_JCouplingConstraintItem self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_JCouplingConstraintItem_FindAllOrderedResonances(Nmrc_JCouplingConstraintItem self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_JCouplingConstraintItem self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_JCouplingConstraintItem_FindAllOrderedResonances_keyval0(Nmrc_JCouplingConstraintItem self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_JCouplingConstraintItem_FindAllOrderedResonances_keyval1(Nmrc_JCouplingConstraintItem self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_JCouplingConstraintItem_FindAllOrderedResonances_keyval2(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_JCouplingConstraintItem_FindAllOrderedResonances_keyval3(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_JCouplingConstraintItem self
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
extern ApiList Nmrc_JCouplingConstraintItem_FindAllOrderedResonances_keyval4(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_JCouplingConstraintItem self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintItem_FindAllResonances(Nmrc_JCouplingConstraintItem self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_JCouplingConstraintItem self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintItem_FindAllResonances_keyval0(Nmrc_JCouplingConstraintItem self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintItem_FindAllResonances_keyval1(Nmrc_JCouplingConstraintItem self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintItem_FindAllResonances_keyval2(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintItem_FindAllResonances_keyval3(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_JCouplingConstraintItem self
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
extern ApiSet Nmrc_JCouplingConstraintItem_FindAllResonances_keyval4(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintItem self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_JCouplingConstraintItem_FindFirstApplicationData(Nmrc_JCouplingConstraintItem self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintItem self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_JCouplingConstraintItem_FindFirstApplicationData_keyval0(Nmrc_JCouplingConstraintItem self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_JCouplingConstraintItem_FindFirstApplicationData_keyval1(Nmrc_JCouplingConstraintItem self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_JCouplingConstraintItem_FindFirstApplicationData_keyval2(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_JCouplingConstraintItem_FindFirstApplicationData_keyval3(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintItem self
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
extern Impl_ApplicationData Nmrc_JCouplingConstraintItem_FindFirstApplicationData_keyval4(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_JCouplingConstraintItem self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_JCouplingConstraintItem_FindFirstOrderedResonance(Nmrc_JCouplingConstraintItem self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_JCouplingConstraintItem self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_JCouplingConstraintItem_FindFirstOrderedResonance_keyval0(Nmrc_JCouplingConstraintItem self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_JCouplingConstraintItem_FindFirstOrderedResonance_keyval1(Nmrc_JCouplingConstraintItem self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_JCouplingConstraintItem_FindFirstOrderedResonance_keyval2(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_JCouplingConstraintItem_FindFirstOrderedResonance_keyval3(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_JCouplingConstraintItem self
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
extern Nmrc_FixedResonance Nmrc_JCouplingConstraintItem_FindFirstOrderedResonance_keyval4(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_JCouplingConstraintItem self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_JCouplingConstraintItem_FindFirstResonance(Nmrc_JCouplingConstraintItem self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_JCouplingConstraintItem self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_JCouplingConstraintItem_FindFirstResonance_keyval0(Nmrc_JCouplingConstraintItem self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_JCouplingConstraintItem_FindFirstResonance_keyval1(Nmrc_JCouplingConstraintItem self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_JCouplingConstraintItem_FindFirstResonance_keyval2(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_JCouplingConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_JCouplingConstraintItem_FindFirstResonance_keyval3(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_JCouplingConstraintItem self
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
extern Nmrc_FixedResonance Nmrc_JCouplingConstraintItem_FindFirstResonance_keyval4(Nmrc_JCouplingConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrConstraint.JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraintItem self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmrc_JCouplingConstraintItem_Get(Nmrc_JCouplingConstraintItem self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
extern Acco_AccessObject Nmrc_JCouplingConstraintItem_GetAccess(Nmrc_JCouplingConstraintItem self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
extern ApiList Nmrc_JCouplingConstraintItem_GetApplicationData(Nmrc_JCouplingConstraintItem self);

/**
  GetByKey for ccp.nmr.NmrConstraint.JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraintItem self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmrc_JCouplingConstraintItem Nmrc_JCouplingConstraintItem_GetByKey(Nmrc_JCouplingConstraintItem self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
extern ApiString Nmrc_JCouplingConstraintItem_GetClassName(Nmrc_JCouplingConstraintItem self);

/**
  Get for ccp.nmr.NmrConstraint.JCouplingConstraintItem.constraint

parent 
link
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
extern Nmrc_JCouplingConstraint Nmrc_JCouplingConstraintItem_GetConstraint(Nmrc_JCouplingConstraintItem self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
extern ApiList Nmrc_JCouplingConstraintItem_GetFieldNames(Nmrc_JCouplingConstraintItem self);

/**
  Get for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.firstResonance

First 
resonance of the two in 'resonances'. Used to define ordering of 
resonances.
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
extern Nmrc_FixedResonance Nmrc_JCouplingConstraintItem_GetFirstResonance(Nmrc_JCouplingConstraintItem self);

/**
  GetFullKey for ccp.nmr.NmrConstraint.JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraintItem self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmrc_JCouplingConstraintItem_GetFullKey(Nmrc_JCouplingConstraintItem self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
extern ApiBoolean Nmrc_JCouplingConstraintItem_GetInConstructor(Nmrc_JCouplingConstraintItem self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
extern ApiBoolean Nmrc_JCouplingConstraintItem_GetIsDeleted(Nmrc_JCouplingConstraintItem self);

/**
  GetLocalKey for ccp.nmr.NmrConstraint.JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraintItem self
  @returns  Local object key
**/
extern ApiObject Nmrc_JCouplingConstraintItem_GetLocalKey(Nmrc_JCouplingConstraintItem self);

/**
  Get for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
extern ApiList Nmrc_JCouplingConstraintItem_GetOrderedResonances(Nmrc_JCouplingConstraintItem self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
extern ApiString Nmrc_JCouplingConstraintItem_GetPackageName(Nmrc_JCouplingConstraintItem self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
extern ApiString Nmrc_JCouplingConstraintItem_GetPackageShortName(Nmrc_JCouplingConstraintItem self);

/**
  Get for ccp.nmr.NmrConstraint.JCouplingConstraintItem.parent

link to 
parent object - synonym for constraint
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
extern Nmrc_JCouplingConstraint Nmrc_JCouplingConstraintItem_GetParent(Nmrc_JCouplingConstraintItem self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
extern ApiString Nmrc_JCouplingConstraintItem_GetQualifiedName(Nmrc_JCouplingConstraintItem self);

/**
  Get for ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
extern ApiSet Nmrc_JCouplingConstraintItem_GetResonances(Nmrc_JCouplingConstraintItem self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
extern Impl_MemopsRoot Nmrc_JCouplingConstraintItem_GetRoot(Nmrc_JCouplingConstraintItem self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
extern Impl_TopObject Nmrc_JCouplingConstraintItem_GetTopObject(Nmrc_JCouplingConstraintItem self);

/**
  Constructor for ccp.nmr.NmrConstraint.JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraint parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrc_JCouplingConstraintItem Nmrc_JCouplingConstraintItem_Init(Nmrc_JCouplingConstraint parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrConstraint.JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraint parent
  @param  ApiSet resonances
  @returns  the new object
**/
extern Nmrc_JCouplingConstraintItem Nmrc_JCouplingConstraintItem_Init_reqd(Nmrc_JCouplingConstraint parent, ApiSet resonances);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintItem self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_JCouplingConstraintItem_RemoveApplicationData(Nmrc_JCouplingConstraintItem self, Impl_ApplicationData value);

/**
  Remove for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_JCouplingConstraintItem self
  @param  Nmrc_FixedResonance value
**/
extern void *Nmrc_JCouplingConstraintItem_RemoveOrderedResonance(Nmrc_JCouplingConstraintItem self, Nmrc_FixedResonance value);

/**
  SetAttr for ccp.nmr.NmrConstraint.JCouplingConstraintItem
  @param  Nmrc_JCouplingConstraintItem self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmrc_JCouplingConstraintItem_Set(Nmrc_JCouplingConstraintItem self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_JCouplingConstraintItem self
  @param  Acco_AccessObject value
**/
extern void *Nmrc_JCouplingConstraintItem_SetAccess(Nmrc_JCouplingConstraintItem self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintItem self
  @param  ApiList values
**/
extern void *Nmrc_JCouplingConstraintItem_SetApplicationData(Nmrc_JCouplingConstraintItem self, ApiList values);

/**
  Set for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.firstResonance

First 
resonance of the two in 'resonances'. Used to define ordering of 
resonances.
  @param  Nmrc_JCouplingConstraintItem self
  @param  Nmrc_FixedResonance value
**/
extern void *Nmrc_JCouplingConstraintItem_SetFirstResonance(Nmrc_JCouplingConstraintItem self, Nmrc_FixedResonance value);

/**
  Set for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_JCouplingConstraintItem self
  @param  ApiList values
**/
extern void *Nmrc_JCouplingConstraintItem_SetOrderedResonances(Nmrc_JCouplingConstraintItem self, ApiList values);

/**
  Set for ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_JCouplingConstraintItem self
  @param  ApiSet values
**/
extern void *Nmrc_JCouplingConstraintItem_SetResonances(Nmrc_JCouplingConstraintItem self, ApiSet values);

/**
  Sorted for ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair 
of resonances constrained in the PairWiseConstraint
  @param  Nmrc_JCouplingConstraintItem self
  @returns   the result
**/
extern ApiList Nmrc_JCouplingConstraintItem_SortedResonances(Nmrc_JCouplingConstraintItem self);

#endif /* __incl__ccp_api_nmr_NmrConstraint_JCouplingConstraintItem_h__ */
