
#ifndef __incl__ccp_api_nmr_Nmr_ShiftDifferenceList_h__
#define __incl__ccp_api_nmr_Nmr_ShiftDifferenceList_h__

#include "ccp.h"

/*
  List of Chemical Shift differences (e.g. isotope shifts, ligand binding shifts). The values given are :
  modifiedShift - shift_in_referenceShiftList
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftDifferenceList self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_ShiftDifferenceList_AddApplicationData(Nmr_ShiftDifferenceList self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_ShiftDifferenceList self
  @param  Entr_Entry value
**/
extern void *Nmr_ShiftDifferenceList_AddEntry(Nmr_ShiftDifferenceList self, Entr_Entry value);

/**
  Add for ccp.nmr.Nmr.ShiftDifferenceList.experiments

Experiments for 
which chemical shift difference lists is valid.
  @param  Nmr_ShiftDifferenceList self
  @param  Nmr_Experiment value
**/
extern void *Nmr_ShiftDifferenceList_AddExperiment(Nmr_ShiftDifferenceList self, Nmr_Experiment value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs 
using MeasurementList as input
  @param  Nmr_ShiftDifferenceList self
  @param  Nsim_Run value
**/
extern void *Nmr_ShiftDifferenceList_AddInputToNmrRun(Nmr_ShiftDifferenceList self, Nsim_Run value);

/**
  Add for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftDifferenceList self
  @param  Vald_NmrMeasurementListValidation value
**/
extern void *Nmr_ShiftDifferenceList_AddNmrMeasurementListValidation(Nmr_ShiftDifferenceList self, Vald_NmrMeasurementListValidation value);

/**
  CheckAllValid for ccp.nmr.Nmr.ShiftDifferenceList
  @param  Nmr_ShiftDifferenceList self
  @param  ApiBoolean complete
**/
extern void *Nmr_ShiftDifferenceList_CheckAllValid(Nmr_ShiftDifferenceList self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.ShiftDifferenceList
  @param  Nmr_ShiftDifferenceList self
  @param  ApiBoolean complete
**/
extern void *Nmr_ShiftDifferenceList_CheckValid(Nmr_ShiftDifferenceList self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftDifferenceList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ShiftDifferenceList_FindAllApplicationData(Nmr_ShiftDifferenceList self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftDifferenceList self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ShiftDifferenceList_FindAllApplicationData_keyval0(Nmr_ShiftDifferenceList self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftDifferenceList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ShiftDifferenceList_FindAllApplicationData_keyval1(Nmr_ShiftDifferenceList self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftDifferenceList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ShiftDifferenceList_FindAllApplicationData_keyval2(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftDifferenceList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_ShiftDifferenceList_FindAllApplicationData_keyval3(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftDifferenceList self
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
extern ApiList Nmr_ShiftDifferenceList_FindAllApplicationData_keyval4(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftDifferenceList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftDifferenceList_FindAllEntries(Nmr_ShiftDifferenceList self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftDifferenceList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftDifferenceList_FindAllEntries_keyval0(Nmr_ShiftDifferenceList self);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftDifferenceList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftDifferenceList_FindAllEntries_keyval1(Nmr_ShiftDifferenceList self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftDifferenceList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftDifferenceList_FindAllEntries_keyval2(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftDifferenceList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftDifferenceList_FindAllEntries_keyval3(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftDifferenceList self
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
extern ApiSet Nmr_ShiftDifferenceList_FindAllEntries_keyval4(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.ShiftDifferenceList.experiments

Experiments for 
which chemical shift difference lists is valid.
  @param  Nmr_ShiftDifferenceList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftDifferenceList_FindAllExperiments(Nmr_ShiftDifferenceList self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.ShiftDifferenceList.experiments

Experiments for 
which chemical shift difference lists is valid.
  @param  Nmr_ShiftDifferenceList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftDifferenceList_FindAllExperiments_keyval0(Nmr_ShiftDifferenceList self);

/**
  FindAll for ccp.nmr.Nmr.ShiftDifferenceList.experiments

Experiments for 
which chemical shift difference lists is valid.
  @param  Nmr_ShiftDifferenceList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftDifferenceList_FindAllExperiments_keyval1(Nmr_ShiftDifferenceList self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.ShiftDifferenceList.experiments

Experiments for 
which chemical shift difference lists is valid.
  @param  Nmr_ShiftDifferenceList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftDifferenceList_FindAllExperiments_keyval2(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.ShiftDifferenceList.experiments

Experiments for 
which chemical shift difference lists is valid.
  @param  Nmr_ShiftDifferenceList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftDifferenceList_FindAllExperiments_keyval3(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.ShiftDifferenceList.experiments

Experiments for 
which chemical shift difference lists is valid.
  @param  Nmr_ShiftDifferenceList self
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
extern ApiSet Nmr_ShiftDifferenceList_FindAllExperiments_keyval4(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftDifferenceList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftDifferenceList_FindAllInputToNmrRuns(Nmr_ShiftDifferenceList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftDifferenceList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftDifferenceList_FindAllInputToNmrRuns_keyval0(Nmr_ShiftDifferenceList self);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftDifferenceList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftDifferenceList_FindAllInputToNmrRuns_keyval1(Nmr_ShiftDifferenceList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftDifferenceList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftDifferenceList_FindAllInputToNmrRuns_keyval2(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftDifferenceList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftDifferenceList_FindAllInputToNmrRuns_keyval3(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftDifferenceList self
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
extern ApiSet Nmr_ShiftDifferenceList_FindAllInputToNmrRuns_keyval4(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.ShiftDifferenceList.measurements

child link to 
class ShiftDifference
  @param  Nmr_ShiftDifferenceList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftDifferenceList_FindAllMeasurements(Nmr_ShiftDifferenceList self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.ShiftDifferenceList.measurements

child link to 
class ShiftDifference
  @param  Nmr_ShiftDifferenceList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftDifferenceList_FindAllMeasurements_keyval0(Nmr_ShiftDifferenceList self);

/**
  FindAll for ccp.nmr.Nmr.ShiftDifferenceList.measurements

child link to 
class ShiftDifference
  @param  Nmr_ShiftDifferenceList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftDifferenceList_FindAllMeasurements_keyval1(Nmr_ShiftDifferenceList self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.ShiftDifferenceList.measurements

child link to 
class ShiftDifference
  @param  Nmr_ShiftDifferenceList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftDifferenceList_FindAllMeasurements_keyval2(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.ShiftDifferenceList.measurements

child link to 
class ShiftDifference
  @param  Nmr_ShiftDifferenceList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftDifferenceList_FindAllMeasurements_keyval3(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.ShiftDifferenceList.measurements

child link to 
class ShiftDifference
  @param  Nmr_ShiftDifferenceList self
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
extern ApiSet Nmr_ShiftDifferenceList_FindAllMeasurements_keyval4(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftDifferenceList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftDifferenceList_FindAllNmrMeasurementListValidations(Nmr_ShiftDifferenceList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftDifferenceList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftDifferenceList_FindAllNmrMeasurementListValidations_keyval0(Nmr_ShiftDifferenceList self);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftDifferenceList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftDifferenceList_FindAllNmrMeasurementListValidations_keyval1(Nmr_ShiftDifferenceList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftDifferenceList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftDifferenceList_FindAllNmrMeasurementListValidations_keyval2(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftDifferenceList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_ShiftDifferenceList_FindAllNmrMeasurementListValidations_keyval3(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftDifferenceList self
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
extern ApiSet Nmr_ShiftDifferenceList_FindAllNmrMeasurementListValidations_keyval4(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftDifferenceList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ShiftDifferenceList_FindFirstApplicationData(Nmr_ShiftDifferenceList self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftDifferenceList self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ShiftDifferenceList_FindFirstApplicationData_keyval0(Nmr_ShiftDifferenceList self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftDifferenceList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ShiftDifferenceList_FindFirstApplicationData_keyval1(Nmr_ShiftDifferenceList self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftDifferenceList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ShiftDifferenceList_FindFirstApplicationData_keyval2(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftDifferenceList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_ShiftDifferenceList_FindFirstApplicationData_keyval3(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftDifferenceList self
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
extern Impl_ApplicationData Nmr_ShiftDifferenceList_FindFirstApplicationData_keyval4(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftDifferenceList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_ShiftDifferenceList_FindFirstEntry(Nmr_ShiftDifferenceList self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftDifferenceList self
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_ShiftDifferenceList_FindFirstEntry_keyval0(Nmr_ShiftDifferenceList self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftDifferenceList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_ShiftDifferenceList_FindFirstEntry_keyval1(Nmr_ShiftDifferenceList self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftDifferenceList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_ShiftDifferenceList_FindFirstEntry_keyval2(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftDifferenceList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_ShiftDifferenceList_FindFirstEntry_keyval3(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_ShiftDifferenceList self
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
extern Entr_Entry Nmr_ShiftDifferenceList_FindFirstEntry_keyval4(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.ShiftDifferenceList.experiments

Experiments 
for which chemical shift difference lists is valid.
  @param  Nmr_ShiftDifferenceList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_ShiftDifferenceList_FindFirstExperiment(Nmr_ShiftDifferenceList self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.ShiftDifferenceList.experiments

Experiments 
for which chemical shift difference lists is valid.
  @param  Nmr_ShiftDifferenceList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_ShiftDifferenceList_FindFirstExperiment_keyval0(Nmr_ShiftDifferenceList self);

/**
  FindFirst for ccp.nmr.Nmr.ShiftDifferenceList.experiments

Experiments 
for which chemical shift difference lists is valid.
  @param  Nmr_ShiftDifferenceList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_ShiftDifferenceList_FindFirstExperiment_keyval1(Nmr_ShiftDifferenceList self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.ShiftDifferenceList.experiments

Experiments 
for which chemical shift difference lists is valid.
  @param  Nmr_ShiftDifferenceList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_ShiftDifferenceList_FindFirstExperiment_keyval2(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.ShiftDifferenceList.experiments

Experiments 
for which chemical shift difference lists is valid.
  @param  Nmr_ShiftDifferenceList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_ShiftDifferenceList_FindFirstExperiment_keyval3(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.ShiftDifferenceList.experiments

Experiments 
for which chemical shift difference lists is valid.
  @param  Nmr_ShiftDifferenceList self
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
extern Nmr_Experiment Nmr_ShiftDifferenceList_FindFirstExperiment_keyval4(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftDifferenceList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_ShiftDifferenceList_FindFirstInputToNmrRun(Nmr_ShiftDifferenceList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftDifferenceList self
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_ShiftDifferenceList_FindFirstInputToNmrRun_keyval0(Nmr_ShiftDifferenceList self);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftDifferenceList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_ShiftDifferenceList_FindFirstInputToNmrRun_keyval1(Nmr_ShiftDifferenceList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftDifferenceList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_ShiftDifferenceList_FindFirstInputToNmrRun_keyval2(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftDifferenceList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_ShiftDifferenceList_FindFirstInputToNmrRun_keyval3(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftDifferenceList self
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
extern Nsim_Run Nmr_ShiftDifferenceList_FindFirstInputToNmrRun_keyval4(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.ShiftDifferenceList.measurements

child link 
to class ShiftDifference
  @param  Nmr_ShiftDifferenceList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftDifference Nmr_ShiftDifferenceList_FindFirstMeasurement(Nmr_ShiftDifferenceList self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.ShiftDifferenceList.measurements

child link 
to class ShiftDifference
  @param  Nmr_ShiftDifferenceList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftDifference Nmr_ShiftDifferenceList_FindFirstMeasurement_keyval0(Nmr_ShiftDifferenceList self);

/**
  FindFirst for ccp.nmr.Nmr.ShiftDifferenceList.measurements

child link 
to class ShiftDifference
  @param  Nmr_ShiftDifferenceList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftDifference Nmr_ShiftDifferenceList_FindFirstMeasurement_keyval1(Nmr_ShiftDifferenceList self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.ShiftDifferenceList.measurements

child link 
to class ShiftDifference
  @param  Nmr_ShiftDifferenceList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftDifference Nmr_ShiftDifferenceList_FindFirstMeasurement_keyval2(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.ShiftDifferenceList.measurements

child link 
to class ShiftDifference
  @param  Nmr_ShiftDifferenceList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_ShiftDifference Nmr_ShiftDifferenceList_FindFirstMeasurement_keyval3(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.ShiftDifferenceList.measurements

child link 
to class ShiftDifference
  @param  Nmr_ShiftDifferenceList self
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
extern Nmr_ShiftDifference Nmr_ShiftDifferenceList_FindFirstMeasurement_keyval4(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftDifferenceList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_ShiftDifferenceList_FindFirstNmrMeasurementListValidation(Nmr_ShiftDifferenceList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftDifferenceList self
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_ShiftDifferenceList_FindFirstNmrMeasurementListValidation_keyval0(Nmr_ShiftDifferenceList self);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftDifferenceList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_ShiftDifferenceList_FindFirstNmrMeasurementListValidation_keyval1(Nmr_ShiftDifferenceList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftDifferenceList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_ShiftDifferenceList_FindFirstNmrMeasurementListValidation_keyval2(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftDifferenceList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_ShiftDifferenceList_FindFirstNmrMeasurementListValidation_keyval3(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftDifferenceList self
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
extern Vald_NmrMeasurementListValidation Nmr_ShiftDifferenceList_FindFirstNmrMeasurementListValidation_keyval4(Nmr_ShiftDifferenceList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.ShiftDifferenceList
  @param  Nmr_ShiftDifferenceList self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_ShiftDifferenceList_Get(Nmr_ShiftDifferenceList self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern Acco_AccessObject Nmr_ShiftDifferenceList_GetAccess(Nmr_ShiftDifferenceList self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern ApiList Nmr_ShiftDifferenceList_GetApplicationData(Nmr_ShiftDifferenceList self);

/**
  GetByKey for ccp.nmr.Nmr.ShiftDifferenceList
  @param  Nmr_ShiftDifferenceList self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_ShiftDifferenceList Nmr_ShiftDifferenceList_GetByKey(Nmr_ShiftDifferenceList self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern ApiString Nmr_ShiftDifferenceList_GetClassName(Nmr_ShiftDifferenceList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern ApiString Nmr_ShiftDifferenceList_GetDetails(Nmr_ShiftDifferenceList self);

/**
  Get for ccp.nmr.Nmr.ShiftDifferenceList.differenceType

Type of chemical 
shift difference measured.
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern ApiString Nmr_ShiftDifferenceList_GetDifferenceType(Nmr_ShiftDifferenceList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern ApiSet Nmr_ShiftDifferenceList_GetEntries(Nmr_ShiftDifferenceList self);

/**
  Get for ccp.nmr.Nmr.ShiftDifferenceList.experiments

Experiments for 
which chemical shift difference lists is valid.
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern ApiSet Nmr_ShiftDifferenceList_GetExperiments(Nmr_ShiftDifferenceList self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern ApiList Nmr_ShiftDifferenceList_GetFieldNames(Nmr_ShiftDifferenceList self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern ApiBoolean Nmr_ShiftDifferenceList_GetInConstructor(Nmr_ShiftDifferenceList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs 
using MeasurementList as input
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern ApiSet Nmr_ShiftDifferenceList_GetInputToNmrRuns(Nmr_ShiftDifferenceList self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern ApiBoolean Nmr_ShiftDifferenceList_GetIsDeleted(Nmr_ShiftDifferenceList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.isSimulated

Are data in 
this list simulated? The attribute is an annotation more than anything 
else, as there are no corresponding constraints.
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern ApiBoolean Nmr_ShiftDifferenceList_GetIsSimulated(Nmr_ShiftDifferenceList self);

/**
  Get for ccp.nmr.Nmr.ShiftDifferenceList.measurements

child link to 
class ShiftDifference
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern ApiSet Nmr_ShiftDifferenceList_GetMeasurements(Nmr_ShiftDifferenceList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.method

Default method used 
to calculate measurements. May be overridden for individual measurements 
in the list.
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern Meth_Method Nmr_ShiftDifferenceList_GetMethod(Nmr_ShiftDifferenceList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.name

Measurement List name, 
freely chosen by user. Intended to identify the list from other lists of 
the same type.
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern ApiString Nmr_ShiftDifferenceList_GetName(Nmr_ShiftDifferenceList self);

/**
  Get for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern ApiSet Nmr_ShiftDifferenceList_GetNmrMeasurementListValidations(Nmr_ShiftDifferenceList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.nmrProject

parent link
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_ShiftDifferenceList_GetNmrProject(Nmr_ShiftDifferenceList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.outputFromNmrRun

NmrSim.Run 
from which Measuremnet list is produced.
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern Nsim_Run Nmr_ShiftDifferenceList_GetOutputFromNmrRun(Nmr_ShiftDifferenceList self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern ApiString Nmr_ShiftDifferenceList_GetPackageName(Nmr_ShiftDifferenceList self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern ApiString Nmr_ShiftDifferenceList_GetPackageShortName(Nmr_ShiftDifferenceList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.parent

link to parent 
object - synonym for nmrProject
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_ShiftDifferenceList_GetParent(Nmr_ShiftDifferenceList self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern ApiString Nmr_ShiftDifferenceList_GetQualifiedName(Nmr_ShiftDifferenceList self);

/**
  Get for ccp.nmr.Nmr.ShiftDifferenceList.referenceShiftList

List of 
chemical shifts serving as reference for the shift differences reported.
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern Nmr_ShiftList Nmr_ShiftDifferenceList_GetReferenceShiftList(Nmr_ShiftDifferenceList self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_ShiftDifferenceList_GetRoot(Nmr_ShiftDifferenceList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern ApiInteger Nmr_ShiftDifferenceList_GetSerial(Nmr_ShiftDifferenceList self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern Impl_TopObject Nmr_ShiftDifferenceList_GetTopObject(Nmr_ShiftDifferenceList self);

/**
  Get for ccp.nmr.Nmr.ShiftDifferenceList.unit

Measurement unit for 
chemical shift differnece. Default is 'ppm'.
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern ApiString Nmr_ShiftDifferenceList_GetUnit(Nmr_ShiftDifferenceList self);

/**
  Constructor for ccp.nmr.Nmr.ShiftDifferenceList
  @param  Nmr_NmrProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_ShiftDifferenceList Nmr_ShiftDifferenceList_Init(Nmr_NmrProject parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.ShiftDifferenceList
  @param  Nmr_NmrProject parent
  @returns  the new object
**/
extern Nmr_ShiftDifferenceList Nmr_ShiftDifferenceList_Init_reqd(Nmr_NmrProject parent);

/**
  Factory function to create ccp.nmr.Nmr.ShiftDifference
  @param  Nmr_ShiftDifferenceList self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_ShiftDifference Nmr_ShiftDifferenceList_NewShiftDifference(Nmr_ShiftDifferenceList self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.Nmr.ShiftDifference
  @param  Nmr_ShiftDifferenceList self
  @param  Nmr_Resonance resonance
  @param  float value
  @returns  the new object
**/
extern Nmr_ShiftDifference Nmr_ShiftDifferenceList_NewShiftDifference_reqd(Nmr_ShiftDifferenceList self, Nmr_Resonance resonance, float value);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftDifferenceList self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_ShiftDifferenceList_RemoveApplicationData(Nmr_ShiftDifferenceList self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_ShiftDifferenceList self
  @param  Entr_Entry value
**/
extern void *Nmr_ShiftDifferenceList_RemoveEntry(Nmr_ShiftDifferenceList self, Entr_Entry value);

/**
  Remove for ccp.nmr.Nmr.ShiftDifferenceList.experiments

Experiments for 
which chemical shift difference lists is valid.
  @param  Nmr_ShiftDifferenceList self
  @param  Nmr_Experiment value
**/
extern void *Nmr_ShiftDifferenceList_RemoveExperiment(Nmr_ShiftDifferenceList self, Nmr_Experiment value);

/**
  Remove for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftDifferenceList self
  @param  Nsim_Run value
**/
extern void *Nmr_ShiftDifferenceList_RemoveInputToNmrRun(Nmr_ShiftDifferenceList self, Nsim_Run value);

/**
  Remove for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftDifferenceList self
  @param  Vald_NmrMeasurementListValidation value
**/
extern void *Nmr_ShiftDifferenceList_RemoveNmrMeasurementListValidation(Nmr_ShiftDifferenceList self, Vald_NmrMeasurementListValidation value);

/**
  SetAttr for ccp.nmr.Nmr.ShiftDifferenceList
  @param  Nmr_ShiftDifferenceList self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_ShiftDifferenceList_Set(Nmr_ShiftDifferenceList self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_ShiftDifferenceList self
  @param  Acco_AccessObject value
**/
extern void *Nmr_ShiftDifferenceList_SetAccess(Nmr_ShiftDifferenceList self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_ShiftDifferenceList self
  @param  ApiList values
**/
extern void *Nmr_ShiftDifferenceList_SetApplicationData(Nmr_ShiftDifferenceList self, ApiList values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmr_ShiftDifferenceList self
  @param  ApiString value
**/
extern void *Nmr_ShiftDifferenceList_SetDetails(Nmr_ShiftDifferenceList self, ApiString value);

/**
  Set for ccp.nmr.Nmr.ShiftDifferenceList.differenceType

Type of chemical 
shift difference measured.
  @param  Nmr_ShiftDifferenceList self
  @param  ApiString value
**/
extern void *Nmr_ShiftDifferenceList_SetDifferenceType(Nmr_ShiftDifferenceList self, ApiString value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_ShiftDifferenceList self
  @param  ApiSet values
**/
extern void *Nmr_ShiftDifferenceList_SetEntries(Nmr_ShiftDifferenceList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.ShiftDifferenceList.experiments

Experiments for 
which chemical shift difference lists is valid.
  @param  Nmr_ShiftDifferenceList self
  @param  ApiSet values
**/
extern void *Nmr_ShiftDifferenceList_SetExperiments(Nmr_ShiftDifferenceList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs 
using MeasurementList as input
  @param  Nmr_ShiftDifferenceList self
  @param  ApiSet values
**/
extern void *Nmr_ShiftDifferenceList_SetInputToNmrRuns(Nmr_ShiftDifferenceList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.isSimulated

Are data in 
this list simulated? The attribute is an annotation more than anything 
else, as there are no corresponding constraints.
  @param  Nmr_ShiftDifferenceList self
  @param  ApiBoolean value
**/
extern void *Nmr_ShiftDifferenceList_SetIsSimulated(Nmr_ShiftDifferenceList self, ApiBoolean value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.method

Default method used 
to calculate measurements. May be overridden for individual measurements 
in the list.
  @param  Nmr_ShiftDifferenceList self
  @param  Meth_Method value
**/
extern void *Nmr_ShiftDifferenceList_SetMethod(Nmr_ShiftDifferenceList self, Meth_Method value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.name

Measurement List name, 
freely chosen by user. Intended to identify the list from other lists of 
the same type.
  @param  Nmr_ShiftDifferenceList self
  @param  ApiString value
**/
extern void *Nmr_ShiftDifferenceList_SetName(Nmr_ShiftDifferenceList self, ApiString value);

/**
  Set for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftDifferenceList self
  @param  ApiSet values
**/
extern void *Nmr_ShiftDifferenceList_SetNmrMeasurementListValidations(Nmr_ShiftDifferenceList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.outputFromNmrRun

NmrSim.Run 
from which Measuremnet list is produced.
  @param  Nmr_ShiftDifferenceList self
  @param  Nsim_Run value
**/
extern void *Nmr_ShiftDifferenceList_SetOutputFromNmrRun(Nmr_ShiftDifferenceList self, Nsim_Run value);

/**
  Set for ccp.nmr.Nmr.ShiftDifferenceList.referenceShiftList

List of 
chemical shifts serving as reference for the shift differences reported.
  @param  Nmr_ShiftDifferenceList self
  @param  Nmr_ShiftList value
**/
extern void *Nmr_ShiftDifferenceList_SetReferenceShiftList(Nmr_ShiftDifferenceList self, Nmr_ShiftList value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmr_ShiftDifferenceList self
  @param  ApiInteger value
**/
extern void *Nmr_ShiftDifferenceList_SetSerial(Nmr_ShiftDifferenceList self, ApiInteger value);

/**
  Set for ccp.nmr.Nmr.ShiftDifferenceList.unit

Measurement unit for 
chemical shift differnece. Default is 'ppm'.
  @param  Nmr_ShiftDifferenceList self
  @param  ApiString value
**/
extern void *Nmr_ShiftDifferenceList_SetUnit(Nmr_ShiftDifferenceList self, ApiString value);

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern ApiList Nmr_ShiftDifferenceList_SortedEntries(Nmr_ShiftDifferenceList self);

/**
  Sorted for ccp.nmr.Nmr.ShiftDifferenceList.experiments

Experiments for 
which chemical shift difference lists is valid.
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern ApiList Nmr_ShiftDifferenceList_SortedExperiments(Nmr_ShiftDifferenceList self);

/**
  Sorted for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern ApiList Nmr_ShiftDifferenceList_SortedInputToNmrRuns(Nmr_ShiftDifferenceList self);

/**
  Sorted for ccp.nmr.Nmr.ShiftDifferenceList.measurements

child link to 
class ShiftDifference
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern ApiList Nmr_ShiftDifferenceList_SortedMeasurements(Nmr_ShiftDifferenceList self);

/**
  Sorted for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_ShiftDifferenceList self
  @returns   the result
**/
extern ApiList Nmr_ShiftDifferenceList_SortedNmrMeasurementListValidations(Nmr_ShiftDifferenceList self);

#endif /* __incl__ccp_api_nmr_Nmr_ShiftDifferenceList_h__ */
