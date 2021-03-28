
#ifndef __incl__ccp_api_nmr_NmrConstraint_AbstractConstraintList_h__
#define __incl__ccp_api_nmr_NmrConstraint_AbstractConstraintList_h__

#include "ccp.h"

/*
  List of constraints (of any type).
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_AbstractConstraintList self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_AbstractConstraintList_AddApplicationData(Nmrc_AbstractConstraintList self, Impl_ApplicationData value);

/**
  add function for derived link experiments
  @param  Nmrc_AbstractConstraintList self
  @param  Nmr_Experiment value
**/
extern void *Nmrc_AbstractConstraintList_AddExperiment(Nmrc_AbstractConstraintList self, Nmr_Experiment value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experimentSerials

Serials 
for experiments that have contributed to Constraints in constraintList. 
Serve as key for derived link experiments
  @param  Nmrc_AbstractConstraintList self
  @param  ApiInteger value
**/
extern void *Nmrc_AbstractConstraintList_AddExperimentSerial(Nmrc_AbstractConstraintList self, ApiInteger value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measureListSerials

Serials 
for measurementLists that have contributed to Constraints in 
constraintList. Serve as key for derived link measurementLists.
  @param  Nmrc_AbstractConstraintList self
  @param  ApiInteger value
**/
extern void *Nmrc_AbstractConstraintList_AddMeasureListSerial(Nmrc_AbstractConstraintList self, ApiInteger value);

/**
  add function for drived link measurementLists
  @param  Nmrc_AbstractConstraintList self
  @param  Nmr_AbstractMeasurementList value
**/
extern void *Nmrc_AbstractConstraintList_AddMeasurementList(Nmrc_AbstractConstraintList self, Nmr_AbstractMeasurementList value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_AbstractConstraintList self
  @param  Vald_NmrConstraintListValidation value
**/
extern void *Nmrc_AbstractConstraintList_AddNmrConstraintListValidation(Nmrc_AbstractConstraintList self, Vald_NmrConstraintListValidation value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_AbstractConstraintList self
  @param  Nsim_NmrSimEnergyTerm value
**/
extern void *Nmrc_AbstractConstraintList_AddNmrSimEnergyTerm(Nmrc_AbstractConstraintList self, Nsim_NmrSimEnergyTerm value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_AbstractConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_AbstractConstraintList_FindAllApplicationData(Nmrc_AbstractConstraintList self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_AbstractConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_AbstractConstraintList_FindAllApplicationData_keyval0(Nmrc_AbstractConstraintList self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_AbstractConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_AbstractConstraintList_FindAllApplicationData_keyval1(Nmrc_AbstractConstraintList self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_AbstractConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_AbstractConstraintList_FindAllApplicationData_keyval2(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_AbstractConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_AbstractConstraintList_FindAllApplicationData_keyval3(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_AbstractConstraintList self
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
extern ApiList Nmrc_AbstractConstraintList_FindAllApplicationData_keyval4(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.constraints

child link to 
class AbstractConstraint
  @param  Nmrc_AbstractConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_AbstractConstraintList_FindAllConstraints(Nmrc_AbstractConstraintList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.constraints

child link to 
class AbstractConstraint
  @param  Nmrc_AbstractConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_AbstractConstraintList_FindAllConstraints_keyval0(Nmrc_AbstractConstraintList self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.constraints

child link to 
class AbstractConstraint
  @param  Nmrc_AbstractConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_AbstractConstraintList_FindAllConstraints_keyval1(Nmrc_AbstractConstraintList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.constraints

child link to 
class AbstractConstraint
  @param  Nmrc_AbstractConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_AbstractConstraintList_FindAllConstraints_keyval2(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.constraints

child link to 
class AbstractConstraint
  @param  Nmrc_AbstractConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_AbstractConstraintList_FindAllConstraints_keyval3(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.constraints

child link to 
class AbstractConstraint
  @param  Nmrc_AbstractConstraintList self
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
extern ApiSet Nmrc_AbstractConstraintList_FindAllConstraints_keyval4(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_AbstractConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_AbstractConstraintList_FindAllExperiments(Nmrc_AbstractConstraintList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_AbstractConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_AbstractConstraintList_FindAllExperiments_keyval0(Nmrc_AbstractConstraintList self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_AbstractConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_AbstractConstraintList_FindAllExperiments_keyval1(Nmrc_AbstractConstraintList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_AbstractConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_AbstractConstraintList_FindAllExperiments_keyval2(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_AbstractConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_AbstractConstraintList_FindAllExperiments_keyval3(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_AbstractConstraintList self
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
extern ApiSet Nmrc_AbstractConstraintList_FindAllExperiments_keyval4(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_AbstractConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_AbstractConstraintList_FindAllMeasurementLists(Nmrc_AbstractConstraintList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_AbstractConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_AbstractConstraintList_FindAllMeasurementLists_keyval0(Nmrc_AbstractConstraintList self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_AbstractConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_AbstractConstraintList_FindAllMeasurementLists_keyval1(Nmrc_AbstractConstraintList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_AbstractConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_AbstractConstraintList_FindAllMeasurementLists_keyval2(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_AbstractConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_AbstractConstraintList_FindAllMeasurementLists_keyval3(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_AbstractConstraintList self
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
extern ApiSet Nmrc_AbstractConstraintList_FindAllMeasurementLists_keyval4(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_AbstractConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_AbstractConstraintList_FindAllNmrConstraintListValidations(Nmrc_AbstractConstraintList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_AbstractConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_AbstractConstraintList_FindAllNmrConstraintListValidations_keyval0(Nmrc_AbstractConstraintList self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_AbstractConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_AbstractConstraintList_FindAllNmrConstraintListValidations_keyval1(Nmrc_AbstractConstraintList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_AbstractConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_AbstractConstraintList_FindAllNmrConstraintListValidations_keyval2(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_AbstractConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_AbstractConstraintList_FindAllNmrConstraintListValidations_keyval3(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_AbstractConstraintList self
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
extern ApiSet Nmrc_AbstractConstraintList_FindAllNmrConstraintListValidations_keyval4(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_AbstractConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_AbstractConstraintList_FindAllNmrSimEnergyTerms(Nmrc_AbstractConstraintList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_AbstractConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_AbstractConstraintList_FindAllNmrSimEnergyTerms_keyval0(Nmrc_AbstractConstraintList self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_AbstractConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_AbstractConstraintList_FindAllNmrSimEnergyTerms_keyval1(Nmrc_AbstractConstraintList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_AbstractConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_AbstractConstraintList_FindAllNmrSimEnergyTerms_keyval2(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_AbstractConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_AbstractConstraintList_FindAllNmrSimEnergyTerms_keyval3(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_AbstractConstraintList self
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
extern ApiSet Nmrc_AbstractConstraintList_FindAllNmrSimEnergyTerms_keyval4(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_AbstractConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_AbstractConstraintList_FindFirstApplicationData(Nmrc_AbstractConstraintList self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_AbstractConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_AbstractConstraintList_FindFirstApplicationData_keyval0(Nmrc_AbstractConstraintList self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_AbstractConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_AbstractConstraintList_FindFirstApplicationData_keyval1(Nmrc_AbstractConstraintList self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_AbstractConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_AbstractConstraintList_FindFirstApplicationData_keyval2(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_AbstractConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_AbstractConstraintList_FindFirstApplicationData_keyval3(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_AbstractConstraintList self
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
extern Impl_ApplicationData Nmrc_AbstractConstraintList_FindFirstApplicationData_keyval4(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.constraints

child link to 
class AbstractConstraint
  @param  Nmrc_AbstractConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_AbstractConstraint Nmrc_AbstractConstraintList_FindFirstConstraint(Nmrc_AbstractConstraintList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.constraints

child link to 
class AbstractConstraint
  @param  Nmrc_AbstractConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_AbstractConstraint Nmrc_AbstractConstraintList_FindFirstConstraint_keyval0(Nmrc_AbstractConstraintList self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.constraints

child link to 
class AbstractConstraint
  @param  Nmrc_AbstractConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_AbstractConstraint Nmrc_AbstractConstraintList_FindFirstConstraint_keyval1(Nmrc_AbstractConstraintList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.constraints

child link to 
class AbstractConstraint
  @param  Nmrc_AbstractConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_AbstractConstraint Nmrc_AbstractConstraintList_FindFirstConstraint_keyval2(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.constraints

child link to 
class AbstractConstraint
  @param  Nmrc_AbstractConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_AbstractConstraint Nmrc_AbstractConstraintList_FindFirstConstraint_keyval3(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.constraints

child link to 
class AbstractConstraint
  @param  Nmrc_AbstractConstraintList self
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
extern Nmrc_AbstractConstraint Nmrc_AbstractConstraintList_FindFirstConstraint_keyval4(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_AbstractConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmrc_AbstractConstraintList_FindFirstExperiment(Nmrc_AbstractConstraintList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_AbstractConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmrc_AbstractConstraintList_FindFirstExperiment_keyval0(Nmrc_AbstractConstraintList self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_AbstractConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmrc_AbstractConstraintList_FindFirstExperiment_keyval1(Nmrc_AbstractConstraintList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_AbstractConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmrc_AbstractConstraintList_FindFirstExperiment_keyval2(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_AbstractConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmrc_AbstractConstraintList_FindFirstExperiment_keyval3(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_AbstractConstraintList self
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
extern Nmr_Experiment Nmrc_AbstractConstraintList_FindFirstExperiment_keyval4(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_AbstractConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nmrc_AbstractConstraintList_FindFirstMeasurementList(Nmrc_AbstractConstraintList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_AbstractConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nmrc_AbstractConstraintList_FindFirstMeasurementList_keyval0(Nmrc_AbstractConstraintList self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_AbstractConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nmrc_AbstractConstraintList_FindFirstMeasurementList_keyval1(Nmrc_AbstractConstraintList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_AbstractConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nmrc_AbstractConstraintList_FindFirstMeasurementList_keyval2(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_AbstractConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nmrc_AbstractConstraintList_FindFirstMeasurementList_keyval3(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_AbstractConstraintList self
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
extern Nmr_AbstractMeasurementList Nmrc_AbstractConstraintList_FindFirstMeasurementList_keyval4(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_AbstractConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintListValidation Nmrc_AbstractConstraintList_FindFirstNmrConstraintListValidation(Nmrc_AbstractConstraintList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_AbstractConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintListValidation Nmrc_AbstractConstraintList_FindFirstNmrConstraintListValidation_keyval0(Nmrc_AbstractConstraintList self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_AbstractConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintListValidation Nmrc_AbstractConstraintList_FindFirstNmrConstraintListValidation_keyval1(Nmrc_AbstractConstraintList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_AbstractConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintListValidation Nmrc_AbstractConstraintList_FindFirstNmrConstraintListValidation_keyval2(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_AbstractConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintListValidation Nmrc_AbstractConstraintList_FindFirstNmrConstraintListValidation_keyval3(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_AbstractConstraintList self
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
extern Vald_NmrConstraintListValidation Nmrc_AbstractConstraintList_FindFirstNmrConstraintListValidation_keyval4(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_AbstractConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nmrc_AbstractConstraintList_FindFirstNmrSimEnergyTerm(Nmrc_AbstractConstraintList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_AbstractConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nmrc_AbstractConstraintList_FindFirstNmrSimEnergyTerm_keyval0(Nmrc_AbstractConstraintList self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_AbstractConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nmrc_AbstractConstraintList_FindFirstNmrSimEnergyTerm_keyval1(Nmrc_AbstractConstraintList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_AbstractConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nmrc_AbstractConstraintList_FindFirstNmrSimEnergyTerm_keyval2(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_AbstractConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nmrc_AbstractConstraintList_FindFirstNmrSimEnergyTerm_keyval3(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_AbstractConstraintList self
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
extern Nsim_NmrSimEnergyTerm Nmrc_AbstractConstraintList_FindFirstNmrSimEnergyTerm_keyval4(Nmrc_AbstractConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern Acco_AccessObject Nmrc_AbstractConstraintList_GetAccess(Nmrc_AbstractConstraintList self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_AbstractConstraintList_GetApplicationData(Nmrc_AbstractConstraintList self);

/**
  GetByKey for ccp.nmr.NmrConstraint.AbstractConstraintList
  @param  Nmrc_AbstractConstraintList self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmrc_AbstractConstraintList Nmrc_AbstractConstraintList_GetByKey(Nmrc_AbstractConstraintList self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_AbstractConstraintList_GetClassName(Nmrc_AbstractConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.conditionState

COndition 
set that COnstraint list refers to
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern Nmrc_ConditionState Nmrc_AbstractConstraintList_GetConditionState(Nmrc_AbstractConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.constraints

child 
link to class AbstractConstraint
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_AbstractConstraintList_GetConstraints(Nmrc_AbstractConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.details

free text 
containing notes, descriptive remarks, etc.
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_AbstractConstraintList_GetDetails(Nmrc_AbstractConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experimentSerials

Serials 
for experiments that have contributed to Constraints in constraintList. 
Serve as key for derived link experiments
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_AbstractConstraintList_GetExperimentSerials(Nmrc_AbstractConstraintList self);

/**
  getter for derived link experiments
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_AbstractConstraintList_GetExperiments(Nmrc_AbstractConstraintList self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_AbstractConstraintList_GetFieldNames(Nmrc_AbstractConstraintList self);

/**
  GetFullKey for ccp.nmr.NmrConstraint.AbstractConstraintList
  @param  Nmrc_AbstractConstraintList self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmrc_AbstractConstraintList_GetFullKey(Nmrc_AbstractConstraintList self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern ApiBoolean Nmrc_AbstractConstraintList_GetInConstructor(Nmrc_AbstractConstraintList self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern ApiBoolean Nmrc_AbstractConstraintList_GetIsDeleted(Nmrc_AbstractConstraintList self);

/**
  GetLocalKey for ccp.nmr.NmrConstraint.AbstractConstraintList
  @param  Nmrc_AbstractConstraintList self
  @returns  Local object key
**/
extern ApiObject Nmrc_AbstractConstraintList_GetLocalKey(Nmrc_AbstractConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measureListSerials

Serials 
for measurementLists that have contributed to Constraints in 
constraintList. Serve as key for derived link measurementLists.
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_AbstractConstraintList_GetMeasureListSerials(Nmrc_AbstractConstraintList self);

/**
  getter for derived link measurementLists
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_AbstractConstraintList_GetMeasurementLists(Nmrc_AbstractConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.method

Default 
Method used for calculating Constraints in ConstraintList. May be 
overwritten by Method for individual Constraints.
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern Meth_Method Nmrc_AbstractConstraintList_GetMethod(Nmrc_AbstractConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.name

Name of 
constraint list. Serves as a descriptive addition to the serial number.
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_AbstractConstraintList_GetName(Nmrc_AbstractConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_AbstractConstraintList_GetNmrConstraintListValidations(Nmrc_AbstractConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintStore

parent 
link
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern Nmrc_NmrConstraintStore Nmrc_AbstractConstraintList_GetNmrConstraintStore(Nmrc_AbstractConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_AbstractConstraintList_GetNmrSimEnergyTerms(Nmrc_AbstractConstraintList self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_AbstractConstraintList_GetPackageName(Nmrc_AbstractConstraintList self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_AbstractConstraintList_GetPackageShortName(Nmrc_AbstractConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.parent

link to 
parent object - synonym for nmrConstraintStore
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern Nmrc_NmrConstraintStore Nmrc_AbstractConstraintList_GetParent(Nmrc_AbstractConstraintList self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_AbstractConstraintList_GetQualifiedName(Nmrc_AbstractConstraintList self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern Impl_MemopsRoot Nmrc_AbstractConstraintList_GetRoot(Nmrc_AbstractConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.serial

The serial 
number is the key for class AbstractConstraintList and together with the 
parent object serves as a unique identifier for the 
AbstractConstraintList.
Serial numbers are generated by the API. Serial 
numbers of deleted objects are not reused.
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern ApiInteger Nmrc_AbstractConstraintList_GetSerial(Nmrc_AbstractConstraintList self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern Impl_TopObject Nmrc_AbstractConstraintList_GetTopObject(Nmrc_AbstractConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.unit

Measurement 
unit of listed constraints. Should be made into an enumeration.
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_AbstractConstraintList_GetUnit(Nmrc_AbstractConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.usedForCalculation

Determines 
if the ConstraintList was (or should be) used for structure calculation.
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern ApiBoolean Nmrc_AbstractConstraintList_GetUsedForCalculation(Nmrc_AbstractConstraintList self);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_AbstractConstraintList self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_AbstractConstraintList_RemoveApplicationData(Nmrc_AbstractConstraintList self, Impl_ApplicationData value);

/**
  remove function for derived link experiments
  @param  Nmrc_AbstractConstraintList self
  @param  Nmr_Experiment value
**/
extern void *Nmrc_AbstractConstraintList_RemoveExperiment(Nmrc_AbstractConstraintList self, Nmr_Experiment value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experimentSerials

Serials 
for experiments that have contributed to Constraints in constraintList. 
Serve as key for derived link experiments
  @param  Nmrc_AbstractConstraintList self
  @param  ApiInteger value
**/
extern void *Nmrc_AbstractConstraintList_RemoveExperimentSerial(Nmrc_AbstractConstraintList self, ApiInteger value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measureListSerials

Serials 
for measurementLists that have contributed to Constraints in 
constraintList. Serve as key for derived link measurementLists.
  @param  Nmrc_AbstractConstraintList self
  @param  ApiInteger value
**/
extern void *Nmrc_AbstractConstraintList_RemoveMeasureListSerial(Nmrc_AbstractConstraintList self, ApiInteger value);

/**
  remove function for derived link measurementLists
  @param  Nmrc_AbstractConstraintList self
  @param  Nmr_AbstractMeasurementList value
**/
extern void *Nmrc_AbstractConstraintList_RemoveMeasurementList(Nmrc_AbstractConstraintList self, Nmr_AbstractMeasurementList value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_AbstractConstraintList self
  @param  Vald_NmrConstraintListValidation value
**/
extern void *Nmrc_AbstractConstraintList_RemoveNmrConstraintListValidation(Nmrc_AbstractConstraintList self, Vald_NmrConstraintListValidation value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_AbstractConstraintList self
  @param  Nsim_NmrSimEnergyTerm value
**/
extern void *Nmrc_AbstractConstraintList_RemoveNmrSimEnergyTerm(Nmrc_AbstractConstraintList self, Nsim_NmrSimEnergyTerm value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_AbstractConstraintList self
  @param  Acco_AccessObject value
**/
extern void *Nmrc_AbstractConstraintList_SetAccess(Nmrc_AbstractConstraintList self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_AbstractConstraintList self
  @param  ApiList values
**/
extern void *Nmrc_AbstractConstraintList_SetApplicationData(Nmrc_AbstractConstraintList self, ApiList values);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.conditionState

COndition 
set that COnstraint list refers to
  @param  Nmrc_AbstractConstraintList self
  @param  Nmrc_ConditionState value
**/
extern void *Nmrc_AbstractConstraintList_SetConditionState(Nmrc_AbstractConstraintList self, Nmrc_ConditionState value);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.details

free text 
containing notes, descriptive remarks, etc.
  @param  Nmrc_AbstractConstraintList self
  @param  ApiString value
**/
extern void *Nmrc_AbstractConstraintList_SetDetails(Nmrc_AbstractConstraintList self, ApiString value);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experimentSerials

Serials 
for experiments that have contributed to Constraints in constraintList. 
Serve as key for derived link experiments
  @param  Nmrc_AbstractConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_AbstractConstraintList_SetExperimentSerials(Nmrc_AbstractConstraintList self, ApiSet values);

/**
  setter for derived link experiments
  @param  Nmrc_AbstractConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_AbstractConstraintList_SetExperiments(Nmrc_AbstractConstraintList self, ApiSet values);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measureListSerials

Serials 
for measurementLists that have contributed to Constraints in 
constraintList. Serve as key for derived link measurementLists.
  @param  Nmrc_AbstractConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_AbstractConstraintList_SetMeasureListSerials(Nmrc_AbstractConstraintList self, ApiSet values);

/**
  setter for derived link measurementLists
  @param  Nmrc_AbstractConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_AbstractConstraintList_SetMeasurementLists(Nmrc_AbstractConstraintList self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.method

Default 
Method used for calculating Constraints in ConstraintList. May be 
overwritten by Method for individual Constraints.
  @param  Nmrc_AbstractConstraintList self
  @param  Meth_Method value
**/
extern void *Nmrc_AbstractConstraintList_SetMethod(Nmrc_AbstractConstraintList self, Meth_Method value);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.name

Name of 
constraint list. Serves as a descriptive addition to the serial number.
  @param  Nmrc_AbstractConstraintList self
  @param  ApiString value
**/
extern void *Nmrc_AbstractConstraintList_SetName(Nmrc_AbstractConstraintList self, ApiString value);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_AbstractConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_AbstractConstraintList_SetNmrConstraintListValidations(Nmrc_AbstractConstraintList self, ApiSet values);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_AbstractConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_AbstractConstraintList_SetNmrSimEnergyTerms(Nmrc_AbstractConstraintList self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.serial

The serial 
number is the key for class AbstractConstraintList and together with the 
parent object serves as a unique identifier for the 
AbstractConstraintList.
Serial numbers are generated by the API. Serial 
numbers of deleted objects are not reused.
  @param  Nmrc_AbstractConstraintList self
  @param  ApiInteger value
**/
extern void *Nmrc_AbstractConstraintList_SetSerial(Nmrc_AbstractConstraintList self, ApiInteger value);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.unit

Measurement 
unit of listed constraints. Should be made into an enumeration.
  @param  Nmrc_AbstractConstraintList self
  @param  ApiString value
**/
extern void *Nmrc_AbstractConstraintList_SetUnit(Nmrc_AbstractConstraintList self, ApiString value);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.usedForCalculation

Determines 
if the ConstraintList was (or should be) used for structure calculation.
  @param  Nmrc_AbstractConstraintList self
  @param  ApiBoolean value
**/
extern void *Nmrc_AbstractConstraintList_SetUsedForCalculation(Nmrc_AbstractConstraintList self, ApiBoolean value);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraintList.constraints

child link to 
class AbstractConstraint
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_AbstractConstraintList_SortedConstraints(Nmrc_AbstractConstraintList self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_AbstractConstraintList_SortedExperiments(Nmrc_AbstractConstraintList self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_AbstractConstraintList_SortedMeasurementLists(Nmrc_AbstractConstraintList self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_AbstractConstraintList_SortedNmrConstraintListValidations(Nmrc_AbstractConstraintList self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_AbstractConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_AbstractConstraintList_SortedNmrSimEnergyTerms(Nmrc_AbstractConstraintList self);

#endif /* __incl__ccp_api_nmr_NmrConstraint_AbstractConstraintList_h__ */
