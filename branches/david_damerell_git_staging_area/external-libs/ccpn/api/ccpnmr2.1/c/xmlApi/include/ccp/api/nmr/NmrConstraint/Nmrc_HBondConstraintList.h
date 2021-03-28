
#ifndef __incl__ccp_api_nmr_NmrConstraint_HBondConstraintList_h__
#define __incl__ccp_api_nmr_NmrConstraint_HBondConstraintList_h__

#include "ccp.h"

/*
  List of hydrogen bond constraints.
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_HBondConstraintList self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_HBondConstraintList_AddApplicationData(Nmrc_HBondConstraintList self, Impl_ApplicationData value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_HBondConstraintList self
  @param  Nmr_Experiment value
**/
extern void *Nmrc_HBondConstraintList_AddExperiment(Nmrc_HBondConstraintList self, Nmr_Experiment value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experimentSerials

Serials 
for experiments that have contributed to Constraints in constraintList. 
Serve as key for derived link experiments
  @param  Nmrc_HBondConstraintList self
  @param  ApiInteger value
**/
extern void *Nmrc_HBondConstraintList_AddExperimentSerial(Nmrc_HBondConstraintList self, ApiInteger value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measureListSerials

Serials 
for measurementLists that have contributed to Constraints in 
constraintList. Serve as key for derived link measurementLists.
  @param  Nmrc_HBondConstraintList self
  @param  ApiInteger value
**/
extern void *Nmrc_HBondConstraintList_AddMeasureListSerial(Nmrc_HBondConstraintList self, ApiInteger value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_HBondConstraintList self
  @param  Nmr_AbstractMeasurementList value
**/
extern void *Nmrc_HBondConstraintList_AddMeasurementList(Nmrc_HBondConstraintList self, Nmr_AbstractMeasurementList value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_HBondConstraintList self
  @param  Vald_NmrConstraintListValidation value
**/
extern void *Nmrc_HBondConstraintList_AddNmrConstraintListValidation(Nmrc_HBondConstraintList self, Vald_NmrConstraintListValidation value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_HBondConstraintList self
  @param  Nsim_NmrSimEnergyTerm value
**/
extern void *Nmrc_HBondConstraintList_AddNmrSimEnergyTerm(Nmrc_HBondConstraintList self, Nsim_NmrSimEnergyTerm value);

/**
  CheckAllValid for ccp.nmr.NmrConstraint.HBondConstraintList
  @param  Nmrc_HBondConstraintList self
  @param  ApiBoolean complete
**/
extern void *Nmrc_HBondConstraintList_CheckAllValid(Nmrc_HBondConstraintList self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrConstraint.HBondConstraintList
  @param  Nmrc_HBondConstraintList self
  @param  ApiBoolean complete
**/
extern void *Nmrc_HBondConstraintList_CheckValid(Nmrc_HBondConstraintList self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_HBondConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_HBondConstraintList_FindAllApplicationData(Nmrc_HBondConstraintList self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_HBondConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_HBondConstraintList_FindAllApplicationData_keyval0(Nmrc_HBondConstraintList self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_HBondConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_HBondConstraintList_FindAllApplicationData_keyval1(Nmrc_HBondConstraintList self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_HBondConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_HBondConstraintList_FindAllApplicationData_keyval2(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_HBondConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_HBondConstraintList_FindAllApplicationData_keyval3(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_HBondConstraintList self
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
extern ApiList Nmrc_HBondConstraintList_FindAllApplicationData_keyval4(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.NmrConstraint.HBondConstraintList.constraints

child 
link to class HBondConstraint
  @param  Nmrc_HBondConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_HBondConstraintList_FindAllConstraints(Nmrc_HBondConstraintList self, ApiMap conditions);

/**
  FindAll for ccp.nmr.NmrConstraint.HBondConstraintList.constraints

child 
link to class HBondConstraint
  @param  Nmrc_HBondConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_HBondConstraintList_FindAllConstraints_keyval0(Nmrc_HBondConstraintList self);

/**
  FindAll for ccp.nmr.NmrConstraint.HBondConstraintList.constraints

child 
link to class HBondConstraint
  @param  Nmrc_HBondConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_HBondConstraintList_FindAllConstraints_keyval1(Nmrc_HBondConstraintList self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.NmrConstraint.HBondConstraintList.constraints

child 
link to class HBondConstraint
  @param  Nmrc_HBondConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_HBondConstraintList_FindAllConstraints_keyval2(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.NmrConstraint.HBondConstraintList.constraints

child 
link to class HBondConstraint
  @param  Nmrc_HBondConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_HBondConstraintList_FindAllConstraints_keyval3(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.NmrConstraint.HBondConstraintList.constraints

child 
link to class HBondConstraint
  @param  Nmrc_HBondConstraintList self
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
extern ApiSet Nmrc_HBondConstraintList_FindAllConstraints_keyval4(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_HBondConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_HBondConstraintList_FindAllExperiments(Nmrc_HBondConstraintList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_HBondConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_HBondConstraintList_FindAllExperiments_keyval0(Nmrc_HBondConstraintList self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_HBondConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_HBondConstraintList_FindAllExperiments_keyval1(Nmrc_HBondConstraintList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_HBondConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_HBondConstraintList_FindAllExperiments_keyval2(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_HBondConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_HBondConstraintList_FindAllExperiments_keyval3(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_HBondConstraintList self
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
extern ApiSet Nmrc_HBondConstraintList_FindAllExperiments_keyval4(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_HBondConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_HBondConstraintList_FindAllMeasurementLists(Nmrc_HBondConstraintList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_HBondConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_HBondConstraintList_FindAllMeasurementLists_keyval0(Nmrc_HBondConstraintList self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_HBondConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_HBondConstraintList_FindAllMeasurementLists_keyval1(Nmrc_HBondConstraintList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_HBondConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_HBondConstraintList_FindAllMeasurementLists_keyval2(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_HBondConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_HBondConstraintList_FindAllMeasurementLists_keyval3(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_HBondConstraintList self
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
extern ApiSet Nmrc_HBondConstraintList_FindAllMeasurementLists_keyval4(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_HBondConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_HBondConstraintList_FindAllNmrConstraintListValidations(Nmrc_HBondConstraintList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_HBondConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_HBondConstraintList_FindAllNmrConstraintListValidations_keyval0(Nmrc_HBondConstraintList self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_HBondConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_HBondConstraintList_FindAllNmrConstraintListValidations_keyval1(Nmrc_HBondConstraintList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_HBondConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_HBondConstraintList_FindAllNmrConstraintListValidations_keyval2(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_HBondConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_HBondConstraintList_FindAllNmrConstraintListValidations_keyval3(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_HBondConstraintList self
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
extern ApiSet Nmrc_HBondConstraintList_FindAllNmrConstraintListValidations_keyval4(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_HBondConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_HBondConstraintList_FindAllNmrSimEnergyTerms(Nmrc_HBondConstraintList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_HBondConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_HBondConstraintList_FindAllNmrSimEnergyTerms_keyval0(Nmrc_HBondConstraintList self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_HBondConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_HBondConstraintList_FindAllNmrSimEnergyTerms_keyval1(Nmrc_HBondConstraintList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_HBondConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_HBondConstraintList_FindAllNmrSimEnergyTerms_keyval2(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_HBondConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_HBondConstraintList_FindAllNmrSimEnergyTerms_keyval3(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_HBondConstraintList self
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
extern ApiSet Nmrc_HBondConstraintList_FindAllNmrSimEnergyTerms_keyval4(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_HBondConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_HBondConstraintList_FindFirstApplicationData(Nmrc_HBondConstraintList self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_HBondConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_HBondConstraintList_FindFirstApplicationData_keyval0(Nmrc_HBondConstraintList self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_HBondConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_HBondConstraintList_FindFirstApplicationData_keyval1(Nmrc_HBondConstraintList self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_HBondConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_HBondConstraintList_FindFirstApplicationData_keyval2(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_HBondConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_HBondConstraintList_FindFirstApplicationData_keyval3(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_HBondConstraintList self
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
extern Impl_ApplicationData Nmrc_HBondConstraintList_FindFirstApplicationData_keyval4(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.HBondConstraintList.constraints

child link to 
class HBondConstraint
  @param  Nmrc_HBondConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_HBondConstraint Nmrc_HBondConstraintList_FindFirstConstraint(Nmrc_HBondConstraintList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.HBondConstraintList.constraints

child link to 
class HBondConstraint
  @param  Nmrc_HBondConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_HBondConstraint Nmrc_HBondConstraintList_FindFirstConstraint_keyval0(Nmrc_HBondConstraintList self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.HBondConstraintList.constraints

child link to 
class HBondConstraint
  @param  Nmrc_HBondConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_HBondConstraint Nmrc_HBondConstraintList_FindFirstConstraint_keyval1(Nmrc_HBondConstraintList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.HBondConstraintList.constraints

child link to 
class HBondConstraint
  @param  Nmrc_HBondConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_HBondConstraint Nmrc_HBondConstraintList_FindFirstConstraint_keyval2(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.HBondConstraintList.constraints

child link to 
class HBondConstraint
  @param  Nmrc_HBondConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_HBondConstraint Nmrc_HBondConstraintList_FindFirstConstraint_keyval3(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.HBondConstraintList.constraints

child link to 
class HBondConstraint
  @param  Nmrc_HBondConstraintList self
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
extern Nmrc_HBondConstraint Nmrc_HBondConstraintList_FindFirstConstraint_keyval4(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_HBondConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmrc_HBondConstraintList_FindFirstExperiment(Nmrc_HBondConstraintList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_HBondConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmrc_HBondConstraintList_FindFirstExperiment_keyval0(Nmrc_HBondConstraintList self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_HBondConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmrc_HBondConstraintList_FindFirstExperiment_keyval1(Nmrc_HBondConstraintList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_HBondConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmrc_HBondConstraintList_FindFirstExperiment_keyval2(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_HBondConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmrc_HBondConstraintList_FindFirstExperiment_keyval3(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_HBondConstraintList self
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
extern Nmr_Experiment Nmrc_HBondConstraintList_FindFirstExperiment_keyval4(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_HBondConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nmrc_HBondConstraintList_FindFirstMeasurementList(Nmrc_HBondConstraintList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_HBondConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nmrc_HBondConstraintList_FindFirstMeasurementList_keyval0(Nmrc_HBondConstraintList self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_HBondConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nmrc_HBondConstraintList_FindFirstMeasurementList_keyval1(Nmrc_HBondConstraintList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_HBondConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nmrc_HBondConstraintList_FindFirstMeasurementList_keyval2(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_HBondConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nmrc_HBondConstraintList_FindFirstMeasurementList_keyval3(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_HBondConstraintList self
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
extern Nmr_AbstractMeasurementList Nmrc_HBondConstraintList_FindFirstMeasurementList_keyval4(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_HBondConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintListValidation Nmrc_HBondConstraintList_FindFirstNmrConstraintListValidation(Nmrc_HBondConstraintList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_HBondConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintListValidation Nmrc_HBondConstraintList_FindFirstNmrConstraintListValidation_keyval0(Nmrc_HBondConstraintList self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_HBondConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintListValidation Nmrc_HBondConstraintList_FindFirstNmrConstraintListValidation_keyval1(Nmrc_HBondConstraintList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_HBondConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintListValidation Nmrc_HBondConstraintList_FindFirstNmrConstraintListValidation_keyval2(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_HBondConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintListValidation Nmrc_HBondConstraintList_FindFirstNmrConstraintListValidation_keyval3(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_HBondConstraintList self
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
extern Vald_NmrConstraintListValidation Nmrc_HBondConstraintList_FindFirstNmrConstraintListValidation_keyval4(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_HBondConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nmrc_HBondConstraintList_FindFirstNmrSimEnergyTerm(Nmrc_HBondConstraintList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_HBondConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nmrc_HBondConstraintList_FindFirstNmrSimEnergyTerm_keyval0(Nmrc_HBondConstraintList self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_HBondConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nmrc_HBondConstraintList_FindFirstNmrSimEnergyTerm_keyval1(Nmrc_HBondConstraintList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_HBondConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nmrc_HBondConstraintList_FindFirstNmrSimEnergyTerm_keyval2(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_HBondConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nmrc_HBondConstraintList_FindFirstNmrSimEnergyTerm_keyval3(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_HBondConstraintList self
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
extern Nsim_NmrSimEnergyTerm Nmrc_HBondConstraintList_FindFirstNmrSimEnergyTerm_keyval4(Nmrc_HBondConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrConstraint.HBondConstraintList
  @param  Nmrc_HBondConstraintList self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmrc_HBondConstraintList_Get(Nmrc_HBondConstraintList self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern Acco_AccessObject Nmrc_HBondConstraintList_GetAccess(Nmrc_HBondConstraintList self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern Acco_AccessObject Nmrc_HBondConstraintList_GetActiveAccess(Nmrc_HBondConstraintList self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_HBondConstraintList_GetApplicationData(Nmrc_HBondConstraintList self);

/**
  GetByKey for ccp.nmr.NmrConstraint.HBondConstraintList
  @param  Nmrc_HBondConstraintList self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmrc_HBondConstraintList Nmrc_HBondConstraintList_GetByKey(Nmrc_HBondConstraintList self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_HBondConstraintList_GetClassName(Nmrc_HBondConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.conditionState

COndition 
set that COnstraint list refers to
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern Nmrc_ConditionState Nmrc_HBondConstraintList_GetConditionState(Nmrc_HBondConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.HBondConstraintList.constraints

child 
link to class HBondConstraint
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_HBondConstraintList_GetConstraints(Nmrc_HBondConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.details

free text 
containing notes, descriptive remarks, etc.
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_HBondConstraintList_GetDetails(Nmrc_HBondConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experimentSerials

Serials 
for experiments that have contributed to Constraints in constraintList. 
Serve as key for derived link experiments
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_HBondConstraintList_GetExperimentSerials(Nmrc_HBondConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_HBondConstraintList_GetExperiments(Nmrc_HBondConstraintList self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_HBondConstraintList_GetFieldNames(Nmrc_HBondConstraintList self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern ApiBoolean Nmrc_HBondConstraintList_GetInConstructor(Nmrc_HBondConstraintList self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern ApiBoolean Nmrc_HBondConstraintList_GetIsDeleted(Nmrc_HBondConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measureListSerials

Serials 
for measurementLists that have contributed to Constraints in 
constraintList. Serve as key for derived link measurementLists.
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_HBondConstraintList_GetMeasureListSerials(Nmrc_HBondConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_HBondConstraintList_GetMeasurementLists(Nmrc_HBondConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.method

Default 
Method used for calculating Constraints in ConstraintList. May be 
overwritten by Method for individual Constraints.
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern Meth_Method Nmrc_HBondConstraintList_GetMethod(Nmrc_HBondConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.name

Name of 
constraint list. Serves as a descriptive addition to the serial number.
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_HBondConstraintList_GetName(Nmrc_HBondConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_HBondConstraintList_GetNmrConstraintListValidations(Nmrc_HBondConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintStore

parent 
link
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern Nmrc_NmrConstraintStore Nmrc_HBondConstraintList_GetNmrConstraintStore(Nmrc_HBondConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_HBondConstraintList_GetNmrSimEnergyTerms(Nmrc_HBondConstraintList self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_HBondConstraintList_GetPackageName(Nmrc_HBondConstraintList self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_HBondConstraintList_GetPackageShortName(Nmrc_HBondConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.parent

link to 
parent object - synonym for nmrConstraintStore
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern Nmrc_NmrConstraintStore Nmrc_HBondConstraintList_GetParent(Nmrc_HBondConstraintList self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_HBondConstraintList_GetQualifiedName(Nmrc_HBondConstraintList self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern Impl_MemopsRoot Nmrc_HBondConstraintList_GetRoot(Nmrc_HBondConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.serial

The serial 
number is the key for class AbstractConstraintList and together with the 
parent object serves as a unique identifier for the 
AbstractConstraintList.
Serial numbers are generated by the API. Serial 
numbers of deleted objects are not reused.
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern ApiInteger Nmrc_HBondConstraintList_GetSerial(Nmrc_HBondConstraintList self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern Impl_TopObject Nmrc_HBondConstraintList_GetTopObject(Nmrc_HBondConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.unit

Measurement 
unit of listed constraints. Should be made into an enumeration.
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_HBondConstraintList_GetUnit(Nmrc_HBondConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.usedForCalculation

Determines 
if the ConstraintList was (or should be) used for structure calculation.
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern ApiBoolean Nmrc_HBondConstraintList_GetUsedForCalculation(Nmrc_HBondConstraintList self);

/**
  Constructor for ccp.nmr.NmrConstraint.HBondConstraintList
  @param  Nmrc_NmrConstraintStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrc_HBondConstraintList Nmrc_HBondConstraintList_Init(Nmrc_NmrConstraintStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrConstraint.HBondConstraintList
  @param  Nmrc_NmrConstraintStore parent
  @returns  the new object
**/
extern Nmrc_HBondConstraintList Nmrc_HBondConstraintList_Init_reqd(Nmrc_NmrConstraintStore parent);

/**
  Factory function to create ccp.nmr.NmrConstraint.HBondConstraint
  @param  Nmrc_HBondConstraintList self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrc_HBondConstraint Nmrc_HBondConstraintList_NewHBondConstraint(Nmrc_HBondConstraintList self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.NmrConstraint.HBondConstraint
  @param  Nmrc_HBondConstraintList self
  @returns  the new object
**/
extern Nmrc_HBondConstraint Nmrc_HBondConstraintList_NewHBondConstraint_reqd(Nmrc_HBondConstraintList self);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_HBondConstraintList self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_HBondConstraintList_RemoveApplicationData(Nmrc_HBondConstraintList self, Impl_ApplicationData value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_HBondConstraintList self
  @param  Nmr_Experiment value
**/
extern void *Nmrc_HBondConstraintList_RemoveExperiment(Nmrc_HBondConstraintList self, Nmr_Experiment value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experimentSerials

Serials 
for experiments that have contributed to Constraints in constraintList. 
Serve as key for derived link experiments
  @param  Nmrc_HBondConstraintList self
  @param  ApiInteger value
**/
extern void *Nmrc_HBondConstraintList_RemoveExperimentSerial(Nmrc_HBondConstraintList self, ApiInteger value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measureListSerials

Serials 
for measurementLists that have contributed to Constraints in 
constraintList. Serve as key for derived link measurementLists.
  @param  Nmrc_HBondConstraintList self
  @param  ApiInteger value
**/
extern void *Nmrc_HBondConstraintList_RemoveMeasureListSerial(Nmrc_HBondConstraintList self, ApiInteger value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_HBondConstraintList self
  @param  Nmr_AbstractMeasurementList value
**/
extern void *Nmrc_HBondConstraintList_RemoveMeasurementList(Nmrc_HBondConstraintList self, Nmr_AbstractMeasurementList value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_HBondConstraintList self
  @param  Vald_NmrConstraintListValidation value
**/
extern void *Nmrc_HBondConstraintList_RemoveNmrConstraintListValidation(Nmrc_HBondConstraintList self, Vald_NmrConstraintListValidation value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_HBondConstraintList self
  @param  Nsim_NmrSimEnergyTerm value
**/
extern void *Nmrc_HBondConstraintList_RemoveNmrSimEnergyTerm(Nmrc_HBondConstraintList self, Nsim_NmrSimEnergyTerm value);

/**
  SetAttr for ccp.nmr.NmrConstraint.HBondConstraintList
  @param  Nmrc_HBondConstraintList self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmrc_HBondConstraintList_Set(Nmrc_HBondConstraintList self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_HBondConstraintList self
  @param  Acco_AccessObject value
**/
extern void *Nmrc_HBondConstraintList_SetAccess(Nmrc_HBondConstraintList self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_HBondConstraintList self
  @param  ApiList values
**/
extern void *Nmrc_HBondConstraintList_SetApplicationData(Nmrc_HBondConstraintList self, ApiList values);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.conditionState

COndition 
set that COnstraint list refers to
  @param  Nmrc_HBondConstraintList self
  @param  Nmrc_ConditionState value
**/
extern void *Nmrc_HBondConstraintList_SetConditionState(Nmrc_HBondConstraintList self, Nmrc_ConditionState value);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.details

free text 
containing notes, descriptive remarks, etc.
  @param  Nmrc_HBondConstraintList self
  @param  ApiString value
**/
extern void *Nmrc_HBondConstraintList_SetDetails(Nmrc_HBondConstraintList self, ApiString value);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experimentSerials

Serials 
for experiments that have contributed to Constraints in constraintList. 
Serve as key for derived link experiments
  @param  Nmrc_HBondConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_HBondConstraintList_SetExperimentSerials(Nmrc_HBondConstraintList self, ApiSet values);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_HBondConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_HBondConstraintList_SetExperiments(Nmrc_HBondConstraintList self, ApiSet values);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measureListSerials

Serials 
for measurementLists that have contributed to Constraints in 
constraintList. Serve as key for derived link measurementLists.
  @param  Nmrc_HBondConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_HBondConstraintList_SetMeasureListSerials(Nmrc_HBondConstraintList self, ApiSet values);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_HBondConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_HBondConstraintList_SetMeasurementLists(Nmrc_HBondConstraintList self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.method

Default 
Method used for calculating Constraints in ConstraintList. May be 
overwritten by Method for individual Constraints.
  @param  Nmrc_HBondConstraintList self
  @param  Meth_Method value
**/
extern void *Nmrc_HBondConstraintList_SetMethod(Nmrc_HBondConstraintList self, Meth_Method value);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.name

Name of 
constraint list. Serves as a descriptive addition to the serial number.
  @param  Nmrc_HBondConstraintList self
  @param  ApiString value
**/
extern void *Nmrc_HBondConstraintList_SetName(Nmrc_HBondConstraintList self, ApiString value);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_HBondConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_HBondConstraintList_SetNmrConstraintListValidations(Nmrc_HBondConstraintList self, ApiSet values);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_HBondConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_HBondConstraintList_SetNmrSimEnergyTerms(Nmrc_HBondConstraintList self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.serial

The serial 
number is the key for class AbstractConstraintList and together with the 
parent object serves as a unique identifier for the 
AbstractConstraintList.
Serial numbers are generated by the API. Serial 
numbers of deleted objects are not reused.
  @param  Nmrc_HBondConstraintList self
  @param  ApiInteger value
**/
extern void *Nmrc_HBondConstraintList_SetSerial(Nmrc_HBondConstraintList self, ApiInteger value);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.unit

Measurement 
unit of listed constraints. Should be made into an enumeration.
  @param  Nmrc_HBondConstraintList self
  @param  ApiString value
**/
extern void *Nmrc_HBondConstraintList_SetUnit(Nmrc_HBondConstraintList self, ApiString value);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.usedForCalculation

Determines 
if the ConstraintList was (or should be) used for structure calculation.
  @param  Nmrc_HBondConstraintList self
  @param  ApiBoolean value
**/
extern void *Nmrc_HBondConstraintList_SetUsedForCalculation(Nmrc_HBondConstraintList self, ApiBoolean value);

/**
  Sorted for ccp.nmr.NmrConstraint.HBondConstraintList.constraints

child 
link to class HBondConstraint
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_HBondConstraintList_SortedConstraints(Nmrc_HBondConstraintList self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_HBondConstraintList_SortedExperiments(Nmrc_HBondConstraintList self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_HBondConstraintList_SortedMeasurementLists(Nmrc_HBondConstraintList self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_HBondConstraintList_SortedNmrConstraintListValidations(Nmrc_HBondConstraintList self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_HBondConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_HBondConstraintList_SortedNmrSimEnergyTerms(Nmrc_HBondConstraintList self);

#endif /* __incl__ccp_api_nmr_NmrConstraint_HBondConstraintList_h__ */
