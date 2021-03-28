
#ifndef __incl__ccp_api_nmr_NmrConstraint_DihedralConstraint_h__
#define __incl__ccp_api_nmr_NmrConstraint_DihedralConstraint_h__

#include "ccp.h"

/*
  Dihedral angle constraint. Not ambiguous, must be assigned to a specific quartet of Resonances. The different Dihedral Constraint Items represent alternative possibilities for dihedral angle values, rather than alternative assignemnts.
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraint self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_DihedralConstraint_AddApplicationData(Nmrc_DihedralConstraint self, Impl_ApplicationData value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_DihedralConstraint self
  @param  Nmrc_ConstraintGroup value
**/
extern void *Nmrc_DihedralConstraint_AddConstraintGroup(Nmrc_DihedralConstraint self, Nmrc_ConstraintGroup value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_DihedralConstraint self
  @param  Vald_NmrConstraintValidation value
**/
extern void *Nmrc_DihedralConstraint_AddNmrConstraintValidation(Nmrc_DihedralConstraint self, Vald_NmrConstraintValidation value);

/**
  Add for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used in 
derivation of AbstractConstraint.
  @param  Nmrc_DihedralConstraint self
  @param  Nmr_Peak value
**/
extern void *Nmrc_DihedralConstraint_AddPeak(Nmrc_DihedralConstraint self, Nmr_Peak value);

/**
  CheckAllValid for ccp.nmr.NmrConstraint.DihedralConstraint
  @param  Nmrc_DihedralConstraint self
  @param  ApiBoolean complete
**/
extern void *Nmrc_DihedralConstraint_CheckAllValid(Nmrc_DihedralConstraint self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrConstraint.DihedralConstraint
  @param  Nmrc_DihedralConstraint self
  @param  ApiBoolean complete
**/
extern void *Nmrc_DihedralConstraint_CheckValid(Nmrc_DihedralConstraint self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_DihedralConstraint_FindAllApplicationData(Nmrc_DihedralConstraint self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraint self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_DihedralConstraint_FindAllApplicationData_keyval0(Nmrc_DihedralConstraint self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_DihedralConstraint_FindAllApplicationData_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_DihedralConstraint_FindAllApplicationData_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_DihedralConstraint_FindAllApplicationData_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraint self
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
extern ApiList Nmrc_DihedralConstraint_FindAllApplicationData_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllConstraintGroups(Nmrc_DihedralConstraint self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_DihedralConstraint self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllConstraintGroups_keyval0(Nmrc_DihedralConstraint self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllConstraintGroups_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllConstraintGroups_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllConstraintGroups_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_DihedralConstraint self
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
extern ApiSet Nmrc_DihedralConstraint_FindAllConstraintGroups_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrConstraint.DihedralConstraint.items

child link 
to class DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllItems(Nmrc_DihedralConstraint self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrConstraint.DihedralConstraint.items

child link 
to class DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllItems_keyval0(Nmrc_DihedralConstraint self);

/**
  FindAll for ccp.nmr.NmrConstraint.DihedralConstraint.items

child link 
to class DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllItems_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrConstraint.DihedralConstraint.items

child link 
to class DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllItems_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrConstraint.DihedralConstraint.items

child link 
to class DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllItems_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrConstraint.DihedralConstraint.items

child link 
to class DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
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
extern ApiSet Nmrc_DihedralConstraint_FindAllItems_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllNmrConstraintValidations(Nmrc_DihedralConstraint self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_DihedralConstraint self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllNmrConstraintValidations_keyval0(Nmrc_DihedralConstraint self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllNmrConstraintValidations_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllNmrConstraintValidations_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllNmrConstraintValidations_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_DihedralConstraint self
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
extern ApiSet Nmrc_DihedralConstraint_FindAllNmrConstraintValidations_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllPeakContribs(Nmrc_DihedralConstraint self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_DihedralConstraint self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllPeakContribs_keyval0(Nmrc_DihedralConstraint self);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllPeakContribs_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllPeakContribs_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllPeakContribs_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_DihedralConstraint self
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
extern ApiSet Nmrc_DihedralConstraint_FindAllPeakContribs_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllPeaks(Nmrc_DihedralConstraint self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_DihedralConstraint self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllPeaks_keyval0(Nmrc_DihedralConstraint self);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllPeaks_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllPeaks_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllPeaks_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_DihedralConstraint self
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
extern ApiSet Nmrc_DihedralConstraint_FindAllPeaks_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.DihedralConstraint.resonances

Resonances (in 
order from one end to the other) defining the dihedral angle being 
constrained
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_DihedralConstraint_FindAllResonances(Nmrc_DihedralConstraint self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.DihedralConstraint.resonances

Resonances (in 
order from one end to the other) defining the dihedral angle being 
constrained
  @param  Nmrc_DihedralConstraint self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_DihedralConstraint_FindAllResonances_keyval0(Nmrc_DihedralConstraint self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.DihedralConstraint.resonances

Resonances (in 
order from one end to the other) defining the dihedral angle being 
constrained
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_DihedralConstraint_FindAllResonances_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.DihedralConstraint.resonances

Resonances (in 
order from one end to the other) defining the dihedral angle being 
constrained
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_DihedralConstraint_FindAllResonances_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.DihedralConstraint.resonances

Resonances (in 
order from one end to the other) defining the dihedral angle being 
constrained
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_DihedralConstraint_FindAllResonances_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.DihedralConstraint.resonances

Resonances (in 
order from one end to the other) defining the dihedral angle being 
constrained
  @param  Nmrc_DihedralConstraint self
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
extern ApiList Nmrc_DihedralConstraint_FindAllResonances_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllViolations(Nmrc_DihedralConstraint self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_DihedralConstraint self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllViolations_keyval0(Nmrc_DihedralConstraint self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllViolations_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllViolations_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraint_FindAllViolations_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_DihedralConstraint self
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
extern ApiSet Nmrc_DihedralConstraint_FindAllViolations_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_DihedralConstraint_FindFirstApplicationData(Nmrc_DihedralConstraint self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraint self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_DihedralConstraint_FindFirstApplicationData_keyval0(Nmrc_DihedralConstraint self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_DihedralConstraint_FindFirstApplicationData_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_DihedralConstraint_FindFirstApplicationData_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_DihedralConstraint_FindFirstApplicationData_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraint self
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
extern Impl_ApplicationData Nmrc_DihedralConstraint_FindFirstApplicationData_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintGroup Nmrc_DihedralConstraint_FindFirstConstraintGroup(Nmrc_DihedralConstraint self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_DihedralConstraint self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintGroup Nmrc_DihedralConstraint_FindFirstConstraintGroup_keyval0(Nmrc_DihedralConstraint self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintGroup Nmrc_DihedralConstraint_FindFirstConstraintGroup_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintGroup Nmrc_DihedralConstraint_FindFirstConstraintGroup_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintGroup Nmrc_DihedralConstraint_FindFirstConstraintGroup_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_DihedralConstraint self
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
extern Nmrc_ConstraintGroup Nmrc_DihedralConstraint_FindFirstConstraintGroup_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrConstraint.DihedralConstraint.items

child link 
to class DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_DihedralConstraintItem Nmrc_DihedralConstraint_FindFirstItem(Nmrc_DihedralConstraint self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrConstraint.DihedralConstraint.items

child link 
to class DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_DihedralConstraintItem Nmrc_DihedralConstraint_FindFirstItem_keyval0(Nmrc_DihedralConstraint self);

/**
  FindFirst for ccp.nmr.NmrConstraint.DihedralConstraint.items

child link 
to class DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_DihedralConstraintItem Nmrc_DihedralConstraint_FindFirstItem_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrConstraint.DihedralConstraint.items

child link 
to class DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_DihedralConstraintItem Nmrc_DihedralConstraint_FindFirstItem_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrConstraint.DihedralConstraint.items

child link 
to class DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_DihedralConstraintItem Nmrc_DihedralConstraint_FindFirstItem_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrConstraint.DihedralConstraint.items

child link 
to class DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
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
extern Nmrc_DihedralConstraintItem Nmrc_DihedralConstraint_FindFirstItem_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintValidation Nmrc_DihedralConstraint_FindFirstNmrConstraintValidation(Nmrc_DihedralConstraint self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_DihedralConstraint self
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintValidation Nmrc_DihedralConstraint_FindFirstNmrConstraintValidation_keyval0(Nmrc_DihedralConstraint self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintValidation Nmrc_DihedralConstraint_FindFirstNmrConstraintValidation_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintValidation Nmrc_DihedralConstraint_FindFirstNmrConstraintValidation_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintValidation Nmrc_DihedralConstraint_FindFirstNmrConstraintValidation_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_DihedralConstraint self
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
extern Vald_NmrConstraintValidation Nmrc_DihedralConstraint_FindFirstNmrConstraintValidation_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmrc_DihedralConstraint_FindFirstPeak(Nmrc_DihedralConstraint self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintPeakContrib Nmrc_DihedralConstraint_FindFirstPeakContrib(Nmrc_DihedralConstraint self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_DihedralConstraint self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintPeakContrib Nmrc_DihedralConstraint_FindFirstPeakContrib_keyval0(Nmrc_DihedralConstraint self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintPeakContrib Nmrc_DihedralConstraint_FindFirstPeakContrib_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintPeakContrib Nmrc_DihedralConstraint_FindFirstPeakContrib_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintPeakContrib Nmrc_DihedralConstraint_FindFirstPeakContrib_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_DihedralConstraint self
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
extern Nmrc_ConstraintPeakContrib Nmrc_DihedralConstraint_FindFirstPeakContrib_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_DihedralConstraint self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmrc_DihedralConstraint_FindFirstPeak_keyval0(Nmrc_DihedralConstraint self);

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmrc_DihedralConstraint_FindFirstPeak_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmrc_DihedralConstraint_FindFirstPeak_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmrc_DihedralConstraint_FindFirstPeak_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_DihedralConstraint self
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
extern Nmr_Peak Nmrc_DihedralConstraint_FindFirstPeak_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.DihedralConstraint.resonances

Resonances (in 
order from one end to the other) defining the dihedral angle being 
constrained
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_DihedralConstraint_FindFirstResonance(Nmrc_DihedralConstraint self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.DihedralConstraint.resonances

Resonances (in 
order from one end to the other) defining the dihedral angle being 
constrained
  @param  Nmrc_DihedralConstraint self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_DihedralConstraint_FindFirstResonance_keyval0(Nmrc_DihedralConstraint self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.DihedralConstraint.resonances

Resonances (in 
order from one end to the other) defining the dihedral angle being 
constrained
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_DihedralConstraint_FindFirstResonance_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.DihedralConstraint.resonances

Resonances (in 
order from one end to the other) defining the dihedral angle being 
constrained
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_DihedralConstraint_FindFirstResonance_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.DihedralConstraint.resonances

Resonances (in 
order from one end to the other) defining the dihedral angle being 
constrained
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_FixedResonance Nmrc_DihedralConstraint_FindFirstResonance_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.DihedralConstraint.resonances

Resonances (in 
order from one end to the other) defining the dihedral angle being 
constrained
  @param  Nmrc_DihedralConstraint self
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
extern Nmrc_FixedResonance Nmrc_DihedralConstraint_FindFirstResonance_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_Violation Nmrc_DihedralConstraint_FindFirstViolation(Nmrc_DihedralConstraint self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_DihedralConstraint self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_Violation Nmrc_DihedralConstraint_FindFirstViolation_keyval0(Nmrc_DihedralConstraint self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_DihedralConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_Violation Nmrc_DihedralConstraint_FindFirstViolation_keyval1(Nmrc_DihedralConstraint self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_Violation Nmrc_DihedralConstraint_FindFirstViolation_keyval2(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_DihedralConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_Violation Nmrc_DihedralConstraint_FindFirstViolation_keyval3(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_DihedralConstraint self
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
extern Nmrc_Violation Nmrc_DihedralConstraint_FindFirstViolation_keyval4(Nmrc_DihedralConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrConstraint.DihedralConstraint
  @param  Nmrc_DihedralConstraint self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmrc_DihedralConstraint_Get(Nmrc_DihedralConstraint self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern Acco_AccessObject Nmrc_DihedralConstraint_GetAccess(Nmrc_DihedralConstraint self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern ApiList Nmrc_DihedralConstraint_GetApplicationData(Nmrc_DihedralConstraint self);

/**
  GetByKey for ccp.nmr.NmrConstraint.DihedralConstraint
  @param  Nmrc_DihedralConstraint self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmrc_DihedralConstraint Nmrc_DihedralConstraint_GetByKey(Nmrc_DihedralConstraint self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern ApiString Nmrc_DihedralConstraint_GetClassName(Nmrc_DihedralConstraint self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern ApiSet Nmrc_DihedralConstraint_GetConstraintGroups(Nmrc_DihedralConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern ApiString Nmrc_DihedralConstraint_GetDetails(Nmrc_DihedralConstraint self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern ApiList Nmrc_DihedralConstraint_GetFieldNames(Nmrc_DihedralConstraint self);

/**
  GetFullKey for ccp.nmr.NmrConstraint.DihedralConstraint
  @param  Nmrc_DihedralConstraint self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmrc_DihedralConstraint_GetFullKey(Nmrc_DihedralConstraint self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern ApiBoolean Nmrc_DihedralConstraint_GetInConstructor(Nmrc_DihedralConstraint self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern ApiBoolean Nmrc_DihedralConstraint_GetIsDeleted(Nmrc_DihedralConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.DihedralConstraint.items

child link to 
class DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern ApiSet Nmrc_DihedralConstraint_GetItems(Nmrc_DihedralConstraint self);

/**
  GetLocalKey for ccp.nmr.NmrConstraint.DihedralConstraint
  @param  Nmrc_DihedralConstraint self
  @returns  Local object key
**/
extern ApiObject Nmrc_DihedralConstraint_GetLocalKey(Nmrc_DihedralConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.method

Method used to 
calculate Constraint. Overrides any Method attached to parent 
ConstraintList.
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern Meth_Method Nmrc_DihedralConstraint_GetMethod(Nmrc_DihedralConstraint self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern ApiSet Nmrc_DihedralConstraint_GetNmrConstraintValidations(Nmrc_DihedralConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.origData

Value of 
original measurement that gave rise to Constraint. E.g. Crosspeak 
Intensity or Volume (for a distance constraint), Coupling Constant (In 
Hz) for a dihedral constraint, etc. Provided to cater for structure 
generation programs that keep this kind of information in their 
constraint lists.
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern ApiFloat Nmrc_DihedralConstraint_GetOrigData(Nmrc_DihedralConstraint self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern ApiString Nmrc_DihedralConstraint_GetPackageName(Nmrc_DihedralConstraint self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern ApiString Nmrc_DihedralConstraint_GetPackageShortName(Nmrc_DihedralConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.DihedralConstraint.parent

link to parent 
object - synonym for parentList
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern Nmrc_DihedralConstraintList Nmrc_DihedralConstraint_GetParent(Nmrc_DihedralConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.DihedralConstraint.parentList

parent link
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern Nmrc_DihedralConstraintList Nmrc_DihedralConstraint_GetParentList(Nmrc_DihedralConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern ApiSet Nmrc_DihedralConstraint_GetPeakContribs(Nmrc_DihedralConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used in 
derivation of AbstractConstraint.
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern ApiSet Nmrc_DihedralConstraint_GetPeaks(Nmrc_DihedralConstraint self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern ApiString Nmrc_DihedralConstraint_GetQualifiedName(Nmrc_DihedralConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.DihedralConstraint.resonances

Resonances 
(in order from one end to the other) defining the dihedral angle being 
constrained
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern ApiList Nmrc_DihedralConstraint_GetResonances(Nmrc_DihedralConstraint self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern Impl_MemopsRoot Nmrc_DihedralConstraint_GetRoot(Nmrc_DihedralConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern ApiInteger Nmrc_DihedralConstraint_GetSerial(Nmrc_DihedralConstraint self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern Impl_TopObject Nmrc_DihedralConstraint_GetTopObject(Nmrc_DihedralConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation 
of Constraint in a given structure or set of structures.
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern ApiSet Nmrc_DihedralConstraint_GetViolations(Nmrc_DihedralConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.weight

Relative weight 
of constraint in constraint list
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern ApiFloat Nmrc_DihedralConstraint_GetWeight(Nmrc_DihedralConstraint self);

/**
  Constructor for ccp.nmr.NmrConstraint.DihedralConstraint
  @param  Nmrc_DihedralConstraintList parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrc_DihedralConstraint Nmrc_DihedralConstraint_Init(Nmrc_DihedralConstraintList parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrConstraint.DihedralConstraint
  @param  Nmrc_DihedralConstraintList parent
  @param  ApiList resonances
  @returns  the new object
**/
extern Nmrc_DihedralConstraint Nmrc_DihedralConstraint_Init_reqd(Nmrc_DihedralConstraintList parent, ApiList resonances);

/**
  Factory function to create ccp.nmr.NmrConstraint.DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrc_DihedralConstraintItem Nmrc_DihedralConstraint_NewDihedralConstraintItem(Nmrc_DihedralConstraint self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.NmrConstraint.DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
  @param  float lowerLimit
  @param  float upperLimit
  @returns  the new object
**/
extern Nmrc_DihedralConstraintItem Nmrc_DihedralConstraint_NewDihedralConstraintItem_reqd(Nmrc_DihedralConstraint self, float lowerLimit, float upperLimit);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraint self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_DihedralConstraint_RemoveApplicationData(Nmrc_DihedralConstraint self, Impl_ApplicationData value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_DihedralConstraint self
  @param  Nmrc_ConstraintGroup value
**/
extern void *Nmrc_DihedralConstraint_RemoveConstraintGroup(Nmrc_DihedralConstraint self, Nmrc_ConstraintGroup value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_DihedralConstraint self
  @param  Vald_NmrConstraintValidation value
**/
extern void *Nmrc_DihedralConstraint_RemoveNmrConstraintValidation(Nmrc_DihedralConstraint self, Vald_NmrConstraintValidation value);

/**
  Remove for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used in 
derivation of AbstractConstraint.
  @param  Nmrc_DihedralConstraint self
  @param  Nmr_Peak value
**/
extern void *Nmrc_DihedralConstraint_RemovePeak(Nmrc_DihedralConstraint self, Nmr_Peak value);

/**
  SetAttr for ccp.nmr.NmrConstraint.DihedralConstraint
  @param  Nmrc_DihedralConstraint self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmrc_DihedralConstraint_Set(Nmrc_DihedralConstraint self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_DihedralConstraint self
  @param  Acco_AccessObject value
**/
extern void *Nmrc_DihedralConstraint_SetAccess(Nmrc_DihedralConstraint self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraint self
  @param  ApiList values
**/
extern void *Nmrc_DihedralConstraint_SetApplicationData(Nmrc_DihedralConstraint self, ApiList values);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_DihedralConstraint self
  @param  ApiSet values
**/
extern void *Nmrc_DihedralConstraint_SetConstraintGroups(Nmrc_DihedralConstraint self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmrc_DihedralConstraint self
  @param  ApiString value
**/
extern void *Nmrc_DihedralConstraint_SetDetails(Nmrc_DihedralConstraint self, ApiString value);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.method

Method used to 
calculate Constraint. Overrides any Method attached to parent 
ConstraintList.
  @param  Nmrc_DihedralConstraint self
  @param  Meth_Method value
**/
extern void *Nmrc_DihedralConstraint_SetMethod(Nmrc_DihedralConstraint self, Meth_Method value);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_DihedralConstraint self
  @param  ApiSet values
**/
extern void *Nmrc_DihedralConstraint_SetNmrConstraintValidations(Nmrc_DihedralConstraint self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.origData

Value of 
original measurement that gave rise to Constraint. E.g. Crosspeak 
Intensity or Volume (for a distance constraint), Coupling Constant (In 
Hz) for a dihedral constraint, etc. Provided to cater for structure 
generation programs that keep this kind of information in their 
constraint lists.
  @param  Nmrc_DihedralConstraint self
  @param  ApiFloat value
**/
extern void *Nmrc_DihedralConstraint_SetOrigData(Nmrc_DihedralConstraint self, ApiFloat value);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used in 
derivation of AbstractConstraint.
  @param  Nmrc_DihedralConstraint self
  @param  ApiSet values
**/
extern void *Nmrc_DihedralConstraint_SetPeaks(Nmrc_DihedralConstraint self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.DihedralConstraint.resonances

Resonances 
(in order from one end to the other) defining the dihedral angle being 
constrained
  @param  Nmrc_DihedralConstraint self
  @param  ApiList values
**/
extern void *Nmrc_DihedralConstraint_SetResonances(Nmrc_DihedralConstraint self, ApiList values);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrc_DihedralConstraint self
  @param  ApiInteger value
**/
extern void *Nmrc_DihedralConstraint_SetSerial(Nmrc_DihedralConstraint self, ApiInteger value);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation 
of Constraint in a given structure or set of structures.
  @param  Nmrc_DihedralConstraint self
  @param  ApiSet values
**/
extern void *Nmrc_DihedralConstraint_SetViolations(Nmrc_DihedralConstraint self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.weight

Relative weight 
of constraint in constraint list
  @param  Nmrc_DihedralConstraint self
  @param  ApiFloat value
**/
extern void *Nmrc_DihedralConstraint_SetWeight(Nmrc_DihedralConstraint self, ApiFloat value);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern ApiList Nmrc_DihedralConstraint_SortedConstraintGroups(Nmrc_DihedralConstraint self);

/**
  Sorted for ccp.nmr.NmrConstraint.DihedralConstraint.items

child link to 
class DihedralConstraintItem
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern ApiList Nmrc_DihedralConstraint_SortedItems(Nmrc_DihedralConstraint self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern ApiList Nmrc_DihedralConstraint_SortedNmrConstraintValidations(Nmrc_DihedralConstraint self);

/**
  Sorted for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern ApiList Nmrc_DihedralConstraint_SortedPeakContribs(Nmrc_DihedralConstraint self);

/**
  Sorted for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used in 
derivation of AbstractConstraint.
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern ApiList Nmrc_DihedralConstraint_SortedPeaks(Nmrc_DihedralConstraint self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_DihedralConstraint self
  @returns   the result
**/
extern ApiList Nmrc_DihedralConstraint_SortedViolations(Nmrc_DihedralConstraint self);

#endif /* __incl__ccp_api_nmr_NmrConstraint_DihedralConstraint_h__ */
