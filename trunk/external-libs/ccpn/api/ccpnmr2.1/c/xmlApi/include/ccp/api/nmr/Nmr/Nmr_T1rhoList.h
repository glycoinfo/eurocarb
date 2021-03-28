
#ifndef __incl__ccp_api_nmr_Nmr_T1rhoList_h__
#define __incl__ccp_api_nmr_Nmr_T1rhoList_h__

#include "ccp.h"

/*
  T1 rho measurement list
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1rhoList self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_T1rhoList_AddApplicationData(Nmr_T1rhoList self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_T1rhoList self
  @param  Entr_Entry value
**/
extern void *Nmr_T1rhoList_AddEntry(Nmr_T1rhoList self, Entr_Entry value);

/**
  Add for ccp.nmr.Nmr.T1rhoList.experiments

Experiments for which T1rho 
relaxation is valid
  @param  Nmr_T1rhoList self
  @param  Nmr_Experiment value
**/
extern void *Nmr_T1rhoList_AddExperiment(Nmr_T1rhoList self, Nmr_Experiment value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs 
using MeasurementList as input
  @param  Nmr_T1rhoList self
  @param  Nsim_Run value
**/
extern void *Nmr_T1rhoList_AddInputToNmrRun(Nmr_T1rhoList self, Nsim_Run value);

/**
  Add for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_T1rhoList self
  @param  Vald_NmrMeasurementListValidation value
**/
extern void *Nmr_T1rhoList_AddNmrMeasurementListValidation(Nmr_T1rhoList self, Vald_NmrMeasurementListValidation value);

/**
  CheckAllValid for ccp.nmr.Nmr.T1rhoList
  @param  Nmr_T1rhoList self
  @param  ApiBoolean complete
**/
extern void *Nmr_T1rhoList_CheckAllValid(Nmr_T1rhoList self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.T1rhoList
  @param  Nmr_T1rhoList self
  @param  ApiBoolean complete
**/
extern void *Nmr_T1rhoList_CheckValid(Nmr_T1rhoList self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1rhoList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_T1rhoList_FindAllApplicationData(Nmr_T1rhoList self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1rhoList self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_T1rhoList_FindAllApplicationData_keyval0(Nmr_T1rhoList self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1rhoList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_T1rhoList_FindAllApplicationData_keyval1(Nmr_T1rhoList self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1rhoList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_T1rhoList_FindAllApplicationData_keyval2(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1rhoList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_T1rhoList_FindAllApplicationData_keyval3(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1rhoList self
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
extern ApiList Nmr_T1rhoList_FindAllApplicationData_keyval4(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_T1rhoList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1rhoList_FindAllEntries(Nmr_T1rhoList self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_T1rhoList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1rhoList_FindAllEntries_keyval0(Nmr_T1rhoList self);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_T1rhoList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1rhoList_FindAllEntries_keyval1(Nmr_T1rhoList self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_T1rhoList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1rhoList_FindAllEntries_keyval2(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_T1rhoList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1rhoList_FindAllEntries_keyval3(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_T1rhoList self
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
extern ApiSet Nmr_T1rhoList_FindAllEntries_keyval4(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.T1rhoList.experiments

Experiments for which 
T1rho relaxation is valid
  @param  Nmr_T1rhoList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1rhoList_FindAllExperiments(Nmr_T1rhoList self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.T1rhoList.experiments

Experiments for which 
T1rho relaxation is valid
  @param  Nmr_T1rhoList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1rhoList_FindAllExperiments_keyval0(Nmr_T1rhoList self);

/**
  FindAll for ccp.nmr.Nmr.T1rhoList.experiments

Experiments for which 
T1rho relaxation is valid
  @param  Nmr_T1rhoList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1rhoList_FindAllExperiments_keyval1(Nmr_T1rhoList self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.T1rhoList.experiments

Experiments for which 
T1rho relaxation is valid
  @param  Nmr_T1rhoList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1rhoList_FindAllExperiments_keyval2(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.T1rhoList.experiments

Experiments for which 
T1rho relaxation is valid
  @param  Nmr_T1rhoList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1rhoList_FindAllExperiments_keyval3(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.T1rhoList.experiments

Experiments for which 
T1rho relaxation is valid
  @param  Nmr_T1rhoList self
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
extern ApiSet Nmr_T1rhoList_FindAllExperiments_keyval4(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_T1rhoList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1rhoList_FindAllInputToNmrRuns(Nmr_T1rhoList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_T1rhoList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1rhoList_FindAllInputToNmrRuns_keyval0(Nmr_T1rhoList self);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_T1rhoList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1rhoList_FindAllInputToNmrRuns_keyval1(Nmr_T1rhoList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_T1rhoList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1rhoList_FindAllInputToNmrRuns_keyval2(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_T1rhoList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1rhoList_FindAllInputToNmrRuns_keyval3(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_T1rhoList self
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
extern ApiSet Nmr_T1rhoList_FindAllInputToNmrRuns_keyval4(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.T1rhoList.measurements

child link to class 
T1Rho
  @param  Nmr_T1rhoList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1rhoList_FindAllMeasurements(Nmr_T1rhoList self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.T1rhoList.measurements

child link to class 
T1Rho
  @param  Nmr_T1rhoList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1rhoList_FindAllMeasurements_keyval0(Nmr_T1rhoList self);

/**
  FindAll for ccp.nmr.Nmr.T1rhoList.measurements

child link to class 
T1Rho
  @param  Nmr_T1rhoList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1rhoList_FindAllMeasurements_keyval1(Nmr_T1rhoList self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.T1rhoList.measurements

child link to class 
T1Rho
  @param  Nmr_T1rhoList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1rhoList_FindAllMeasurements_keyval2(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.T1rhoList.measurements

child link to class 
T1Rho
  @param  Nmr_T1rhoList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1rhoList_FindAllMeasurements_keyval3(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.T1rhoList.measurements

child link to class 
T1Rho
  @param  Nmr_T1rhoList self
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
extern ApiSet Nmr_T1rhoList_FindAllMeasurements_keyval4(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_T1rhoList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1rhoList_FindAllNmrMeasurementListValidations(Nmr_T1rhoList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_T1rhoList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1rhoList_FindAllNmrMeasurementListValidations_keyval0(Nmr_T1rhoList self);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_T1rhoList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1rhoList_FindAllNmrMeasurementListValidations_keyval1(Nmr_T1rhoList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_T1rhoList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1rhoList_FindAllNmrMeasurementListValidations_keyval2(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_T1rhoList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_T1rhoList_FindAllNmrMeasurementListValidations_keyval3(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_T1rhoList self
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
extern ApiSet Nmr_T1rhoList_FindAllNmrMeasurementListValidations_keyval4(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1rhoList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_T1rhoList_FindFirstApplicationData(Nmr_T1rhoList self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1rhoList self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_T1rhoList_FindFirstApplicationData_keyval0(Nmr_T1rhoList self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1rhoList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_T1rhoList_FindFirstApplicationData_keyval1(Nmr_T1rhoList self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1rhoList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_T1rhoList_FindFirstApplicationData_keyval2(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1rhoList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_T1rhoList_FindFirstApplicationData_keyval3(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1rhoList self
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
extern Impl_ApplicationData Nmr_T1rhoList_FindFirstApplicationData_keyval4(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_T1rhoList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_T1rhoList_FindFirstEntry(Nmr_T1rhoList self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_T1rhoList self
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_T1rhoList_FindFirstEntry_keyval0(Nmr_T1rhoList self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_T1rhoList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_T1rhoList_FindFirstEntry_keyval1(Nmr_T1rhoList self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_T1rhoList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_T1rhoList_FindFirstEntry_keyval2(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_T1rhoList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_T1rhoList_FindFirstEntry_keyval3(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_T1rhoList self
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
extern Entr_Entry Nmr_T1rhoList_FindFirstEntry_keyval4(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.T1rhoList.experiments

Experiments for which 
T1rho relaxation is valid
  @param  Nmr_T1rhoList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_T1rhoList_FindFirstExperiment(Nmr_T1rhoList self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.T1rhoList.experiments

Experiments for which 
T1rho relaxation is valid
  @param  Nmr_T1rhoList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_T1rhoList_FindFirstExperiment_keyval0(Nmr_T1rhoList self);

/**
  FindFirst for ccp.nmr.Nmr.T1rhoList.experiments

Experiments for which 
T1rho relaxation is valid
  @param  Nmr_T1rhoList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_T1rhoList_FindFirstExperiment_keyval1(Nmr_T1rhoList self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.T1rhoList.experiments

Experiments for which 
T1rho relaxation is valid
  @param  Nmr_T1rhoList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_T1rhoList_FindFirstExperiment_keyval2(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.T1rhoList.experiments

Experiments for which 
T1rho relaxation is valid
  @param  Nmr_T1rhoList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_T1rhoList_FindFirstExperiment_keyval3(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.T1rhoList.experiments

Experiments for which 
T1rho relaxation is valid
  @param  Nmr_T1rhoList self
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
extern Nmr_Experiment Nmr_T1rhoList_FindFirstExperiment_keyval4(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_T1rhoList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_T1rhoList_FindFirstInputToNmrRun(Nmr_T1rhoList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_T1rhoList self
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_T1rhoList_FindFirstInputToNmrRun_keyval0(Nmr_T1rhoList self);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_T1rhoList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_T1rhoList_FindFirstInputToNmrRun_keyval1(Nmr_T1rhoList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_T1rhoList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_T1rhoList_FindFirstInputToNmrRun_keyval2(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_T1rhoList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_T1rhoList_FindFirstInputToNmrRun_keyval3(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_T1rhoList self
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
extern Nsim_Run Nmr_T1rhoList_FindFirstInputToNmrRun_keyval4(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.T1rhoList.measurements

child link to class 
T1Rho
  @param  Nmr_T1rhoList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_T1Rho Nmr_T1rhoList_FindFirstMeasurement(Nmr_T1rhoList self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.T1rhoList.measurements

child link to class 
T1Rho
  @param  Nmr_T1rhoList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_T1Rho Nmr_T1rhoList_FindFirstMeasurement_keyval0(Nmr_T1rhoList self);

/**
  FindFirst for ccp.nmr.Nmr.T1rhoList.measurements

child link to class 
T1Rho
  @param  Nmr_T1rhoList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_T1Rho Nmr_T1rhoList_FindFirstMeasurement_keyval1(Nmr_T1rhoList self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.T1rhoList.measurements

child link to class 
T1Rho
  @param  Nmr_T1rhoList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_T1Rho Nmr_T1rhoList_FindFirstMeasurement_keyval2(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.T1rhoList.measurements

child link to class 
T1Rho
  @param  Nmr_T1rhoList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_T1Rho Nmr_T1rhoList_FindFirstMeasurement_keyval3(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.T1rhoList.measurements

child link to class 
T1Rho
  @param  Nmr_T1rhoList self
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
extern Nmr_T1Rho Nmr_T1rhoList_FindFirstMeasurement_keyval4(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_T1rhoList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_T1rhoList_FindFirstNmrMeasurementListValidation(Nmr_T1rhoList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_T1rhoList self
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_T1rhoList_FindFirstNmrMeasurementListValidation_keyval0(Nmr_T1rhoList self);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_T1rhoList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_T1rhoList_FindFirstNmrMeasurementListValidation_keyval1(Nmr_T1rhoList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_T1rhoList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_T1rhoList_FindFirstNmrMeasurementListValidation_keyval2(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_T1rhoList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_T1rhoList_FindFirstNmrMeasurementListValidation_keyval3(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_T1rhoList self
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
extern Vald_NmrMeasurementListValidation Nmr_T1rhoList_FindFirstNmrMeasurementListValidation_keyval4(Nmr_T1rhoList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.T1rhoList
  @param  Nmr_T1rhoList self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_T1rhoList_Get(Nmr_T1rhoList self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern Acco_AccessObject Nmr_T1rhoList_GetAccess(Nmr_T1rhoList self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern Acco_AccessObject Nmr_T1rhoList_GetActiveAccess(Nmr_T1rhoList self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern ApiList Nmr_T1rhoList_GetApplicationData(Nmr_T1rhoList self);

/**
  GetByKey for ccp.nmr.Nmr.T1rhoList
  @param  Nmr_T1rhoList self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_T1rhoList Nmr_T1rhoList_GetByKey(Nmr_T1rhoList self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern ApiString Nmr_T1rhoList_GetClassName(Nmr_T1rhoList self);

/**
  Get for ccp.nmr.Nmr.T1rhoList.coherenceType

Type of coherence 
measured

T1rho values are referred to a single Resonance. Where more 
than one resonance is involved (coherence types other than 'SQ'), it is 
assumed that the other one is obvious from context, and/or that 
identifying information is presented in the 'details' record.
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern ApiString Nmr_T1rhoList_GetCoherenceType(Nmr_T1rhoList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern ApiString Nmr_T1rhoList_GetDetails(Nmr_T1rhoList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern ApiSet Nmr_T1rhoList_GetEntries(Nmr_T1rhoList self);

/**
  Get for ccp.nmr.Nmr.T1rhoList.experiments

Experiments for which T1rho 
relaxation is valid
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern ApiSet Nmr_T1rhoList_GetExperiments(Nmr_T1rhoList self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern ApiList Nmr_T1rhoList_GetFieldNames(Nmr_T1rhoList self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern ApiBoolean Nmr_T1rhoList_GetInConstructor(Nmr_T1rhoList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs 
using MeasurementList as input
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern ApiSet Nmr_T1rhoList_GetInputToNmrRuns(Nmr_T1rhoList self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern ApiBoolean Nmr_T1rhoList_GetIsDeleted(Nmr_T1rhoList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.isSimulated

Are data in 
this list simulated? The attribute is an annotation more than anything 
else, as there are no corresponding constraints.
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern ApiBoolean Nmr_T1rhoList_GetIsSimulated(Nmr_T1rhoList self);

/**
  Get for ccp.nmr.Nmr.T1rhoList.measurements

child link to class T1Rho
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern ApiSet Nmr_T1rhoList_GetMeasurements(Nmr_T1rhoList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.method

Default method used 
to calculate measurements. May be overridden for individual measurements 
in the list.
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern Meth_Method Nmr_T1rhoList_GetMethod(Nmr_T1rhoList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.name

Measurement List name, 
freely chosen by user. Intended to identify the list from other lists of 
the same type.
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern ApiString Nmr_T1rhoList_GetName(Nmr_T1rhoList self);

/**
  Get for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern ApiSet Nmr_T1rhoList_GetNmrMeasurementListValidations(Nmr_T1rhoList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.nmrProject

parent link
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_T1rhoList_GetNmrProject(Nmr_T1rhoList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.outputFromNmrRun

NmrSim.Run 
from which Measuremnet list is produced.
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern Nsim_Run Nmr_T1rhoList_GetOutputFromNmrRun(Nmr_T1rhoList self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern ApiString Nmr_T1rhoList_GetPackageName(Nmr_T1rhoList self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern ApiString Nmr_T1rhoList_GetPackageShortName(Nmr_T1rhoList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.parent

link to parent 
object - synonym for nmrProject
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_T1rhoList_GetParent(Nmr_T1rhoList self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern ApiString Nmr_T1rhoList_GetQualifiedName(Nmr_T1rhoList self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_T1rhoList_GetRoot(Nmr_T1rhoList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern ApiInteger Nmr_T1rhoList_GetSerial(Nmr_T1rhoList self);

/**
  Get for ccp.nmr.Nmr.T1rhoList.sf

Spectrometer frequency in MHz at which 
T1rho values were measured.
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern ApiFloat Nmr_T1rhoList_GetSf(Nmr_T1rhoList self);

/**
  Get for ccp.nmr.Nmr.T1rhoList.tempCalibMethod

Temperature calibration 
method (open string enumeration)
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern ApiString Nmr_T1rhoList_GetTempCalibMethod(Nmr_T1rhoList self);

/**
  Get for ccp.nmr.Nmr.T1rhoList.tempControlMethod

Temperature control 
method (open string enumeration)
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern ApiString Nmr_T1rhoList_GetTempControlMethod(Nmr_T1rhoList self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern Impl_TopObject Nmr_T1rhoList_GetTopObject(Nmr_T1rhoList self);

/**
  Get for ccp.nmr.Nmr.T1rhoList.unit

Unit of measurement for T1 rho - 
default 's'.
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern ApiString Nmr_T1rhoList_GetUnit(Nmr_T1rhoList self);

/**
  Constructor for ccp.nmr.Nmr.T1rhoList
  @param  Nmr_NmrProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_T1rhoList Nmr_T1rhoList_Init(Nmr_NmrProject parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.T1rhoList
  @param  Nmr_NmrProject parent
  @param  float sf
  @returns  the new object
**/
extern Nmr_T1rhoList Nmr_T1rhoList_Init_reqd(Nmr_NmrProject parent, float sf);

/**
  Factory function to create ccp.nmr.Nmr.T1Rho
  @param  Nmr_T1rhoList self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_T1Rho Nmr_T1rhoList_NewT1Rho(Nmr_T1rhoList self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.Nmr.T1Rho
  @param  Nmr_T1rhoList self
  @param  Nmr_Resonance resonance
  @param  float value
  @returns  the new object
**/
extern Nmr_T1Rho Nmr_T1rhoList_NewT1Rho_reqd(Nmr_T1rhoList self, Nmr_Resonance resonance, float value);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1rhoList self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_T1rhoList_RemoveApplicationData(Nmr_T1rhoList self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_T1rhoList self
  @param  Entr_Entry value
**/
extern void *Nmr_T1rhoList_RemoveEntry(Nmr_T1rhoList self, Entr_Entry value);

/**
  Remove for ccp.nmr.Nmr.T1rhoList.experiments

Experiments for which 
T1rho relaxation is valid
  @param  Nmr_T1rhoList self
  @param  Nmr_Experiment value
**/
extern void *Nmr_T1rhoList_RemoveExperiment(Nmr_T1rhoList self, Nmr_Experiment value);

/**
  Remove for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_T1rhoList self
  @param  Nsim_Run value
**/
extern void *Nmr_T1rhoList_RemoveInputToNmrRun(Nmr_T1rhoList self, Nsim_Run value);

/**
  Remove for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_T1rhoList self
  @param  Vald_NmrMeasurementListValidation value
**/
extern void *Nmr_T1rhoList_RemoveNmrMeasurementListValidation(Nmr_T1rhoList self, Vald_NmrMeasurementListValidation value);

/**
  SetAttr for ccp.nmr.Nmr.T1rhoList
  @param  Nmr_T1rhoList self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_T1rhoList_Set(Nmr_T1rhoList self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_T1rhoList self
  @param  Acco_AccessObject value
**/
extern void *Nmr_T1rhoList_SetAccess(Nmr_T1rhoList self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_T1rhoList self
  @param  ApiList values
**/
extern void *Nmr_T1rhoList_SetApplicationData(Nmr_T1rhoList self, ApiList values);

/**
  Set for ccp.nmr.Nmr.T1rhoList.coherenceType

Type of coherence 
measured

T1rho values are referred to a single Resonance. Where more 
than one resonance is involved (coherence types other than 'SQ'), it is 
assumed that the other one is obvious from context, and/or that 
identifying information is presented in the 'details' record.
  @param  Nmr_T1rhoList self
  @param  ApiString value
**/
extern void *Nmr_T1rhoList_SetCoherenceType(Nmr_T1rhoList self, ApiString value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmr_T1rhoList self
  @param  ApiString value
**/
extern void *Nmr_T1rhoList_SetDetails(Nmr_T1rhoList self, ApiString value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_T1rhoList self
  @param  ApiSet values
**/
extern void *Nmr_T1rhoList_SetEntries(Nmr_T1rhoList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.T1rhoList.experiments

Experiments for which T1rho 
relaxation is valid
  @param  Nmr_T1rhoList self
  @param  ApiSet values
**/
extern void *Nmr_T1rhoList_SetExperiments(Nmr_T1rhoList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs 
using MeasurementList as input
  @param  Nmr_T1rhoList self
  @param  ApiSet values
**/
extern void *Nmr_T1rhoList_SetInputToNmrRuns(Nmr_T1rhoList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.isSimulated

Are data in 
this list simulated? The attribute is an annotation more than anything 
else, as there are no corresponding constraints.
  @param  Nmr_T1rhoList self
  @param  ApiBoolean value
**/
extern void *Nmr_T1rhoList_SetIsSimulated(Nmr_T1rhoList self, ApiBoolean value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.method

Default method used 
to calculate measurements. May be overridden for individual measurements 
in the list.
  @param  Nmr_T1rhoList self
  @param  Meth_Method value
**/
extern void *Nmr_T1rhoList_SetMethod(Nmr_T1rhoList self, Meth_Method value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.name

Measurement List name, 
freely chosen by user. Intended to identify the list from other lists of 
the same type.
  @param  Nmr_T1rhoList self
  @param  ApiString value
**/
extern void *Nmr_T1rhoList_SetName(Nmr_T1rhoList self, ApiString value);

/**
  Set for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_T1rhoList self
  @param  ApiSet values
**/
extern void *Nmr_T1rhoList_SetNmrMeasurementListValidations(Nmr_T1rhoList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.outputFromNmrRun

NmrSim.Run 
from which Measuremnet list is produced.
  @param  Nmr_T1rhoList self
  @param  Nsim_Run value
**/
extern void *Nmr_T1rhoList_SetOutputFromNmrRun(Nmr_T1rhoList self, Nsim_Run value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmr_T1rhoList self
  @param  ApiInteger value
**/
extern void *Nmr_T1rhoList_SetSerial(Nmr_T1rhoList self, ApiInteger value);

/**
  Set for ccp.nmr.Nmr.T1rhoList.sf

Spectrometer frequency in MHz at which 
T1rho values were measured.
  @param  Nmr_T1rhoList self
  @param  ApiFloat value
**/
extern void *Nmr_T1rhoList_SetSf(Nmr_T1rhoList self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.T1rhoList.tempCalibMethod

Temperature calibration 
method (open string enumeration)
  @param  Nmr_T1rhoList self
  @param  ApiString value
**/
extern void *Nmr_T1rhoList_SetTempCalibMethod(Nmr_T1rhoList self, ApiString value);

/**
  Set for ccp.nmr.Nmr.T1rhoList.tempControlMethod

Temperature control 
method (open string enumeration)
  @param  Nmr_T1rhoList self
  @param  ApiString value
**/
extern void *Nmr_T1rhoList_SetTempControlMethod(Nmr_T1rhoList self, ApiString value);

/**
  Set for ccp.nmr.Nmr.T1rhoList.unit

Unit of measurement for T1 rho - 
default 's'.
  @param  Nmr_T1rhoList self
  @param  ApiString value
**/
extern void *Nmr_T1rhoList_SetUnit(Nmr_T1rhoList self, ApiString value);

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern ApiList Nmr_T1rhoList_SortedEntries(Nmr_T1rhoList self);

/**
  Sorted for ccp.nmr.Nmr.T1rhoList.experiments

Experiments for which 
T1rho relaxation is valid
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern ApiList Nmr_T1rhoList_SortedExperiments(Nmr_T1rhoList self);

/**
  Sorted for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern ApiList Nmr_T1rhoList_SortedInputToNmrRuns(Nmr_T1rhoList self);

/**
  Sorted for ccp.nmr.Nmr.T1rhoList.measurements

child link to class T1Rho
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern ApiList Nmr_T1rhoList_SortedMeasurements(Nmr_T1rhoList self);

/**
  Sorted for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_T1rhoList self
  @returns   the result
**/
extern ApiList Nmr_T1rhoList_SortedNmrMeasurementListValidations(Nmr_T1rhoList self);

#endif /* __incl__ccp_api_nmr_Nmr_T1rhoList_h__ */
