
#ifndef __incl__ccp_api_nmr_NmrConstraint_ChemShiftConstraint_h__
#define __incl__ccp_api_nmr_NmrConstraint_ChemShiftConstraint_h__

#include "ccp.h"

/*
  Chemical shift constraint (shift value that must be reproduced by the structure).
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ChemShiftConstraint self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_ChemShiftConstraint_AddApplicationData(Nmrc_ChemShiftConstraint self, Impl_ApplicationData value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_ChemShiftConstraint self
  @param  Nmrc_ConstraintGroup value
**/
extern void *Nmrc_ChemShiftConstraint_AddConstraintGroup(Nmrc_ChemShiftConstraint self, Nmrc_ConstraintGroup value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_ChemShiftConstraint self
  @param  Vald_NmrConstraintValidation value
**/
extern void *Nmrc_ChemShiftConstraint_AddNmrConstraintValidation(Nmrc_ChemShiftConstraint self, Vald_NmrConstraintValidation value);

/**
  Add for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used in 
derivation of AbstractConstraint.
  @param  Nmrc_ChemShiftConstraint self
  @param  Nmr_Peak value
**/
extern void *Nmrc_ChemShiftConstraint_AddPeak(Nmrc_ChemShiftConstraint self, Nmr_Peak value);

/**
  CheckAllValid for ccp.nmr.NmrConstraint.ChemShiftConstraint
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiBoolean complete
**/
extern void *Nmrc_ChemShiftConstraint_CheckAllValid(Nmrc_ChemShiftConstraint self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrConstraint.ChemShiftConstraint
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiBoolean complete
**/
extern void *Nmrc_ChemShiftConstraint_CheckValid(Nmrc_ChemShiftConstraint self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_ChemShiftConstraint_FindAllApplicationData(Nmrc_ChemShiftConstraint self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ChemShiftConstraint self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_ChemShiftConstraint_FindAllApplicationData_keyval0(Nmrc_ChemShiftConstraint self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_ChemShiftConstraint_FindAllApplicationData_keyval1(Nmrc_ChemShiftConstraint self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_ChemShiftConstraint_FindAllApplicationData_keyval2(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_ChemShiftConstraint_FindAllApplicationData_keyval3(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ChemShiftConstraint self
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
extern ApiList Nmrc_ChemShiftConstraint_FindAllApplicationData_keyval4(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ChemShiftConstraint_FindAllConstraintGroups(Nmrc_ChemShiftConstraint self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_ChemShiftConstraint self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ChemShiftConstraint_FindAllConstraintGroups_keyval0(Nmrc_ChemShiftConstraint self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ChemShiftConstraint_FindAllConstraintGroups_keyval1(Nmrc_ChemShiftConstraint self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ChemShiftConstraint_FindAllConstraintGroups_keyval2(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ChemShiftConstraint_FindAllConstraintGroups_keyval3(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_ChemShiftConstraint self
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
extern ApiSet Nmrc_ChemShiftConstraint_FindAllConstraintGroups_keyval4(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ChemShiftConstraint_FindAllNmrConstraintValidations(Nmrc_ChemShiftConstraint self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_ChemShiftConstraint self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ChemShiftConstraint_FindAllNmrConstraintValidations_keyval0(Nmrc_ChemShiftConstraint self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ChemShiftConstraint_FindAllNmrConstraintValidations_keyval1(Nmrc_ChemShiftConstraint self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ChemShiftConstraint_FindAllNmrConstraintValidations_keyval2(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ChemShiftConstraint_FindAllNmrConstraintValidations_keyval3(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_ChemShiftConstraint self
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
extern ApiSet Nmrc_ChemShiftConstraint_FindAllNmrConstraintValidations_keyval4(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ChemShiftConstraint_FindAllPeakContribs(Nmrc_ChemShiftConstraint self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_ChemShiftConstraint self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ChemShiftConstraint_FindAllPeakContribs_keyval0(Nmrc_ChemShiftConstraint self);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ChemShiftConstraint_FindAllPeakContribs_keyval1(Nmrc_ChemShiftConstraint self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ChemShiftConstraint_FindAllPeakContribs_keyval2(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ChemShiftConstraint_FindAllPeakContribs_keyval3(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_ChemShiftConstraint self
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
extern ApiSet Nmrc_ChemShiftConstraint_FindAllPeakContribs_keyval4(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ChemShiftConstraint_FindAllPeaks(Nmrc_ChemShiftConstraint self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_ChemShiftConstraint self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ChemShiftConstraint_FindAllPeaks_keyval0(Nmrc_ChemShiftConstraint self);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ChemShiftConstraint_FindAllPeaks_keyval1(Nmrc_ChemShiftConstraint self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ChemShiftConstraint_FindAllPeaks_keyval2(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ChemShiftConstraint_FindAllPeaks_keyval3(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_ChemShiftConstraint self
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
extern ApiSet Nmrc_ChemShiftConstraint_FindAllPeaks_keyval4(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ChemShiftConstraint_FindAllViolations(Nmrc_ChemShiftConstraint self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_ChemShiftConstraint self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ChemShiftConstraint_FindAllViolations_keyval0(Nmrc_ChemShiftConstraint self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ChemShiftConstraint_FindAllViolations_keyval1(Nmrc_ChemShiftConstraint self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ChemShiftConstraint_FindAllViolations_keyval2(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_ChemShiftConstraint_FindAllViolations_keyval3(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_ChemShiftConstraint self
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
extern ApiSet Nmrc_ChemShiftConstraint_FindAllViolations_keyval4(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_ChemShiftConstraint_FindFirstApplicationData(Nmrc_ChemShiftConstraint self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ChemShiftConstraint self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_ChemShiftConstraint_FindFirstApplicationData_keyval0(Nmrc_ChemShiftConstraint self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_ChemShiftConstraint_FindFirstApplicationData_keyval1(Nmrc_ChemShiftConstraint self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_ChemShiftConstraint_FindFirstApplicationData_keyval2(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_ChemShiftConstraint_FindFirstApplicationData_keyval3(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ChemShiftConstraint self
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
extern Impl_ApplicationData Nmrc_ChemShiftConstraint_FindFirstApplicationData_keyval4(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintGroup Nmrc_ChemShiftConstraint_FindFirstConstraintGroup(Nmrc_ChemShiftConstraint self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_ChemShiftConstraint self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintGroup Nmrc_ChemShiftConstraint_FindFirstConstraintGroup_keyval0(Nmrc_ChemShiftConstraint self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintGroup Nmrc_ChemShiftConstraint_FindFirstConstraintGroup_keyval1(Nmrc_ChemShiftConstraint self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintGroup Nmrc_ChemShiftConstraint_FindFirstConstraintGroup_keyval2(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintGroup Nmrc_ChemShiftConstraint_FindFirstConstraintGroup_keyval3(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_ChemShiftConstraint self
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
extern Nmrc_ConstraintGroup Nmrc_ChemShiftConstraint_FindFirstConstraintGroup_keyval4(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintValidation Nmrc_ChemShiftConstraint_FindFirstNmrConstraintValidation(Nmrc_ChemShiftConstraint self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_ChemShiftConstraint self
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintValidation Nmrc_ChemShiftConstraint_FindFirstNmrConstraintValidation_keyval0(Nmrc_ChemShiftConstraint self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintValidation Nmrc_ChemShiftConstraint_FindFirstNmrConstraintValidation_keyval1(Nmrc_ChemShiftConstraint self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintValidation Nmrc_ChemShiftConstraint_FindFirstNmrConstraintValidation_keyval2(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintValidation Nmrc_ChemShiftConstraint_FindFirstNmrConstraintValidation_keyval3(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_ChemShiftConstraint self
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
extern Vald_NmrConstraintValidation Nmrc_ChemShiftConstraint_FindFirstNmrConstraintValidation_keyval4(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmrc_ChemShiftConstraint_FindFirstPeak(Nmrc_ChemShiftConstraint self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintPeakContrib Nmrc_ChemShiftConstraint_FindFirstPeakContrib(Nmrc_ChemShiftConstraint self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_ChemShiftConstraint self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintPeakContrib Nmrc_ChemShiftConstraint_FindFirstPeakContrib_keyval0(Nmrc_ChemShiftConstraint self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintPeakContrib Nmrc_ChemShiftConstraint_FindFirstPeakContrib_keyval1(Nmrc_ChemShiftConstraint self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintPeakContrib Nmrc_ChemShiftConstraint_FindFirstPeakContrib_keyval2(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_ConstraintPeakContrib Nmrc_ChemShiftConstraint_FindFirstPeakContrib_keyval3(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child link to 
class ConstraintPeakContrib
  @param  Nmrc_ChemShiftConstraint self
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
extern Nmrc_ConstraintPeakContrib Nmrc_ChemShiftConstraint_FindFirstPeakContrib_keyval4(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_ChemShiftConstraint self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmrc_ChemShiftConstraint_FindFirstPeak_keyval0(Nmrc_ChemShiftConstraint self);

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmrc_ChemShiftConstraint_FindFirstPeak_keyval1(Nmrc_ChemShiftConstraint self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmrc_ChemShiftConstraint_FindFirstPeak_keyval2(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmrc_ChemShiftConstraint_FindFirstPeak_keyval3(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used 
in derivation of AbstractConstraint.
  @param  Nmrc_ChemShiftConstraint self
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
extern Nmr_Peak Nmrc_ChemShiftConstraint_FindFirstPeak_keyval4(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_Violation Nmrc_ChemShiftConstraint_FindFirstViolation(Nmrc_ChemShiftConstraint self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_ChemShiftConstraint self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_Violation Nmrc_ChemShiftConstraint_FindFirstViolation_keyval0(Nmrc_ChemShiftConstraint self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_Violation Nmrc_ChemShiftConstraint_FindFirstViolation_keyval1(Nmrc_ChemShiftConstraint self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_Violation Nmrc_ChemShiftConstraint_FindFirstViolation_keyval2(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_ChemShiftConstraint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_Violation Nmrc_ChemShiftConstraint_FindFirstViolation_keyval3(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_ChemShiftConstraint self
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
extern Nmrc_Violation Nmrc_ChemShiftConstraint_FindFirstViolation_keyval4(Nmrc_ChemShiftConstraint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrConstraint.ChemShiftConstraint
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmrc_ChemShiftConstraint_Get(Nmrc_ChemShiftConstraint self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern Acco_AccessObject Nmrc_ChemShiftConstraint_GetAccess(Nmrc_ChemShiftConstraint self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern ApiList Nmrc_ChemShiftConstraint_GetApplicationData(Nmrc_ChemShiftConstraint self);

/**
  GetByKey for ccp.nmr.NmrConstraint.ChemShiftConstraint
  @param  Nmrc_ChemShiftConstraint self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmrc_ChemShiftConstraint Nmrc_ChemShiftConstraint_GetByKey(Nmrc_ChemShiftConstraint self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern ApiString Nmrc_ChemShiftConstraint_GetClassName(Nmrc_ChemShiftConstraint self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern ApiSet Nmrc_ChemShiftConstraint_GetConstraintGroups(Nmrc_ChemShiftConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern ApiString Nmrc_ChemShiftConstraint_GetDetails(Nmrc_ChemShiftConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.SingleConstraint.error

Uncertainty 
(standard deviation) of targetValue.
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern ApiFloat Nmrc_ChemShiftConstraint_GetError(Nmrc_ChemShiftConstraint self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern ApiList Nmrc_ChemShiftConstraint_GetFieldNames(Nmrc_ChemShiftConstraint self);

/**
  GetFullKey for ccp.nmr.NmrConstraint.ChemShiftConstraint
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmrc_ChemShiftConstraint_GetFullKey(Nmrc_ChemShiftConstraint self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern ApiBoolean Nmrc_ChemShiftConstraint_GetInConstructor(Nmrc_ChemShiftConstraint self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern ApiBoolean Nmrc_ChemShiftConstraint_GetIsDeleted(Nmrc_ChemShiftConstraint self);

/**
  GetLocalKey for ccp.nmr.NmrConstraint.ChemShiftConstraint
  @param  Nmrc_ChemShiftConstraint self
  @returns  Local object key
**/
extern ApiObject Nmrc_ChemShiftConstraint_GetLocalKey(Nmrc_ChemShiftConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.SingleConstraint.lowerLimit

Minimum 
allowed value of constrained parameter. If set, energy penalty is zero 
for values above lowerLimit.
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern ApiFloat Nmrc_ChemShiftConstraint_GetLowerLimit(Nmrc_ChemShiftConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.method

Method used to 
calculate Constraint. Overrides any Method attached to parent 
ConstraintList.
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern Meth_Method Nmrc_ChemShiftConstraint_GetMethod(Nmrc_ChemShiftConstraint self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern ApiSet Nmrc_ChemShiftConstraint_GetNmrConstraintValidations(Nmrc_ChemShiftConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.origData

Value of 
original measurement that gave rise to Constraint. E.g. Crosspeak 
Intensity or Volume (for a distance constraint), Coupling Constant (In 
Hz) for a dihedral constraint, etc. Provided to cater for structure 
generation programs that keep this kind of information in their 
constraint lists.
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern ApiFloat Nmrc_ChemShiftConstraint_GetOrigData(Nmrc_ChemShiftConstraint self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern ApiString Nmrc_ChemShiftConstraint_GetPackageName(Nmrc_ChemShiftConstraint self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern ApiString Nmrc_ChemShiftConstraint_GetPackageShortName(Nmrc_ChemShiftConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.ChemShiftConstraint.parent

link to parent 
object - synonym for parentList
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern Nmrc_ChemShiftConstraintList Nmrc_ChemShiftConstraint_GetParent(Nmrc_ChemShiftConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.ChemShiftConstraint.parentList

parent 
link
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern Nmrc_ChemShiftConstraintList Nmrc_ChemShiftConstraint_GetParentList(Nmrc_ChemShiftConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern ApiSet Nmrc_ChemShiftConstraint_GetPeakContribs(Nmrc_ChemShiftConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used in 
derivation of AbstractConstraint.
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern ApiSet Nmrc_ChemShiftConstraint_GetPeaks(Nmrc_ChemShiftConstraint self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern ApiString Nmrc_ChemShiftConstraint_GetQualifiedName(Nmrc_ChemShiftConstraint self);

/**
  Get for 
ccp.nmr.NmrConstraint.ChemShiftConstraint.resonance

FixedResonance 
holding Chemical shift constraint.
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern Nmrc_FixedResonance Nmrc_ChemShiftConstraint_GetResonance(Nmrc_ChemShiftConstraint self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern Impl_MemopsRoot Nmrc_ChemShiftConstraint_GetRoot(Nmrc_ChemShiftConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern ApiInteger Nmrc_ChemShiftConstraint_GetSerial(Nmrc_ChemShiftConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.SingleConstraint.targetValue

Desired 
value of constrained parameter
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern ApiFloat Nmrc_ChemShiftConstraint_GetTargetValue(Nmrc_ChemShiftConstraint self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern Impl_TopObject Nmrc_ChemShiftConstraint_GetTopObject(Nmrc_ChemShiftConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.SingleConstraint.upperLimit

Maximum 
allowed value of constrained parameter
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern ApiFloat Nmrc_ChemShiftConstraint_GetUpperLimit(Nmrc_ChemShiftConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation 
of Constraint in a given structure or set of structures.
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern ApiSet Nmrc_ChemShiftConstraint_GetViolations(Nmrc_ChemShiftConstraint self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraint.weight

Relative weight 
of constraint in constraint list
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern ApiFloat Nmrc_ChemShiftConstraint_GetWeight(Nmrc_ChemShiftConstraint self);

/**
  Constructor for ccp.nmr.NmrConstraint.ChemShiftConstraint
  @param  Nmrc_ChemShiftConstraintList parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrc_ChemShiftConstraint Nmrc_ChemShiftConstraint_Init(Nmrc_ChemShiftConstraintList parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrConstraint.ChemShiftConstraint
  @param  Nmrc_ChemShiftConstraintList parent
  @param  Nmrc_FixedResonance resonance
  @returns  the new object
**/
extern Nmrc_ChemShiftConstraint Nmrc_ChemShiftConstraint_Init_reqd(Nmrc_ChemShiftConstraintList parent, Nmrc_FixedResonance resonance);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ChemShiftConstraint self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_ChemShiftConstraint_RemoveApplicationData(Nmrc_ChemShiftConstraint self, Impl_ApplicationData value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_ChemShiftConstraint self
  @param  Nmrc_ConstraintGroup value
**/
extern void *Nmrc_ChemShiftConstraint_RemoveConstraintGroup(Nmrc_ChemShiftConstraint self, Nmrc_ConstraintGroup value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_ChemShiftConstraint self
  @param  Vald_NmrConstraintValidation value
**/
extern void *Nmrc_ChemShiftConstraint_RemoveNmrConstraintValidation(Nmrc_ChemShiftConstraint self, Vald_NmrConstraintValidation value);

/**
  Remove for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used in 
derivation of AbstractConstraint.
  @param  Nmrc_ChemShiftConstraint self
  @param  Nmr_Peak value
**/
extern void *Nmrc_ChemShiftConstraint_RemovePeak(Nmrc_ChemShiftConstraint self, Nmr_Peak value);

/**
  SetAttr for ccp.nmr.NmrConstraint.ChemShiftConstraint
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmrc_ChemShiftConstraint_Set(Nmrc_ChemShiftConstraint self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_ChemShiftConstraint self
  @param  Acco_AccessObject value
**/
extern void *Nmrc_ChemShiftConstraint_SetAccess(Nmrc_ChemShiftConstraint self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiList values
**/
extern void *Nmrc_ChemShiftConstraint_SetApplicationData(Nmrc_ChemShiftConstraint self, ApiList values);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiSet values
**/
extern void *Nmrc_ChemShiftConstraint_SetConstraintGroups(Nmrc_ChemShiftConstraint self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiString value
**/
extern void *Nmrc_ChemShiftConstraint_SetDetails(Nmrc_ChemShiftConstraint self, ApiString value);

/**
  Set for ccp.nmr.NmrConstraint.SingleConstraint.error

Uncertainty 
(standard deviation) of targetValue.
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiFloat value
**/
extern void *Nmrc_ChemShiftConstraint_SetError(Nmrc_ChemShiftConstraint self, ApiFloat value);

/**
  Set for ccp.nmr.NmrConstraint.SingleConstraint.lowerLimit

Minimum 
allowed value of constrained parameter. If set, energy penalty is zero 
for values above lowerLimit.
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiFloat value
**/
extern void *Nmrc_ChemShiftConstraint_SetLowerLimit(Nmrc_ChemShiftConstraint self, ApiFloat value);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.method

Method used to 
calculate Constraint. Overrides any Method attached to parent 
ConstraintList.
  @param  Nmrc_ChemShiftConstraint self
  @param  Meth_Method value
**/
extern void *Nmrc_ChemShiftConstraint_SetMethod(Nmrc_ChemShiftConstraint self, Meth_Method value);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiSet values
**/
extern void *Nmrc_ChemShiftConstraint_SetNmrConstraintValidations(Nmrc_ChemShiftConstraint self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.origData

Value of 
original measurement that gave rise to Constraint. E.g. Crosspeak 
Intensity or Volume (for a distance constraint), Coupling Constant (In 
Hz) for a dihedral constraint, etc. Provided to cater for structure 
generation programs that keep this kind of information in their 
constraint lists.
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiFloat value
**/
extern void *Nmrc_ChemShiftConstraint_SetOrigData(Nmrc_ChemShiftConstraint self, ApiFloat value);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used in 
derivation of AbstractConstraint.
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiSet values
**/
extern void *Nmrc_ChemShiftConstraint_SetPeaks(Nmrc_ChemShiftConstraint self, ApiSet values);

/**
  Set for 
ccp.nmr.NmrConstraint.ChemShiftConstraint.resonance

FixedResonance 
holding Chemical shift constraint.
  @param  Nmrc_ChemShiftConstraint self
  @param  Nmrc_FixedResonance value
**/
extern void *Nmrc_ChemShiftConstraint_SetResonance(Nmrc_ChemShiftConstraint self, Nmrc_FixedResonance value);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.serial

Serial number 
of object. Serves as object main key. Serial numbers of deleted objects 
are not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiInteger value
**/
extern void *Nmrc_ChemShiftConstraint_SetSerial(Nmrc_ChemShiftConstraint self, ApiInteger value);

/**
  Set for ccp.nmr.NmrConstraint.SingleConstraint.targetValue

Desired 
value of constrained parameter
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiFloat value
**/
extern void *Nmrc_ChemShiftConstraint_SetTargetValue(Nmrc_ChemShiftConstraint self, ApiFloat value);

/**
  Set for ccp.nmr.NmrConstraint.SingleConstraint.upperLimit

Maximum 
allowed value of constrained parameter
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiFloat value
**/
extern void *Nmrc_ChemShiftConstraint_SetUpperLimit(Nmrc_ChemShiftConstraint self, ApiFloat value);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation 
of Constraint in a given structure or set of structures.
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiSet values
**/
extern void *Nmrc_ChemShiftConstraint_SetViolations(Nmrc_ChemShiftConstraint self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraint.weight

Relative weight 
of constraint in constraint list
  @param  Nmrc_ChemShiftConstraint self
  @param  ApiFloat value
**/
extern void *Nmrc_ChemShiftConstraint_SetWeight(Nmrc_ChemShiftConstraint self, ApiFloat value);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraint.constraintGroups

Constraint 
groups that constraint takes part in
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern ApiList Nmrc_ChemShiftConstraint_SortedConstraintGroups(Nmrc_ChemShiftConstraint self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraint.nmrConstraintValidations

Validation 
results that include AbstractConstraint
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern ApiList Nmrc_ChemShiftConstraint_SortedNmrConstraintValidations(Nmrc_ChemShiftConstraint self);

/**
  Sorted for ccp.nmr.NmrConstraint.AbstractConstraint.peakContribs

child 
link to class ConstraintPeakContrib
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern ApiList Nmrc_ChemShiftConstraint_SortedPeakContribs(Nmrc_ChemShiftConstraint self);

/**
  Sorted for ccp.nmr.NmrConstraint.AbstractConstraint.peaks

peaks used in 
derivation of AbstractConstraint.
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern ApiList Nmrc_ChemShiftConstraint_SortedPeaks(Nmrc_ChemShiftConstraint self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraint.violations

Violation of 
Constraint in a given structure or set of structures.
  @param  Nmrc_ChemShiftConstraint self
  @returns   the result
**/
extern ApiList Nmrc_ChemShiftConstraint_SortedViolations(Nmrc_ChemShiftConstraint self);

#endif /* __incl__ccp_api_nmr_NmrConstraint_ChemShiftConstraint_h__ */
