
#ifndef __incl__ccp_api_nmr_Nmr_HExchRateList_h__
#define __incl__ccp_api_nmr_Nmr_HExchRateList_h__

#include "ccp.h"

/*
  List of hydrogen exchange rate measurements.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchRateList self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_HExchRateList_AddApplicationData(Nmr_HExchRateList self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_HExchRateList self
  @param  Entr_Entry value
**/
extern void *Nmr_HExchRateList_AddEntry(Nmr_HExchRateList self, Entr_Entry value);

/**
  Add for ccp.nmr.Nmr.HExchRateList.experiments

Experiments for which 
hydrogen exchange rate list is valid
  @param  Nmr_HExchRateList self
  @param  Nmr_Experiment value
**/
extern void *Nmr_HExchRateList_AddExperiment(Nmr_HExchRateList self, Nmr_Experiment value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs 
using MeasurementList as input
  @param  Nmr_HExchRateList self
  @param  Nsim_Run value
**/
extern void *Nmr_HExchRateList_AddInputToNmrRun(Nmr_HExchRateList self, Nsim_Run value);

/**
  Add for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchRateList self
  @param  Vald_NmrMeasurementListValidation value
**/
extern void *Nmr_HExchRateList_AddNmrMeasurementListValidation(Nmr_HExchRateList self, Vald_NmrMeasurementListValidation value);

/**
  CheckAllValid for ccp.nmr.Nmr.HExchRateList
  @param  Nmr_HExchRateList self
  @param  ApiBoolean complete
**/
extern void *Nmr_HExchRateList_CheckAllValid(Nmr_HExchRateList self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.HExchRateList
  @param  Nmr_HExchRateList self
  @param  ApiBoolean complete
**/
extern void *Nmr_HExchRateList_CheckValid(Nmr_HExchRateList self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchRateList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_HExchRateList_FindAllApplicationData(Nmr_HExchRateList self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchRateList self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_HExchRateList_FindAllApplicationData_keyval0(Nmr_HExchRateList self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchRateList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_HExchRateList_FindAllApplicationData_keyval1(Nmr_HExchRateList self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchRateList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_HExchRateList_FindAllApplicationData_keyval2(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchRateList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_HExchRateList_FindAllApplicationData_keyval3(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchRateList self
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
extern ApiList Nmr_HExchRateList_FindAllApplicationData_keyval4(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchRateList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchRateList_FindAllEntries(Nmr_HExchRateList self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchRateList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchRateList_FindAllEntries_keyval0(Nmr_HExchRateList self);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchRateList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchRateList_FindAllEntries_keyval1(Nmr_HExchRateList self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchRateList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchRateList_FindAllEntries_keyval2(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchRateList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchRateList_FindAllEntries_keyval3(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchRateList self
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
extern ApiSet Nmr_HExchRateList_FindAllEntries_keyval4(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.HExchRateList.experiments

Experiments for which 
hydrogen exchange rate list is valid
  @param  Nmr_HExchRateList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchRateList_FindAllExperiments(Nmr_HExchRateList self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.HExchRateList.experiments

Experiments for which 
hydrogen exchange rate list is valid
  @param  Nmr_HExchRateList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchRateList_FindAllExperiments_keyval0(Nmr_HExchRateList self);

/**
  FindAll for ccp.nmr.Nmr.HExchRateList.experiments

Experiments for which 
hydrogen exchange rate list is valid
  @param  Nmr_HExchRateList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchRateList_FindAllExperiments_keyval1(Nmr_HExchRateList self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.HExchRateList.experiments

Experiments for which 
hydrogen exchange rate list is valid
  @param  Nmr_HExchRateList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchRateList_FindAllExperiments_keyval2(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.HExchRateList.experiments

Experiments for which 
hydrogen exchange rate list is valid
  @param  Nmr_HExchRateList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchRateList_FindAllExperiments_keyval3(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.HExchRateList.experiments

Experiments for which 
hydrogen exchange rate list is valid
  @param  Nmr_HExchRateList self
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
extern ApiSet Nmr_HExchRateList_FindAllExperiments_keyval4(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchRateList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchRateList_FindAllInputToNmrRuns(Nmr_HExchRateList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchRateList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchRateList_FindAllInputToNmrRuns_keyval0(Nmr_HExchRateList self);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchRateList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchRateList_FindAllInputToNmrRuns_keyval1(Nmr_HExchRateList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchRateList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchRateList_FindAllInputToNmrRuns_keyval2(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchRateList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchRateList_FindAllInputToNmrRuns_keyval3(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchRateList self
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
extern ApiSet Nmr_HExchRateList_FindAllInputToNmrRuns_keyval4(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.HExchRateList.measurements

child link to class 
HExchRate
  @param  Nmr_HExchRateList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchRateList_FindAllMeasurements(Nmr_HExchRateList self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.HExchRateList.measurements

child link to class 
HExchRate
  @param  Nmr_HExchRateList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchRateList_FindAllMeasurements_keyval0(Nmr_HExchRateList self);

/**
  FindAll for ccp.nmr.Nmr.HExchRateList.measurements

child link to class 
HExchRate
  @param  Nmr_HExchRateList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchRateList_FindAllMeasurements_keyval1(Nmr_HExchRateList self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.HExchRateList.measurements

child link to class 
HExchRate
  @param  Nmr_HExchRateList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchRateList_FindAllMeasurements_keyval2(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.HExchRateList.measurements

child link to class 
HExchRate
  @param  Nmr_HExchRateList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchRateList_FindAllMeasurements_keyval3(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.HExchRateList.measurements

child link to class 
HExchRate
  @param  Nmr_HExchRateList self
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
extern ApiSet Nmr_HExchRateList_FindAllMeasurements_keyval4(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchRateList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchRateList_FindAllNmrMeasurementListValidations(Nmr_HExchRateList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchRateList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchRateList_FindAllNmrMeasurementListValidations_keyval0(Nmr_HExchRateList self);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchRateList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchRateList_FindAllNmrMeasurementListValidations_keyval1(Nmr_HExchRateList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchRateList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchRateList_FindAllNmrMeasurementListValidations_keyval2(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchRateList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchRateList_FindAllNmrMeasurementListValidations_keyval3(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchRateList self
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
extern ApiSet Nmr_HExchRateList_FindAllNmrMeasurementListValidations_keyval4(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchRateList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_HExchRateList_FindFirstApplicationData(Nmr_HExchRateList self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchRateList self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_HExchRateList_FindFirstApplicationData_keyval0(Nmr_HExchRateList self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchRateList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_HExchRateList_FindFirstApplicationData_keyval1(Nmr_HExchRateList self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchRateList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_HExchRateList_FindFirstApplicationData_keyval2(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchRateList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_HExchRateList_FindFirstApplicationData_keyval3(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchRateList self
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
extern Impl_ApplicationData Nmr_HExchRateList_FindFirstApplicationData_keyval4(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchRateList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_HExchRateList_FindFirstEntry(Nmr_HExchRateList self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchRateList self
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_HExchRateList_FindFirstEntry_keyval0(Nmr_HExchRateList self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchRateList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_HExchRateList_FindFirstEntry_keyval1(Nmr_HExchRateList self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchRateList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_HExchRateList_FindFirstEntry_keyval2(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchRateList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_HExchRateList_FindFirstEntry_keyval3(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchRateList self
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
extern Entr_Entry Nmr_HExchRateList_FindFirstEntry_keyval4(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.HExchRateList.experiments

Experiments for 
which hydrogen exchange rate list is valid
  @param  Nmr_HExchRateList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_HExchRateList_FindFirstExperiment(Nmr_HExchRateList self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.HExchRateList.experiments

Experiments for 
which hydrogen exchange rate list is valid
  @param  Nmr_HExchRateList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_HExchRateList_FindFirstExperiment_keyval0(Nmr_HExchRateList self);

/**
  FindFirst for ccp.nmr.Nmr.HExchRateList.experiments

Experiments for 
which hydrogen exchange rate list is valid
  @param  Nmr_HExchRateList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_HExchRateList_FindFirstExperiment_keyval1(Nmr_HExchRateList self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.HExchRateList.experiments

Experiments for 
which hydrogen exchange rate list is valid
  @param  Nmr_HExchRateList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_HExchRateList_FindFirstExperiment_keyval2(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.HExchRateList.experiments

Experiments for 
which hydrogen exchange rate list is valid
  @param  Nmr_HExchRateList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_HExchRateList_FindFirstExperiment_keyval3(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.HExchRateList.experiments

Experiments for 
which hydrogen exchange rate list is valid
  @param  Nmr_HExchRateList self
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
extern Nmr_Experiment Nmr_HExchRateList_FindFirstExperiment_keyval4(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchRateList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_HExchRateList_FindFirstInputToNmrRun(Nmr_HExchRateList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchRateList self
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_HExchRateList_FindFirstInputToNmrRun_keyval0(Nmr_HExchRateList self);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchRateList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_HExchRateList_FindFirstInputToNmrRun_keyval1(Nmr_HExchRateList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchRateList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_HExchRateList_FindFirstInputToNmrRun_keyval2(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchRateList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_HExchRateList_FindFirstInputToNmrRun_keyval3(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchRateList self
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
extern Nsim_Run Nmr_HExchRateList_FindFirstInputToNmrRun_keyval4(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.HExchRateList.measurements

child link to 
class HExchRate
  @param  Nmr_HExchRateList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_HExchRate Nmr_HExchRateList_FindFirstMeasurement(Nmr_HExchRateList self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.HExchRateList.measurements

child link to 
class HExchRate
  @param  Nmr_HExchRateList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_HExchRate Nmr_HExchRateList_FindFirstMeasurement_keyval0(Nmr_HExchRateList self);

/**
  FindFirst for ccp.nmr.Nmr.HExchRateList.measurements

child link to 
class HExchRate
  @param  Nmr_HExchRateList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_HExchRate Nmr_HExchRateList_FindFirstMeasurement_keyval1(Nmr_HExchRateList self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.HExchRateList.measurements

child link to 
class HExchRate
  @param  Nmr_HExchRateList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_HExchRate Nmr_HExchRateList_FindFirstMeasurement_keyval2(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.HExchRateList.measurements

child link to 
class HExchRate
  @param  Nmr_HExchRateList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_HExchRate Nmr_HExchRateList_FindFirstMeasurement_keyval3(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.HExchRateList.measurements

child link to 
class HExchRate
  @param  Nmr_HExchRateList self
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
extern Nmr_HExchRate Nmr_HExchRateList_FindFirstMeasurement_keyval4(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchRateList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_HExchRateList_FindFirstNmrMeasurementListValidation(Nmr_HExchRateList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchRateList self
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_HExchRateList_FindFirstNmrMeasurementListValidation_keyval0(Nmr_HExchRateList self);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchRateList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_HExchRateList_FindFirstNmrMeasurementListValidation_keyval1(Nmr_HExchRateList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchRateList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_HExchRateList_FindFirstNmrMeasurementListValidation_keyval2(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchRateList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_HExchRateList_FindFirstNmrMeasurementListValidation_keyval3(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchRateList self
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
extern Vald_NmrMeasurementListValidation Nmr_HExchRateList_FindFirstNmrMeasurementListValidation_keyval4(Nmr_HExchRateList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.HExchRateList
  @param  Nmr_HExchRateList self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_HExchRateList_Get(Nmr_HExchRateList self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern Acco_AccessObject Nmr_HExchRateList_GetAccess(Nmr_HExchRateList self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern Acco_AccessObject Nmr_HExchRateList_GetActiveAccess(Nmr_HExchRateList self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern ApiList Nmr_HExchRateList_GetApplicationData(Nmr_HExchRateList self);

/**
  GetByKey for ccp.nmr.Nmr.HExchRateList
  @param  Nmr_HExchRateList self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_HExchRateList Nmr_HExchRateList_GetByKey(Nmr_HExchRateList self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern ApiString Nmr_HExchRateList_GetClassName(Nmr_HExchRateList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern ApiString Nmr_HExchRateList_GetDetails(Nmr_HExchRateList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern ApiSet Nmr_HExchRateList_GetEntries(Nmr_HExchRateList self);

/**
  Get for ccp.nmr.Nmr.HExchRateList.experiments

Experiments for which 
hydrogen exchange rate list is valid
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern ApiSet Nmr_HExchRateList_GetExperiments(Nmr_HExchRateList self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern ApiList Nmr_HExchRateList_GetFieldNames(Nmr_HExchRateList self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern ApiBoolean Nmr_HExchRateList_GetInConstructor(Nmr_HExchRateList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs 
using MeasurementList as input
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern ApiSet Nmr_HExchRateList_GetInputToNmrRuns(Nmr_HExchRateList self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern ApiBoolean Nmr_HExchRateList_GetIsDeleted(Nmr_HExchRateList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.isSimulated

Are data in 
this list simulated? The attribute is an annotation more than anything 
else, as there are no corresponding constraints.
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern ApiBoolean Nmr_HExchRateList_GetIsSimulated(Nmr_HExchRateList self);

/**
  Get for ccp.nmr.Nmr.HExchRateList.measurements

child link to class 
HExchRate
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern ApiSet Nmr_HExchRateList_GetMeasurements(Nmr_HExchRateList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.method

Default method used 
to calculate measurements. May be overridden for individual measurements 
in the list.
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern Meth_Method Nmr_HExchRateList_GetMethod(Nmr_HExchRateList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.name

Measurement List name, 
freely chosen by user. Intended to identify the list from other lists of 
the same type.
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern ApiString Nmr_HExchRateList_GetName(Nmr_HExchRateList self);

/**
  Get for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern ApiSet Nmr_HExchRateList_GetNmrMeasurementListValidations(Nmr_HExchRateList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.nmrProject

parent link
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_HExchRateList_GetNmrProject(Nmr_HExchRateList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.outputFromNmrRun

NmrSim.Run 
from which Measuremnet list is produced.
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern Nsim_Run Nmr_HExchRateList_GetOutputFromNmrRun(Nmr_HExchRateList self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern ApiString Nmr_HExchRateList_GetPackageName(Nmr_HExchRateList self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern ApiString Nmr_HExchRateList_GetPackageShortName(Nmr_HExchRateList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.parent

link to parent 
object - synonym for nmrProject
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_HExchRateList_GetParent(Nmr_HExchRateList self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern ApiString Nmr_HExchRateList_GetQualifiedName(Nmr_HExchRateList self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_HExchRateList_GetRoot(Nmr_HExchRateList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern ApiInteger Nmr_HExchRateList_GetSerial(Nmr_HExchRateList self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern Impl_TopObject Nmr_HExchRateList_GetTopObject(Nmr_HExchRateList self);

/**
  Get for ccp.nmr.Nmr.HExchRateList.unit

Measurement unit for hydrogen 
exchange rate. Default is 's-1', a recommended alternative is 'min-1'.
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern ApiString Nmr_HExchRateList_GetUnit(Nmr_HExchRateList self);

/**
  Constructor for ccp.nmr.Nmr.HExchRateList
  @param  Nmr_NmrProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_HExchRateList Nmr_HExchRateList_Init(Nmr_NmrProject parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.HExchRateList
  @param  Nmr_NmrProject parent
  @returns  the new object
**/
extern Nmr_HExchRateList Nmr_HExchRateList_Init_reqd(Nmr_NmrProject parent);

/**
  Factory function to create ccp.nmr.Nmr.HExchRate
  @param  Nmr_HExchRateList self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_HExchRate Nmr_HExchRateList_NewHExchRate(Nmr_HExchRateList self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.Nmr.HExchRate
  @param  Nmr_HExchRateList self
  @param  Nmr_Resonance resonance
  @param  float value
  @returns  the new object
**/
extern Nmr_HExchRate Nmr_HExchRateList_NewHExchRate_reqd(Nmr_HExchRateList self, Nmr_Resonance resonance, float value);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchRateList self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_HExchRateList_RemoveApplicationData(Nmr_HExchRateList self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_HExchRateList self
  @param  Entr_Entry value
**/
extern void *Nmr_HExchRateList_RemoveEntry(Nmr_HExchRateList self, Entr_Entry value);

/**
  Remove for ccp.nmr.Nmr.HExchRateList.experiments

Experiments for which 
hydrogen exchange rate list is valid
  @param  Nmr_HExchRateList self
  @param  Nmr_Experiment value
**/
extern void *Nmr_HExchRateList_RemoveExperiment(Nmr_HExchRateList self, Nmr_Experiment value);

/**
  Remove for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchRateList self
  @param  Nsim_Run value
**/
extern void *Nmr_HExchRateList_RemoveInputToNmrRun(Nmr_HExchRateList self, Nsim_Run value);

/**
  Remove for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchRateList self
  @param  Vald_NmrMeasurementListValidation value
**/
extern void *Nmr_HExchRateList_RemoveNmrMeasurementListValidation(Nmr_HExchRateList self, Vald_NmrMeasurementListValidation value);

/**
  SetAttr for ccp.nmr.Nmr.HExchRateList
  @param  Nmr_HExchRateList self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_HExchRateList_Set(Nmr_HExchRateList self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_HExchRateList self
  @param  Acco_AccessObject value
**/
extern void *Nmr_HExchRateList_SetAccess(Nmr_HExchRateList self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchRateList self
  @param  ApiList values
**/
extern void *Nmr_HExchRateList_SetApplicationData(Nmr_HExchRateList self, ApiList values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmr_HExchRateList self
  @param  ApiString value
**/
extern void *Nmr_HExchRateList_SetDetails(Nmr_HExchRateList self, ApiString value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_HExchRateList self
  @param  ApiSet values
**/
extern void *Nmr_HExchRateList_SetEntries(Nmr_HExchRateList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.HExchRateList.experiments

Experiments for which 
hydrogen exchange rate list is valid
  @param  Nmr_HExchRateList self
  @param  ApiSet values
**/
extern void *Nmr_HExchRateList_SetExperiments(Nmr_HExchRateList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs 
using MeasurementList as input
  @param  Nmr_HExchRateList self
  @param  ApiSet values
**/
extern void *Nmr_HExchRateList_SetInputToNmrRuns(Nmr_HExchRateList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.isSimulated

Are data in 
this list simulated? The attribute is an annotation more than anything 
else, as there are no corresponding constraints.
  @param  Nmr_HExchRateList self
  @param  ApiBoolean value
**/
extern void *Nmr_HExchRateList_SetIsSimulated(Nmr_HExchRateList self, ApiBoolean value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.method

Default method used 
to calculate measurements. May be overridden for individual measurements 
in the list.
  @param  Nmr_HExchRateList self
  @param  Meth_Method value
**/
extern void *Nmr_HExchRateList_SetMethod(Nmr_HExchRateList self, Meth_Method value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.name

Measurement List name, 
freely chosen by user. Intended to identify the list from other lists of 
the same type.
  @param  Nmr_HExchRateList self
  @param  ApiString value
**/
extern void *Nmr_HExchRateList_SetName(Nmr_HExchRateList self, ApiString value);

/**
  Set for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchRateList self
  @param  ApiSet values
**/
extern void *Nmr_HExchRateList_SetNmrMeasurementListValidations(Nmr_HExchRateList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.outputFromNmrRun

NmrSim.Run 
from which Measuremnet list is produced.
  @param  Nmr_HExchRateList self
  @param  Nsim_Run value
**/
extern void *Nmr_HExchRateList_SetOutputFromNmrRun(Nmr_HExchRateList self, Nsim_Run value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmr_HExchRateList self
  @param  ApiInteger value
**/
extern void *Nmr_HExchRateList_SetSerial(Nmr_HExchRateList self, ApiInteger value);

/**
  Set for ccp.nmr.Nmr.HExchRateList.unit

Measurement unit for hydrogen 
exchange rate. Default is 's-1', a recommended alternative is 'min-1'.
  @param  Nmr_HExchRateList self
  @param  ApiString value
**/
extern void *Nmr_HExchRateList_SetUnit(Nmr_HExchRateList self, ApiString value);

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern ApiList Nmr_HExchRateList_SortedEntries(Nmr_HExchRateList self);

/**
  Sorted for ccp.nmr.Nmr.HExchRateList.experiments

Experiments for which 
hydrogen exchange rate list is valid
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern ApiList Nmr_HExchRateList_SortedExperiments(Nmr_HExchRateList self);

/**
  Sorted for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern ApiList Nmr_HExchRateList_SortedInputToNmrRuns(Nmr_HExchRateList self);

/**
  Sorted for ccp.nmr.Nmr.HExchRateList.measurements

child link to class 
HExchRate
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern ApiList Nmr_HExchRateList_SortedMeasurements(Nmr_HExchRateList self);

/**
  Sorted for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchRateList self
  @returns   the result
**/
extern ApiList Nmr_HExchRateList_SortedNmrMeasurementListValidations(Nmr_HExchRateList self);

#endif /* __incl__ccp_api_nmr_Nmr_HExchRateList_h__ */
