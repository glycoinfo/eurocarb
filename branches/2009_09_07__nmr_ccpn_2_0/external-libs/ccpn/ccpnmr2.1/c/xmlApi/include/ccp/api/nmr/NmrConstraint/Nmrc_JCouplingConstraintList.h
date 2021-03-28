
#ifndef __incl__ccp_api_nmr_NmrConstraint_JCouplingConstraintList_h__
#define __incl__ccp_api_nmr_NmrConstraint_JCouplingConstraintList_h__

#include "ccp.h"

/*
  Lis of J coupling constraints, in the form of J coupling values that should be reproduced by the structure.
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintList self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_JCouplingConstraintList_AddApplicationData(Nmrc_JCouplingConstraintList self, Impl_ApplicationData value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_JCouplingConstraintList self
  @param  Nmr_Experiment value
**/
extern void *Nmrc_JCouplingConstraintList_AddExperiment(Nmrc_JCouplingConstraintList self, Nmr_Experiment value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experimentSerials

Serials 
for experiments that have contributed to Constraints in constraintList. 
Serve as key for derived link experiments
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiInteger value
**/
extern void *Nmrc_JCouplingConstraintList_AddExperimentSerial(Nmrc_JCouplingConstraintList self, ApiInteger value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measureListSerials

Serials 
for measurementLists that have contributed to Constraints in 
constraintList. Serve as key for derived link measurementLists.
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiInteger value
**/
extern void *Nmrc_JCouplingConstraintList_AddMeasureListSerial(Nmrc_JCouplingConstraintList self, ApiInteger value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_JCouplingConstraintList self
  @param  Nmr_AbstractMeasurementList value
**/
extern void *Nmrc_JCouplingConstraintList_AddMeasurementList(Nmrc_JCouplingConstraintList self, Nmr_AbstractMeasurementList value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @param  Vald_NmrConstraintListValidation value
**/
extern void *Nmrc_JCouplingConstraintList_AddNmrConstraintListValidation(Nmrc_JCouplingConstraintList self, Vald_NmrConstraintListValidation value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @param  Nsim_NmrSimEnergyTerm value
**/
extern void *Nmrc_JCouplingConstraintList_AddNmrSimEnergyTerm(Nmrc_JCouplingConstraintList self, Nsim_NmrSimEnergyTerm value);

/**
  CheckAllValid for ccp.nmr.NmrConstraint.JCouplingConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiBoolean complete
**/
extern void *Nmrc_JCouplingConstraintList_CheckAllValid(Nmrc_JCouplingConstraintList self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrConstraint.JCouplingConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiBoolean complete
**/
extern void *Nmrc_JCouplingConstraintList_CheckValid(Nmrc_JCouplingConstraintList self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_JCouplingConstraintList_FindAllApplicationData(Nmrc_JCouplingConstraintList self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_JCouplingConstraintList_FindAllApplicationData_keyval0(Nmrc_JCouplingConstraintList self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_JCouplingConstraintList_FindAllApplicationData_keyval1(Nmrc_JCouplingConstraintList self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_JCouplingConstraintList_FindAllApplicationData_keyval2(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_JCouplingConstraintList_FindAllApplicationData_keyval3(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintList self
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
extern ApiList Nmrc_JCouplingConstraintList_FindAllApplicationData_keyval4(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.JCouplingConstraintList.constraints

child link to 
class JCouplingConstraint
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintList_FindAllConstraints(Nmrc_JCouplingConstraintList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.JCouplingConstraintList.constraints

child link to 
class JCouplingConstraint
  @param  Nmrc_JCouplingConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintList_FindAllConstraints_keyval0(Nmrc_JCouplingConstraintList self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.JCouplingConstraintList.constraints

child link to 
class JCouplingConstraint
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintList_FindAllConstraints_keyval1(Nmrc_JCouplingConstraintList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.JCouplingConstraintList.constraints

child link to 
class JCouplingConstraint
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintList_FindAllConstraints_keyval2(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.JCouplingConstraintList.constraints

child link to 
class JCouplingConstraint
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintList_FindAllConstraints_keyval3(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.JCouplingConstraintList.constraints

child link to 
class JCouplingConstraint
  @param  Nmrc_JCouplingConstraintList self
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
extern ApiSet Nmrc_JCouplingConstraintList_FindAllConstraints_keyval4(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintList_FindAllExperiments(Nmrc_JCouplingConstraintList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_JCouplingConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintList_FindAllExperiments_keyval0(Nmrc_JCouplingConstraintList self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintList_FindAllExperiments_keyval1(Nmrc_JCouplingConstraintList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintList_FindAllExperiments_keyval2(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintList_FindAllExperiments_keyval3(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_JCouplingConstraintList self
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
extern ApiSet Nmrc_JCouplingConstraintList_FindAllExperiments_keyval4(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintList_FindAllMeasurementLists(Nmrc_JCouplingConstraintList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_JCouplingConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintList_FindAllMeasurementLists_keyval0(Nmrc_JCouplingConstraintList self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintList_FindAllMeasurementLists_keyval1(Nmrc_JCouplingConstraintList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintList_FindAllMeasurementLists_keyval2(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintList_FindAllMeasurementLists_keyval3(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_JCouplingConstraintList self
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
extern ApiSet Nmrc_JCouplingConstraintList_FindAllMeasurementLists_keyval4(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintList_FindAllNmrConstraintListValidations(Nmrc_JCouplingConstraintList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintList_FindAllNmrConstraintListValidations_keyval0(Nmrc_JCouplingConstraintList self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintList_FindAllNmrConstraintListValidations_keyval1(Nmrc_JCouplingConstraintList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintList_FindAllNmrConstraintListValidations_keyval2(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintList_FindAllNmrConstraintListValidations_keyval3(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_JCouplingConstraintList self
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
extern ApiSet Nmrc_JCouplingConstraintList_FindAllNmrConstraintListValidations_keyval4(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintList_FindAllNmrSimEnergyTerms(Nmrc_JCouplingConstraintList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintList_FindAllNmrSimEnergyTerms_keyval0(Nmrc_JCouplingConstraintList self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintList_FindAllNmrSimEnergyTerms_keyval1(Nmrc_JCouplingConstraintList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintList_FindAllNmrSimEnergyTerms_keyval2(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_JCouplingConstraintList_FindAllNmrSimEnergyTerms_keyval3(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_JCouplingConstraintList self
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
extern ApiSet Nmrc_JCouplingConstraintList_FindAllNmrSimEnergyTerms_keyval4(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_JCouplingConstraintList_FindFirstApplicationData(Nmrc_JCouplingConstraintList self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_JCouplingConstraintList_FindFirstApplicationData_keyval0(Nmrc_JCouplingConstraintList self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_JCouplingConstraintList_FindFirstApplicationData_keyval1(Nmrc_JCouplingConstraintList self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_JCouplingConstraintList_FindFirstApplicationData_keyval2(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_JCouplingConstraintList_FindFirstApplicationData_keyval3(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintList self
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
extern Impl_ApplicationData Nmrc_JCouplingConstraintList_FindFirstApplicationData_keyval4(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.JCouplingConstraintList.constraints

child link to 
class JCouplingConstraint
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_JCouplingConstraint Nmrc_JCouplingConstraintList_FindFirstConstraint(Nmrc_JCouplingConstraintList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.JCouplingConstraintList.constraints

child link to 
class JCouplingConstraint
  @param  Nmrc_JCouplingConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_JCouplingConstraint Nmrc_JCouplingConstraintList_FindFirstConstraint_keyval0(Nmrc_JCouplingConstraintList self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.JCouplingConstraintList.constraints

child link to 
class JCouplingConstraint
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_JCouplingConstraint Nmrc_JCouplingConstraintList_FindFirstConstraint_keyval1(Nmrc_JCouplingConstraintList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.JCouplingConstraintList.constraints

child link to 
class JCouplingConstraint
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_JCouplingConstraint Nmrc_JCouplingConstraintList_FindFirstConstraint_keyval2(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.JCouplingConstraintList.constraints

child link to 
class JCouplingConstraint
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_JCouplingConstraint Nmrc_JCouplingConstraintList_FindFirstConstraint_keyval3(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.JCouplingConstraintList.constraints

child link to 
class JCouplingConstraint
  @param  Nmrc_JCouplingConstraintList self
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
extern Nmrc_JCouplingConstraint Nmrc_JCouplingConstraintList_FindFirstConstraint_keyval4(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmrc_JCouplingConstraintList_FindFirstExperiment(Nmrc_JCouplingConstraintList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_JCouplingConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmrc_JCouplingConstraintList_FindFirstExperiment_keyval0(Nmrc_JCouplingConstraintList self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmrc_JCouplingConstraintList_FindFirstExperiment_keyval1(Nmrc_JCouplingConstraintList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmrc_JCouplingConstraintList_FindFirstExperiment_keyval2(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmrc_JCouplingConstraintList_FindFirstExperiment_keyval3(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_JCouplingConstraintList self
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
extern Nmr_Experiment Nmrc_JCouplingConstraintList_FindFirstExperiment_keyval4(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nmrc_JCouplingConstraintList_FindFirstMeasurementList(Nmrc_JCouplingConstraintList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_JCouplingConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nmrc_JCouplingConstraintList_FindFirstMeasurementList_keyval0(Nmrc_JCouplingConstraintList self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nmrc_JCouplingConstraintList_FindFirstMeasurementList_keyval1(Nmrc_JCouplingConstraintList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nmrc_JCouplingConstraintList_FindFirstMeasurementList_keyval2(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nmrc_JCouplingConstraintList_FindFirstMeasurementList_keyval3(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_JCouplingConstraintList self
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
extern Nmr_AbstractMeasurementList Nmrc_JCouplingConstraintList_FindFirstMeasurementList_keyval4(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintListValidation Nmrc_JCouplingConstraintList_FindFirstNmrConstraintListValidation(Nmrc_JCouplingConstraintList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintListValidation Nmrc_JCouplingConstraintList_FindFirstNmrConstraintListValidation_keyval0(Nmrc_JCouplingConstraintList self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintListValidation Nmrc_JCouplingConstraintList_FindFirstNmrConstraintListValidation_keyval1(Nmrc_JCouplingConstraintList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintListValidation Nmrc_JCouplingConstraintList_FindFirstNmrConstraintListValidation_keyval2(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintListValidation Nmrc_JCouplingConstraintList_FindFirstNmrConstraintListValidation_keyval3(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_JCouplingConstraintList self
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
extern Vald_NmrConstraintListValidation Nmrc_JCouplingConstraintList_FindFirstNmrConstraintListValidation_keyval4(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nmrc_JCouplingConstraintList_FindFirstNmrSimEnergyTerm(Nmrc_JCouplingConstraintList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nmrc_JCouplingConstraintList_FindFirstNmrSimEnergyTerm_keyval0(Nmrc_JCouplingConstraintList self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nmrc_JCouplingConstraintList_FindFirstNmrSimEnergyTerm_keyval1(Nmrc_JCouplingConstraintList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nmrc_JCouplingConstraintList_FindFirstNmrSimEnergyTerm_keyval2(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nmrc_JCouplingConstraintList_FindFirstNmrSimEnergyTerm_keyval3(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_JCouplingConstraintList self
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
extern Nsim_NmrSimEnergyTerm Nmrc_JCouplingConstraintList_FindFirstNmrSimEnergyTerm_keyval4(Nmrc_JCouplingConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrConstraint.JCouplingConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmrc_JCouplingConstraintList_Get(Nmrc_JCouplingConstraintList self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern Acco_AccessObject Nmrc_JCouplingConstraintList_GetAccess(Nmrc_JCouplingConstraintList self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern Acco_AccessObject Nmrc_JCouplingConstraintList_GetActiveAccess(Nmrc_JCouplingConstraintList self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_JCouplingConstraintList_GetApplicationData(Nmrc_JCouplingConstraintList self);

/**
  GetByKey for ccp.nmr.NmrConstraint.JCouplingConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmrc_JCouplingConstraintList Nmrc_JCouplingConstraintList_GetByKey(Nmrc_JCouplingConstraintList self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_JCouplingConstraintList_GetClassName(Nmrc_JCouplingConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.conditionState

COndition 
set that COnstraint list refers to
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern Nmrc_ConditionState Nmrc_JCouplingConstraintList_GetConditionState(Nmrc_JCouplingConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.JCouplingConstraintList.constraints

child 
link to class JCouplingConstraint
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_JCouplingConstraintList_GetConstraints(Nmrc_JCouplingConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.details

free text 
containing notes, descriptive remarks, etc.
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_JCouplingConstraintList_GetDetails(Nmrc_JCouplingConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experimentSerials

Serials 
for experiments that have contributed to Constraints in constraintList. 
Serve as key for derived link experiments
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_JCouplingConstraintList_GetExperimentSerials(Nmrc_JCouplingConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_JCouplingConstraintList_GetExperiments(Nmrc_JCouplingConstraintList self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_JCouplingConstraintList_GetFieldNames(Nmrc_JCouplingConstraintList self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern ApiBoolean Nmrc_JCouplingConstraintList_GetInConstructor(Nmrc_JCouplingConstraintList self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern ApiBoolean Nmrc_JCouplingConstraintList_GetIsDeleted(Nmrc_JCouplingConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measureListSerials

Serials 
for measurementLists that have contributed to Constraints in 
constraintList. Serve as key for derived link measurementLists.
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_JCouplingConstraintList_GetMeasureListSerials(Nmrc_JCouplingConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_JCouplingConstraintList_GetMeasurementLists(Nmrc_JCouplingConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.method

Default 
Method used for calculating Constraints in ConstraintList. May be 
overwritten by Method for individual Constraints.
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern Meth_Method Nmrc_JCouplingConstraintList_GetMethod(Nmrc_JCouplingConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.name

Name of 
constraint list. Serves as a descriptive addition to the serial number.
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_JCouplingConstraintList_GetName(Nmrc_JCouplingConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_JCouplingConstraintList_GetNmrConstraintListValidations(Nmrc_JCouplingConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintStore

parent 
link
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern Nmrc_NmrConstraintStore Nmrc_JCouplingConstraintList_GetNmrConstraintStore(Nmrc_JCouplingConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_JCouplingConstraintList_GetNmrSimEnergyTerms(Nmrc_JCouplingConstraintList self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_JCouplingConstraintList_GetPackageName(Nmrc_JCouplingConstraintList self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_JCouplingConstraintList_GetPackageShortName(Nmrc_JCouplingConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.parent

link to 
parent object - synonym for nmrConstraintStore
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern Nmrc_NmrConstraintStore Nmrc_JCouplingConstraintList_GetParent(Nmrc_JCouplingConstraintList self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_JCouplingConstraintList_GetQualifiedName(Nmrc_JCouplingConstraintList self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern Impl_MemopsRoot Nmrc_JCouplingConstraintList_GetRoot(Nmrc_JCouplingConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.serial

The serial 
number is the key for class AbstractConstraintList and together with the 
parent object serves as a unique identifier for the 
AbstractConstraintList.
Serial numbers are generated by the API. Serial 
numbers of deleted objects are not reused.
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern ApiInteger Nmrc_JCouplingConstraintList_GetSerial(Nmrc_JCouplingConstraintList self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern Impl_TopObject Nmrc_JCouplingConstraintList_GetTopObject(Nmrc_JCouplingConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.unit

Measurement 
unit of listed constraints. Should be made into an enumeration.
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_JCouplingConstraintList_GetUnit(Nmrc_JCouplingConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.usedForCalculation

Determines 
if the ConstraintList was (or should be) used for structure calculation.
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern ApiBoolean Nmrc_JCouplingConstraintList_GetUsedForCalculation(Nmrc_JCouplingConstraintList self);

/**
  Constructor for ccp.nmr.NmrConstraint.JCouplingConstraintList
  @param  Nmrc_NmrConstraintStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrc_JCouplingConstraintList Nmrc_JCouplingConstraintList_Init(Nmrc_NmrConstraintStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrConstraint.JCouplingConstraintList
  @param  Nmrc_NmrConstraintStore parent
  @returns  the new object
**/
extern Nmrc_JCouplingConstraintList Nmrc_JCouplingConstraintList_Init_reqd(Nmrc_NmrConstraintStore parent);

/**
  Factory function to create ccp.nmr.NmrConstraint.JCouplingConstraint
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrc_JCouplingConstraint Nmrc_JCouplingConstraintList_NewJCouplingConstraint(Nmrc_JCouplingConstraintList self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.NmrConstraint.JCouplingConstraint
  @param  Nmrc_JCouplingConstraintList self
  @returns  the new object
**/
extern Nmrc_JCouplingConstraint Nmrc_JCouplingConstraintList_NewJCouplingConstraint_reqd(Nmrc_JCouplingConstraintList self);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintList self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_JCouplingConstraintList_RemoveApplicationData(Nmrc_JCouplingConstraintList self, Impl_ApplicationData value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_JCouplingConstraintList self
  @param  Nmr_Experiment value
**/
extern void *Nmrc_JCouplingConstraintList_RemoveExperiment(Nmrc_JCouplingConstraintList self, Nmr_Experiment value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experimentSerials

Serials 
for experiments that have contributed to Constraints in constraintList. 
Serve as key for derived link experiments
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiInteger value
**/
extern void *Nmrc_JCouplingConstraintList_RemoveExperimentSerial(Nmrc_JCouplingConstraintList self, ApiInteger value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measureListSerials

Serials 
for measurementLists that have contributed to Constraints in 
constraintList. Serve as key for derived link measurementLists.
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiInteger value
**/
extern void *Nmrc_JCouplingConstraintList_RemoveMeasureListSerial(Nmrc_JCouplingConstraintList self, ApiInteger value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_JCouplingConstraintList self
  @param  Nmr_AbstractMeasurementList value
**/
extern void *Nmrc_JCouplingConstraintList_RemoveMeasurementList(Nmrc_JCouplingConstraintList self, Nmr_AbstractMeasurementList value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @param  Vald_NmrConstraintListValidation value
**/
extern void *Nmrc_JCouplingConstraintList_RemoveNmrConstraintListValidation(Nmrc_JCouplingConstraintList self, Vald_NmrConstraintListValidation value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @param  Nsim_NmrSimEnergyTerm value
**/
extern void *Nmrc_JCouplingConstraintList_RemoveNmrSimEnergyTerm(Nmrc_JCouplingConstraintList self, Nsim_NmrSimEnergyTerm value);

/**
  SetAttr for ccp.nmr.NmrConstraint.JCouplingConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmrc_JCouplingConstraintList_Set(Nmrc_JCouplingConstraintList self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_JCouplingConstraintList self
  @param  Acco_AccessObject value
**/
extern void *Nmrc_JCouplingConstraintList_SetAccess(Nmrc_JCouplingConstraintList self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiList values
**/
extern void *Nmrc_JCouplingConstraintList_SetApplicationData(Nmrc_JCouplingConstraintList self, ApiList values);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.conditionState

COndition 
set that COnstraint list refers to
  @param  Nmrc_JCouplingConstraintList self
  @param  Nmrc_ConditionState value
**/
extern void *Nmrc_JCouplingConstraintList_SetConditionState(Nmrc_JCouplingConstraintList self, Nmrc_ConditionState value);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.details

free text 
containing notes, descriptive remarks, etc.
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiString value
**/
extern void *Nmrc_JCouplingConstraintList_SetDetails(Nmrc_JCouplingConstraintList self, ApiString value);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experimentSerials

Serials 
for experiments that have contributed to Constraints in constraintList. 
Serve as key for derived link experiments
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_JCouplingConstraintList_SetExperimentSerials(Nmrc_JCouplingConstraintList self, ApiSet values);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_JCouplingConstraintList_SetExperiments(Nmrc_JCouplingConstraintList self, ApiSet values);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measureListSerials

Serials 
for measurementLists that have contributed to Constraints in 
constraintList. Serve as key for derived link measurementLists.
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_JCouplingConstraintList_SetMeasureListSerials(Nmrc_JCouplingConstraintList self, ApiSet values);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_JCouplingConstraintList_SetMeasurementLists(Nmrc_JCouplingConstraintList self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.method

Default 
Method used for calculating Constraints in ConstraintList. May be 
overwritten by Method for individual Constraints.
  @param  Nmrc_JCouplingConstraintList self
  @param  Meth_Method value
**/
extern void *Nmrc_JCouplingConstraintList_SetMethod(Nmrc_JCouplingConstraintList self, Meth_Method value);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.name

Name of 
constraint list. Serves as a descriptive addition to the serial number.
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiString value
**/
extern void *Nmrc_JCouplingConstraintList_SetName(Nmrc_JCouplingConstraintList self, ApiString value);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_JCouplingConstraintList_SetNmrConstraintListValidations(Nmrc_JCouplingConstraintList self, ApiSet values);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_JCouplingConstraintList_SetNmrSimEnergyTerms(Nmrc_JCouplingConstraintList self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.serial

The serial 
number is the key for class AbstractConstraintList and together with the 
parent object serves as a unique identifier for the 
AbstractConstraintList.
Serial numbers are generated by the API. Serial 
numbers of deleted objects are not reused.
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiInteger value
**/
extern void *Nmrc_JCouplingConstraintList_SetSerial(Nmrc_JCouplingConstraintList self, ApiInteger value);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.unit

Measurement 
unit of listed constraints. Should be made into an enumeration.
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiString value
**/
extern void *Nmrc_JCouplingConstraintList_SetUnit(Nmrc_JCouplingConstraintList self, ApiString value);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.usedForCalculation

Determines 
if the ConstraintList was (or should be) used for structure calculation.
  @param  Nmrc_JCouplingConstraintList self
  @param  ApiBoolean value
**/
extern void *Nmrc_JCouplingConstraintList_SetUsedForCalculation(Nmrc_JCouplingConstraintList self, ApiBoolean value);

/**
  Sorted for 
ccp.nmr.NmrConstraint.JCouplingConstraintList.constraints

child link to 
class JCouplingConstraint
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_JCouplingConstraintList_SortedConstraints(Nmrc_JCouplingConstraintList self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_JCouplingConstraintList_SortedExperiments(Nmrc_JCouplingConstraintList self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_JCouplingConstraintList_SortedMeasurementLists(Nmrc_JCouplingConstraintList self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_JCouplingConstraintList_SortedNmrConstraintListValidations(Nmrc_JCouplingConstraintList self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_JCouplingConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_JCouplingConstraintList_SortedNmrSimEnergyTerms(Nmrc_JCouplingConstraintList self);

#endif /* __incl__ccp_api_nmr_NmrConstraint_JCouplingConstraintList_h__ */
