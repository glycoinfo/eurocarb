
#ifndef __incl__ccp_api_nmr_Nmr_HExchProtectionList_h__
#define __incl__ccp_api_nmr_Nmr_HExchProtectionList_h__

#include "ccp.h"

/*
  List of hydrogen exchange protection factor measurements.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchProtectionList self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_HExchProtectionList_AddApplicationData(Nmr_HExchProtectionList self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_HExchProtectionList self
  @param  Entr_Entry value
**/
extern void *Nmr_HExchProtectionList_AddEntry(Nmr_HExchProtectionList self, Entr_Entry value);

/**
  Add for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments for 
which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @param  Nmr_Experiment value
**/
extern void *Nmr_HExchProtectionList_AddExperiment(Nmr_HExchProtectionList self, Nmr_Experiment value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs 
using MeasurementList as input
  @param  Nmr_HExchProtectionList self
  @param  Nsim_Run value
**/
extern void *Nmr_HExchProtectionList_AddInputToNmrRun(Nmr_HExchProtectionList self, Nsim_Run value);

/**
  Add for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchProtectionList self
  @param  Vald_NmrMeasurementListValidation value
**/
extern void *Nmr_HExchProtectionList_AddNmrMeasurementListValidation(Nmr_HExchProtectionList self, Vald_NmrMeasurementListValidation value);

/**
  CheckAllValid for ccp.nmr.Nmr.HExchProtectionList
  @param  Nmr_HExchProtectionList self
  @param  ApiBoolean complete
**/
extern void *Nmr_HExchProtectionList_CheckAllValid(Nmr_HExchProtectionList self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.HExchProtectionList
  @param  Nmr_HExchProtectionList self
  @param  ApiBoolean complete
**/
extern void *Nmr_HExchProtectionList_CheckValid(Nmr_HExchProtectionList self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchProtectionList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_HExchProtectionList_FindAllApplicationData(Nmr_HExchProtectionList self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchProtectionList self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_HExchProtectionList_FindAllApplicationData_keyval0(Nmr_HExchProtectionList self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchProtectionList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_HExchProtectionList_FindAllApplicationData_keyval1(Nmr_HExchProtectionList self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_HExchProtectionList_FindAllApplicationData_keyval2(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_HExchProtectionList_FindAllApplicationData_keyval3(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchProtectionList self
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
extern ApiList Nmr_HExchProtectionList_FindAllApplicationData_keyval4(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchProtectionList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchProtectionList_FindAllEntries(Nmr_HExchProtectionList self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchProtectionList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchProtectionList_FindAllEntries_keyval0(Nmr_HExchProtectionList self);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchProtectionList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchProtectionList_FindAllEntries_keyval1(Nmr_HExchProtectionList self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchProtectionList_FindAllEntries_keyval2(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchProtectionList_FindAllEntries_keyval3(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchProtectionList self
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
extern ApiSet Nmr_HExchProtectionList_FindAllEntries_keyval4(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments for 
which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchProtectionList_FindAllExperiments(Nmr_HExchProtectionList self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments for 
which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchProtectionList_FindAllExperiments_keyval0(Nmr_HExchProtectionList self);

/**
  FindAll for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments for 
which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchProtectionList_FindAllExperiments_keyval1(Nmr_HExchProtectionList self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments for 
which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchProtectionList_FindAllExperiments_keyval2(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments for 
which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchProtectionList_FindAllExperiments_keyval3(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments for 
which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
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
extern ApiSet Nmr_HExchProtectionList_FindAllExperiments_keyval4(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchProtectionList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchProtectionList_FindAllInputToNmrRuns(Nmr_HExchProtectionList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchProtectionList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchProtectionList_FindAllInputToNmrRuns_keyval0(Nmr_HExchProtectionList self);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchProtectionList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchProtectionList_FindAllInputToNmrRuns_keyval1(Nmr_HExchProtectionList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchProtectionList_FindAllInputToNmrRuns_keyval2(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchProtectionList_FindAllInputToNmrRuns_keyval3(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchProtectionList self
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
extern ApiSet Nmr_HExchProtectionList_FindAllInputToNmrRuns_keyval4(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.HExchProtectionList.measurements

child link to 
class HExchProtection
  @param  Nmr_HExchProtectionList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchProtectionList_FindAllMeasurements(Nmr_HExchProtectionList self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.HExchProtectionList.measurements

child link to 
class HExchProtection
  @param  Nmr_HExchProtectionList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchProtectionList_FindAllMeasurements_keyval0(Nmr_HExchProtectionList self);

/**
  FindAll for ccp.nmr.Nmr.HExchProtectionList.measurements

child link to 
class HExchProtection
  @param  Nmr_HExchProtectionList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchProtectionList_FindAllMeasurements_keyval1(Nmr_HExchProtectionList self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.HExchProtectionList.measurements

child link to 
class HExchProtection
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchProtectionList_FindAllMeasurements_keyval2(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.HExchProtectionList.measurements

child link to 
class HExchProtection
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchProtectionList_FindAllMeasurements_keyval3(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.HExchProtectionList.measurements

child link to 
class HExchProtection
  @param  Nmr_HExchProtectionList self
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
extern ApiSet Nmr_HExchProtectionList_FindAllMeasurements_keyval4(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchProtectionList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchProtectionList_FindAllNmrMeasurementListValidations(Nmr_HExchProtectionList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchProtectionList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchProtectionList_FindAllNmrMeasurementListValidations_keyval0(Nmr_HExchProtectionList self);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchProtectionList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchProtectionList_FindAllNmrMeasurementListValidations_keyval1(Nmr_HExchProtectionList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchProtectionList_FindAllNmrMeasurementListValidations_keyval2(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_HExchProtectionList_FindAllNmrMeasurementListValidations_keyval3(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchProtectionList self
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
extern ApiSet Nmr_HExchProtectionList_FindAllNmrMeasurementListValidations_keyval4(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchProtectionList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_HExchProtectionList_FindFirstApplicationData(Nmr_HExchProtectionList self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchProtectionList self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_HExchProtectionList_FindFirstApplicationData_keyval0(Nmr_HExchProtectionList self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchProtectionList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_HExchProtectionList_FindFirstApplicationData_keyval1(Nmr_HExchProtectionList self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_HExchProtectionList_FindFirstApplicationData_keyval2(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_HExchProtectionList_FindFirstApplicationData_keyval3(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchProtectionList self
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
extern Impl_ApplicationData Nmr_HExchProtectionList_FindFirstApplicationData_keyval4(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchProtectionList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_HExchProtectionList_FindFirstEntry(Nmr_HExchProtectionList self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchProtectionList self
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_HExchProtectionList_FindFirstEntry_keyval0(Nmr_HExchProtectionList self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchProtectionList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_HExchProtectionList_FindFirstEntry_keyval1(Nmr_HExchProtectionList self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_HExchProtectionList_FindFirstEntry_keyval2(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_HExchProtectionList_FindFirstEntry_keyval3(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_HExchProtectionList self
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
extern Entr_Entry Nmr_HExchProtectionList_FindFirstEntry_keyval4(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments 
for which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_HExchProtectionList_FindFirstExperiment(Nmr_HExchProtectionList self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments 
for which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_HExchProtectionList_FindFirstExperiment_keyval0(Nmr_HExchProtectionList self);

/**
  FindFirst for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments 
for which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_HExchProtectionList_FindFirstExperiment_keyval1(Nmr_HExchProtectionList self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments 
for which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_HExchProtectionList_FindFirstExperiment_keyval2(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments 
for which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_HExchProtectionList_FindFirstExperiment_keyval3(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments 
for which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
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
extern Nmr_Experiment Nmr_HExchProtectionList_FindFirstExperiment_keyval4(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchProtectionList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_HExchProtectionList_FindFirstInputToNmrRun(Nmr_HExchProtectionList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchProtectionList self
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_HExchProtectionList_FindFirstInputToNmrRun_keyval0(Nmr_HExchProtectionList self);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchProtectionList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_HExchProtectionList_FindFirstInputToNmrRun_keyval1(Nmr_HExchProtectionList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_HExchProtectionList_FindFirstInputToNmrRun_keyval2(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_HExchProtectionList_FindFirstInputToNmrRun_keyval3(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchProtectionList self
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
extern Nsim_Run Nmr_HExchProtectionList_FindFirstInputToNmrRun_keyval4(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.HExchProtectionList.measurements

child link 
to class HExchProtection
  @param  Nmr_HExchProtectionList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_HExchProtection Nmr_HExchProtectionList_FindFirstMeasurement(Nmr_HExchProtectionList self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.HExchProtectionList.measurements

child link 
to class HExchProtection
  @param  Nmr_HExchProtectionList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_HExchProtection Nmr_HExchProtectionList_FindFirstMeasurement_keyval0(Nmr_HExchProtectionList self);

/**
  FindFirst for ccp.nmr.Nmr.HExchProtectionList.measurements

child link 
to class HExchProtection
  @param  Nmr_HExchProtectionList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_HExchProtection Nmr_HExchProtectionList_FindFirstMeasurement_keyval1(Nmr_HExchProtectionList self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.HExchProtectionList.measurements

child link 
to class HExchProtection
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_HExchProtection Nmr_HExchProtectionList_FindFirstMeasurement_keyval2(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.HExchProtectionList.measurements

child link 
to class HExchProtection
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_HExchProtection Nmr_HExchProtectionList_FindFirstMeasurement_keyval3(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.HExchProtectionList.measurements

child link 
to class HExchProtection
  @param  Nmr_HExchProtectionList self
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
extern Nmr_HExchProtection Nmr_HExchProtectionList_FindFirstMeasurement_keyval4(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchProtectionList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_HExchProtectionList_FindFirstNmrMeasurementListValidation(Nmr_HExchProtectionList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchProtectionList self
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_HExchProtectionList_FindFirstNmrMeasurementListValidation_keyval0(Nmr_HExchProtectionList self);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchProtectionList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_HExchProtectionList_FindFirstNmrMeasurementListValidation_keyval1(Nmr_HExchProtectionList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_HExchProtectionList_FindFirstNmrMeasurementListValidation_keyval2(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchProtectionList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_HExchProtectionList_FindFirstNmrMeasurementListValidation_keyval3(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchProtectionList self
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
extern Vald_NmrMeasurementListValidation Nmr_HExchProtectionList_FindFirstNmrMeasurementListValidation_keyval4(Nmr_HExchProtectionList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.HExchProtectionList
  @param  Nmr_HExchProtectionList self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_HExchProtectionList_Get(Nmr_HExchProtectionList self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern Acco_AccessObject Nmr_HExchProtectionList_GetAccess(Nmr_HExchProtectionList self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern ApiList Nmr_HExchProtectionList_GetApplicationData(Nmr_HExchProtectionList self);

/**
  GetByKey for ccp.nmr.Nmr.HExchProtectionList
  @param  Nmr_HExchProtectionList self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_HExchProtectionList Nmr_HExchProtectionList_GetByKey(Nmr_HExchProtectionList self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern ApiString Nmr_HExchProtectionList_GetClassName(Nmr_HExchProtectionList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern ApiString Nmr_HExchProtectionList_GetDetails(Nmr_HExchProtectionList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern ApiSet Nmr_HExchProtectionList_GetEntries(Nmr_HExchProtectionList self);

/**
  Get for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments for 
which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern ApiSet Nmr_HExchProtectionList_GetExperiments(Nmr_HExchProtectionList self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern ApiList Nmr_HExchProtectionList_GetFieldNames(Nmr_HExchProtectionList self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern ApiBoolean Nmr_HExchProtectionList_GetInConstructor(Nmr_HExchProtectionList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs 
using MeasurementList as input
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern ApiSet Nmr_HExchProtectionList_GetInputToNmrRuns(Nmr_HExchProtectionList self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern ApiBoolean Nmr_HExchProtectionList_GetIsDeleted(Nmr_HExchProtectionList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.isSimulated

Are data in 
this list simulated? The attribute is an annotation more than anything 
else, as there are no corresponding constraints.
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern ApiBoolean Nmr_HExchProtectionList_GetIsSimulated(Nmr_HExchProtectionList self);

/**
  Get for ccp.nmr.Nmr.HExchProtectionList.measurements

child link to 
class HExchProtection
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern ApiSet Nmr_HExchProtectionList_GetMeasurements(Nmr_HExchProtectionList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.method

Default method used 
to calculate measurements. May be overridden for individual measurements 
in the list.
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern Meth_Method Nmr_HExchProtectionList_GetMethod(Nmr_HExchProtectionList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.name

Measurement List name, 
freely chosen by user. Intended to identify the list from other lists of 
the same type.
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern ApiString Nmr_HExchProtectionList_GetName(Nmr_HExchProtectionList self);

/**
  Get for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern ApiSet Nmr_HExchProtectionList_GetNmrMeasurementListValidations(Nmr_HExchProtectionList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.nmrProject

parent link
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_HExchProtectionList_GetNmrProject(Nmr_HExchProtectionList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.outputFromNmrRun

NmrSim.Run 
from which Measuremnet list is produced.
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern Nsim_Run Nmr_HExchProtectionList_GetOutputFromNmrRun(Nmr_HExchProtectionList self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern ApiString Nmr_HExchProtectionList_GetPackageName(Nmr_HExchProtectionList self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern ApiString Nmr_HExchProtectionList_GetPackageShortName(Nmr_HExchProtectionList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.parent

link to parent 
object - synonym for nmrProject
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_HExchProtectionList_GetParent(Nmr_HExchProtectionList self);

/**
  Get for ccp.nmr.Nmr.HExchProtectionList.protectionType

Type, i.e. 
phenomenon giving rise to hydrogen excnage protection.
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern ApiString Nmr_HExchProtectionList_GetProtectionType(Nmr_HExchProtectionList self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern ApiString Nmr_HExchProtectionList_GetQualifiedName(Nmr_HExchProtectionList self);

/**
  Get for ccp.nmr.Nmr.HExchProtectionList.referenceRateList

List of 
hydrogen exchange rates serving as references for the protection factors 
reported.
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern Nmr_HExchRateList Nmr_HExchProtectionList_GetReferenceRateList(Nmr_HExchProtectionList self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_HExchProtectionList_GetRoot(Nmr_HExchProtectionList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern ApiInteger Nmr_HExchProtectionList_GetSerial(Nmr_HExchProtectionList self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern Impl_TopObject Nmr_HExchProtectionList_GetTopObject(Nmr_HExchProtectionList self);

/**
  Get for ccp.nmr.Nmr.HExchProtectionList.unit

Measurement unit for 
chemical shift differnece. Default is 'ratio', i.e. the quantity is 
dimensionless..
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern ApiString Nmr_HExchProtectionList_GetUnit(Nmr_HExchProtectionList self);

/**
  Constructor for ccp.nmr.Nmr.HExchProtectionList
  @param  Nmr_NmrProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_HExchProtectionList Nmr_HExchProtectionList_Init(Nmr_NmrProject parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.HExchProtectionList
  @param  Nmr_NmrProject parent
  @returns  the new object
**/
extern Nmr_HExchProtectionList Nmr_HExchProtectionList_Init_reqd(Nmr_NmrProject parent);

/**
  Factory function to create ccp.nmr.Nmr.HExchProtection
  @param  Nmr_HExchProtectionList self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_HExchProtection Nmr_HExchProtectionList_NewHExchProtection(Nmr_HExchProtectionList self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.Nmr.HExchProtection
  @param  Nmr_HExchProtectionList self
  @param  Nmr_Resonance resonance
  @param  float value
  @returns  the new object
**/
extern Nmr_HExchProtection Nmr_HExchProtectionList_NewHExchProtection_reqd(Nmr_HExchProtectionList self, Nmr_Resonance resonance, float value);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchProtectionList self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_HExchProtectionList_RemoveApplicationData(Nmr_HExchProtectionList self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_HExchProtectionList self
  @param  Entr_Entry value
**/
extern void *Nmr_HExchProtectionList_RemoveEntry(Nmr_HExchProtectionList self, Entr_Entry value);

/**
  Remove for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments for 
which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @param  Nmr_Experiment value
**/
extern void *Nmr_HExchProtectionList_RemoveExperiment(Nmr_HExchProtectionList self, Nmr_Experiment value);

/**
  Remove for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchProtectionList self
  @param  Nsim_Run value
**/
extern void *Nmr_HExchProtectionList_RemoveInputToNmrRun(Nmr_HExchProtectionList self, Nsim_Run value);

/**
  Remove for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchProtectionList self
  @param  Vald_NmrMeasurementListValidation value
**/
extern void *Nmr_HExchProtectionList_RemoveNmrMeasurementListValidation(Nmr_HExchProtectionList self, Vald_NmrMeasurementListValidation value);

/**
  SetAttr for ccp.nmr.Nmr.HExchProtectionList
  @param  Nmr_HExchProtectionList self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_HExchProtectionList_Set(Nmr_HExchProtectionList self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_HExchProtectionList self
  @param  Acco_AccessObject value
**/
extern void *Nmr_HExchProtectionList_SetAccess(Nmr_HExchProtectionList self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_HExchProtectionList self
  @param  ApiList values
**/
extern void *Nmr_HExchProtectionList_SetApplicationData(Nmr_HExchProtectionList self, ApiList values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmr_HExchProtectionList self
  @param  ApiString value
**/
extern void *Nmr_HExchProtectionList_SetDetails(Nmr_HExchProtectionList self, ApiString value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_HExchProtectionList self
  @param  ApiSet values
**/
extern void *Nmr_HExchProtectionList_SetEntries(Nmr_HExchProtectionList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments for 
which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @param  ApiSet values
**/
extern void *Nmr_HExchProtectionList_SetExperiments(Nmr_HExchProtectionList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs 
using MeasurementList as input
  @param  Nmr_HExchProtectionList self
  @param  ApiSet values
**/
extern void *Nmr_HExchProtectionList_SetInputToNmrRuns(Nmr_HExchProtectionList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.isSimulated

Are data in 
this list simulated? The attribute is an annotation more than anything 
else, as there are no corresponding constraints.
  @param  Nmr_HExchProtectionList self
  @param  ApiBoolean value
**/
extern void *Nmr_HExchProtectionList_SetIsSimulated(Nmr_HExchProtectionList self, ApiBoolean value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.method

Default method used 
to calculate measurements. May be overridden for individual measurements 
in the list.
  @param  Nmr_HExchProtectionList self
  @param  Meth_Method value
**/
extern void *Nmr_HExchProtectionList_SetMethod(Nmr_HExchProtectionList self, Meth_Method value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.name

Measurement List name, 
freely chosen by user. Intended to identify the list from other lists of 
the same type.
  @param  Nmr_HExchProtectionList self
  @param  ApiString value
**/
extern void *Nmr_HExchProtectionList_SetName(Nmr_HExchProtectionList self, ApiString value);

/**
  Set for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchProtectionList self
  @param  ApiSet values
**/
extern void *Nmr_HExchProtectionList_SetNmrMeasurementListValidations(Nmr_HExchProtectionList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.outputFromNmrRun

NmrSim.Run 
from which Measuremnet list is produced.
  @param  Nmr_HExchProtectionList self
  @param  Nsim_Run value
**/
extern void *Nmr_HExchProtectionList_SetOutputFromNmrRun(Nmr_HExchProtectionList self, Nsim_Run value);

/**
  Set for ccp.nmr.Nmr.HExchProtectionList.protectionType

Type, i.e. 
phenomenon giving rise to hydrogen excnage protection.
  @param  Nmr_HExchProtectionList self
  @param  ApiString value
**/
extern void *Nmr_HExchProtectionList_SetProtectionType(Nmr_HExchProtectionList self, ApiString value);

/**
  Set for ccp.nmr.Nmr.HExchProtectionList.referenceRateList

List of 
hydrogen exchange rates serving as references for the protection factors 
reported.
  @param  Nmr_HExchProtectionList self
  @param  Nmr_HExchRateList value
**/
extern void *Nmr_HExchProtectionList_SetReferenceRateList(Nmr_HExchProtectionList self, Nmr_HExchRateList value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmr_HExchProtectionList self
  @param  ApiInteger value
**/
extern void *Nmr_HExchProtectionList_SetSerial(Nmr_HExchProtectionList self, ApiInteger value);

/**
  Set for ccp.nmr.Nmr.HExchProtectionList.unit

Measurement unit for 
chemical shift differnece. Default is 'ratio', i.e. the quantity is 
dimensionless..
  @param  Nmr_HExchProtectionList self
  @param  ApiString value
**/
extern void *Nmr_HExchProtectionList_SetUnit(Nmr_HExchProtectionList self, ApiString value);

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern ApiList Nmr_HExchProtectionList_SortedEntries(Nmr_HExchProtectionList self);

/**
  Sorted for ccp.nmr.Nmr.HExchProtectionList.experiments

Experiments for 
which hydrogen exchange protection factor list is valid
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern ApiList Nmr_HExchProtectionList_SortedExperiments(Nmr_HExchProtectionList self);

/**
  Sorted for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern ApiList Nmr_HExchProtectionList_SortedInputToNmrRuns(Nmr_HExchProtectionList self);

/**
  Sorted for ccp.nmr.Nmr.HExchProtectionList.measurements

child link to 
class HExchProtection
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern ApiList Nmr_HExchProtectionList_SortedMeasurements(Nmr_HExchProtectionList self);

/**
  Sorted for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_HExchProtectionList self
  @returns   the result
**/
extern ApiList Nmr_HExchProtectionList_SortedNmrMeasurementListValidations(Nmr_HExchProtectionList self);

#endif /* __incl__ccp_api_nmr_Nmr_HExchProtectionList_h__ */
