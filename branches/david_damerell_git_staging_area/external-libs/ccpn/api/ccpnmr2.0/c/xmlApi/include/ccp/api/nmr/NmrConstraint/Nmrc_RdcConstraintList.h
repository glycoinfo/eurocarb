
#ifndef __incl__ccp_api_nmr_NmrConstraint_RdcConstraintList_h__
#define __incl__ccp_api_nmr_NmrConstraint_RdcConstraintList_h__

#include "ccp.h"

/*
  List of reduced dipolar coupling constraints, in the form of RDC values that should be reproduced by the structure.
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_RdcConstraintList self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_RdcConstraintList_AddApplicationData(Nmrc_RdcConstraintList self, Impl_ApplicationData value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_RdcConstraintList self
  @param  Nmr_Experiment value
**/
extern void *Nmrc_RdcConstraintList_AddExperiment(Nmrc_RdcConstraintList self, Nmr_Experiment value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experimentSerials

Serials 
for experiments that have contributed to Constraints in constraintList. 
Serve as key for derived link experiments
  @param  Nmrc_RdcConstraintList self
  @param  ApiInteger value
**/
extern void *Nmrc_RdcConstraintList_AddExperimentSerial(Nmrc_RdcConstraintList self, ApiInteger value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measureListSerials

Serials 
for measurementLists that have contributed to Constraints in 
constraintList. Serve as key for derived link measurementLists.
  @param  Nmrc_RdcConstraintList self
  @param  ApiInteger value
**/
extern void *Nmrc_RdcConstraintList_AddMeasureListSerial(Nmrc_RdcConstraintList self, ApiInteger value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_RdcConstraintList self
  @param  Nmr_AbstractMeasurementList value
**/
extern void *Nmrc_RdcConstraintList_AddMeasurementList(Nmrc_RdcConstraintList self, Nmr_AbstractMeasurementList value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_RdcConstraintList self
  @param  Vald_NmrConstraintListValidation value
**/
extern void *Nmrc_RdcConstraintList_AddNmrConstraintListValidation(Nmrc_RdcConstraintList self, Vald_NmrConstraintListValidation value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_RdcConstraintList self
  @param  Nsim_NmrSimEnergyTerm value
**/
extern void *Nmrc_RdcConstraintList_AddNmrSimEnergyTerm(Nmrc_RdcConstraintList self, Nsim_NmrSimEnergyTerm value);

/**
  CheckAllValid for ccp.nmr.NmrConstraint.RdcConstraintList
  @param  Nmrc_RdcConstraintList self
  @param  ApiBoolean complete
**/
extern void *Nmrc_RdcConstraintList_CheckAllValid(Nmrc_RdcConstraintList self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrConstraint.RdcConstraintList
  @param  Nmrc_RdcConstraintList self
  @param  ApiBoolean complete
**/
extern void *Nmrc_RdcConstraintList_CheckValid(Nmrc_RdcConstraintList self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_RdcConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_RdcConstraintList_FindAllApplicationData(Nmrc_RdcConstraintList self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_RdcConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_RdcConstraintList_FindAllApplicationData_keyval0(Nmrc_RdcConstraintList self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_RdcConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_RdcConstraintList_FindAllApplicationData_keyval1(Nmrc_RdcConstraintList self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_RdcConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_RdcConstraintList_FindAllApplicationData_keyval2(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_RdcConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_RdcConstraintList_FindAllApplicationData_keyval3(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_RdcConstraintList self
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
extern ApiList Nmrc_RdcConstraintList_FindAllApplicationData_keyval4(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrConstraint.RdcConstraintList.constraints

child 
link to class RdcConstraint
  @param  Nmrc_RdcConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_RdcConstraintList_FindAllConstraints(Nmrc_RdcConstraintList self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrConstraint.RdcConstraintList.constraints

child 
link to class RdcConstraint
  @param  Nmrc_RdcConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_RdcConstraintList_FindAllConstraints_keyval0(Nmrc_RdcConstraintList self);

/**
  FindAll for ccp.nmr.NmrConstraint.RdcConstraintList.constraints

child 
link to class RdcConstraint
  @param  Nmrc_RdcConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_RdcConstraintList_FindAllConstraints_keyval1(Nmrc_RdcConstraintList self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrConstraint.RdcConstraintList.constraints

child 
link to class RdcConstraint
  @param  Nmrc_RdcConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_RdcConstraintList_FindAllConstraints_keyval2(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrConstraint.RdcConstraintList.constraints

child 
link to class RdcConstraint
  @param  Nmrc_RdcConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_RdcConstraintList_FindAllConstraints_keyval3(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrConstraint.RdcConstraintList.constraints

child 
link to class RdcConstraint
  @param  Nmrc_RdcConstraintList self
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
extern ApiSet Nmrc_RdcConstraintList_FindAllConstraints_keyval4(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_RdcConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_RdcConstraintList_FindAllExperiments(Nmrc_RdcConstraintList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_RdcConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_RdcConstraintList_FindAllExperiments_keyval0(Nmrc_RdcConstraintList self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_RdcConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_RdcConstraintList_FindAllExperiments_keyval1(Nmrc_RdcConstraintList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_RdcConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_RdcConstraintList_FindAllExperiments_keyval2(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_RdcConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_RdcConstraintList_FindAllExperiments_keyval3(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_RdcConstraintList self
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
extern ApiSet Nmrc_RdcConstraintList_FindAllExperiments_keyval4(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_RdcConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_RdcConstraintList_FindAllMeasurementLists(Nmrc_RdcConstraintList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_RdcConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_RdcConstraintList_FindAllMeasurementLists_keyval0(Nmrc_RdcConstraintList self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_RdcConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_RdcConstraintList_FindAllMeasurementLists_keyval1(Nmrc_RdcConstraintList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_RdcConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_RdcConstraintList_FindAllMeasurementLists_keyval2(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_RdcConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_RdcConstraintList_FindAllMeasurementLists_keyval3(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_RdcConstraintList self
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
extern ApiSet Nmrc_RdcConstraintList_FindAllMeasurementLists_keyval4(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_RdcConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_RdcConstraintList_FindAllNmrConstraintListValidations(Nmrc_RdcConstraintList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_RdcConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_RdcConstraintList_FindAllNmrConstraintListValidations_keyval0(Nmrc_RdcConstraintList self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_RdcConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_RdcConstraintList_FindAllNmrConstraintListValidations_keyval1(Nmrc_RdcConstraintList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_RdcConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_RdcConstraintList_FindAllNmrConstraintListValidations_keyval2(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_RdcConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_RdcConstraintList_FindAllNmrConstraintListValidations_keyval3(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_RdcConstraintList self
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
extern ApiSet Nmrc_RdcConstraintList_FindAllNmrConstraintListValidations_keyval4(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_RdcConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_RdcConstraintList_FindAllNmrSimEnergyTerms(Nmrc_RdcConstraintList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_RdcConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_RdcConstraintList_FindAllNmrSimEnergyTerms_keyval0(Nmrc_RdcConstraintList self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_RdcConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_RdcConstraintList_FindAllNmrSimEnergyTerms_keyval1(Nmrc_RdcConstraintList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_RdcConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_RdcConstraintList_FindAllNmrSimEnergyTerms_keyval2(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_RdcConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_RdcConstraintList_FindAllNmrSimEnergyTerms_keyval3(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_RdcConstraintList self
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
extern ApiSet Nmrc_RdcConstraintList_FindAllNmrSimEnergyTerms_keyval4(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_RdcConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_RdcConstraintList_FindFirstApplicationData(Nmrc_RdcConstraintList self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_RdcConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_RdcConstraintList_FindFirstApplicationData_keyval0(Nmrc_RdcConstraintList self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_RdcConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_RdcConstraintList_FindFirstApplicationData_keyval1(Nmrc_RdcConstraintList self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_RdcConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_RdcConstraintList_FindFirstApplicationData_keyval2(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_RdcConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_RdcConstraintList_FindFirstApplicationData_keyval3(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_RdcConstraintList self
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
extern Impl_ApplicationData Nmrc_RdcConstraintList_FindFirstApplicationData_keyval4(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.NmrConstraint.RdcConstraintList.constraints

child 
link to class RdcConstraint
  @param  Nmrc_RdcConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_RdcConstraint Nmrc_RdcConstraintList_FindFirstConstraint(Nmrc_RdcConstraintList self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.NmrConstraint.RdcConstraintList.constraints

child 
link to class RdcConstraint
  @param  Nmrc_RdcConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_RdcConstraint Nmrc_RdcConstraintList_FindFirstConstraint_keyval0(Nmrc_RdcConstraintList self);

/**
  FindFirst for ccp.nmr.NmrConstraint.RdcConstraintList.constraints

child 
link to class RdcConstraint
  @param  Nmrc_RdcConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_RdcConstraint Nmrc_RdcConstraintList_FindFirstConstraint_keyval1(Nmrc_RdcConstraintList self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.NmrConstraint.RdcConstraintList.constraints

child 
link to class RdcConstraint
  @param  Nmrc_RdcConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_RdcConstraint Nmrc_RdcConstraintList_FindFirstConstraint_keyval2(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.NmrConstraint.RdcConstraintList.constraints

child 
link to class RdcConstraint
  @param  Nmrc_RdcConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_RdcConstraint Nmrc_RdcConstraintList_FindFirstConstraint_keyval3(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.NmrConstraint.RdcConstraintList.constraints

child 
link to class RdcConstraint
  @param  Nmrc_RdcConstraintList self
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
extern Nmrc_RdcConstraint Nmrc_RdcConstraintList_FindFirstConstraint_keyval4(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_RdcConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmrc_RdcConstraintList_FindFirstExperiment(Nmrc_RdcConstraintList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_RdcConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmrc_RdcConstraintList_FindFirstExperiment_keyval0(Nmrc_RdcConstraintList self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_RdcConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmrc_RdcConstraintList_FindFirstExperiment_keyval1(Nmrc_RdcConstraintList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_RdcConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmrc_RdcConstraintList_FindFirstExperiment_keyval2(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_RdcConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmrc_RdcConstraintList_FindFirstExperiment_keyval3(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_RdcConstraintList self
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
extern Nmr_Experiment Nmrc_RdcConstraintList_FindFirstExperiment_keyval4(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_RdcConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nmrc_RdcConstraintList_FindFirstMeasurementList(Nmrc_RdcConstraintList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_RdcConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nmrc_RdcConstraintList_FindFirstMeasurementList_keyval0(Nmrc_RdcConstraintList self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_RdcConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nmrc_RdcConstraintList_FindFirstMeasurementList_keyval1(Nmrc_RdcConstraintList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_RdcConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nmrc_RdcConstraintList_FindFirstMeasurementList_keyval2(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_RdcConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nmrc_RdcConstraintList_FindFirstMeasurementList_keyval3(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_RdcConstraintList self
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
extern Nmr_AbstractMeasurementList Nmrc_RdcConstraintList_FindFirstMeasurementList_keyval4(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_RdcConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintListValidation Nmrc_RdcConstraintList_FindFirstNmrConstraintListValidation(Nmrc_RdcConstraintList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_RdcConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintListValidation Nmrc_RdcConstraintList_FindFirstNmrConstraintListValidation_keyval0(Nmrc_RdcConstraintList self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_RdcConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintListValidation Nmrc_RdcConstraintList_FindFirstNmrConstraintListValidation_keyval1(Nmrc_RdcConstraintList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_RdcConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintListValidation Nmrc_RdcConstraintList_FindFirstNmrConstraintListValidation_keyval2(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_RdcConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintListValidation Nmrc_RdcConstraintList_FindFirstNmrConstraintListValidation_keyval3(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_RdcConstraintList self
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
extern Vald_NmrConstraintListValidation Nmrc_RdcConstraintList_FindFirstNmrConstraintListValidation_keyval4(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_RdcConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nmrc_RdcConstraintList_FindFirstNmrSimEnergyTerm(Nmrc_RdcConstraintList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_RdcConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nmrc_RdcConstraintList_FindFirstNmrSimEnergyTerm_keyval0(Nmrc_RdcConstraintList self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_RdcConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nmrc_RdcConstraintList_FindFirstNmrSimEnergyTerm_keyval1(Nmrc_RdcConstraintList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_RdcConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nmrc_RdcConstraintList_FindFirstNmrSimEnergyTerm_keyval2(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_RdcConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nmrc_RdcConstraintList_FindFirstNmrSimEnergyTerm_keyval3(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_RdcConstraintList self
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
extern Nsim_NmrSimEnergyTerm Nmrc_RdcConstraintList_FindFirstNmrSimEnergyTerm_keyval4(Nmrc_RdcConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrConstraint.RdcConstraintList
  @param  Nmrc_RdcConstraintList self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmrc_RdcConstraintList_Get(Nmrc_RdcConstraintList self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern Acco_AccessObject Nmrc_RdcConstraintList_GetAccess(Nmrc_RdcConstraintList self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_RdcConstraintList_GetApplicationData(Nmrc_RdcConstraintList self);

/**
  GetByKey for ccp.nmr.NmrConstraint.RdcConstraintList
  @param  Nmrc_RdcConstraintList self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmrc_RdcConstraintList Nmrc_RdcConstraintList_GetByKey(Nmrc_RdcConstraintList self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_RdcConstraintList_GetClassName(Nmrc_RdcConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.conditionState

COndition 
set that COnstraint list refers to
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern Nmrc_ConditionState Nmrc_RdcConstraintList_GetConditionState(Nmrc_RdcConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.RdcConstraintList.constraints

child link 
to class RdcConstraint
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_RdcConstraintList_GetConstraints(Nmrc_RdcConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.details

free text 
containing notes, descriptive remarks, etc.
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_RdcConstraintList_GetDetails(Nmrc_RdcConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experimentSerials

Serials 
for experiments that have contributed to Constraints in constraintList. 
Serve as key for derived link experiments
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_RdcConstraintList_GetExperimentSerials(Nmrc_RdcConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_RdcConstraintList_GetExperiments(Nmrc_RdcConstraintList self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_RdcConstraintList_GetFieldNames(Nmrc_RdcConstraintList self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern ApiBoolean Nmrc_RdcConstraintList_GetInConstructor(Nmrc_RdcConstraintList self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern ApiBoolean Nmrc_RdcConstraintList_GetIsDeleted(Nmrc_RdcConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measureListSerials

Serials 
for measurementLists that have contributed to Constraints in 
constraintList. Serve as key for derived link measurementLists.
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_RdcConstraintList_GetMeasureListSerials(Nmrc_RdcConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_RdcConstraintList_GetMeasurementLists(Nmrc_RdcConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.method

Default 
Method used for calculating Constraints in ConstraintList. May be 
overwritten by Method for individual Constraints.
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern Meth_Method Nmrc_RdcConstraintList_GetMethod(Nmrc_RdcConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.name

Name of 
constraint list. Serves as a descriptive addition to the serial number.
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_RdcConstraintList_GetName(Nmrc_RdcConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_RdcConstraintList_GetNmrConstraintListValidations(Nmrc_RdcConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintStore

parent 
link
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern Nmrc_NmrConstraintStore Nmrc_RdcConstraintList_GetNmrConstraintStore(Nmrc_RdcConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_RdcConstraintList_GetNmrSimEnergyTerms(Nmrc_RdcConstraintList self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_RdcConstraintList_GetPackageName(Nmrc_RdcConstraintList self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_RdcConstraintList_GetPackageShortName(Nmrc_RdcConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.parent

link to 
parent object - synonym for nmrConstraintStore
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern Nmrc_NmrConstraintStore Nmrc_RdcConstraintList_GetParent(Nmrc_RdcConstraintList self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_RdcConstraintList_GetQualifiedName(Nmrc_RdcConstraintList self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern Impl_MemopsRoot Nmrc_RdcConstraintList_GetRoot(Nmrc_RdcConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.serial

The serial 
number is the key for class AbstractConstraintList and together with the 
parent object serves as a unique identifier for the 
AbstractConstraintList.
Serial numbers are generated by the API. Serial 
numbers of deleted objects are not reused.
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern ApiInteger Nmrc_RdcConstraintList_GetSerial(Nmrc_RdcConstraintList self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern Impl_TopObject Nmrc_RdcConstraintList_GetTopObject(Nmrc_RdcConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.unit

Measurement 
unit of listed constraints. Should be made into an enumeration.
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_RdcConstraintList_GetUnit(Nmrc_RdcConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.usedForCalculation

Determines 
if the ConstraintList was (or should be) used for structure calculation.
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern ApiBoolean Nmrc_RdcConstraintList_GetUsedForCalculation(Nmrc_RdcConstraintList self);

/**
  Constructor for ccp.nmr.NmrConstraint.RdcConstraintList
  @param  Nmrc_NmrConstraintStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrc_RdcConstraintList Nmrc_RdcConstraintList_Init(Nmrc_NmrConstraintStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrConstraint.RdcConstraintList
  @param  Nmrc_NmrConstraintStore parent
  @returns  the new object
**/
extern Nmrc_RdcConstraintList Nmrc_RdcConstraintList_Init_reqd(Nmrc_NmrConstraintStore parent);

/**
  Factory function to create ccp.nmr.NmrConstraint.RdcConstraint
  @param  Nmrc_RdcConstraintList self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrc_RdcConstraint Nmrc_RdcConstraintList_NewRdcConstraint(Nmrc_RdcConstraintList self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.NmrConstraint.RdcConstraint
  @param  Nmrc_RdcConstraintList self
  @returns  the new object
**/
extern Nmrc_RdcConstraint Nmrc_RdcConstraintList_NewRdcConstraint_reqd(Nmrc_RdcConstraintList self);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_RdcConstraintList self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_RdcConstraintList_RemoveApplicationData(Nmrc_RdcConstraintList self, Impl_ApplicationData value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_RdcConstraintList self
  @param  Nmr_Experiment value
**/
extern void *Nmrc_RdcConstraintList_RemoveExperiment(Nmrc_RdcConstraintList self, Nmr_Experiment value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experimentSerials

Serials 
for experiments that have contributed to Constraints in constraintList. 
Serve as key for derived link experiments
  @param  Nmrc_RdcConstraintList self
  @param  ApiInteger value
**/
extern void *Nmrc_RdcConstraintList_RemoveExperimentSerial(Nmrc_RdcConstraintList self, ApiInteger value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measureListSerials

Serials 
for measurementLists that have contributed to Constraints in 
constraintList. Serve as key for derived link measurementLists.
  @param  Nmrc_RdcConstraintList self
  @param  ApiInteger value
**/
extern void *Nmrc_RdcConstraintList_RemoveMeasureListSerial(Nmrc_RdcConstraintList self, ApiInteger value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_RdcConstraintList self
  @param  Nmr_AbstractMeasurementList value
**/
extern void *Nmrc_RdcConstraintList_RemoveMeasurementList(Nmrc_RdcConstraintList self, Nmr_AbstractMeasurementList value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_RdcConstraintList self
  @param  Vald_NmrConstraintListValidation value
**/
extern void *Nmrc_RdcConstraintList_RemoveNmrConstraintListValidation(Nmrc_RdcConstraintList self, Vald_NmrConstraintListValidation value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_RdcConstraintList self
  @param  Nsim_NmrSimEnergyTerm value
**/
extern void *Nmrc_RdcConstraintList_RemoveNmrSimEnergyTerm(Nmrc_RdcConstraintList self, Nsim_NmrSimEnergyTerm value);

/**
  SetAttr for ccp.nmr.NmrConstraint.RdcConstraintList
  @param  Nmrc_RdcConstraintList self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmrc_RdcConstraintList_Set(Nmrc_RdcConstraintList self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_RdcConstraintList self
  @param  Acco_AccessObject value
**/
extern void *Nmrc_RdcConstraintList_SetAccess(Nmrc_RdcConstraintList self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_RdcConstraintList self
  @param  ApiList values
**/
extern void *Nmrc_RdcConstraintList_SetApplicationData(Nmrc_RdcConstraintList self, ApiList values);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.conditionState

COndition 
set that COnstraint list refers to
  @param  Nmrc_RdcConstraintList self
  @param  Nmrc_ConditionState value
**/
extern void *Nmrc_RdcConstraintList_SetConditionState(Nmrc_RdcConstraintList self, Nmrc_ConditionState value);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.details

free text 
containing notes, descriptive remarks, etc.
  @param  Nmrc_RdcConstraintList self
  @param  ApiString value
**/
extern void *Nmrc_RdcConstraintList_SetDetails(Nmrc_RdcConstraintList self, ApiString value);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experimentSerials

Serials 
for experiments that have contributed to Constraints in constraintList. 
Serve as key for derived link experiments
  @param  Nmrc_RdcConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_RdcConstraintList_SetExperimentSerials(Nmrc_RdcConstraintList self, ApiSet values);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_RdcConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_RdcConstraintList_SetExperiments(Nmrc_RdcConstraintList self, ApiSet values);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measureListSerials

Serials 
for measurementLists that have contributed to Constraints in 
constraintList. Serve as key for derived link measurementLists.
  @param  Nmrc_RdcConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_RdcConstraintList_SetMeasureListSerials(Nmrc_RdcConstraintList self, ApiSet values);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_RdcConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_RdcConstraintList_SetMeasurementLists(Nmrc_RdcConstraintList self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.method

Default 
Method used for calculating Constraints in ConstraintList. May be 
overwritten by Method for individual Constraints.
  @param  Nmrc_RdcConstraintList self
  @param  Meth_Method value
**/
extern void *Nmrc_RdcConstraintList_SetMethod(Nmrc_RdcConstraintList self, Meth_Method value);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.name

Name of 
constraint list. Serves as a descriptive addition to the serial number.
  @param  Nmrc_RdcConstraintList self
  @param  ApiString value
**/
extern void *Nmrc_RdcConstraintList_SetName(Nmrc_RdcConstraintList self, ApiString value);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_RdcConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_RdcConstraintList_SetNmrConstraintListValidations(Nmrc_RdcConstraintList self, ApiSet values);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_RdcConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_RdcConstraintList_SetNmrSimEnergyTerms(Nmrc_RdcConstraintList self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.serial

The serial 
number is the key for class AbstractConstraintList and together with the 
parent object serves as a unique identifier for the 
AbstractConstraintList.
Serial numbers are generated by the API. Serial 
numbers of deleted objects are not reused.
  @param  Nmrc_RdcConstraintList self
  @param  ApiInteger value
**/
extern void *Nmrc_RdcConstraintList_SetSerial(Nmrc_RdcConstraintList self, ApiInteger value);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.unit

Measurement 
unit of listed constraints. Should be made into an enumeration.
  @param  Nmrc_RdcConstraintList self
  @param  ApiString value
**/
extern void *Nmrc_RdcConstraintList_SetUnit(Nmrc_RdcConstraintList self, ApiString value);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.usedForCalculation

Determines 
if the ConstraintList was (or should be) used for structure calculation.
  @param  Nmrc_RdcConstraintList self
  @param  ApiBoolean value
**/
extern void *Nmrc_RdcConstraintList_SetUsedForCalculation(Nmrc_RdcConstraintList self, ApiBoolean value);

/**
  Sorted for ccp.nmr.NmrConstraint.RdcConstraintList.constraints

child 
link to class RdcConstraint
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_RdcConstraintList_SortedConstraints(Nmrc_RdcConstraintList self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_RdcConstraintList_SortedExperiments(Nmrc_RdcConstraintList self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_RdcConstraintList_SortedMeasurementLists(Nmrc_RdcConstraintList self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_RdcConstraintList_SortedNmrConstraintListValidations(Nmrc_RdcConstraintList self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_RdcConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_RdcConstraintList_SortedNmrSimEnergyTerms(Nmrc_RdcConstraintList self);

#endif /* __incl__ccp_api_nmr_NmrConstraint_RdcConstraintList_h__ */
