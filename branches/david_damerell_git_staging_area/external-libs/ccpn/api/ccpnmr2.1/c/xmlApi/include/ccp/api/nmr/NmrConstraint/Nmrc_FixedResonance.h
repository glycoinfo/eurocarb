
#ifndef __incl__ccp_api_nmr_NmrConstraint_FixedResonance_h__
#define __incl__ccp_api_nmr_NmrConstraint_FixedResonance_h__

#include "ccp.h"

/*
  Permanent, unchanging copy of Nmr.Resonance.
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonance self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_FixedResonance_AddApplicationData(Nmrc_FixedResonance self, Impl_ApplicationData value);

/**
  CheckAllValid for ccp.nmr.NmrConstraint.FixedResonance
  @param  Nmrc_FixedResonance self
  @param  ApiBoolean complete
**/
extern void *Nmrc_FixedResonance_CheckAllValid(Nmrc_FixedResonance self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrConstraint.FixedResonance
  @param  Nmrc_FixedResonance self
  @param  ApiBoolean complete
**/
extern void *Nmrc_FixedResonance_CheckValid(Nmrc_FixedResonance self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_FixedResonance_FindAllApplicationData(Nmrc_FixedResonance self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonance self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_FixedResonance_FindAllApplicationData_keyval0(Nmrc_FixedResonance self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_FixedResonance_FindAllApplicationData_keyval1(Nmrc_FixedResonance self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_FixedResonance_FindAllApplicationData_keyval2(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_FixedResonance_FindAllApplicationData_keyval3(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonance self
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
extern ApiList Nmrc_FixedResonance_FindAllApplicationData_keyval4(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.chainStateLinks

child 
link to class ChainStateLink
  @param  Nmrc_FixedResonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllChainStateLinks(Nmrc_FixedResonance self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.chainStateLinks

child 
link to class ChainStateLink
  @param  Nmrc_FixedResonance self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllChainStateLinks_keyval0(Nmrc_FixedResonance self);

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.chainStateLinks

child 
link to class ChainStateLink
  @param  Nmrc_FixedResonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllChainStateLinks_keyval1(Nmrc_FixedResonance self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.chainStateLinks

child 
link to class ChainStateLink
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllChainStateLinks_keyval2(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.chainStateLinks

child 
link to class ChainStateLink
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllChainStateLinks_keyval3(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.chainStateLinks

child 
link to class ChainStateLink
  @param  Nmrc_FixedResonance self
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
extern ApiSet Nmrc_FixedResonance_FindAllChainStateLinks_keyval4(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllChemShiftConstraints(Nmrc_FixedResonance self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllChemShiftConstraints_keyval0(Nmrc_FixedResonance self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllChemShiftConstraints_keyval1(Nmrc_FixedResonance self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllChemShiftConstraints_keyval2(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllChemShiftConstraints_keyval3(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
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
extern ApiSet Nmrc_FixedResonance_FindAllChemShiftConstraints_keyval4(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllCsaConstraints(Nmrc_FixedResonance self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllCsaConstraints_keyval0(Nmrc_FixedResonance self);

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllCsaConstraints_keyval1(Nmrc_FixedResonance self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllCsaConstraints_keyval2(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllCsaConstraints_keyval3(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
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
extern ApiSet Nmrc_FixedResonance_FindAllCsaConstraints_keyval4(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllDihedralConstraints(Nmrc_FixedResonance self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllDihedralConstraints_keyval0(Nmrc_FixedResonance self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllDihedralConstraints_keyval1(Nmrc_FixedResonance self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllDihedralConstraints_keyval2(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllDihedralConstraints_keyval3(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
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
extern ApiSet Nmrc_FixedResonance_FindAllDihedralConstraints_keyval4(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllPairwiseConstraintItems(Nmrc_FixedResonance self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllPairwiseConstraintItems_keyval0(Nmrc_FixedResonance self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllPairwiseConstraintItems_keyval1(Nmrc_FixedResonance self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllPairwiseConstraintItems_keyval2(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllPairwiseConstraintItems_keyval3(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
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
extern ApiSet Nmrc_FixedResonance_FindAllPairwiseConstraintItems_keyval4(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllResCoords(Nmrc_FixedResonance self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllResCoords_keyval0(Nmrc_FixedResonance self);

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllResCoords_keyval1(Nmrc_FixedResonance self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllResCoords_keyval2(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_FixedResonance_FindAllResCoords_keyval3(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
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
extern ApiSet Nmrc_FixedResonance_FindAllResCoords_keyval4(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_FixedResonance_FindFirstApplicationData(Nmrc_FixedResonance self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonance self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_FixedResonance_FindFirstApplicationData_keyval0(Nmrc_FixedResonance self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_FixedResonance_FindFirstApplicationData_keyval1(Nmrc_FixedResonance self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_FixedResonance_FindFirstApplicationData_keyval2(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_FixedResonance_FindFirstApplicationData_keyval3(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonance self
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
extern Impl_ApplicationData Nmrc_FixedResonance_FindFirstApplicationData_keyval4(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.chainStateLinks

child link to 
class ChainStateLink
  @param  Nmrc_FixedResonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ChainStateLink Nmrc_FixedResonance_FindFirstChainStateLink(Nmrc_FixedResonance self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.chainStateLinks

child link to 
class ChainStateLink
  @param  Nmrc_FixedResonance self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ChainStateLink Nmrc_FixedResonance_FindFirstChainStateLink_keyval0(Nmrc_FixedResonance self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.chainStateLinks

child link to 
class ChainStateLink
  @param  Nmrc_FixedResonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ChainStateLink Nmrc_FixedResonance_FindFirstChainStateLink_keyval1(Nmrc_FixedResonance self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.chainStateLinks

child link to 
class ChainStateLink
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ChainStateLink Nmrc_FixedResonance_FindFirstChainStateLink_keyval2(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.chainStateLinks

child link to 
class ChainStateLink
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ChainStateLink Nmrc_FixedResonance_FindFirstChainStateLink_keyval3(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.chainStateLinks

child link to 
class ChainStateLink
  @param  Nmrc_FixedResonance self
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
extern Nmrc_ChainStateLink Nmrc_FixedResonance_FindFirstChainStateLink_keyval4(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ChemShiftConstraint Nmrc_FixedResonance_FindFirstChemShiftConstraint(Nmrc_FixedResonance self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ChemShiftConstraint Nmrc_FixedResonance_FindFirstChemShiftConstraint_keyval0(Nmrc_FixedResonance self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ChemShiftConstraint Nmrc_FixedResonance_FindFirstChemShiftConstraint_keyval1(Nmrc_FixedResonance self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ChemShiftConstraint Nmrc_FixedResonance_FindFirstChemShiftConstraint_keyval2(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ChemShiftConstraint Nmrc_FixedResonance_FindFirstChemShiftConstraint_keyval3(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
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
extern Nmrc_ChemShiftConstraint Nmrc_FixedResonance_FindFirstChemShiftConstraint_keyval4(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_CsaConstraint Nmrc_FixedResonance_FindFirstCsaConstraint(Nmrc_FixedResonance self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_CsaConstraint Nmrc_FixedResonance_FindFirstCsaConstraint_keyval0(Nmrc_FixedResonance self);

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_CsaConstraint Nmrc_FixedResonance_FindFirstCsaConstraint_keyval1(Nmrc_FixedResonance self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_CsaConstraint Nmrc_FixedResonance_FindFirstCsaConstraint_keyval2(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_CsaConstraint Nmrc_FixedResonance_FindFirstCsaConstraint_keyval3(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
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
extern Nmrc_CsaConstraint Nmrc_FixedResonance_FindFirstCsaConstraint_keyval4(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_DihedralConstraint Nmrc_FixedResonance_FindFirstDihedralConstraint(Nmrc_FixedResonance self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_DihedralConstraint Nmrc_FixedResonance_FindFirstDihedralConstraint_keyval0(Nmrc_FixedResonance self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_DihedralConstraint Nmrc_FixedResonance_FindFirstDihedralConstraint_keyval1(Nmrc_FixedResonance self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_DihedralConstraint Nmrc_FixedResonance_FindFirstDihedralConstraint_keyval2(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_DihedralConstraint Nmrc_FixedResonance_FindFirstDihedralConstraint_keyval3(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
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
extern Nmrc_DihedralConstraint Nmrc_FixedResonance_FindFirstDihedralConstraint_keyval4(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_PairwiseConstraintItem Nmrc_FixedResonance_FindFirstPairwiseConstraintItem(Nmrc_FixedResonance self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_PairwiseConstraintItem Nmrc_FixedResonance_FindFirstPairwiseConstraintItem_keyval0(Nmrc_FixedResonance self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_PairwiseConstraintItem Nmrc_FixedResonance_FindFirstPairwiseConstraintItem_keyval1(Nmrc_FixedResonance self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_PairwiseConstraintItem Nmrc_FixedResonance_FindFirstPairwiseConstraintItem_keyval2(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_PairwiseConstraintItem Nmrc_FixedResonance_FindFirstPairwiseConstraintItem_keyval3(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
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
extern Nmrc_PairwiseConstraintItem Nmrc_FixedResonance_FindFirstPairwiseConstraintItem_keyval4(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ResCoord Nmrc_FixedResonance_FindFirstResCoord(Nmrc_FixedResonance self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ResCoord Nmrc_FixedResonance_FindFirstResCoord_keyval0(Nmrc_FixedResonance self);

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ResCoord Nmrc_FixedResonance_FindFirstResCoord_keyval1(Nmrc_FixedResonance self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ResCoord Nmrc_FixedResonance_FindFirstResCoord_keyval2(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ResCoord Nmrc_FixedResonance_FindFirstResCoord_keyval3(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
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
extern Nmrc_ResCoord Nmrc_FixedResonance_FindFirstResCoord_keyval4(Nmrc_FixedResonance self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrConstraint.FixedResonance
  @param  Nmrc_FixedResonance self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmrc_FixedResonance_Get(Nmrc_FixedResonance self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern Acco_AccessObject Nmrc_FixedResonance_GetAccess(Nmrc_FixedResonance self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern Acco_AccessObject Nmrc_FixedResonance_GetActiveAccess(Nmrc_FixedResonance self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern ApiList Nmrc_FixedResonance_GetApplicationData(Nmrc_FixedResonance self);

/**
  GetByKey for ccp.nmr.NmrConstraint.FixedResonance
  @param  Nmrc_FixedResonance self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmrc_FixedResonance Nmrc_FixedResonance_GetByKey(Nmrc_FixedResonance self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.nmr.NmrConstraint.FixedResonance.chainStateLinks

child link 
to class ChainStateLink
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern ApiSet Nmrc_FixedResonance_GetChainStateLinks(Nmrc_FixedResonance self);

/**
  Get for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern ApiSet Nmrc_FixedResonance_GetChemShiftConstraints(Nmrc_FixedResonance self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern ApiString Nmrc_FixedResonance_GetClassName(Nmrc_FixedResonance self);

/**
  Get for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern ApiSet Nmrc_FixedResonance_GetCsaConstraints(Nmrc_FixedResonance self);

/**
  Get for ccp.nmr.NmrConstraint.FixedResonance.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern ApiString Nmrc_FixedResonance_GetDetails(Nmrc_FixedResonance self);

/**
  Get for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern ApiSet Nmrc_FixedResonance_GetDihedralConstraints(Nmrc_FixedResonance self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern ApiList Nmrc_FixedResonance_GetFieldNames(Nmrc_FixedResonance self);

/**
  GetFullKey for ccp.nmr.NmrConstraint.FixedResonance
  @param  Nmrc_FixedResonance self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmrc_FixedResonance_GetFullKey(Nmrc_FixedResonance self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern ApiBoolean Nmrc_FixedResonance_GetInConstructor(Nmrc_FixedResonance self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern ApiBoolean Nmrc_FixedResonance_GetIsDeleted(Nmrc_FixedResonance self);

/**
  getter for derived link Isotope
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern Chel_Isotope Nmrc_FixedResonance_GetIsotope(Nmrc_FixedResonance self);

/**
  Get for ccp.nmr.NmrConstraint.FixedResonance.isotopeCode

Isotope code 
of corresponding isotope. E.g. 1H, 2H, 3He, 13C, ..
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern ApiString Nmrc_FixedResonance_GetIsotopeCode(Nmrc_FixedResonance self);

/**
  GetLocalKey for ccp.nmr.NmrConstraint.FixedResonance
  @param  Nmrc_FixedResonance self
  @returns  Local object key
**/
extern ApiObject Nmrc_FixedResonance_GetLocalKey(Nmrc_FixedResonance self);

/**
  Get for ccp.nmr.NmrConstraint.FixedResonance.name

Name of Resonance
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern ApiString Nmrc_FixedResonance_GetName(Nmrc_FixedResonance self);

/**
  Get for ccp.nmr.NmrConstraint.FixedResonance.nmrConstraintStore

parent 
link
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern Nmrc_NmrConstraintStore Nmrc_FixedResonance_GetNmrConstraintStore(Nmrc_FixedResonance self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern ApiString Nmrc_FixedResonance_GetPackageName(Nmrc_FixedResonance self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern ApiString Nmrc_FixedResonance_GetPackageShortName(Nmrc_FixedResonance self);

/**
  Get for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern ApiSet Nmrc_FixedResonance_GetPairwiseConstraintItems(Nmrc_FixedResonance self);

/**
  Get for ccp.nmr.NmrConstraint.FixedResonance.parent

link to parent 
object - synonym for nmrConstraintStore
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern Nmrc_NmrConstraintStore Nmrc_FixedResonance_GetParent(Nmrc_FixedResonance self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern ApiString Nmrc_FixedResonance_GetQualifiedName(Nmrc_FixedResonance self);

/**
  Get for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern ApiSet Nmrc_FixedResonance_GetResCoords(Nmrc_FixedResonance self);

/**
  getter for derived link resonance
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern Nmr_Resonance Nmrc_FixedResonance_GetResonance(Nmrc_FixedResonance self);

/**
  Get for ccp.nmr.NmrConstraint.FixedResonance.resonanceSerial

Serial of 
corresponding Nmr.Resonance
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern ApiInteger Nmrc_FixedResonance_GetResonanceSerial(Nmrc_FixedResonance self);

/**
  Get for 
ccp.nmr.NmrConstraint.FixedResonance.resonanceSet

FixedResonanceSet 
(part of assignment for Constraint Lists) involving Resonance.
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern Nmrc_FixedResonanceSet Nmrc_FixedResonance_GetResonanceSet(Nmrc_FixedResonance self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern Impl_MemopsRoot Nmrc_FixedResonance_GetRoot(Nmrc_FixedResonance self);

/**
  Get for ccp.nmr.NmrConstraint.FixedResonance.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern ApiInteger Nmrc_FixedResonance_GetSerial(Nmrc_FixedResonance self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern Impl_TopObject Nmrc_FixedResonance_GetTopObject(Nmrc_FixedResonance self);

/**
  Constructor for ccp.nmr.NmrConstraint.FixedResonance
  @param  Nmrc_NmrConstraintStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrc_FixedResonance Nmrc_FixedResonance_Init(Nmrc_NmrConstraintStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrConstraint.FixedResonance
  @param  Nmrc_NmrConstraintStore parent
  @param  char * isotopeCode
  @returns  the new object
**/
extern Nmrc_FixedResonance Nmrc_FixedResonance_Init_reqd(Nmrc_NmrConstraintStore parent, char * isotopeCode);

/**
  Factory function to create ccp.nmr.NmrConstraint.ChainStateLink
  @param  Nmrc_FixedResonance self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrc_ChainStateLink Nmrc_FixedResonance_NewChainStateLink(Nmrc_FixedResonance self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.NmrConstraint.ChainStateLink
  @param  Nmrc_FixedResonance self
  @param  ApiInteger chainStateSerial
  @param  ApiInteger chainStateSetSerial
  @returns  the new object
**/
extern Nmrc_ChainStateLink Nmrc_FixedResonance_NewChainStateLink_reqd(Nmrc_FixedResonance self, ApiInteger chainStateSerial, ApiInteger chainStateSetSerial);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonance self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_FixedResonance_RemoveApplicationData(Nmrc_FixedResonance self, Impl_ApplicationData value);

/**
  SetAttr for ccp.nmr.NmrConstraint.FixedResonance
  @param  Nmrc_FixedResonance self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmrc_FixedResonance_Set(Nmrc_FixedResonance self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_FixedResonance self
  @param  Acco_AccessObject value
**/
extern void *Nmrc_FixedResonance_SetAccess(Nmrc_FixedResonance self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_FixedResonance self
  @param  ApiList values
**/
extern void *Nmrc_FixedResonance_SetApplicationData(Nmrc_FixedResonance self, ApiList values);

/**
  Set for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
  @param  ApiSet values
**/
extern void *Nmrc_FixedResonance_SetChemShiftConstraints(Nmrc_FixedResonance self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
  @param  ApiSet values
**/
extern void *Nmrc_FixedResonance_SetCsaConstraints(Nmrc_FixedResonance self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.FixedResonance.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmrc_FixedResonance self
  @param  ApiString value
**/
extern void *Nmrc_FixedResonance_SetDetails(Nmrc_FixedResonance self, ApiString value);

/**
  Set for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
  @param  ApiSet values
**/
extern void *Nmrc_FixedResonance_SetDihedralConstraints(Nmrc_FixedResonance self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.FixedResonance.isotopeCode

Isotope code 
of corresponding isotope. E.g. 1H, 2H, 3He, 13C, ..
  @param  Nmrc_FixedResonance self
  @param  ApiString value
**/
extern void *Nmrc_FixedResonance_SetIsotopeCode(Nmrc_FixedResonance self, ApiString value);

/**
  Set for ccp.nmr.NmrConstraint.FixedResonance.name

Name of Resonance
  @param  Nmrc_FixedResonance self
  @param  ApiString value
**/
extern void *Nmrc_FixedResonance_SetName(Nmrc_FixedResonance self, ApiString value);

/**
  Set for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
  @param  ApiSet values
**/
extern void *Nmrc_FixedResonance_SetPairwiseConstraintItems(Nmrc_FixedResonance self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
  @param  ApiSet values
**/
extern void *Nmrc_FixedResonance_SetResCoords(Nmrc_FixedResonance self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.FixedResonance.resonanceSerial

Serial of 
corresponding Nmr.Resonance
  @param  Nmrc_FixedResonance self
  @param  ApiInteger value
**/
extern void *Nmrc_FixedResonance_SetResonanceSerial(Nmrc_FixedResonance self, ApiInteger value);

/**
  Set for 
ccp.nmr.NmrConstraint.FixedResonance.resonanceSet

FixedResonanceSet 
(part of assignment for Constraint Lists) involving Resonance.
  @param  Nmrc_FixedResonance self
  @param  Nmrc_FixedResonanceSet value
**/
extern void *Nmrc_FixedResonance_SetResonanceSet(Nmrc_FixedResonance self, Nmrc_FixedResonanceSet value);

/**
  Set for ccp.nmr.NmrConstraint.FixedResonance.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrc_FixedResonance self
  @param  ApiInteger value
**/
extern void *Nmrc_FixedResonance_SetSerial(Nmrc_FixedResonance self, ApiInteger value);

/**
  Sorted for ccp.nmr.NmrConstraint.FixedResonance.chainStateLinks

child 
link to class ChainStateLink
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern ApiList Nmrc_FixedResonance_SortedChainStateLinks(Nmrc_FixedResonance self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.FixedResonance.chemShiftConstraints

Chemical 
shift constraints involving FIxedResonance
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern ApiList Nmrc_FixedResonance_SortedChemShiftConstraints(Nmrc_FixedResonance self);

/**
  Sorted for ccp.nmr.NmrConstraint.FixedResonance.csaConstraints
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern ApiList Nmrc_FixedResonance_SortedCsaConstraints(Nmrc_FixedResonance self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.FixedResonance.dihedralConstraints

Dihedral angle 
constraints involving FixedResonance.
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern ApiList Nmrc_FixedResonance_SortedDihedralConstraints(Nmrc_FixedResonance self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.FixedResonance.pairwiseConstraintItems

PairWiseConstraintItems 
that involve FixedResonance
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern ApiList Nmrc_FixedResonance_SortedPairwiseConstraintItems(Nmrc_FixedResonance self);

/**
  Sorted for ccp.nmr.NmrConstraint.FixedResonance.resCoords

Coordinate 
records (ResCoords) from resonance-only structures relevant for 
FixedResonance
  @param  Nmrc_FixedResonance self
  @returns   the result
**/
extern ApiList Nmrc_FixedResonance_SortedResCoords(Nmrc_FixedResonance self);

#endif /* __incl__ccp_api_nmr_NmrConstraint_FixedResonance_h__ */
