
#ifndef __incl__ccp_api_nmr_Nmr_JCouplingList_h__
#define __incl__ccp_api_nmr_Nmr_JCouplingList_h__

#include "ccp.h"

/*
  List of J coupling measurements
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_JCouplingList self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_JCouplingList_AddApplicationData(Nmr_JCouplingList self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_JCouplingList self
  @param  Entr_Entry value
**/
extern void *Nmr_JCouplingList_AddEntry(Nmr_JCouplingList self, Entr_Entry value);

/**
  Add for ccp.nmr.Nmr.JCouplingList.experiments

Experiments for which 
JCouplingList is valid
  @param  Nmr_JCouplingList self
  @param  Nmr_Experiment value
**/
extern void *Nmr_JCouplingList_AddExperiment(Nmr_JCouplingList self, Nmr_Experiment value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs 
using MeasurementList as input
  @param  Nmr_JCouplingList self
  @param  Nsim_Run value
**/
extern void *Nmr_JCouplingList_AddInputToNmrRun(Nmr_JCouplingList self, Nsim_Run value);

/**
  Add for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_JCouplingList self
  @param  Vald_NmrMeasurementListValidation value
**/
extern void *Nmr_JCouplingList_AddNmrMeasurementListValidation(Nmr_JCouplingList self, Vald_NmrMeasurementListValidation value);

/**
  CheckAllValid for ccp.nmr.Nmr.JCouplingList
  @param  Nmr_JCouplingList self
  @param  ApiBoolean complete
**/
extern void *Nmr_JCouplingList_CheckAllValid(Nmr_JCouplingList self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.JCouplingList
  @param  Nmr_JCouplingList self
  @param  ApiBoolean complete
**/
extern void *Nmr_JCouplingList_CheckValid(Nmr_JCouplingList self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_JCouplingList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_JCouplingList_FindAllApplicationData(Nmr_JCouplingList self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_JCouplingList self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_JCouplingList_FindAllApplicationData_keyval0(Nmr_JCouplingList self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_JCouplingList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_JCouplingList_FindAllApplicationData_keyval1(Nmr_JCouplingList self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_JCouplingList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_JCouplingList_FindAllApplicationData_keyval2(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_JCouplingList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_JCouplingList_FindAllApplicationData_keyval3(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_JCouplingList self
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
extern ApiList Nmr_JCouplingList_FindAllApplicationData_keyval4(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_JCouplingList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_JCouplingList_FindAllEntries(Nmr_JCouplingList self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_JCouplingList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_JCouplingList_FindAllEntries_keyval0(Nmr_JCouplingList self);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_JCouplingList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_JCouplingList_FindAllEntries_keyval1(Nmr_JCouplingList self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_JCouplingList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_JCouplingList_FindAllEntries_keyval2(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_JCouplingList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_JCouplingList_FindAllEntries_keyval3(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_JCouplingList self
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
extern ApiSet Nmr_JCouplingList_FindAllEntries_keyval4(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.JCouplingList.experiments

Experiments for which 
JCouplingList is valid
  @param  Nmr_JCouplingList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_JCouplingList_FindAllExperiments(Nmr_JCouplingList self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.JCouplingList.experiments

Experiments for which 
JCouplingList is valid
  @param  Nmr_JCouplingList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_JCouplingList_FindAllExperiments_keyval0(Nmr_JCouplingList self);

/**
  FindAll for ccp.nmr.Nmr.JCouplingList.experiments

Experiments for which 
JCouplingList is valid
  @param  Nmr_JCouplingList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_JCouplingList_FindAllExperiments_keyval1(Nmr_JCouplingList self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.JCouplingList.experiments

Experiments for which 
JCouplingList is valid
  @param  Nmr_JCouplingList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_JCouplingList_FindAllExperiments_keyval2(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.JCouplingList.experiments

Experiments for which 
JCouplingList is valid
  @param  Nmr_JCouplingList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_JCouplingList_FindAllExperiments_keyval3(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.JCouplingList.experiments

Experiments for which 
JCouplingList is valid
  @param  Nmr_JCouplingList self
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
extern ApiSet Nmr_JCouplingList_FindAllExperiments_keyval4(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_JCouplingList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_JCouplingList_FindAllInputToNmrRuns(Nmr_JCouplingList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_JCouplingList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_JCouplingList_FindAllInputToNmrRuns_keyval0(Nmr_JCouplingList self);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_JCouplingList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_JCouplingList_FindAllInputToNmrRuns_keyval1(Nmr_JCouplingList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_JCouplingList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_JCouplingList_FindAllInputToNmrRuns_keyval2(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_JCouplingList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_JCouplingList_FindAllInputToNmrRuns_keyval3(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_JCouplingList self
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
extern ApiSet Nmr_JCouplingList_FindAllInputToNmrRuns_keyval4(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.JCouplingList.measurements

child link to class 
JCoupling
  @param  Nmr_JCouplingList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_JCouplingList_FindAllMeasurements(Nmr_JCouplingList self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.JCouplingList.measurements

child link to class 
JCoupling
  @param  Nmr_JCouplingList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_JCouplingList_FindAllMeasurements_keyval0(Nmr_JCouplingList self);

/**
  FindAll for ccp.nmr.Nmr.JCouplingList.measurements

child link to class 
JCoupling
  @param  Nmr_JCouplingList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_JCouplingList_FindAllMeasurements_keyval1(Nmr_JCouplingList self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.JCouplingList.measurements

child link to class 
JCoupling
  @param  Nmr_JCouplingList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_JCouplingList_FindAllMeasurements_keyval2(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.JCouplingList.measurements

child link to class 
JCoupling
  @param  Nmr_JCouplingList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_JCouplingList_FindAllMeasurements_keyval3(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.JCouplingList.measurements

child link to class 
JCoupling
  @param  Nmr_JCouplingList self
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
extern ApiSet Nmr_JCouplingList_FindAllMeasurements_keyval4(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_JCouplingList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_JCouplingList_FindAllNmrMeasurementListValidations(Nmr_JCouplingList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_JCouplingList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_JCouplingList_FindAllNmrMeasurementListValidations_keyval0(Nmr_JCouplingList self);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_JCouplingList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_JCouplingList_FindAllNmrMeasurementListValidations_keyval1(Nmr_JCouplingList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_JCouplingList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_JCouplingList_FindAllNmrMeasurementListValidations_keyval2(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_JCouplingList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_JCouplingList_FindAllNmrMeasurementListValidations_keyval3(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_JCouplingList self
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
extern ApiSet Nmr_JCouplingList_FindAllNmrMeasurementListValidations_keyval4(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_JCouplingList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_JCouplingList_FindFirstApplicationData(Nmr_JCouplingList self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_JCouplingList self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_JCouplingList_FindFirstApplicationData_keyval0(Nmr_JCouplingList self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_JCouplingList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_JCouplingList_FindFirstApplicationData_keyval1(Nmr_JCouplingList self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_JCouplingList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_JCouplingList_FindFirstApplicationData_keyval2(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_JCouplingList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_JCouplingList_FindFirstApplicationData_keyval3(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_JCouplingList self
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
extern Impl_ApplicationData Nmr_JCouplingList_FindFirstApplicationData_keyval4(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_JCouplingList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_JCouplingList_FindFirstEntry(Nmr_JCouplingList self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_JCouplingList self
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_JCouplingList_FindFirstEntry_keyval0(Nmr_JCouplingList self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_JCouplingList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_JCouplingList_FindFirstEntry_keyval1(Nmr_JCouplingList self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_JCouplingList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_JCouplingList_FindFirstEntry_keyval2(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_JCouplingList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_JCouplingList_FindFirstEntry_keyval3(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_JCouplingList self
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
extern Entr_Entry Nmr_JCouplingList_FindFirstEntry_keyval4(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.JCouplingList.experiments

Experiments for 
which JCouplingList is valid
  @param  Nmr_JCouplingList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_JCouplingList_FindFirstExperiment(Nmr_JCouplingList self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.JCouplingList.experiments

Experiments for 
which JCouplingList is valid
  @param  Nmr_JCouplingList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_JCouplingList_FindFirstExperiment_keyval0(Nmr_JCouplingList self);

/**
  FindFirst for ccp.nmr.Nmr.JCouplingList.experiments

Experiments for 
which JCouplingList is valid
  @param  Nmr_JCouplingList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_JCouplingList_FindFirstExperiment_keyval1(Nmr_JCouplingList self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.JCouplingList.experiments

Experiments for 
which JCouplingList is valid
  @param  Nmr_JCouplingList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_JCouplingList_FindFirstExperiment_keyval2(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.JCouplingList.experiments

Experiments for 
which JCouplingList is valid
  @param  Nmr_JCouplingList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_JCouplingList_FindFirstExperiment_keyval3(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.JCouplingList.experiments

Experiments for 
which JCouplingList is valid
  @param  Nmr_JCouplingList self
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
extern Nmr_Experiment Nmr_JCouplingList_FindFirstExperiment_keyval4(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_JCouplingList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_JCouplingList_FindFirstInputToNmrRun(Nmr_JCouplingList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_JCouplingList self
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_JCouplingList_FindFirstInputToNmrRun_keyval0(Nmr_JCouplingList self);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_JCouplingList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_JCouplingList_FindFirstInputToNmrRun_keyval1(Nmr_JCouplingList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_JCouplingList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_JCouplingList_FindFirstInputToNmrRun_keyval2(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_JCouplingList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_JCouplingList_FindFirstInputToNmrRun_keyval3(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_JCouplingList self
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
extern Nsim_Run Nmr_JCouplingList_FindFirstInputToNmrRun_keyval4(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.JCouplingList.measurements

child link to 
class JCoupling
  @param  Nmr_JCouplingList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_JCoupling Nmr_JCouplingList_FindFirstMeasurement(Nmr_JCouplingList self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.JCouplingList.measurements

child link to 
class JCoupling
  @param  Nmr_JCouplingList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_JCoupling Nmr_JCouplingList_FindFirstMeasurement_keyval0(Nmr_JCouplingList self);

/**
  FindFirst for ccp.nmr.Nmr.JCouplingList.measurements

child link to 
class JCoupling
  @param  Nmr_JCouplingList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_JCoupling Nmr_JCouplingList_FindFirstMeasurement_keyval1(Nmr_JCouplingList self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.JCouplingList.measurements

child link to 
class JCoupling
  @param  Nmr_JCouplingList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_JCoupling Nmr_JCouplingList_FindFirstMeasurement_keyval2(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.JCouplingList.measurements

child link to 
class JCoupling
  @param  Nmr_JCouplingList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_JCoupling Nmr_JCouplingList_FindFirstMeasurement_keyval3(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.JCouplingList.measurements

child link to 
class JCoupling
  @param  Nmr_JCouplingList self
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
extern Nmr_JCoupling Nmr_JCouplingList_FindFirstMeasurement_keyval4(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_JCouplingList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_JCouplingList_FindFirstNmrMeasurementListValidation(Nmr_JCouplingList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_JCouplingList self
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_JCouplingList_FindFirstNmrMeasurementListValidation_keyval0(Nmr_JCouplingList self);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_JCouplingList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_JCouplingList_FindFirstNmrMeasurementListValidation_keyval1(Nmr_JCouplingList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_JCouplingList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_JCouplingList_FindFirstNmrMeasurementListValidation_keyval2(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_JCouplingList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_JCouplingList_FindFirstNmrMeasurementListValidation_keyval3(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_JCouplingList self
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
extern Vald_NmrMeasurementListValidation Nmr_JCouplingList_FindFirstNmrMeasurementListValidation_keyval4(Nmr_JCouplingList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.JCouplingList
  @param  Nmr_JCouplingList self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_JCouplingList_Get(Nmr_JCouplingList self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern Acco_AccessObject Nmr_JCouplingList_GetAccess(Nmr_JCouplingList self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern Acco_AccessObject Nmr_JCouplingList_GetActiveAccess(Nmr_JCouplingList self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern ApiList Nmr_JCouplingList_GetApplicationData(Nmr_JCouplingList self);

/**
  GetByKey for ccp.nmr.Nmr.JCouplingList
  @param  Nmr_JCouplingList self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_JCouplingList Nmr_JCouplingList_GetByKey(Nmr_JCouplingList self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern ApiString Nmr_JCouplingList_GetClassName(Nmr_JCouplingList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern ApiString Nmr_JCouplingList_GetDetails(Nmr_JCouplingList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern ApiSet Nmr_JCouplingList_GetEntries(Nmr_JCouplingList self);

/**
  Get for ccp.nmr.Nmr.JCouplingList.experiments

Experiments for which 
JCouplingList is valid
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern ApiSet Nmr_JCouplingList_GetExperiments(Nmr_JCouplingList self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern ApiList Nmr_JCouplingList_GetFieldNames(Nmr_JCouplingList self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern ApiBoolean Nmr_JCouplingList_GetInConstructor(Nmr_JCouplingList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs 
using MeasurementList as input
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern ApiSet Nmr_JCouplingList_GetInputToNmrRuns(Nmr_JCouplingList self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern ApiBoolean Nmr_JCouplingList_GetIsDeleted(Nmr_JCouplingList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.isSimulated

Are data in 
this list simulated? The attribute is an annotation more than anything 
else, as there are no corresponding constraints.
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern ApiBoolean Nmr_JCouplingList_GetIsSimulated(Nmr_JCouplingList self);

/**
  Get for ccp.nmr.Nmr.JCouplingList.measurements

child link to class 
JCoupling
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern ApiSet Nmr_JCouplingList_GetMeasurements(Nmr_JCouplingList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.method

Default method used 
to calculate measurements. May be overridden for individual measurements 
in the list.
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern Meth_Method Nmr_JCouplingList_GetMethod(Nmr_JCouplingList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.name

Measurement List name, 
freely chosen by user. Intended to identify the list from other lists of 
the same type.
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern ApiString Nmr_JCouplingList_GetName(Nmr_JCouplingList self);

/**
  Get for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern ApiSet Nmr_JCouplingList_GetNmrMeasurementListValidations(Nmr_JCouplingList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.nmrProject

parent link
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_JCouplingList_GetNmrProject(Nmr_JCouplingList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.outputFromNmrRun

NmrSim.Run 
from which Measuremnet list is produced.
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern Nsim_Run Nmr_JCouplingList_GetOutputFromNmrRun(Nmr_JCouplingList self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern ApiString Nmr_JCouplingList_GetPackageName(Nmr_JCouplingList self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern ApiString Nmr_JCouplingList_GetPackageShortName(Nmr_JCouplingList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.parent

link to parent 
object - synonym for nmrProject
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_JCouplingList_GetParent(Nmr_JCouplingList self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern ApiString Nmr_JCouplingList_GetQualifiedName(Nmr_JCouplingList self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_JCouplingList_GetRoot(Nmr_JCouplingList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern ApiInteger Nmr_JCouplingList_GetSerial(Nmr_JCouplingList self);

/**
  Get for ccp.nmr.Nmr.JCouplingList.sf

Spectrometer frequency in MHz at 
which J couplings were measured.
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern ApiFloat Nmr_JCouplingList_GetSf(Nmr_JCouplingList self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern Impl_TopObject Nmr_JCouplingList_GetTopObject(Nmr_JCouplingList self);

/**
  Get for ccp.nmr.Nmr.JCouplingList.unit

Unit of measurement for J 
couplings - default 'Hz'.
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern ApiString Nmr_JCouplingList_GetUnit(Nmr_JCouplingList self);

/**
  Constructor for ccp.nmr.Nmr.JCouplingList
  @param  Nmr_NmrProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_JCouplingList Nmr_JCouplingList_Init(Nmr_NmrProject parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.JCouplingList
  @param  Nmr_NmrProject parent
  @returns  the new object
**/
extern Nmr_JCouplingList Nmr_JCouplingList_Init_reqd(Nmr_NmrProject parent);

/**
  Factory function to create ccp.nmr.Nmr.JCoupling
  @param  Nmr_JCouplingList self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_JCoupling Nmr_JCouplingList_NewJCoupling(Nmr_JCouplingList self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.Nmr.JCoupling
  @param  Nmr_JCouplingList self
  @param  ApiSet resonances
  @param  float value
  @returns  the new object
**/
extern Nmr_JCoupling Nmr_JCouplingList_NewJCoupling_reqd(Nmr_JCouplingList self, ApiSet resonances, float value);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_JCouplingList self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_JCouplingList_RemoveApplicationData(Nmr_JCouplingList self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_JCouplingList self
  @param  Entr_Entry value
**/
extern void *Nmr_JCouplingList_RemoveEntry(Nmr_JCouplingList self, Entr_Entry value);

/**
  Remove for ccp.nmr.Nmr.JCouplingList.experiments

Experiments for which 
JCouplingList is valid
  @param  Nmr_JCouplingList self
  @param  Nmr_Experiment value
**/
extern void *Nmr_JCouplingList_RemoveExperiment(Nmr_JCouplingList self, Nmr_Experiment value);

/**
  Remove for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_JCouplingList self
  @param  Nsim_Run value
**/
extern void *Nmr_JCouplingList_RemoveInputToNmrRun(Nmr_JCouplingList self, Nsim_Run value);

/**
  Remove for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_JCouplingList self
  @param  Vald_NmrMeasurementListValidation value
**/
extern void *Nmr_JCouplingList_RemoveNmrMeasurementListValidation(Nmr_JCouplingList self, Vald_NmrMeasurementListValidation value);

/**
  SetAttr for ccp.nmr.Nmr.JCouplingList
  @param  Nmr_JCouplingList self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_JCouplingList_Set(Nmr_JCouplingList self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_JCouplingList self
  @param  Acco_AccessObject value
**/
extern void *Nmr_JCouplingList_SetAccess(Nmr_JCouplingList self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_JCouplingList self
  @param  ApiList values
**/
extern void *Nmr_JCouplingList_SetApplicationData(Nmr_JCouplingList self, ApiList values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmr_JCouplingList self
  @param  ApiString value
**/
extern void *Nmr_JCouplingList_SetDetails(Nmr_JCouplingList self, ApiString value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_JCouplingList self
  @param  ApiSet values
**/
extern void *Nmr_JCouplingList_SetEntries(Nmr_JCouplingList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.JCouplingList.experiments

Experiments for which 
JCouplingList is valid
  @param  Nmr_JCouplingList self
  @param  ApiSet values
**/
extern void *Nmr_JCouplingList_SetExperiments(Nmr_JCouplingList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs 
using MeasurementList as input
  @param  Nmr_JCouplingList self
  @param  ApiSet values
**/
extern void *Nmr_JCouplingList_SetInputToNmrRuns(Nmr_JCouplingList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.isSimulated

Are data in 
this list simulated? The attribute is an annotation more than anything 
else, as there are no corresponding constraints.
  @param  Nmr_JCouplingList self
  @param  ApiBoolean value
**/
extern void *Nmr_JCouplingList_SetIsSimulated(Nmr_JCouplingList self, ApiBoolean value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.method

Default method used 
to calculate measurements. May be overridden for individual measurements 
in the list.
  @param  Nmr_JCouplingList self
  @param  Meth_Method value
**/
extern void *Nmr_JCouplingList_SetMethod(Nmr_JCouplingList self, Meth_Method value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.name

Measurement List name, 
freely chosen by user. Intended to identify the list from other lists of 
the same type.
  @param  Nmr_JCouplingList self
  @param  ApiString value
**/
extern void *Nmr_JCouplingList_SetName(Nmr_JCouplingList self, ApiString value);

/**
  Set for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_JCouplingList self
  @param  ApiSet values
**/
extern void *Nmr_JCouplingList_SetNmrMeasurementListValidations(Nmr_JCouplingList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.outputFromNmrRun

NmrSim.Run 
from which Measuremnet list is produced.
  @param  Nmr_JCouplingList self
  @param  Nsim_Run value
**/
extern void *Nmr_JCouplingList_SetOutputFromNmrRun(Nmr_JCouplingList self, Nsim_Run value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmr_JCouplingList self
  @param  ApiInteger value
**/
extern void *Nmr_JCouplingList_SetSerial(Nmr_JCouplingList self, ApiInteger value);

/**
  Set for ccp.nmr.Nmr.JCouplingList.sf

Spectrometer frequency in MHz at 
which J couplings were measured.
  @param  Nmr_JCouplingList self
  @param  ApiFloat value
**/
extern void *Nmr_JCouplingList_SetSf(Nmr_JCouplingList self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.JCouplingList.unit

Unit of measurement for J 
couplings - default 'Hz'.
  @param  Nmr_JCouplingList self
  @param  ApiString value
**/
extern void *Nmr_JCouplingList_SetUnit(Nmr_JCouplingList self, ApiString value);

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern ApiList Nmr_JCouplingList_SortedEntries(Nmr_JCouplingList self);

/**
  Sorted for ccp.nmr.Nmr.JCouplingList.experiments

Experiments for which 
JCouplingList is valid
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern ApiList Nmr_JCouplingList_SortedExperiments(Nmr_JCouplingList self);

/**
  Sorted for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern ApiList Nmr_JCouplingList_SortedInputToNmrRuns(Nmr_JCouplingList self);

/**
  Sorted for ccp.nmr.Nmr.JCouplingList.measurements

child link to class 
JCoupling
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern ApiList Nmr_JCouplingList_SortedMeasurements(Nmr_JCouplingList self);

/**
  Sorted for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_JCouplingList self
  @returns   the result
**/
extern ApiList Nmr_JCouplingList_SortedNmrMeasurementListValidations(Nmr_JCouplingList self);

#endif /* __incl__ccp_api_nmr_Nmr_JCouplingList_h__ */
