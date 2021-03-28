
#ifndef __incl__ccp_api_nmr_NmrConstraint_PairwiseConstraintItem_h__
#define __incl__ccp_api_nmr_NmrConstraint_PairwiseConstraintItem_h__

#include "ccp.h"

/*
  ConstraintItem that takes an unordered pair of FixedResonances as its key
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_PairwiseConstraintItem self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_PairwiseConstraintItem_AddApplicationData(Nmrc_PairwiseConstraintItem self, Impl_ApplicationData value);

/**
  Add for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_PairwiseConstraintItem self
  @param  Nmrc_FixedResonance value
**/
extern void *Nmrc_PairwiseConstraintItem_AddOrderedResonance(Nmrc_PairwiseConstraintItem self, Nmrc_FixedResonance value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_PairwiseConstraintItem self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_PairwiseConstraintItem_FindAllApplicationData(Nmrc_PairwiseConstraintItem self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_PairwiseConstraintItem self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_PairwiseConstraintItem_FindAllApplicationData_keyval0(Nmrc_PairwiseConstraintItem self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_PairwiseConstraintItem_FindAllApplicationData_keyval1(Nmrc_PairwiseConstraintItem self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_PairwiseConstraintItem_FindAllApplicationData_keyval2(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_PairwiseConstraintItem_FindAllApplicationData_keyval3(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_PairwiseConstraintItem self
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
extern ApiList Nmrc_PairwiseConstraintItem_FindAllApplicationData_keyval4(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_PairwiseConstraintItem self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_PairwiseConstraintItem_FindAllOrderedResonances(Nmrc_PairwiseConstraintItem self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_PairwiseConstraintItem self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_PairwiseConstraintItem_FindAllOrderedResonances_keyval0(Nmrc_PairwiseConstraintItem self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_PairwiseConstraintItem_FindAllOrderedResonances_keyval1(Nmrc_PairwiseConstraintItem self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_PairwiseConstraintItem_FindAllOrderedResonances_keyval2(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_PairwiseConstraintItem_FindAllOrderedResonances_keyval3(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_PairwiseConstraintItem self
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
extern ApiList Nmrc_PairwiseConstraintItem_FindAllOrderedResonances_keyval4(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_PairwiseConstraintItem self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_PairwiseConstraintItem_FindAllResonances(Nmrc_PairwiseConstraintItem self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_PairwiseConstraintItem self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_PairwiseConstraintItem_FindAllResonances_keyval0(Nmrc_PairwiseConstraintItem self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_PairwiseConstraintItem_FindAllResonances_keyval1(Nmrc_PairwiseConstraintItem self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_PairwiseConstraintItem_FindAllResonances_keyval2(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_PairwiseConstraintItem_FindAllResonances_keyval3(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_PairwiseConstraintItem self
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
extern ApiSet Nmrc_PairwiseConstraintItem_FindAllResonances_keyval4(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_PairwiseConstraintItem self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_PairwiseConstraintItem_FindFirstApplicationData(Nmrc_PairwiseConstraintItem self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_PairwiseConstraintItem self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_PairwiseConstraintItem_FindFirstApplicationData_keyval0(Nmrc_PairwiseConstraintItem self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_PairwiseConstraintItem_FindFirstApplicationData_keyval1(Nmrc_PairwiseConstraintItem self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_PairwiseConstraintItem_FindFirstApplicationData_keyval2(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_PairwiseConstraintItem_FindFirstApplicationData_keyval3(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_PairwiseConstraintItem self
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
extern Impl_ApplicationData Nmrc_PairwiseConstraintItem_FindFirstApplicationData_keyval4(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_PairwiseConstraintItem self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_PairwiseConstraintItem_FindFirstOrderedResonance(Nmrc_PairwiseConstraintItem self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_PairwiseConstraintItem self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_PairwiseConstraintItem_FindFirstOrderedResonance_keyval0(Nmrc_PairwiseConstraintItem self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_PairwiseConstraintItem_FindFirstOrderedResonance_keyval1(Nmrc_PairwiseConstraintItem self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_PairwiseConstraintItem_FindFirstOrderedResonance_keyval2(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_PairwiseConstraintItem_FindFirstOrderedResonance_keyval3(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_PairwiseConstraintItem self
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
extern Nmrc_FixedResonance Nmrc_PairwiseConstraintItem_FindFirstOrderedResonance_keyval4(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_PairwiseConstraintItem self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_PairwiseConstraintItem_FindFirstResonance(Nmrc_PairwiseConstraintItem self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_PairwiseConstraintItem self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_PairwiseConstraintItem_FindFirstResonance_keyval0(Nmrc_PairwiseConstraintItem self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_PairwiseConstraintItem_FindFirstResonance_keyval1(Nmrc_PairwiseConstraintItem self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_PairwiseConstraintItem_FindFirstResonance_keyval2(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_PairwiseConstraintItem self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_PairwiseConstraintItem_FindFirstResonance_keyval3(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_PairwiseConstraintItem self
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
extern Nmrc_FixedResonance Nmrc_PairwiseConstraintItem_FindFirstResonance_keyval4(Nmrc_PairwiseConstraintItem self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
extern Acco_AccessObject Nmrc_PairwiseConstraintItem_GetAccess(Nmrc_PairwiseConstraintItem self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
extern Acco_AccessObject Nmrc_PairwiseConstraintItem_GetActiveAccess(Nmrc_PairwiseConstraintItem self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
extern ApiList Nmrc_PairwiseConstraintItem_GetApplicationData(Nmrc_PairwiseConstraintItem self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
extern ApiString Nmrc_PairwiseConstraintItem_GetClassName(Nmrc_PairwiseConstraintItem self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
extern ApiList Nmrc_PairwiseConstraintItem_GetFieldNames(Nmrc_PairwiseConstraintItem self);

/**
  Get for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.firstResonance

First 
resonance of the two in 'resonances'. Used to define ordering of 
resonances.
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
extern Nmrc_FixedResonance Nmrc_PairwiseConstraintItem_GetFirstResonance(Nmrc_PairwiseConstraintItem self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
extern ApiBoolean Nmrc_PairwiseConstraintItem_GetInConstructor(Nmrc_PairwiseConstraintItem self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
extern ApiBoolean Nmrc_PairwiseConstraintItem_GetIsDeleted(Nmrc_PairwiseConstraintItem self);

/**
  getter for derived link orderedResonances
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
extern ApiList Nmrc_PairwiseConstraintItem_GetOrderedResonances(Nmrc_PairwiseConstraintItem self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
extern ApiString Nmrc_PairwiseConstraintItem_GetPackageName(Nmrc_PairwiseConstraintItem self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
extern ApiString Nmrc_PairwiseConstraintItem_GetPackageShortName(Nmrc_PairwiseConstraintItem self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
extern ApiString Nmrc_PairwiseConstraintItem_GetQualifiedName(Nmrc_PairwiseConstraintItem self);

/**
  Get for ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
extern ApiSet Nmrc_PairwiseConstraintItem_GetResonances(Nmrc_PairwiseConstraintItem self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
extern Impl_MemopsRoot Nmrc_PairwiseConstraintItem_GetRoot(Nmrc_PairwiseConstraintItem self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
extern Impl_TopObject Nmrc_PairwiseConstraintItem_GetTopObject(Nmrc_PairwiseConstraintItem self);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_PairwiseConstraintItem self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_PairwiseConstraintItem_RemoveApplicationData(Nmrc_PairwiseConstraintItem self, Impl_ApplicationData value);

/**
  Remove for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.orderedResonances

Resonance 
pair in order. Optional, as order may not be defined.
  @param  Nmrc_PairwiseConstraintItem self
  @param  Nmrc_FixedResonance value
**/
extern void *Nmrc_PairwiseConstraintItem_RemoveOrderedResonance(Nmrc_PairwiseConstraintItem self, Nmrc_FixedResonance value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_PairwiseConstraintItem self
  @param  Acco_AccessObject value
**/
extern void *Nmrc_PairwiseConstraintItem_SetAccess(Nmrc_PairwiseConstraintItem self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_PairwiseConstraintItem self
  @param  ApiList values
**/
extern void *Nmrc_PairwiseConstraintItem_SetApplicationData(Nmrc_PairwiseConstraintItem self, ApiList values);

/**
  Set for 
ccp.nmr.NmrConstraint.PairwiseConstraintItem.firstResonance

First 
resonance of the two in 'resonances'. Used to define ordering of 
resonances.
  @param  Nmrc_PairwiseConstraintItem self
  @param  Nmrc_FixedResonance value
**/
extern void *Nmrc_PairwiseConstraintItem_SetFirstResonance(Nmrc_PairwiseConstraintItem self, Nmrc_FixedResonance value);

/**
  getter for derived link orderedResonances
  @param  Nmrc_PairwiseConstraintItem self
  @param  ApiList values
**/
extern void *Nmrc_PairwiseConstraintItem_SetOrderedResonances(Nmrc_PairwiseConstraintItem self, ApiList values);

/**
  Set for ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair of 
resonances constrained in the PairWiseConstraint
  @param  Nmrc_PairwiseConstraintItem self
  @param  ApiSet values
**/
extern void *Nmrc_PairwiseConstraintItem_SetResonances(Nmrc_PairwiseConstraintItem self, ApiSet values);

/**
  Sorted for ccp.nmr.NmrConstraint.PairwiseConstraintItem.resonances

Pair 
of resonances constrained in the PairWiseConstraint
  @param  Nmrc_PairwiseConstraintItem self
  @returns   the result
**/
extern ApiList Nmrc_PairwiseConstraintItem_SortedResonances(Nmrc_PairwiseConstraintItem self);

#endif /* __incl__ccp_api_nmr_NmrConstraint_PairwiseConstraintItem_h__ */
