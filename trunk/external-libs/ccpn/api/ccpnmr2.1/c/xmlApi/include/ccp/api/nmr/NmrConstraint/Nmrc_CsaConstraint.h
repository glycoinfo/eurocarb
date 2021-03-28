
#ifndef __incl__ccp_api_nmr_NmrConstraint_CsaConstraint_h__
#define __incl__ccp_api_nmr_NmrConstraint_CsaConstraint_h__

#include "ccp.h"

/*
  Chemical shift anisotropy constraint (anisotropy value that must be reproduced by the structure).
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_CsaConstraint self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_CsaConstraint_AddApplicationData(Nmrc_CsaConstraint self, Impl_ApplicationData value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_CsaConstraint self
  @param  Nmrc_ConstraintGroup value
**/
extern void *Nmrc_CsaConstraint_AddConstraintGroup(Nmrc_CsaConstraint self, Nmrc_ConstraintGroup value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_CsaConstraint self
  @param  Vald_NmrConstraintValidation value
**/
extern void *Nmrc_CsaConstraint_AddNmrConstraintValidation(Nmrc_CsaConstraint self, Vald_NmrConstraintValidation value);

/**
  Add for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used in 
derivation of AbstractConstraint.
  @param  Nmrc_CsaConstraint self
  @param  Nmr_Peak value
**/
extern void *Nmrc_CsaConstraint_AddPeak(Nmrc_CsaConstraint self, Nmr_Peak value);

/**
  CheckAllValid for ccp.nmr.NmrConstraint.CsaConstraint
  @param  Nmrc_CsaConstraint self
  @param  ApiBoolean complete
**/
extern void *Nmrc_CsaConstraint_CheckAllValid(Nmrc_CsaConstraint self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrConstraint.CsaConstraint
  @param  Nmrc_CsaConstraint self
  @param  ApiBoolean complete
**/
extern void *Nmrc_CsaConstraint_CheckValid(Nmrc_CsaConstraint self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_CsaConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_CsaConstraint_FindAllApplicationData(Nmrc_CsaConstraint self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_CsaConstraint self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_CsaConstraint_FindAllApplicationData_keyval0(Nmrc_CsaConstraint self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_CsaConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_CsaConstraint_FindAllApplicationData_keyval1(Nmrc_CsaConstraint self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_CsaConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_CsaConstraint_FindAllApplicationData_keyval2(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_CsaConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_CsaConstraint_FindAllApplicationData_keyval3(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_CsaConstraint self
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
extern ApiList Nmrc_CsaConstraint_FindAllApplicationData_keyval4(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_CsaConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_CsaConstraint_FindAllConstraintGroups(Nmrc_CsaConstraint self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_CsaConstraint self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_CsaConstraint_FindAllConstraintGroups_keyval0(Nmrc_CsaConstraint self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_CsaConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_CsaConstraint_FindAllConstraintGroups_keyval1(Nmrc_CsaConstraint self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_CsaConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_CsaConstraint_FindAllConstraintGroups_keyval2(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_CsaConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_CsaConstraint_FindAllConstraintGroups_keyval3(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_CsaConstraint self
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
extern ApiSet Nmrc_CsaConstraint_FindAllConstraintGroups_keyval4(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_CsaConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_CsaConstraint_FindAllNmrConstraintValidations(Nmrc_CsaConstraint self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_CsaConstraint self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_CsaConstraint_FindAllNmrConstraintValidations_keyval0(Nmrc_CsaConstraint self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_CsaConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_CsaConstraint_FindAllNmrConstraintValidations_keyval1(Nmrc_CsaConstraint self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_CsaConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_CsaConstraint_FindAllNmrConstraintValidations_keyval2(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_CsaConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_CsaConstraint_FindAllNmrConstraintValidations_keyval3(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_CsaConstraint self
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
extern ApiSet Nmrc_CsaConstraint_FindAllNmrConstraintValidations_keyval4(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_CsaConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_CsaConstraint_FindAllPeakContribs(Nmrc_CsaConstraint self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_CsaConstraint self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_CsaConstraint_FindAllPeakContribs_keyval0(Nmrc_CsaConstraint self);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_CsaConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_CsaConstraint_FindAllPeakContribs_keyval1(Nmrc_CsaConstraint self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_CsaConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_CsaConstraint_FindAllPeakContribs_keyval2(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_CsaConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_CsaConstraint_FindAllPeakContribs_keyval3(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_CsaConstraint self
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
extern ApiSet Nmrc_CsaConstraint_FindAllPeakContribs_keyval4(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_CsaConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_CsaConstraint_FindAllPeaks(Nmrc_CsaConstraint self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_CsaConstraint self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_CsaConstraint_FindAllPeaks_keyval0(Nmrc_CsaConstraint self);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_CsaConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_CsaConstraint_FindAllPeaks_keyval1(Nmrc_CsaConstraint self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_CsaConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_CsaConstraint_FindAllPeaks_keyval2(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_CsaConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_CsaConstraint_FindAllPeaks_keyval3(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_CsaConstraint self
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
extern ApiSet Nmrc_CsaConstraint_FindAllPeaks_keyval4(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_CsaConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_CsaConstraint_FindAllViolations(Nmrc_CsaConstraint self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_CsaConstraint self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_CsaConstraint_FindAllViolations_keyval0(Nmrc_CsaConstraint self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_CsaConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_CsaConstraint_FindAllViolations_keyval1(Nmrc_CsaConstraint self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_CsaConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_CsaConstraint_FindAllViolations_keyval2(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_CsaConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_CsaConstraint_FindAllViolations_keyval3(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_CsaConstraint self
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
extern ApiSet Nmrc_CsaConstraint_FindAllViolations_keyval4(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_CsaConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_CsaConstraint_FindFirstApplicationData(Nmrc_CsaConstraint self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_CsaConstraint self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_CsaConstraint_FindFirstApplicationData_keyval0(Nmrc_CsaConstraint self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_CsaConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_CsaConstraint_FindFirstApplicationData_keyval1(Nmrc_CsaConstraint self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_CsaConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_CsaConstraint_FindFirstApplicationData_keyval2(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_CsaConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_CsaConstraint_FindFirstApplicationData_keyval3(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_CsaConstraint self
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
extern Impl_ApplicationData Nmrc_CsaConstraint_FindFirstApplicationData_keyval4(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_CsaConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintGroup Nmrc_CsaConstraint_FindFirstConstraintGroup(Nmrc_CsaConstraint self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_CsaConstraint self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintGroup Nmrc_CsaConstraint_FindFirstConstraintGroup_keyval0(Nmrc_CsaConstraint self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_CsaConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintGroup Nmrc_CsaConstraint_FindFirstConstraintGroup_keyval1(Nmrc_CsaConstraint self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_CsaConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintGroup Nmrc_CsaConstraint_FindFirstConstraintGroup_keyval2(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_CsaConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintGroup Nmrc_CsaConstraint_FindFirstConstraintGroup_keyval3(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_CsaConstraint self
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
extern Nmrc_ConstraintGroup Nmrc_CsaConstraint_FindFirstConstraintGroup_keyval4(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_CsaConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintValidation Nmrc_CsaConstraint_FindFirstNmrConstraintValidation(Nmrc_CsaConstraint self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_CsaConstraint self
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintValidation Nmrc_CsaConstraint_FindFirstNmrConstraintValidation_keyval0(Nmrc_CsaConstraint self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_CsaConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintValidation Nmrc_CsaConstraint_FindFirstNmrConstraintValidation_keyval1(Nmrc_CsaConstraint self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_CsaConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintValidation Nmrc_CsaConstraint_FindFirstNmrConstraintValidation_keyval2(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_CsaConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintValidation Nmrc_CsaConstraint_FindFirstNmrConstraintValidation_keyval3(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_CsaConstraint self
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
extern Vald_NmrConstraintValidation Nmrc_CsaConstraint_FindFirstNmrConstraintValidation_keyval4(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_CsaConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmrc_CsaConstraint_FindFirstPeak(Nmrc_CsaConstraint self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_CsaConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintPeakContrib Nmrc_CsaConstraint_FindFirstPeakContrib(Nmrc_CsaConstraint self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_CsaConstraint self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintPeakContrib Nmrc_CsaConstraint_FindFirstPeakContrib_keyval0(Nmrc_CsaConstraint self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_CsaConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintPeakContrib Nmrc_CsaConstraint_FindFirstPeakContrib_keyval1(Nmrc_CsaConstraint self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_CsaConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintPeakContrib Nmrc_CsaConstraint_FindFirstPeakContrib_keyval2(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_CsaConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintPeakContrib Nmrc_CsaConstraint_FindFirstPeakContrib_keyval3(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_CsaConstraint self
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
extern Nmrc_ConstraintPeakContrib Nmrc_CsaConstraint_FindFirstPeakContrib_keyval4(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_CsaConstraint self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmrc_CsaConstraint_FindFirstPeak_keyval0(Nmrc_CsaConstraint self);

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_CsaConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmrc_CsaConstraint_FindFirstPeak_keyval1(Nmrc_CsaConstraint self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_CsaConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmrc_CsaConstraint_FindFirstPeak_keyval2(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_CsaConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmrc_CsaConstraint_FindFirstPeak_keyval3(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_CsaConstraint self
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
extern Nmr_Peak Nmrc_CsaConstraint_FindFirstPeak_keyval4(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_CsaConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_Violation Nmrc_CsaConstraint_FindFirstViolation(Nmrc_CsaConstraint self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_CsaConstraint self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_Violation Nmrc_CsaConstraint_FindFirstViolation_keyval0(Nmrc_CsaConstraint self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_CsaConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_Violation Nmrc_CsaConstraint_FindFirstViolation_keyval1(Nmrc_CsaConstraint self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_CsaConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_Violation Nmrc_CsaConstraint_FindFirstViolation_keyval2(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_CsaConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_Violation Nmrc_CsaConstraint_FindFirstViolation_keyval3(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_CsaConstraint self
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
extern Nmrc_Violation Nmrc_CsaConstraint_FindFirstViolation_keyval4(Nmrc_CsaConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrConstraint.CsaConstraint
  @param  Nmrc_CsaConstraint self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmrc_CsaConstraint_Get(Nmrc_CsaConstraint self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern Acco_AccessObject Nmrc_CsaConstraint_GetAccess(Nmrc_CsaConstraint self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern Acco_AccessObject Nmrc_CsaConstraint_GetActiveAccess(Nmrc_CsaConstraint self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern ApiList Nmrc_CsaConstraint_GetApplicationData(Nmrc_CsaConstraint self);

/**
  GetByKey for ccp.nmr.NmrConstraint.CsaConstraint
  @param  Nmrc_CsaConstraint self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmrc_CsaConstraint Nmrc_CsaConstraint_GetByKey(Nmrc_CsaConstraint self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern ApiString Nmrc_CsaConstraint_GetClassName(Nmrc_CsaConstraint self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern ApiSet Nmrc_CsaConstraint_GetConstraintGroups(Nmrc_CsaConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern ApiString Nmrc_CsaConstraint_GetDetails(Nmrc_CsaConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.SingleConstraint.error

Uncertainty 
(standard deviation) of targetValue.
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern ApiFloat Nmrc_CsaConstraint_GetError(Nmrc_CsaConstraint self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern ApiList Nmrc_CsaConstraint_GetFieldNames(Nmrc_CsaConstraint self);

/**
  GetFullKey for ccp.nmr.NmrConstraint.CsaConstraint
  @param  Nmrc_CsaConstraint self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmrc_CsaConstraint_GetFullKey(Nmrc_CsaConstraint self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern ApiBoolean Nmrc_CsaConstraint_GetInConstructor(Nmrc_CsaConstraint self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern ApiBoolean Nmrc_CsaConstraint_GetIsDeleted(Nmrc_CsaConstraint self);

/**
  GetLocalKey for ccp.nmr.NmrConstraint.CsaConstraint
  @param  Nmrc_CsaConstraint self
  @returns  Local object key
**/
extern ApiObject Nmrc_CsaConstraint_GetLocalKey(Nmrc_CsaConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.SingleConstraint.lowerLimit

Minimum 
allowed value of constrained parameter. If set, energy penalty is zero 
for values above lowerLimit.
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern ApiFloat Nmrc_CsaConstraint_GetLowerLimit(Nmrc_CsaConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.method

Method used to 
calculate Constraint. Overrides any Method attached to parent 
ConstraintList.
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern Meth_Method Nmrc_CsaConstraint_GetMethod(Nmrc_CsaConstraint self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern ApiSet Nmrc_CsaConstraint_GetNmrConstraintValidations(Nmrc_CsaConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.origData

Value of 
original measurement that gave rise to Constraint. E.g. Crosspeak 
Intensity or Volume (for a distance constraint), Coupling Constant (In 
Hz) for a dihedral constraint, etc. Provided to cater for structure 
generation programs that keep this kind of information in their 
constraint lists.
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern ApiFloat Nmrc_CsaConstraint_GetOrigData(Nmrc_CsaConstraint self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern ApiString Nmrc_CsaConstraint_GetPackageName(Nmrc_CsaConstraint self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern ApiString Nmrc_CsaConstraint_GetPackageShortName(Nmrc_CsaConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.CsaConstraint.parent

link to parent 
object - synonym for parentList
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern Nmrc_CsaConstraintList Nmrc_CsaConstraint_GetParent(Nmrc_CsaConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.CsaConstraint.parentList

parent link
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern Nmrc_CsaConstraintList Nmrc_CsaConstraint_GetParentList(Nmrc_CsaConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern ApiSet Nmrc_CsaConstraint_GetPeakContribs(Nmrc_CsaConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used in 
derivation of AbstractConstraint.
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern ApiSet Nmrc_CsaConstraint_GetPeaks(Nmrc_CsaConstraint self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern ApiString Nmrc_CsaConstraint_GetQualifiedName(Nmrc_CsaConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.CsaConstraint.resonance

FixedResonance 
holding Chemical shift anisotropy constraint.
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern Nmrc_FixedResonance Nmrc_CsaConstraint_GetResonance(Nmrc_CsaConstraint self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern Impl_MemopsRoot Nmrc_CsaConstraint_GetRoot(Nmrc_CsaConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern ApiInteger Nmrc_CsaConstraint_GetSerial(Nmrc_CsaConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.SingleConstraint.targetValue

Desired 
value of constrained parameter
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern ApiFloat Nmrc_CsaConstraint_GetTargetValue(Nmrc_CsaConstraint self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern Impl_TopObject Nmrc_CsaConstraint_GetTopObject(Nmrc_CsaConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.SingleConstraint.upperLimit

Maximum 
allowed value of constrained parameter
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern ApiFloat Nmrc_CsaConstraint_GetUpperLimit(Nmrc_CsaConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation 
of Constraint in a given structure or set of structures.
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern ApiSet Nmrc_CsaConstraint_GetViolations(Nmrc_CsaConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.weight

Relative weight 
of constraint in constraint list
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern ApiFloat Nmrc_CsaConstraint_GetWeight(Nmrc_CsaConstraint self);

/**
  Constructor for ccp.nmr.NmrConstraint.CsaConstraint
  @param  Nmrc_CsaConstraintList parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrc_CsaConstraint Nmrc_CsaConstraint_Init(Nmrc_CsaConstraintList parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrConstraint.CsaConstraint
  @param  Nmrc_CsaConstraintList parent
  @param  Nmrc_FixedResonance resonance
  @returns  the new object
**/
extern Nmrc_CsaConstraint Nmrc_CsaConstraint_Init_reqd(Nmrc_CsaConstraintList parent, Nmrc_FixedResonance resonance);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_CsaConstraint self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_CsaConstraint_RemoveApplicationData(Nmrc_CsaConstraint self, Impl_ApplicationData value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_CsaConstraint self
  @param  Nmrc_ConstraintGroup value
**/
extern void *Nmrc_CsaConstraint_RemoveConstraintGroup(Nmrc_CsaConstraint self, Nmrc_ConstraintGroup value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_CsaConstraint self
  @param  Vald_NmrConstraintValidation value
**/
extern void *Nmrc_CsaConstraint_RemoveNmrConstraintValidation(Nmrc_CsaConstraint self, Vald_NmrConstraintValidation value);

/**
  Remove for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used in 
derivation of AbstractConstraint.
  @param  Nmrc_CsaConstraint self
  @param  Nmr_Peak value
**/
extern void *Nmrc_CsaConstraint_RemovePeak(Nmrc_CsaConstraint self, Nmr_Peak value);

/**
  SetAttr for ccp.nmr.NmrConstraint.CsaConstraint
  @param  Nmrc_CsaConstraint self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmrc_CsaConstraint_Set(Nmrc_CsaConstraint self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_CsaConstraint self
  @param  Acco_AccessObject value
**/
extern void *Nmrc_CsaConstraint_SetAccess(Nmrc_CsaConstraint self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_CsaConstraint self
  @param  ApiList values
**/
extern void *Nmrc_CsaConstraint_SetApplicationData(Nmrc_CsaConstraint self, ApiList values);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_CsaConstraint self
  @param  ApiSet values
**/
extern void *Nmrc_CsaConstraint_SetConstraintGroups(Nmrc_CsaConstraint self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmrc_CsaConstraint self
  @param  ApiString value
**/
extern void *Nmrc_CsaConstraint_SetDetails(Nmrc_CsaConstraint self, ApiString value);

/**
  Set for ccp.nmr.NmrConstraint.SingleConstraint.error

Uncertainty 
(standard deviation) of targetValue.
  @param  Nmrc_CsaConstraint self
  @param  ApiFloat value
**/
extern void *Nmrc_CsaConstraint_SetError(Nmrc_CsaConstraint self, ApiFloat value);

/**
  Set for ccp.nmr.NmrConstraint.SingleConstraint.lowerLimit

Minimum 
allowed value of constrained parameter. If set, energy penalty is zero 
for values above lowerLimit.
  @param  Nmrc_CsaConstraint self
  @param  ApiFloat value
**/
extern void *Nmrc_CsaConstraint_SetLowerLimit(Nmrc_CsaConstraint self, ApiFloat value);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.method

Method used to 
calculate Constraint. Overrides any Method attached to parent 
ConstraintList.
  @param  Nmrc_CsaConstraint self
  @param  Meth_Method value
**/
extern void *Nmrc_CsaConstraint_SetMethod(Nmrc_CsaConstraint self, Meth_Method value);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_CsaConstraint self
  @param  ApiSet values
**/
extern void *Nmrc_CsaConstraint_SetNmrConstraintValidations(Nmrc_CsaConstraint self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.origData

Value of 
original measurement that gave rise to Constraint. E.g. Crosspeak 
Intensity or Volume (for a distance constraint), Coupling Constant (In 
Hz) for a dihedral constraint, etc. Provided to cater for structure 
generation programs that keep this kind of information in their 
constraint lists.
  @param  Nmrc_CsaConstraint self
  @param  ApiFloat value
**/
extern void *Nmrc_CsaConstraint_SetOrigData(Nmrc_CsaConstraint self, ApiFloat value);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used in 
derivation of AbstractConstraint.
  @param  Nmrc_CsaConstraint self
  @param  ApiSet values
**/
extern void *Nmrc_CsaConstraint_SetPeaks(Nmrc_CsaConstraint self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.CsaConstraint.resonance

FixedResonance 
holding Chemical shift anisotropy constraint.
  @param  Nmrc_CsaConstraint self
  @param  Nmrc_FixedResonance value
**/
extern void *Nmrc_CsaConstraint_SetResonance(Nmrc_CsaConstraint self, Nmrc_FixedResonance value);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrc_CsaConstraint self
  @param  ApiInteger value
**/
extern void *Nmrc_CsaConstraint_SetSerial(Nmrc_CsaConstraint self, ApiInteger value);

/**
  Set for ccp.nmr.NmrConstraint.SingleConstraint.targetValue

Desired 
value of constrained parameter
  @param  Nmrc_CsaConstraint self
  @param  ApiFloat value
**/
extern void *Nmrc_CsaConstraint_SetTargetValue(Nmrc_CsaConstraint self, ApiFloat value);

/**
  Set for ccp.nmr.NmrConstraint.SingleConstraint.upperLimit

Maximum 
allowed value of constrained parameter
  @param  Nmrc_CsaConstraint self
  @param  ApiFloat value
**/
extern void *Nmrc_CsaConstraint_SetUpperLimit(Nmrc_CsaConstraint self, ApiFloat value);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation 
of Constraint in a given structure or set of structures.
  @param  Nmrc_CsaConstraint self
  @param  ApiSet values
**/
extern void *Nmrc_CsaConstraint_SetViolations(Nmrc_CsaConstraint self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.weight

Relative weight 
of constraint in constraint list
  @param  Nmrc_CsaConstraint self
  @param  ApiFloat value
**/
extern void *Nmrc_CsaConstraint_SetWeight(Nmrc_CsaConstraint self, ApiFloat value);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern ApiList Nmrc_CsaConstraint_SortedConstraintGroups(Nmrc_CsaConstraint self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern ApiList Nmrc_CsaConstraint_SortedNmrConstraintValidations(Nmrc_CsaConstraint self);

/**
  Sorted for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern ApiList Nmrc_CsaConstraint_SortedPeakContribs(Nmrc_CsaConstraint self);

/**
  Sorted for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used in 
derivation of AbstractConstraint.
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern ApiList Nmrc_CsaConstraint_SortedPeaks(Nmrc_CsaConstraint self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_CsaConstraint self
  @returns   the result
**/
extern ApiList Nmrc_CsaConstraint_SortedViolations(Nmrc_CsaConstraint self);

#endif /* __incl__ccp_api_nmr_NmrConstraint_CsaConstraint_h__ */
