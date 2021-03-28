
#ifndef __incl__ccp_api_nmr_NmrConstraint_SingleConstraint_h__
#define __incl__ccp_api_nmr_NmrConstraint_SingleConstraint_h__

#include "ccp.h"

/*
  Constraint with a single interval for the constrained value. May be used to constraint to a specific value (targetValue) to constrain to within an interval, or both.
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_SingleConstraint self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_SingleConstraint_AddApplicationData(Nmrc_SingleConstraint self, Impl_ApplicationData value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @param  Nmrc_ConstraintGroup value
**/
extern void *Nmrc_SingleConstraint_AddConstraintGroup(Nmrc_SingleConstraint self, Nmrc_ConstraintGroup value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @param  Vald_NmrConstraintValidation value
**/
extern void *Nmrc_SingleConstraint_AddNmrConstraintValidation(Nmrc_SingleConstraint self, Vald_NmrConstraintValidation value);

/**
  Add for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used in 
derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @param  Nmr_Peak value
**/
extern void *Nmrc_SingleConstraint_AddPeak(Nmrc_SingleConstraint self, Nmr_Peak value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_SingleConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_SingleConstraint_FindAllApplicationData(Nmrc_SingleConstraint self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_SingleConstraint self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_SingleConstraint_FindAllApplicationData_keyval0(Nmrc_SingleConstraint self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_SingleConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_SingleConstraint_FindAllApplicationData_keyval1(Nmrc_SingleConstraint self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_SingleConstraint_FindAllApplicationData_keyval2(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_SingleConstraint_FindAllApplicationData_keyval3(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_SingleConstraint self
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
extern ApiList Nmrc_SingleConstraint_FindAllApplicationData_keyval4(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_SingleConstraint_FindAllConstraintGroups(Nmrc_SingleConstraint self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_SingleConstraint_FindAllConstraintGroups_keyval0(Nmrc_SingleConstraint self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_SingleConstraint_FindAllConstraintGroups_keyval1(Nmrc_SingleConstraint self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_SingleConstraint_FindAllConstraintGroups_keyval2(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_SingleConstraint_FindAllConstraintGroups_keyval3(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
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
extern ApiSet Nmrc_SingleConstraint_FindAllConstraintGroups_keyval4(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_SingleConstraint_FindAllNmrConstraintValidations(Nmrc_SingleConstraint self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_SingleConstraint_FindAllNmrConstraintValidations_keyval0(Nmrc_SingleConstraint self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_SingleConstraint_FindAllNmrConstraintValidations_keyval1(Nmrc_SingleConstraint self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_SingleConstraint_FindAllNmrConstraintValidations_keyval2(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_SingleConstraint_FindAllNmrConstraintValidations_keyval3(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
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
extern ApiSet Nmrc_SingleConstraint_FindAllNmrConstraintValidations_keyval4(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_SingleConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_SingleConstraint_FindAllPeakContribs(Nmrc_SingleConstraint self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_SingleConstraint self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_SingleConstraint_FindAllPeakContribs_keyval0(Nmrc_SingleConstraint self);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_SingleConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_SingleConstraint_FindAllPeakContribs_keyval1(Nmrc_SingleConstraint self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_SingleConstraint_FindAllPeakContribs_keyval2(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_SingleConstraint_FindAllPeakContribs_keyval3(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_SingleConstraint self
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
extern ApiSet Nmrc_SingleConstraint_FindAllPeakContribs_keyval4(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_SingleConstraint_FindAllPeaks(Nmrc_SingleConstraint self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_SingleConstraint_FindAllPeaks_keyval0(Nmrc_SingleConstraint self);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_SingleConstraint_FindAllPeaks_keyval1(Nmrc_SingleConstraint self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_SingleConstraint_FindAllPeaks_keyval2(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_SingleConstraint_FindAllPeaks_keyval3(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
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
extern ApiSet Nmrc_SingleConstraint_FindAllPeaks_keyval4(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_SingleConstraint_FindAllViolations(Nmrc_SingleConstraint self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_SingleConstraint_FindAllViolations_keyval0(Nmrc_SingleConstraint self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_SingleConstraint_FindAllViolations_keyval1(Nmrc_SingleConstraint self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_SingleConstraint_FindAllViolations_keyval2(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_SingleConstraint_FindAllViolations_keyval3(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
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
extern ApiSet Nmrc_SingleConstraint_FindAllViolations_keyval4(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_SingleConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_SingleConstraint_FindFirstApplicationData(Nmrc_SingleConstraint self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_SingleConstraint self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_SingleConstraint_FindFirstApplicationData_keyval0(Nmrc_SingleConstraint self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_SingleConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_SingleConstraint_FindFirstApplicationData_keyval1(Nmrc_SingleConstraint self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_SingleConstraint_FindFirstApplicationData_keyval2(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_SingleConstraint_FindFirstApplicationData_keyval3(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_SingleConstraint self
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
extern Impl_ApplicationData Nmrc_SingleConstraint_FindFirstApplicationData_keyval4(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintGroup Nmrc_SingleConstraint_FindFirstConstraintGroup(Nmrc_SingleConstraint self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintGroup Nmrc_SingleConstraint_FindFirstConstraintGroup_keyval0(Nmrc_SingleConstraint self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintGroup Nmrc_SingleConstraint_FindFirstConstraintGroup_keyval1(Nmrc_SingleConstraint self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintGroup Nmrc_SingleConstraint_FindFirstConstraintGroup_keyval2(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintGroup Nmrc_SingleConstraint_FindFirstConstraintGroup_keyval3(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
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
extern Nmrc_ConstraintGroup Nmrc_SingleConstraint_FindFirstConstraintGroup_keyval4(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintValidation Nmrc_SingleConstraint_FindFirstNmrConstraintValidation(Nmrc_SingleConstraint self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintValidation Nmrc_SingleConstraint_FindFirstNmrConstraintValidation_keyval0(Nmrc_SingleConstraint self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintValidation Nmrc_SingleConstraint_FindFirstNmrConstraintValidation_keyval1(Nmrc_SingleConstraint self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintValidation Nmrc_SingleConstraint_FindFirstNmrConstraintValidation_keyval2(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintValidation Nmrc_SingleConstraint_FindFirstNmrConstraintValidation_keyval3(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
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
extern Vald_NmrConstraintValidation Nmrc_SingleConstraint_FindFirstNmrConstraintValidation_keyval4(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmrc_SingleConstraint_FindFirstPeak(Nmrc_SingleConstraint self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_SingleConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintPeakContrib Nmrc_SingleConstraint_FindFirstPeakContrib(Nmrc_SingleConstraint self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_SingleConstraint self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintPeakContrib Nmrc_SingleConstraint_FindFirstPeakContrib_keyval0(Nmrc_SingleConstraint self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_SingleConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintPeakContrib Nmrc_SingleConstraint_FindFirstPeakContrib_keyval1(Nmrc_SingleConstraint self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintPeakContrib Nmrc_SingleConstraint_FindFirstPeakContrib_keyval2(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintPeakContrib Nmrc_SingleConstraint_FindFirstPeakContrib_keyval3(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_SingleConstraint self
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
extern Nmrc_ConstraintPeakContrib Nmrc_SingleConstraint_FindFirstPeakContrib_keyval4(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmrc_SingleConstraint_FindFirstPeak_keyval0(Nmrc_SingleConstraint self);

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmrc_SingleConstraint_FindFirstPeak_keyval1(Nmrc_SingleConstraint self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmrc_SingleConstraint_FindFirstPeak_keyval2(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmrc_SingleConstraint_FindFirstPeak_keyval3(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
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
extern Nmr_Peak Nmrc_SingleConstraint_FindFirstPeak_keyval4(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_Violation Nmrc_SingleConstraint_FindFirstViolation(Nmrc_SingleConstraint self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_Violation Nmrc_SingleConstraint_FindFirstViolation_keyval0(Nmrc_SingleConstraint self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_Violation Nmrc_SingleConstraint_FindFirstViolation_keyval1(Nmrc_SingleConstraint self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_Violation Nmrc_SingleConstraint_FindFirstViolation_keyval2(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_Violation Nmrc_SingleConstraint_FindFirstViolation_keyval3(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
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
extern Nmrc_Violation Nmrc_SingleConstraint_FindFirstViolation_keyval4(Nmrc_SingleConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern Acco_AccessObject Nmrc_SingleConstraint_GetAccess(Nmrc_SingleConstraint self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern Acco_AccessObject Nmrc_SingleConstraint_GetActiveAccess(Nmrc_SingleConstraint self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern ApiList Nmrc_SingleConstraint_GetApplicationData(Nmrc_SingleConstraint self);

/**
  GetByKey for ccp.nmr.NmrConstraint.SingleConstraint
  @param  Nmrc_SingleConstraint self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmrc_SingleConstraint Nmrc_SingleConstraint_GetByKey(Nmrc_SingleConstraint self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern ApiString Nmrc_SingleConstraint_GetClassName(Nmrc_SingleConstraint self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern ApiSet Nmrc_SingleConstraint_GetConstraintGroups(Nmrc_SingleConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern ApiString Nmrc_SingleConstraint_GetDetails(Nmrc_SingleConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.SingleConstraint.error

Uncertainty 
(standard deviation) of targetValue.
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern ApiFloat Nmrc_SingleConstraint_GetError(Nmrc_SingleConstraint self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern ApiList Nmrc_SingleConstraint_GetFieldNames(Nmrc_SingleConstraint self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern ApiBoolean Nmrc_SingleConstraint_GetInConstructor(Nmrc_SingleConstraint self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern ApiBoolean Nmrc_SingleConstraint_GetIsDeleted(Nmrc_SingleConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.SingleConstraint.lowerLimit

Minimum 
allowed value of constrained parameter. If set, energy penalty is zero 
for values above lowerLimit.
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern ApiFloat Nmrc_SingleConstraint_GetLowerLimit(Nmrc_SingleConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.method

Method used to 
calculate Constraint. Overrides any Method attached to parent 
ConstraintList.
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern Meth_Method Nmrc_SingleConstraint_GetMethod(Nmrc_SingleConstraint self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern ApiSet Nmrc_SingleConstraint_GetNmrConstraintValidations(Nmrc_SingleConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.origData

Value of 
original measurement that gave rise to Constraint. E.g. Crosspeak 
Intensity or Volume (for a distance constraint), Coupling Constant (In 
Hz) for a dihedral constraint, etc. Provided to cater for structure 
generation programs that keep this kind of information in their 
constraint lists.
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern ApiFloat Nmrc_SingleConstraint_GetOrigData(Nmrc_SingleConstraint self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern ApiString Nmrc_SingleConstraint_GetPackageName(Nmrc_SingleConstraint self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern ApiString Nmrc_SingleConstraint_GetPackageShortName(Nmrc_SingleConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.parentList

parent link
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern Nmrc_AbstractConstraintList Nmrc_SingleConstraint_GetParentList(Nmrc_SingleConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern ApiSet Nmrc_SingleConstraint_GetPeakContribs(Nmrc_SingleConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used in 
derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern ApiSet Nmrc_SingleConstraint_GetPeaks(Nmrc_SingleConstraint self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern ApiString Nmrc_SingleConstraint_GetQualifiedName(Nmrc_SingleConstraint self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern Impl_MemopsRoot Nmrc_SingleConstraint_GetRoot(Nmrc_SingleConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern ApiInteger Nmrc_SingleConstraint_GetSerial(Nmrc_SingleConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.SingleConstraint.targetValue

Desired 
value of constrained parameter
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern ApiFloat Nmrc_SingleConstraint_GetTargetValue(Nmrc_SingleConstraint self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern Impl_TopObject Nmrc_SingleConstraint_GetTopObject(Nmrc_SingleConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.SingleConstraint.upperLimit

Maximum 
allowed value of constrained parameter
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern ApiFloat Nmrc_SingleConstraint_GetUpperLimit(Nmrc_SingleConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation 
of Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern ApiSet Nmrc_SingleConstraint_GetViolations(Nmrc_SingleConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.weight

Relative weight 
of constraint in constraint list
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern ApiFloat Nmrc_SingleConstraint_GetWeight(Nmrc_SingleConstraint self);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_SingleConstraint self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_SingleConstraint_RemoveApplicationData(Nmrc_SingleConstraint self, Impl_ApplicationData value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @param  Nmrc_ConstraintGroup value
**/
extern void *Nmrc_SingleConstraint_RemoveConstraintGroup(Nmrc_SingleConstraint self, Nmrc_ConstraintGroup value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @param  Vald_NmrConstraintValidation value
**/
extern void *Nmrc_SingleConstraint_RemoveNmrConstraintValidation(Nmrc_SingleConstraint self, Vald_NmrConstraintValidation value);

/**
  Remove for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used in 
derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @param  Nmr_Peak value
**/
extern void *Nmrc_SingleConstraint_RemovePeak(Nmrc_SingleConstraint self, Nmr_Peak value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_SingleConstraint self
  @param  Acco_AccessObject value
**/
extern void *Nmrc_SingleConstraint_SetAccess(Nmrc_SingleConstraint self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_SingleConstraint self
  @param  ApiList values
**/
extern void *Nmrc_SingleConstraint_SetApplicationData(Nmrc_SingleConstraint self, ApiList values);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @param  ApiSet values
**/
extern void *Nmrc_SingleConstraint_SetConstraintGroups(Nmrc_SingleConstraint self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmrc_SingleConstraint self
  @param  ApiString value
**/
extern void *Nmrc_SingleConstraint_SetDetails(Nmrc_SingleConstraint self, ApiString value);

/**
  Set for ccp.nmr.NmrConstraint.SingleConstraint.error

Uncertainty 
(standard deviation) of targetValue.
  @param  Nmrc_SingleConstraint self
  @param  ApiFloat value
**/
extern void *Nmrc_SingleConstraint_SetError(Nmrc_SingleConstraint self, ApiFloat value);

/**
  Set for ccp.nmr.NmrConstraint.SingleConstraint.lowerLimit

Minimum 
allowed value of constrained parameter. If set, energy penalty is zero 
for values above lowerLimit.
  @param  Nmrc_SingleConstraint self
  @param  ApiFloat value
**/
extern void *Nmrc_SingleConstraint_SetLowerLimit(Nmrc_SingleConstraint self, ApiFloat value);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.method

Method used to 
calculate Constraint. Overrides any Method attached to parent 
ConstraintList.
  @param  Nmrc_SingleConstraint self
  @param  Meth_Method value
**/
extern void *Nmrc_SingleConstraint_SetMethod(Nmrc_SingleConstraint self, Meth_Method value);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @param  ApiSet values
**/
extern void *Nmrc_SingleConstraint_SetNmrConstraintValidations(Nmrc_SingleConstraint self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.origData

Value of 
original measurement that gave rise to Constraint. E.g. Crosspeak 
Intensity or Volume (for a distance constraint), Coupling Constant (In 
Hz) for a dihedral constraint, etc. Provided to cater for structure 
generation programs that keep this kind of information in their 
constraint lists.
  @param  Nmrc_SingleConstraint self
  @param  ApiFloat value
**/
extern void *Nmrc_SingleConstraint_SetOrigData(Nmrc_SingleConstraint self, ApiFloat value);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used in 
derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @param  ApiSet values
**/
extern void *Nmrc_SingleConstraint_SetPeaks(Nmrc_SingleConstraint self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrc_SingleConstraint self
  @param  ApiInteger value
**/
extern void *Nmrc_SingleConstraint_SetSerial(Nmrc_SingleConstraint self, ApiInteger value);

/**
  Set for ccp.nmr.NmrConstraint.SingleConstraint.targetValue

Desired 
value of constrained parameter
  @param  Nmrc_SingleConstraint self
  @param  ApiFloat value
**/
extern void *Nmrc_SingleConstraint_SetTargetValue(Nmrc_SingleConstraint self, ApiFloat value);

/**
  Set for ccp.nmr.NmrConstraint.SingleConstraint.upperLimit

Maximum 
allowed value of constrained parameter
  @param  Nmrc_SingleConstraint self
  @param  ApiFloat value
**/
extern void *Nmrc_SingleConstraint_SetUpperLimit(Nmrc_SingleConstraint self, ApiFloat value);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation 
of Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
  @param  ApiSet values
**/
extern void *Nmrc_SingleConstraint_SetViolations(Nmrc_SingleConstraint self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.weight

Relative weight 
of constraint in constraint list
  @param  Nmrc_SingleConstraint self
  @param  ApiFloat value
**/
extern void *Nmrc_SingleConstraint_SetWeight(Nmrc_SingleConstraint self, ApiFloat value);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern ApiList Nmrc_SingleConstraint_SortedConstraintGroups(Nmrc_SingleConstraint self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern ApiList Nmrc_SingleConstraint_SortedNmrConstraintValidations(Nmrc_SingleConstraint self);

/**
  Sorted for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern ApiList Nmrc_SingleConstraint_SortedPeakContribs(Nmrc_SingleConstraint self);

/**
  Sorted for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used in 
derivation of AbstractConstraint.
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern ApiList Nmrc_SingleConstraint_SortedPeaks(Nmrc_SingleConstraint self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_SingleConstraint self
  @returns   the result
**/
extern ApiList Nmrc_SingleConstraint_SortedViolations(Nmrc_SingleConstraint self);

#endif /* __incl__ccp_api_nmr_NmrConstraint_SingleConstraint_h__ */
