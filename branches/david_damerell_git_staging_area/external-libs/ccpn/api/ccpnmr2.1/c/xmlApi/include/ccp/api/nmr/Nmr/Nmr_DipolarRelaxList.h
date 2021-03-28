
#ifndef __incl__ccp_api_nmr_Nmr_DipolarRelaxList_h__
#define __incl__ccp_api_nmr_Nmr_DipolarRelaxList_h__

#include "ccp.h"

/*
  List of dipole-dipole relaxation measurements.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxList self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_DipolarRelaxList_AddApplicationData(Nmr_DipolarRelaxList self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_DipolarRelaxList self
  @param  Entr_Entry value
**/
extern void *Nmr_DipolarRelaxList_AddEntry(Nmr_DipolarRelaxList self, Entr_Entry value);

/**
  Add for ccp.nmr.Nmr.DipolarRelaxList.experiments

Experiments for which 
dipole-diploe relaxation list is valid
  @param  Nmr_DipolarRelaxList self
  @param  Nmr_Experiment value
**/
extern void *Nmr_DipolarRelaxList_AddExperiment(Nmr_DipolarRelaxList self, Nmr_Experiment value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs 
using MeasurementList as input
  @param  Nmr_DipolarRelaxList self
  @param  Nsim_Run value
**/
extern void *Nmr_DipolarRelaxList_AddInputToNmrRun(Nmr_DipolarRelaxList self, Nsim_Run value);

/**
  Add for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_DipolarRelaxList self
  @param  Vald_NmrMeasurementListValidation value
**/
extern void *Nmr_DipolarRelaxList_AddNmrMeasurementListValidation(Nmr_DipolarRelaxList self, Vald_NmrMeasurementListValidation value);

/**
  CheckAllValid for ccp.nmr.Nmr.DipolarRelaxList
  @param  Nmr_DipolarRelaxList self
  @param  ApiBoolean complete
**/
extern void *Nmr_DipolarRelaxList_CheckAllValid(Nmr_DipolarRelaxList self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.DipolarRelaxList
  @param  Nmr_DipolarRelaxList self
  @param  ApiBoolean complete
**/
extern void *Nmr_DipolarRelaxList_CheckValid(Nmr_DipolarRelaxList self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_DipolarRelaxList_FindAllApplicationData(Nmr_DipolarRelaxList self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxList self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_DipolarRelaxList_FindAllApplicationData_keyval0(Nmr_DipolarRelaxList self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_DipolarRelaxList_FindAllApplicationData_keyval1(Nmr_DipolarRelaxList self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_DipolarRelaxList_FindAllApplicationData_keyval2(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_DipolarRelaxList_FindAllApplicationData_keyval3(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxList self
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
extern ApiList Nmr_DipolarRelaxList_FindAllApplicationData_keyval4(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_DipolarRelaxList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxList_FindAllEntries(Nmr_DipolarRelaxList self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_DipolarRelaxList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxList_FindAllEntries_keyval0(Nmr_DipolarRelaxList self);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_DipolarRelaxList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxList_FindAllEntries_keyval1(Nmr_DipolarRelaxList self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_DipolarRelaxList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxList_FindAllEntries_keyval2(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_DipolarRelaxList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxList_FindAllEntries_keyval3(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_DipolarRelaxList self
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
extern ApiSet Nmr_DipolarRelaxList_FindAllEntries_keyval4(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.DipolarRelaxList.experiments

Experiments for 
which dipole-diploe relaxation list is valid
  @param  Nmr_DipolarRelaxList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxList_FindAllExperiments(Nmr_DipolarRelaxList self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.DipolarRelaxList.experiments

Experiments for 
which dipole-diploe relaxation list is valid
  @param  Nmr_DipolarRelaxList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxList_FindAllExperiments_keyval0(Nmr_DipolarRelaxList self);

/**
  FindAll for ccp.nmr.Nmr.DipolarRelaxList.experiments

Experiments for 
which dipole-diploe relaxation list is valid
  @param  Nmr_DipolarRelaxList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxList_FindAllExperiments_keyval1(Nmr_DipolarRelaxList self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.DipolarRelaxList.experiments

Experiments for 
which dipole-diploe relaxation list is valid
  @param  Nmr_DipolarRelaxList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxList_FindAllExperiments_keyval2(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.DipolarRelaxList.experiments

Experiments for 
which dipole-diploe relaxation list is valid
  @param  Nmr_DipolarRelaxList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxList_FindAllExperiments_keyval3(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.DipolarRelaxList.experiments

Experiments for 
which dipole-diploe relaxation list is valid
  @param  Nmr_DipolarRelaxList self
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
extern ApiSet Nmr_DipolarRelaxList_FindAllExperiments_keyval4(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_DipolarRelaxList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxList_FindAllInputToNmrRuns(Nmr_DipolarRelaxList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_DipolarRelaxList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxList_FindAllInputToNmrRuns_keyval0(Nmr_DipolarRelaxList self);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_DipolarRelaxList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxList_FindAllInputToNmrRuns_keyval1(Nmr_DipolarRelaxList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_DipolarRelaxList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxList_FindAllInputToNmrRuns_keyval2(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_DipolarRelaxList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxList_FindAllInputToNmrRuns_keyval3(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_DipolarRelaxList self
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
extern ApiSet Nmr_DipolarRelaxList_FindAllInputToNmrRuns_keyval4(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.DipolarRelaxList.measurements

child link to 
class DipolarRelaxation
  @param  Nmr_DipolarRelaxList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxList_FindAllMeasurements(Nmr_DipolarRelaxList self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.DipolarRelaxList.measurements

child link to 
class DipolarRelaxation
  @param  Nmr_DipolarRelaxList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxList_FindAllMeasurements_keyval0(Nmr_DipolarRelaxList self);

/**
  FindAll for ccp.nmr.Nmr.DipolarRelaxList.measurements

child link to 
class DipolarRelaxation
  @param  Nmr_DipolarRelaxList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxList_FindAllMeasurements_keyval1(Nmr_DipolarRelaxList self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.DipolarRelaxList.measurements

child link to 
class DipolarRelaxation
  @param  Nmr_DipolarRelaxList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxList_FindAllMeasurements_keyval2(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.DipolarRelaxList.measurements

child link to 
class DipolarRelaxation
  @param  Nmr_DipolarRelaxList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxList_FindAllMeasurements_keyval3(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.DipolarRelaxList.measurements

child link to 
class DipolarRelaxation
  @param  Nmr_DipolarRelaxList self
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
extern ApiSet Nmr_DipolarRelaxList_FindAllMeasurements_keyval4(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_DipolarRelaxList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxList_FindAllNmrMeasurementListValidations(Nmr_DipolarRelaxList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_DipolarRelaxList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxList_FindAllNmrMeasurementListValidations_keyval0(Nmr_DipolarRelaxList self);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_DipolarRelaxList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxList_FindAllNmrMeasurementListValidations_keyval1(Nmr_DipolarRelaxList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_DipolarRelaxList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxList_FindAllNmrMeasurementListValidations_keyval2(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_DipolarRelaxList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_DipolarRelaxList_FindAllNmrMeasurementListValidations_keyval3(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_DipolarRelaxList self
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
extern ApiSet Nmr_DipolarRelaxList_FindAllNmrMeasurementListValidations_keyval4(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_DipolarRelaxList_FindFirstApplicationData(Nmr_DipolarRelaxList self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxList self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_DipolarRelaxList_FindFirstApplicationData_keyval0(Nmr_DipolarRelaxList self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_DipolarRelaxList_FindFirstApplicationData_keyval1(Nmr_DipolarRelaxList self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_DipolarRelaxList_FindFirstApplicationData_keyval2(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_DipolarRelaxList_FindFirstApplicationData_keyval3(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxList self
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
extern Impl_ApplicationData Nmr_DipolarRelaxList_FindFirstApplicationData_keyval4(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_DipolarRelaxList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_DipolarRelaxList_FindFirstEntry(Nmr_DipolarRelaxList self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_DipolarRelaxList self
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_DipolarRelaxList_FindFirstEntry_keyval0(Nmr_DipolarRelaxList self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_DipolarRelaxList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_DipolarRelaxList_FindFirstEntry_keyval1(Nmr_DipolarRelaxList self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_DipolarRelaxList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_DipolarRelaxList_FindFirstEntry_keyval2(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_DipolarRelaxList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_DipolarRelaxList_FindFirstEntry_keyval3(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_DipolarRelaxList self
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
extern Entr_Entry Nmr_DipolarRelaxList_FindFirstEntry_keyval4(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.DipolarRelaxList.experiments

Experiments for 
which dipole-diploe relaxation list is valid
  @param  Nmr_DipolarRelaxList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_DipolarRelaxList_FindFirstExperiment(Nmr_DipolarRelaxList self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.DipolarRelaxList.experiments

Experiments for 
which dipole-diploe relaxation list is valid
  @param  Nmr_DipolarRelaxList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_DipolarRelaxList_FindFirstExperiment_keyval0(Nmr_DipolarRelaxList self);

/**
  FindFirst for ccp.nmr.Nmr.DipolarRelaxList.experiments

Experiments for 
which dipole-diploe relaxation list is valid
  @param  Nmr_DipolarRelaxList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_DipolarRelaxList_FindFirstExperiment_keyval1(Nmr_DipolarRelaxList self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.DipolarRelaxList.experiments

Experiments for 
which dipole-diploe relaxation list is valid
  @param  Nmr_DipolarRelaxList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_DipolarRelaxList_FindFirstExperiment_keyval2(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.DipolarRelaxList.experiments

Experiments for 
which dipole-diploe relaxation list is valid
  @param  Nmr_DipolarRelaxList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_DipolarRelaxList_FindFirstExperiment_keyval3(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.DipolarRelaxList.experiments

Experiments for 
which dipole-diploe relaxation list is valid
  @param  Nmr_DipolarRelaxList self
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
extern Nmr_Experiment Nmr_DipolarRelaxList_FindFirstExperiment_keyval4(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_DipolarRelaxList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_DipolarRelaxList_FindFirstInputToNmrRun(Nmr_DipolarRelaxList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_DipolarRelaxList self
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_DipolarRelaxList_FindFirstInputToNmrRun_keyval0(Nmr_DipolarRelaxList self);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_DipolarRelaxList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_DipolarRelaxList_FindFirstInputToNmrRun_keyval1(Nmr_DipolarRelaxList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_DipolarRelaxList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_DipolarRelaxList_FindFirstInputToNmrRun_keyval2(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_DipolarRelaxList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_DipolarRelaxList_FindFirstInputToNmrRun_keyval3(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_DipolarRelaxList self
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
extern Nsim_Run Nmr_DipolarRelaxList_FindFirstInputToNmrRun_keyval4(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.DipolarRelaxList.measurements

child link to 
class DipolarRelaxation
  @param  Nmr_DipolarRelaxList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DipolarRelaxation Nmr_DipolarRelaxList_FindFirstMeasurement(Nmr_DipolarRelaxList self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.DipolarRelaxList.measurements

child link to 
class DipolarRelaxation
  @param  Nmr_DipolarRelaxList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DipolarRelaxation Nmr_DipolarRelaxList_FindFirstMeasurement_keyval0(Nmr_DipolarRelaxList self);

/**
  FindFirst for ccp.nmr.Nmr.DipolarRelaxList.measurements

child link to 
class DipolarRelaxation
  @param  Nmr_DipolarRelaxList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DipolarRelaxation Nmr_DipolarRelaxList_FindFirstMeasurement_keyval1(Nmr_DipolarRelaxList self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.DipolarRelaxList.measurements

child link to 
class DipolarRelaxation
  @param  Nmr_DipolarRelaxList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DipolarRelaxation Nmr_DipolarRelaxList_FindFirstMeasurement_keyval2(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.DipolarRelaxList.measurements

child link to 
class DipolarRelaxation
  @param  Nmr_DipolarRelaxList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_DipolarRelaxation Nmr_DipolarRelaxList_FindFirstMeasurement_keyval3(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.DipolarRelaxList.measurements

child link to 
class DipolarRelaxation
  @param  Nmr_DipolarRelaxList self
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
extern Nmr_DipolarRelaxation Nmr_DipolarRelaxList_FindFirstMeasurement_keyval4(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_DipolarRelaxList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_DipolarRelaxList_FindFirstNmrMeasurementListValidation(Nmr_DipolarRelaxList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_DipolarRelaxList self
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_DipolarRelaxList_FindFirstNmrMeasurementListValidation_keyval0(Nmr_DipolarRelaxList self);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_DipolarRelaxList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_DipolarRelaxList_FindFirstNmrMeasurementListValidation_keyval1(Nmr_DipolarRelaxList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_DipolarRelaxList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_DipolarRelaxList_FindFirstNmrMeasurementListValidation_keyval2(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_DipolarRelaxList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_DipolarRelaxList_FindFirstNmrMeasurementListValidation_keyval3(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_DipolarRelaxList self
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
extern Vald_NmrMeasurementListValidation Nmr_DipolarRelaxList_FindFirstNmrMeasurementListValidation_keyval4(Nmr_DipolarRelaxList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.DipolarRelaxList
  @param  Nmr_DipolarRelaxList self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_DipolarRelaxList_Get(Nmr_DipolarRelaxList self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern Acco_AccessObject Nmr_DipolarRelaxList_GetAccess(Nmr_DipolarRelaxList self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern Acco_AccessObject Nmr_DipolarRelaxList_GetActiveAccess(Nmr_DipolarRelaxList self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern ApiList Nmr_DipolarRelaxList_GetApplicationData(Nmr_DipolarRelaxList self);

/**
  GetByKey for ccp.nmr.Nmr.DipolarRelaxList
  @param  Nmr_DipolarRelaxList self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_DipolarRelaxList Nmr_DipolarRelaxList_GetByKey(Nmr_DipolarRelaxList self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern ApiString Nmr_DipolarRelaxList_GetClassName(Nmr_DipolarRelaxList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern ApiString Nmr_DipolarRelaxList_GetDetails(Nmr_DipolarRelaxList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern ApiSet Nmr_DipolarRelaxList_GetEntries(Nmr_DipolarRelaxList self);

/**
  Get for ccp.nmr.Nmr.DipolarRelaxList.experiments

Experiments for which 
dipole-diploe relaxation list is valid
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern ApiSet Nmr_DipolarRelaxList_GetExperiments(Nmr_DipolarRelaxList self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern ApiList Nmr_DipolarRelaxList_GetFieldNames(Nmr_DipolarRelaxList self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern ApiBoolean Nmr_DipolarRelaxList_GetInConstructor(Nmr_DipolarRelaxList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs 
using MeasurementList as input
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern ApiSet Nmr_DipolarRelaxList_GetInputToNmrRuns(Nmr_DipolarRelaxList self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern ApiBoolean Nmr_DipolarRelaxList_GetIsDeleted(Nmr_DipolarRelaxList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.isSimulated

Are data in 
this list simulated? The attribute is an annotation more than anything 
else, as there are no corresponding constraints.
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern ApiBoolean Nmr_DipolarRelaxList_GetIsSimulated(Nmr_DipolarRelaxList self);

/**
  Get for ccp.nmr.Nmr.DipolarRelaxList.measurements

child link to class 
DipolarRelaxation
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern ApiSet Nmr_DipolarRelaxList_GetMeasurements(Nmr_DipolarRelaxList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.method

Default method used 
to calculate measurements. May be overridden for individual measurements 
in the list.
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern Meth_Method Nmr_DipolarRelaxList_GetMethod(Nmr_DipolarRelaxList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.name

Measurement List name, 
freely chosen by user. Intended to identify the list from other lists of 
the same type.
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern ApiString Nmr_DipolarRelaxList_GetName(Nmr_DipolarRelaxList self);

/**
  Get for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern ApiSet Nmr_DipolarRelaxList_GetNmrMeasurementListValidations(Nmr_DipolarRelaxList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.nmrProject

parent link
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_DipolarRelaxList_GetNmrProject(Nmr_DipolarRelaxList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.outputFromNmrRun

NmrSim.Run 
from which Measuremnet list is produced.
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern Nsim_Run Nmr_DipolarRelaxList_GetOutputFromNmrRun(Nmr_DipolarRelaxList self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern ApiString Nmr_DipolarRelaxList_GetPackageName(Nmr_DipolarRelaxList self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern ApiString Nmr_DipolarRelaxList_GetPackageShortName(Nmr_DipolarRelaxList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.parent

link to parent 
object - synonym for nmrProject
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_DipolarRelaxList_GetParent(Nmr_DipolarRelaxList self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern ApiString Nmr_DipolarRelaxList_GetQualifiedName(Nmr_DipolarRelaxList self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_DipolarRelaxList_GetRoot(Nmr_DipolarRelaxList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern ApiInteger Nmr_DipolarRelaxList_GetSerial(Nmr_DipolarRelaxList self);

/**
  Get for ccp.nmr.Nmr.DipolarRelaxList.sf

Spectrometer frequency in MHz 
at which dipole-dipole relaxation was measured.
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern ApiFloat Nmr_DipolarRelaxList_GetSf(Nmr_DipolarRelaxList self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern Impl_TopObject Nmr_DipolarRelaxList_GetTopObject(Nmr_DipolarRelaxList self);

/**
  Get for ccp.nmr.Nmr.DipolarRelaxList.unit

Unit of measurement for 
Dipolar relaxation contributions - default 'Hz'.
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern ApiString Nmr_DipolarRelaxList_GetUnit(Nmr_DipolarRelaxList self);

/**
  Constructor for ccp.nmr.Nmr.DipolarRelaxList
  @param  Nmr_NmrProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_DipolarRelaxList Nmr_DipolarRelaxList_Init(Nmr_NmrProject parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.DipolarRelaxList
  @param  Nmr_NmrProject parent
  @returns  the new object
**/
extern Nmr_DipolarRelaxList Nmr_DipolarRelaxList_Init_reqd(Nmr_NmrProject parent);

/**
  Factory function to create ccp.nmr.Nmr.DipolarRelaxation
  @param  Nmr_DipolarRelaxList self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_DipolarRelaxation Nmr_DipolarRelaxList_NewDipolarRelaxation(Nmr_DipolarRelaxList self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.Nmr.DipolarRelaxation
  @param  Nmr_DipolarRelaxList self
  @param  ApiSet resonances
  @param  float value
  @returns  the new object
**/
extern Nmr_DipolarRelaxation Nmr_DipolarRelaxList_NewDipolarRelaxation_reqd(Nmr_DipolarRelaxList self, ApiSet resonances, float value);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxList self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_DipolarRelaxList_RemoveApplicationData(Nmr_DipolarRelaxList self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_DipolarRelaxList self
  @param  Entr_Entry value
**/
extern void *Nmr_DipolarRelaxList_RemoveEntry(Nmr_DipolarRelaxList self, Entr_Entry value);

/**
  Remove for ccp.nmr.Nmr.DipolarRelaxList.experiments

Experiments for 
which dipole-diploe relaxation list is valid
  @param  Nmr_DipolarRelaxList self
  @param  Nmr_Experiment value
**/
extern void *Nmr_DipolarRelaxList_RemoveExperiment(Nmr_DipolarRelaxList self, Nmr_Experiment value);

/**
  Remove for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_DipolarRelaxList self
  @param  Nsim_Run value
**/
extern void *Nmr_DipolarRelaxList_RemoveInputToNmrRun(Nmr_DipolarRelaxList self, Nsim_Run value);

/**
  Remove for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_DipolarRelaxList self
  @param  Vald_NmrMeasurementListValidation value
**/
extern void *Nmr_DipolarRelaxList_RemoveNmrMeasurementListValidation(Nmr_DipolarRelaxList self, Vald_NmrMeasurementListValidation value);

/**
  SetAttr for ccp.nmr.Nmr.DipolarRelaxList
  @param  Nmr_DipolarRelaxList self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_DipolarRelaxList_Set(Nmr_DipolarRelaxList self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_DipolarRelaxList self
  @param  Acco_AccessObject value
**/
extern void *Nmr_DipolarRelaxList_SetAccess(Nmr_DipolarRelaxList self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_DipolarRelaxList self
  @param  ApiList values
**/
extern void *Nmr_DipolarRelaxList_SetApplicationData(Nmr_DipolarRelaxList self, ApiList values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmr_DipolarRelaxList self
  @param  ApiString value
**/
extern void *Nmr_DipolarRelaxList_SetDetails(Nmr_DipolarRelaxList self, ApiString value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_DipolarRelaxList self
  @param  ApiSet values
**/
extern void *Nmr_DipolarRelaxList_SetEntries(Nmr_DipolarRelaxList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.DipolarRelaxList.experiments

Experiments for which 
dipole-diploe relaxation list is valid
  @param  Nmr_DipolarRelaxList self
  @param  ApiSet values
**/
extern void *Nmr_DipolarRelaxList_SetExperiments(Nmr_DipolarRelaxList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs 
using MeasurementList as input
  @param  Nmr_DipolarRelaxList self
  @param  ApiSet values
**/
extern void *Nmr_DipolarRelaxList_SetInputToNmrRuns(Nmr_DipolarRelaxList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.isSimulated

Are data in 
this list simulated? The attribute is an annotation more than anything 
else, as there are no corresponding constraints.
  @param  Nmr_DipolarRelaxList self
  @param  ApiBoolean value
**/
extern void *Nmr_DipolarRelaxList_SetIsSimulated(Nmr_DipolarRelaxList self, ApiBoolean value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.method

Default method used 
to calculate measurements. May be overridden for individual measurements 
in the list.
  @param  Nmr_DipolarRelaxList self
  @param  Meth_Method value
**/
extern void *Nmr_DipolarRelaxList_SetMethod(Nmr_DipolarRelaxList self, Meth_Method value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.name

Measurement List name, 
freely chosen by user. Intended to identify the list from other lists of 
the same type.
  @param  Nmr_DipolarRelaxList self
  @param  ApiString value
**/
extern void *Nmr_DipolarRelaxList_SetName(Nmr_DipolarRelaxList self, ApiString value);

/**
  Set for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_DipolarRelaxList self
  @param  ApiSet values
**/
extern void *Nmr_DipolarRelaxList_SetNmrMeasurementListValidations(Nmr_DipolarRelaxList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.outputFromNmrRun

NmrSim.Run 
from which Measuremnet list is produced.
  @param  Nmr_DipolarRelaxList self
  @param  Nsim_Run value
**/
extern void *Nmr_DipolarRelaxList_SetOutputFromNmrRun(Nmr_DipolarRelaxList self, Nsim_Run value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmr_DipolarRelaxList self
  @param  ApiInteger value
**/
extern void *Nmr_DipolarRelaxList_SetSerial(Nmr_DipolarRelaxList self, ApiInteger value);

/**
  Set for ccp.nmr.Nmr.DipolarRelaxList.sf

Spectrometer frequency in MHz 
at which dipole-dipole relaxation was measured.
  @param  Nmr_DipolarRelaxList self
  @param  ApiFloat value
**/
extern void *Nmr_DipolarRelaxList_SetSf(Nmr_DipolarRelaxList self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.DipolarRelaxList.unit

Unit of measurement for 
Dipolar relaxation contributions - default 'Hz'.
  @param  Nmr_DipolarRelaxList self
  @param  ApiString value
**/
extern void *Nmr_DipolarRelaxList_SetUnit(Nmr_DipolarRelaxList self, ApiString value);

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern ApiList Nmr_DipolarRelaxList_SortedEntries(Nmr_DipolarRelaxList self);

/**
  Sorted for ccp.nmr.Nmr.DipolarRelaxList.experiments

Experiments for 
which dipole-diploe relaxation list is valid
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern ApiList Nmr_DipolarRelaxList_SortedExperiments(Nmr_DipolarRelaxList self);

/**
  Sorted for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern ApiList Nmr_DipolarRelaxList_SortedInputToNmrRuns(Nmr_DipolarRelaxList self);

/**
  Sorted for ccp.nmr.Nmr.DipolarRelaxList.measurements

child link to 
class DipolarRelaxation
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern ApiList Nmr_DipolarRelaxList_SortedMeasurements(Nmr_DipolarRelaxList self);

/**
  Sorted for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_DipolarRelaxList self
  @returns   the result
**/
extern ApiList Nmr_DipolarRelaxList_SortedNmrMeasurementListValidations(Nmr_DipolarRelaxList self);

#endif /* __incl__ccp_api_nmr_Nmr_DipolarRelaxList_h__ */
