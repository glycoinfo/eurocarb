
#ifndef __incl__ccp_api_nmr_NmrConstraint_DihedralConstraintList_h__
#define __incl__ccp_api_nmr_NmrConstraint_DihedralConstraintList_h__

#include "ccp.h"

/*
  List of Dihedral angle restraints, including those that arise from J couplings.
*/

/* package ccp.api.nmr.NmrConstraint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraintList self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_DihedralConstraintList_AddApplicationData(Nmrc_DihedralConstraintList self, Impl_ApplicationData value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DihedralConstraintList self
  @param  Nmr_Experiment value
**/
extern void *Nmrc_DihedralConstraintList_AddExperiment(Nmrc_DihedralConstraintList self, Nmr_Experiment value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experimentSerials

Serials 
for experiments that have contributed to Constraints in constraintList. 
Serve as key for derived link experiments
  @param  Nmrc_DihedralConstraintList self
  @param  ApiInteger value
**/
extern void *Nmrc_DihedralConstraintList_AddExperimentSerial(Nmrc_DihedralConstraintList self, ApiInteger value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measureListSerials

Serials 
for measurementLists that have contributed to Constraints in 
constraintList. Serve as key for derived link measurementLists.
  @param  Nmrc_DihedralConstraintList self
  @param  ApiInteger value
**/
extern void *Nmrc_DihedralConstraintList_AddMeasureListSerial(Nmrc_DihedralConstraintList self, ApiInteger value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DihedralConstraintList self
  @param  Nmr_AbstractMeasurementList value
**/
extern void *Nmrc_DihedralConstraintList_AddMeasurementList(Nmrc_DihedralConstraintList self, Nmr_AbstractMeasurementList value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DihedralConstraintList self
  @param  Vald_NmrConstraintListValidation value
**/
extern void *Nmrc_DihedralConstraintList_AddNmrConstraintListValidation(Nmrc_DihedralConstraintList self, Vald_NmrConstraintListValidation value);

/**
  Add for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DihedralConstraintList self
  @param  Nsim_NmrSimEnergyTerm value
**/
extern void *Nmrc_DihedralConstraintList_AddNmrSimEnergyTerm(Nmrc_DihedralConstraintList self, Nsim_NmrSimEnergyTerm value);

/**
  CheckAllValid for ccp.nmr.NmrConstraint.DihedralConstraintList
  @param  Nmrc_DihedralConstraintList self
  @param  ApiBoolean complete
**/
extern void *Nmrc_DihedralConstraintList_CheckAllValid(Nmrc_DihedralConstraintList self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.NmrConstraint.DihedralConstraintList
  @param  Nmrc_DihedralConstraintList self
  @param  ApiBoolean complete
**/
extern void *Nmrc_DihedralConstraintList_CheckValid(Nmrc_DihedralConstraintList self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_DihedralConstraintList_FindAllApplicationData(Nmrc_DihedralConstraintList self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_DihedralConstraintList_FindAllApplicationData_keyval0(Nmrc_DihedralConstraintList self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_DihedralConstraintList_FindAllApplicationData_keyval1(Nmrc_DihedralConstraintList self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_DihedralConstraintList_FindAllApplicationData_keyval2(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmrc_DihedralConstraintList_FindAllApplicationData_keyval3(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraintList self
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
extern ApiList Nmrc_DihedralConstraintList_FindAllApplicationData_keyval4(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.DihedralConstraintList.constraints

child link to 
class DihedralConstraint
  @param  Nmrc_DihedralConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraintList_FindAllConstraints(Nmrc_DihedralConstraintList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.DihedralConstraintList.constraints

child link to 
class DihedralConstraint
  @param  Nmrc_DihedralConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraintList_FindAllConstraints_keyval0(Nmrc_DihedralConstraintList self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.DihedralConstraintList.constraints

child link to 
class DihedralConstraint
  @param  Nmrc_DihedralConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraintList_FindAllConstraints_keyval1(Nmrc_DihedralConstraintList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.DihedralConstraintList.constraints

child link to 
class DihedralConstraint
  @param  Nmrc_DihedralConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraintList_FindAllConstraints_keyval2(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.DihedralConstraintList.constraints

child link to 
class DihedralConstraint
  @param  Nmrc_DihedralConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraintList_FindAllConstraints_keyval3(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.DihedralConstraintList.constraints

child link to 
class DihedralConstraint
  @param  Nmrc_DihedralConstraintList self
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
extern ApiSet Nmrc_DihedralConstraintList_FindAllConstraints_keyval4(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DihedralConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraintList_FindAllExperiments(Nmrc_DihedralConstraintList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DihedralConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraintList_FindAllExperiments_keyval0(Nmrc_DihedralConstraintList self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DihedralConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraintList_FindAllExperiments_keyval1(Nmrc_DihedralConstraintList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DihedralConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraintList_FindAllExperiments_keyval2(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DihedralConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraintList_FindAllExperiments_keyval3(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DihedralConstraintList self
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
extern ApiSet Nmrc_DihedralConstraintList_FindAllExperiments_keyval4(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DihedralConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraintList_FindAllMeasurementLists(Nmrc_DihedralConstraintList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DihedralConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraintList_FindAllMeasurementLists_keyval0(Nmrc_DihedralConstraintList self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DihedralConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraintList_FindAllMeasurementLists_keyval1(Nmrc_DihedralConstraintList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DihedralConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraintList_FindAllMeasurementLists_keyval2(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DihedralConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraintList_FindAllMeasurementLists_keyval3(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DihedralConstraintList self
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
extern ApiSet Nmrc_DihedralConstraintList_FindAllMeasurementLists_keyval4(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DihedralConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraintList_FindAllNmrConstraintListValidations(Nmrc_DihedralConstraintList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DihedralConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraintList_FindAllNmrConstraintListValidations_keyval0(Nmrc_DihedralConstraintList self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DihedralConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraintList_FindAllNmrConstraintListValidations_keyval1(Nmrc_DihedralConstraintList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DihedralConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraintList_FindAllNmrConstraintListValidations_keyval2(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DihedralConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraintList_FindAllNmrConstraintListValidations_keyval3(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DihedralConstraintList self
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
extern ApiSet Nmrc_DihedralConstraintList_FindAllNmrConstraintListValidations_keyval4(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DihedralConstraintList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraintList_FindAllNmrSimEnergyTerms(Nmrc_DihedralConstraintList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DihedralConstraintList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraintList_FindAllNmrSimEnergyTerms_keyval0(Nmrc_DihedralConstraintList self);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DihedralConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraintList_FindAllNmrSimEnergyTerms_keyval1(Nmrc_DihedralConstraintList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DihedralConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraintList_FindAllNmrSimEnergyTerms_keyval2(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DihedralConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmrc_DihedralConstraintList_FindAllNmrSimEnergyTerms_keyval3(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DihedralConstraintList self
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
extern ApiSet Nmrc_DihedralConstraintList_FindAllNmrSimEnergyTerms_keyval4(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_DihedralConstraintList_FindFirstApplicationData(Nmrc_DihedralConstraintList self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_DihedralConstraintList_FindFirstApplicationData_keyval0(Nmrc_DihedralConstraintList self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_DihedralConstraintList_FindFirstApplicationData_keyval1(Nmrc_DihedralConstraintList self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_DihedralConstraintList_FindFirstApplicationData_keyval2(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmrc_DihedralConstraintList_FindFirstApplicationData_keyval3(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraintList self
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
extern Impl_ApplicationData Nmrc_DihedralConstraintList_FindFirstApplicationData_keyval4(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.DihedralConstraintList.constraints

child link to 
class DihedralConstraint
  @param  Nmrc_DihedralConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_DihedralConstraint Nmrc_DihedralConstraintList_FindFirstConstraint(Nmrc_DihedralConstraintList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.DihedralConstraintList.constraints

child link to 
class DihedralConstraint
  @param  Nmrc_DihedralConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_DihedralConstraint Nmrc_DihedralConstraintList_FindFirstConstraint_keyval0(Nmrc_DihedralConstraintList self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.DihedralConstraintList.constraints

child link to 
class DihedralConstraint
  @param  Nmrc_DihedralConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_DihedralConstraint Nmrc_DihedralConstraintList_FindFirstConstraint_keyval1(Nmrc_DihedralConstraintList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.DihedralConstraintList.constraints

child link to 
class DihedralConstraint
  @param  Nmrc_DihedralConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_DihedralConstraint Nmrc_DihedralConstraintList_FindFirstConstraint_keyval2(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.DihedralConstraintList.constraints

child link to 
class DihedralConstraint
  @param  Nmrc_DihedralConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmrc_DihedralConstraint Nmrc_DihedralConstraintList_FindFirstConstraint_keyval3(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.DihedralConstraintList.constraints

child link to 
class DihedralConstraint
  @param  Nmrc_DihedralConstraintList self
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
extern Nmrc_DihedralConstraint Nmrc_DihedralConstraintList_FindFirstConstraint_keyval4(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DihedralConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmrc_DihedralConstraintList_FindFirstExperiment(Nmrc_DihedralConstraintList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DihedralConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmrc_DihedralConstraintList_FindFirstExperiment_keyval0(Nmrc_DihedralConstraintList self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DihedralConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmrc_DihedralConstraintList_FindFirstExperiment_keyval1(Nmrc_DihedralConstraintList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DihedralConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmrc_DihedralConstraintList_FindFirstExperiment_keyval2(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DihedralConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmrc_DihedralConstraintList_FindFirstExperiment_keyval3(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DihedralConstraintList self
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
extern Nmr_Experiment Nmrc_DihedralConstraintList_FindFirstExperiment_keyval4(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DihedralConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nmrc_DihedralConstraintList_FindFirstMeasurementList(Nmrc_DihedralConstraintList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DihedralConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nmrc_DihedralConstraintList_FindFirstMeasurementList_keyval0(Nmrc_DihedralConstraintList self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DihedralConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nmrc_DihedralConstraintList_FindFirstMeasurementList_keyval1(Nmrc_DihedralConstraintList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DihedralConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nmrc_DihedralConstraintList_FindFirstMeasurementList_keyval2(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DihedralConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nmrc_DihedralConstraintList_FindFirstMeasurementList_keyval3(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DihedralConstraintList self
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
extern Nmr_AbstractMeasurementList Nmrc_DihedralConstraintList_FindFirstMeasurementList_keyval4(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DihedralConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintListValidation Nmrc_DihedralConstraintList_FindFirstNmrConstraintListValidation(Nmrc_DihedralConstraintList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DihedralConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintListValidation Nmrc_DihedralConstraintList_FindFirstNmrConstraintListValidation_keyval0(Nmrc_DihedralConstraintList self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DihedralConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintListValidation Nmrc_DihedralConstraintList_FindFirstNmrConstraintListValidation_keyval1(Nmrc_DihedralConstraintList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DihedralConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintListValidation Nmrc_DihedralConstraintList_FindFirstNmrConstraintListValidation_keyval2(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DihedralConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrConstraintListValidation Nmrc_DihedralConstraintList_FindFirstNmrConstraintListValidation_keyval3(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DihedralConstraintList self
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
extern Vald_NmrConstraintListValidation Nmrc_DihedralConstraintList_FindFirstNmrConstraintListValidation_keyval4(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DihedralConstraintList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nmrc_DihedralConstraintList_FindFirstNmrSimEnergyTerm(Nmrc_DihedralConstraintList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DihedralConstraintList self
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nmrc_DihedralConstraintList_FindFirstNmrSimEnergyTerm_keyval0(Nmrc_DihedralConstraintList self);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DihedralConstraintList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nmrc_DihedralConstraintList_FindFirstNmrSimEnergyTerm_keyval1(Nmrc_DihedralConstraintList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DihedralConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nmrc_DihedralConstraintList_FindFirstNmrSimEnergyTerm_keyval2(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DihedralConstraintList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nmrc_DihedralConstraintList_FindFirstNmrSimEnergyTerm_keyval3(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DihedralConstraintList self
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
extern Nsim_NmrSimEnergyTerm Nmrc_DihedralConstraintList_FindFirstNmrSimEnergyTerm_keyval4(Nmrc_DihedralConstraintList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.NmrConstraint.DihedralConstraintList
  @param  Nmrc_DihedralConstraintList self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmrc_DihedralConstraintList_Get(Nmrc_DihedralConstraintList self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern Acco_AccessObject Nmrc_DihedralConstraintList_GetAccess(Nmrc_DihedralConstraintList self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern Acco_AccessObject Nmrc_DihedralConstraintList_GetActiveAccess(Nmrc_DihedralConstraintList self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_DihedralConstraintList_GetApplicationData(Nmrc_DihedralConstraintList self);

/**
  GetByKey for ccp.nmr.NmrConstraint.DihedralConstraintList
  @param  Nmrc_DihedralConstraintList self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmrc_DihedralConstraintList Nmrc_DihedralConstraintList_GetByKey(Nmrc_DihedralConstraintList self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_DihedralConstraintList_GetClassName(Nmrc_DihedralConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.conditionState

COndition 
set that COnstraint list refers to
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern Nmrc_ConditionState Nmrc_DihedralConstraintList_GetConditionState(Nmrc_DihedralConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.DihedralConstraintList.constraints

child 
link to class DihedralConstraint
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_DihedralConstraintList_GetConstraints(Nmrc_DihedralConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.details

free text 
containing notes, descriptive remarks, etc.
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_DihedralConstraintList_GetDetails(Nmrc_DihedralConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experimentSerials

Serials 
for experiments that have contributed to Constraints in constraintList. 
Serve as key for derived link experiments
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_DihedralConstraintList_GetExperimentSerials(Nmrc_DihedralConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_DihedralConstraintList_GetExperiments(Nmrc_DihedralConstraintList self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_DihedralConstraintList_GetFieldNames(Nmrc_DihedralConstraintList self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern ApiBoolean Nmrc_DihedralConstraintList_GetInConstructor(Nmrc_DihedralConstraintList self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern ApiBoolean Nmrc_DihedralConstraintList_GetIsDeleted(Nmrc_DihedralConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measureListSerials

Serials 
for measurementLists that have contributed to Constraints in 
constraintList. Serve as key for derived link measurementLists.
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_DihedralConstraintList_GetMeasureListSerials(Nmrc_DihedralConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_DihedralConstraintList_GetMeasurementLists(Nmrc_DihedralConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.method

Default 
Method used for calculating Constraints in ConstraintList. May be 
overwritten by Method for individual Constraints.
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern Meth_Method Nmrc_DihedralConstraintList_GetMethod(Nmrc_DihedralConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.name

Name of 
constraint list. Serves as a descriptive addition to the serial number.
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_DihedralConstraintList_GetName(Nmrc_DihedralConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_DihedralConstraintList_GetNmrConstraintListValidations(Nmrc_DihedralConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintStore

parent 
link
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern Nmrc_NmrConstraintStore Nmrc_DihedralConstraintList_GetNmrConstraintStore(Nmrc_DihedralConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern ApiSet Nmrc_DihedralConstraintList_GetNmrSimEnergyTerms(Nmrc_DihedralConstraintList self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_DihedralConstraintList_GetPackageName(Nmrc_DihedralConstraintList self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_DihedralConstraintList_GetPackageShortName(Nmrc_DihedralConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.parent

link to 
parent object - synonym for nmrConstraintStore
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern Nmrc_NmrConstraintStore Nmrc_DihedralConstraintList_GetParent(Nmrc_DihedralConstraintList self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_DihedralConstraintList_GetQualifiedName(Nmrc_DihedralConstraintList self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern Impl_MemopsRoot Nmrc_DihedralConstraintList_GetRoot(Nmrc_DihedralConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.serial

The serial 
number is the key for class AbstractConstraintList and together with the 
parent object serves as a unique identifier for the 
AbstractConstraintList.
Serial numbers are generated by the API. Serial 
numbers of deleted objects are not reused.
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern ApiInteger Nmrc_DihedralConstraintList_GetSerial(Nmrc_DihedralConstraintList self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern Impl_TopObject Nmrc_DihedralConstraintList_GetTopObject(Nmrc_DihedralConstraintList self);

/**
  Get for ccp.nmr.NmrConstraint.AbstractConstraintList.unit

Measurement 
unit of listed constraints. Should be made into an enumeration.
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern ApiString Nmrc_DihedralConstraintList_GetUnit(Nmrc_DihedralConstraintList self);

/**
  Get for 
ccp.nmr.NmrConstraint.AbstractConstraintList.usedForCalculation

Determines 
if the ConstraintList was (or should be) used for structure calculation.
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern ApiBoolean Nmrc_DihedralConstraintList_GetUsedForCalculation(Nmrc_DihedralConstraintList self);

/**
  Constructor for ccp.nmr.NmrConstraint.DihedralConstraintList
  @param  Nmrc_NmrConstraintStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrc_DihedralConstraintList Nmrc_DihedralConstraintList_Init(Nmrc_NmrConstraintStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.NmrConstraint.DihedralConstraintList
  @param  Nmrc_NmrConstraintStore parent
  @returns  the new object
**/
extern Nmrc_DihedralConstraintList Nmrc_DihedralConstraintList_Init_reqd(Nmrc_NmrConstraintStore parent);

/**
  Factory function to create ccp.nmr.NmrConstraint.DihedralConstraint
  @param  Nmrc_DihedralConstraintList self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmrc_DihedralConstraint Nmrc_DihedralConstraintList_NewDihedralConstraint(Nmrc_DihedralConstraintList self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.NmrConstraint.DihedralConstraint
  @param  Nmrc_DihedralConstraintList self
  @param  ApiList resonances
  @returns  the new object
**/
extern Nmrc_DihedralConstraint Nmrc_DihedralConstraintList_NewDihedralConstraint_reqd(Nmrc_DihedralConstraintList self, ApiList resonances);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraintList self
  @param  Impl_ApplicationData value
**/
extern void *Nmrc_DihedralConstraintList_RemoveApplicationData(Nmrc_DihedralConstraintList self, Impl_ApplicationData value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DihedralConstraintList self
  @param  Nmr_Experiment value
**/
extern void *Nmrc_DihedralConstraintList_RemoveExperiment(Nmrc_DihedralConstraintList self, Nmr_Experiment value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experimentSerials

Serials 
for experiments that have contributed to Constraints in constraintList. 
Serve as key for derived link experiments
  @param  Nmrc_DihedralConstraintList self
  @param  ApiInteger value
**/
extern void *Nmrc_DihedralConstraintList_RemoveExperimentSerial(Nmrc_DihedralConstraintList self, ApiInteger value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measureListSerials

Serials 
for measurementLists that have contributed to Constraints in 
constraintList. Serve as key for derived link measurementLists.
  @param  Nmrc_DihedralConstraintList self
  @param  ApiInteger value
**/
extern void *Nmrc_DihedralConstraintList_RemoveMeasureListSerial(Nmrc_DihedralConstraintList self, ApiInteger value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DihedralConstraintList self
  @param  Nmr_AbstractMeasurementList value
**/
extern void *Nmrc_DihedralConstraintList_RemoveMeasurementList(Nmrc_DihedralConstraintList self, Nmr_AbstractMeasurementList value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DihedralConstraintList self
  @param  Vald_NmrConstraintListValidation value
**/
extern void *Nmrc_DihedralConstraintList_RemoveNmrConstraintListValidation(Nmrc_DihedralConstraintList self, Vald_NmrConstraintListValidation value);

/**
  Remove for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DihedralConstraintList self
  @param  Nsim_NmrSimEnergyTerm value
**/
extern void *Nmrc_DihedralConstraintList_RemoveNmrSimEnergyTerm(Nmrc_DihedralConstraintList self, Nsim_NmrSimEnergyTerm value);

/**
  SetAttr for ccp.nmr.NmrConstraint.DihedralConstraintList
  @param  Nmrc_DihedralConstraintList self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmrc_DihedralConstraintList_Set(Nmrc_DihedralConstraintList self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmrc_DihedralConstraintList self
  @param  Acco_AccessObject value
**/
extern void *Nmrc_DihedralConstraintList_SetAccess(Nmrc_DihedralConstraintList self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmrc_DihedralConstraintList self
  @param  ApiList values
**/
extern void *Nmrc_DihedralConstraintList_SetApplicationData(Nmrc_DihedralConstraintList self, ApiList values);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.conditionState

COndition 
set that COnstraint list refers to
  @param  Nmrc_DihedralConstraintList self
  @param  Nmrc_ConditionState value
**/
extern void *Nmrc_DihedralConstraintList_SetConditionState(Nmrc_DihedralConstraintList self, Nmrc_ConditionState value);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.details

free text 
containing notes, descriptive remarks, etc.
  @param  Nmrc_DihedralConstraintList self
  @param  ApiString value
**/
extern void *Nmrc_DihedralConstraintList_SetDetails(Nmrc_DihedralConstraintList self, ApiString value);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experimentSerials

Serials 
for experiments that have contributed to Constraints in constraintList. 
Serve as key for derived link experiments
  @param  Nmrc_DihedralConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_DihedralConstraintList_SetExperimentSerials(Nmrc_DihedralConstraintList self, ApiSet values);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DihedralConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_DihedralConstraintList_SetExperiments(Nmrc_DihedralConstraintList self, ApiSet values);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measureListSerials

Serials 
for measurementLists that have contributed to Constraints in 
constraintList. Serve as key for derived link measurementLists.
  @param  Nmrc_DihedralConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_DihedralConstraintList_SetMeasureListSerials(Nmrc_DihedralConstraintList self, ApiSet values);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DihedralConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_DihedralConstraintList_SetMeasurementLists(Nmrc_DihedralConstraintList self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.method

Default 
Method used for calculating Constraints in ConstraintList. May be 
overwritten by Method for individual Constraints.
  @param  Nmrc_DihedralConstraintList self
  @param  Meth_Method value
**/
extern void *Nmrc_DihedralConstraintList_SetMethod(Nmrc_DihedralConstraintList self, Meth_Method value);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.name

Name of 
constraint list. Serves as a descriptive addition to the serial number.
  @param  Nmrc_DihedralConstraintList self
  @param  ApiString value
**/
extern void *Nmrc_DihedralConstraintList_SetName(Nmrc_DihedralConstraintList self, ApiString value);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DihedralConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_DihedralConstraintList_SetNmrConstraintListValidations(Nmrc_DihedralConstraintList self, ApiSet values);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DihedralConstraintList self
  @param  ApiSet values
**/
extern void *Nmrc_DihedralConstraintList_SetNmrSimEnergyTerms(Nmrc_DihedralConstraintList self, ApiSet values);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.serial

The serial 
number is the key for class AbstractConstraintList and together with the 
parent object serves as a unique identifier for the 
AbstractConstraintList.
Serial numbers are generated by the API. Serial 
numbers of deleted objects are not reused.
  @param  Nmrc_DihedralConstraintList self
  @param  ApiInteger value
**/
extern void *Nmrc_DihedralConstraintList_SetSerial(Nmrc_DihedralConstraintList self, ApiInteger value);

/**
  Set for ccp.nmr.NmrConstraint.AbstractConstraintList.unit

Measurement 
unit of listed constraints. Should be made into an enumeration.
  @param  Nmrc_DihedralConstraintList self
  @param  ApiString value
**/
extern void *Nmrc_DihedralConstraintList_SetUnit(Nmrc_DihedralConstraintList self, ApiString value);

/**
  Set for 
ccp.nmr.NmrConstraint.AbstractConstraintList.usedForCalculation

Determines 
if the ConstraintList was (or should be) used for structure calculation.
  @param  Nmrc_DihedralConstraintList self
  @param  ApiBoolean value
**/
extern void *Nmrc_DihedralConstraintList_SetUsedForCalculation(Nmrc_DihedralConstraintList self, ApiBoolean value);

/**
  Sorted for 
ccp.nmr.NmrConstraint.DihedralConstraintList.constraints

child link to 
class DihedralConstraint
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_DihedralConstraintList_SortedConstraints(Nmrc_DihedralConstraintList self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraintList.experiments

Experiments 
from which ConstraintLists are derived. May be incomplete or not set.
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_DihedralConstraintList_SortedExperiments(Nmrc_DihedralConstraintList self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraintList.measurementLists

Measurement 
Lists used in deriving Constraint list
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_DihedralConstraintList_SortedMeasurementLists(Nmrc_DihedralConstraintList self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrConstraintListValidations

Validation 
results that include AbstractConstraintList
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_DihedralConstraintList_SortedNmrConstraintListValidations(Nmrc_DihedralConstraintList self);

/**
  Sorted for 
ccp.nmr.NmrConstraint.AbstractConstraintList.nmrSimEnergyTerms

RestraintGroups 
using ConstraintList
  @param  Nmrc_DihedralConstraintList self
  @returns   the result
**/
extern ApiList Nmrc_DihedralConstraintList_SortedNmrSimEnergyTerms(Nmrc_DihedralConstraintList self);

#endif /* __incl__ccp_api_nmr_NmrConstraint_DihedralConstraintList_h__ */
