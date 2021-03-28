
#ifndef __incl__ccp_api_nmr_Nmr_AbstractMeasurementList_h__
#define __incl__ccp_api_nmr_Nmr_AbstractMeasurementList_h__

#include "ccp.h"

/*
  Abstract list of measurements. Different kinds of measurements belong to different kinsd of lists. All measurements belong to a list.
  
  NB All MeasurementLists have the attribute 'unit' (mandatory, datatype Word) giving the unit of measurement. For each kind of MeasurementList the unit will default to the recommended value.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurementList self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_AbstractMeasurementList_AddApplicationData(Nmr_AbstractMeasurementList self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  Entr_Entry value
**/
extern void *Nmr_AbstractMeasurementList_AddEntry(Nmr_AbstractMeasurementList self, Entr_Entry value);

/**
  Add for ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs 
using MeasurementList as input
  @param  Nmr_AbstractMeasurementList self
  @param  Nsim_Run value
**/
extern void *Nmr_AbstractMeasurementList_AddInputToNmrRun(Nmr_AbstractMeasurementList self, Nsim_Run value);

/**
  Add for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  Vald_NmrMeasurementListValidation value
**/
extern void *Nmr_AbstractMeasurementList_AddNmrMeasurementListValidation(Nmr_AbstractMeasurementList self, Vald_NmrMeasurementListValidation value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurementList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_AbstractMeasurementList_FindAllApplicationData(Nmr_AbstractMeasurementList self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurementList self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_AbstractMeasurementList_FindAllApplicationData_keyval0(Nmr_AbstractMeasurementList self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurementList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_AbstractMeasurementList_FindAllApplicationData_keyval1(Nmr_AbstractMeasurementList self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_AbstractMeasurementList_FindAllApplicationData_keyval2(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_AbstractMeasurementList_FindAllApplicationData_keyval3(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurementList self
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
extern ApiList Nmr_AbstractMeasurementList_FindAllApplicationData_keyval4(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurementList_FindAllEntries(Nmr_AbstractMeasurementList self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_AbstractMeasurementList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurementList_FindAllEntries_keyval0(Nmr_AbstractMeasurementList self);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurementList_FindAllEntries_keyval1(Nmr_AbstractMeasurementList self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurementList_FindAllEntries_keyval2(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurementList_FindAllEntries_keyval3(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_AbstractMeasurementList self
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
extern ApiSet Nmr_AbstractMeasurementList_FindAllEntries_keyval4(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_AbstractMeasurementList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurementList_FindAllInputToNmrRuns(Nmr_AbstractMeasurementList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_AbstractMeasurementList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurementList_FindAllInputToNmrRuns_keyval0(Nmr_AbstractMeasurementList self);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_AbstractMeasurementList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurementList_FindAllInputToNmrRuns_keyval1(Nmr_AbstractMeasurementList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurementList_FindAllInputToNmrRuns_keyval2(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurementList_FindAllInputToNmrRuns_keyval3(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_AbstractMeasurementList self
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
extern ApiSet Nmr_AbstractMeasurementList_FindAllInputToNmrRuns_keyval4(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.measurements

child link 
to class AbstractMeasurement
  @param  Nmr_AbstractMeasurementList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurementList_FindAllMeasurements(Nmr_AbstractMeasurementList self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.measurements

child link 
to class AbstractMeasurement
  @param  Nmr_AbstractMeasurementList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurementList_FindAllMeasurements_keyval0(Nmr_AbstractMeasurementList self);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.measurements

child link 
to class AbstractMeasurement
  @param  Nmr_AbstractMeasurementList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurementList_FindAllMeasurements_keyval1(Nmr_AbstractMeasurementList self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.measurements

child link 
to class AbstractMeasurement
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurementList_FindAllMeasurements_keyval2(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.measurements

child link 
to class AbstractMeasurement
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurementList_FindAllMeasurements_keyval3(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.AbstractMeasurementList.measurements

child link 
to class AbstractMeasurement
  @param  Nmr_AbstractMeasurementList self
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
extern ApiSet Nmr_AbstractMeasurementList_FindAllMeasurements_keyval4(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurementList_FindAllNmrMeasurementListValidations(Nmr_AbstractMeasurementList self, ApiMap conditions);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurementList_FindAllNmrMeasurementListValidations_keyval0(Nmr_AbstractMeasurementList self);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurementList_FindAllNmrMeasurementListValidations_keyval1(Nmr_AbstractMeasurementList self, char * key, ApiObject value);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurementList_FindAllNmrMeasurementListValidations_keyval2(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_AbstractMeasurementList_FindAllNmrMeasurementListValidations_keyval3(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
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
extern ApiSet Nmr_AbstractMeasurementList_FindAllNmrMeasurementListValidations_keyval4(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurementList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_AbstractMeasurementList_FindFirstApplicationData(Nmr_AbstractMeasurementList self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurementList self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_AbstractMeasurementList_FindFirstApplicationData_keyval0(Nmr_AbstractMeasurementList self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurementList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_AbstractMeasurementList_FindFirstApplicationData_keyval1(Nmr_AbstractMeasurementList self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_AbstractMeasurementList_FindFirstApplicationData_keyval2(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_AbstractMeasurementList_FindFirstApplicationData_keyval3(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurementList self
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
extern Impl_ApplicationData Nmr_AbstractMeasurementList_FindFirstApplicationData_keyval4(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_AbstractMeasurementList_FindFirstEntry(Nmr_AbstractMeasurementList self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_AbstractMeasurementList self
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_AbstractMeasurementList_FindFirstEntry_keyval0(Nmr_AbstractMeasurementList self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_AbstractMeasurementList_FindFirstEntry_keyval1(Nmr_AbstractMeasurementList self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_AbstractMeasurementList_FindFirstEntry_keyval2(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_AbstractMeasurementList_FindFirstEntry_keyval3(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries 
for MeasurementList
  @param  Nmr_AbstractMeasurementList self
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
extern Entr_Entry Nmr_AbstractMeasurementList_FindFirstEntry_keyval4(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_AbstractMeasurementList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_AbstractMeasurementList_FindFirstInputToNmrRun(Nmr_AbstractMeasurementList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_AbstractMeasurementList self
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_AbstractMeasurementList_FindFirstInputToNmrRun_keyval0(Nmr_AbstractMeasurementList self);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_AbstractMeasurementList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_AbstractMeasurementList_FindFirstInputToNmrRun_keyval1(Nmr_AbstractMeasurementList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_AbstractMeasurementList_FindFirstInputToNmrRun_keyval2(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_AbstractMeasurementList_FindFirstInputToNmrRun_keyval3(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_AbstractMeasurementList self
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
extern Nsim_Run Nmr_AbstractMeasurementList_FindFirstInputToNmrRun_keyval4(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.measurements

child 
link to class AbstractMeasurement
  @param  Nmr_AbstractMeasurementList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurement Nmr_AbstractMeasurementList_FindFirstMeasurement(Nmr_AbstractMeasurementList self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.measurements

child 
link to class AbstractMeasurement
  @param  Nmr_AbstractMeasurementList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurement Nmr_AbstractMeasurementList_FindFirstMeasurement_keyval0(Nmr_AbstractMeasurementList self);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.measurements

child 
link to class AbstractMeasurement
  @param  Nmr_AbstractMeasurementList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurement Nmr_AbstractMeasurementList_FindFirstMeasurement_keyval1(Nmr_AbstractMeasurementList self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.measurements

child 
link to class AbstractMeasurement
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurement Nmr_AbstractMeasurementList_FindFirstMeasurement_keyval2(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.measurements

child 
link to class AbstractMeasurement
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurement Nmr_AbstractMeasurementList_FindFirstMeasurement_keyval3(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.AbstractMeasurementList.measurements

child 
link to class AbstractMeasurement
  @param  Nmr_AbstractMeasurementList self
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
extern Nmr_AbstractMeasurement Nmr_AbstractMeasurementList_FindFirstMeasurement_keyval4(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_AbstractMeasurementList_FindFirstNmrMeasurementListValidation(Nmr_AbstractMeasurementList self, ApiMap conditions);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_AbstractMeasurementList_FindFirstNmrMeasurementListValidation_keyval0(Nmr_AbstractMeasurementList self);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_AbstractMeasurementList_FindFirstNmrMeasurementListValidation_keyval1(Nmr_AbstractMeasurementList self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_AbstractMeasurementList_FindFirstNmrMeasurementListValidation_keyval2(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Vald_NmrMeasurementListValidation Nmr_AbstractMeasurementList_FindFirstNmrMeasurementListValidation_keyval3(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
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
extern Vald_NmrMeasurementListValidation Nmr_AbstractMeasurementList_FindFirstNmrMeasurementListValidation_keyval4(Nmr_AbstractMeasurementList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
extern Acco_AccessObject Nmr_AbstractMeasurementList_GetAccess(Nmr_AbstractMeasurementList self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
extern Acco_AccessObject Nmr_AbstractMeasurementList_GetActiveAccess(Nmr_AbstractMeasurementList self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
extern ApiList Nmr_AbstractMeasurementList_GetApplicationData(Nmr_AbstractMeasurementList self);

/**
  GetByKey for ccp.nmr.Nmr.AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_AbstractMeasurementList Nmr_AbstractMeasurementList_GetByKey(Nmr_AbstractMeasurementList self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
extern ApiString Nmr_AbstractMeasurementList_GetClassName(Nmr_AbstractMeasurementList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
extern ApiString Nmr_AbstractMeasurementList_GetDetails(Nmr_AbstractMeasurementList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
extern ApiSet Nmr_AbstractMeasurementList_GetEntries(Nmr_AbstractMeasurementList self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
extern ApiList Nmr_AbstractMeasurementList_GetFieldNames(Nmr_AbstractMeasurementList self);

/**
  GetFullKey for ccp.nmr.Nmr.AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmr_AbstractMeasurementList_GetFullKey(Nmr_AbstractMeasurementList self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
extern ApiBoolean Nmr_AbstractMeasurementList_GetInConstructor(Nmr_AbstractMeasurementList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs 
using MeasurementList as input
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
extern ApiSet Nmr_AbstractMeasurementList_GetInputToNmrRuns(Nmr_AbstractMeasurementList self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
extern ApiBoolean Nmr_AbstractMeasurementList_GetIsDeleted(Nmr_AbstractMeasurementList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.isSimulated

Are data in 
this list simulated? The attribute is an annotation more than anything 
else, as there are no corresponding constraints.
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
extern ApiBoolean Nmr_AbstractMeasurementList_GetIsSimulated(Nmr_AbstractMeasurementList self);

/**
  GetLocalKey for ccp.nmr.Nmr.AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @returns  Local object key
**/
extern ApiObject Nmr_AbstractMeasurementList_GetLocalKey(Nmr_AbstractMeasurementList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.measurements

child link to 
class AbstractMeasurement
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
extern ApiSet Nmr_AbstractMeasurementList_GetMeasurements(Nmr_AbstractMeasurementList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.method

Default method used 
to calculate measurements. May be overridden for individual measurements 
in the list.
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
extern Meth_Method Nmr_AbstractMeasurementList_GetMethod(Nmr_AbstractMeasurementList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.name

Measurement List name, 
freely chosen by user. Intended to identify the list from other lists of 
the same type.
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
extern ApiString Nmr_AbstractMeasurementList_GetName(Nmr_AbstractMeasurementList self);

/**
  Get for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
extern ApiSet Nmr_AbstractMeasurementList_GetNmrMeasurementListValidations(Nmr_AbstractMeasurementList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.nmrProject

parent link
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_AbstractMeasurementList_GetNmrProject(Nmr_AbstractMeasurementList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.outputFromNmrRun

NmrSim.Run 
from which Measuremnet list is produced.
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
extern Nsim_Run Nmr_AbstractMeasurementList_GetOutputFromNmrRun(Nmr_AbstractMeasurementList self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
extern ApiString Nmr_AbstractMeasurementList_GetPackageName(Nmr_AbstractMeasurementList self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
extern ApiString Nmr_AbstractMeasurementList_GetPackageShortName(Nmr_AbstractMeasurementList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.parent

link to parent 
object - synonym for nmrProject
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_AbstractMeasurementList_GetParent(Nmr_AbstractMeasurementList self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
extern ApiString Nmr_AbstractMeasurementList_GetQualifiedName(Nmr_AbstractMeasurementList self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_AbstractMeasurementList_GetRoot(Nmr_AbstractMeasurementList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
extern ApiInteger Nmr_AbstractMeasurementList_GetSerial(Nmr_AbstractMeasurementList self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
extern Impl_TopObject Nmr_AbstractMeasurementList_GetTopObject(Nmr_AbstractMeasurementList self);

/**
  Get for ccp.nmr.Nmr.AbstractMeasurementList.unit

Unit of measurement 
for measurementList.
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
extern ApiString Nmr_AbstractMeasurementList_GetUnit(Nmr_AbstractMeasurementList self);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurementList self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_AbstractMeasurementList_RemoveApplicationData(Nmr_AbstractMeasurementList self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  Entr_Entry value
**/
extern void *Nmr_AbstractMeasurementList_RemoveEntry(Nmr_AbstractMeasurementList self, Entr_Entry value);

/**
  Remove for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_AbstractMeasurementList self
  @param  Nsim_Run value
**/
extern void *Nmr_AbstractMeasurementList_RemoveInputToNmrRun(Nmr_AbstractMeasurementList self, Nsim_Run value);

/**
  Remove for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  Vald_NmrMeasurementListValidation value
**/
extern void *Nmr_AbstractMeasurementList_RemoveNmrMeasurementListValidation(Nmr_AbstractMeasurementList self, Vald_NmrMeasurementListValidation value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_AbstractMeasurementList self
  @param  Acco_AccessObject value
**/
extern void *Nmr_AbstractMeasurementList_SetAccess(Nmr_AbstractMeasurementList self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_AbstractMeasurementList self
  @param  ApiList values
**/
extern void *Nmr_AbstractMeasurementList_SetApplicationData(Nmr_AbstractMeasurementList self, ApiList values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.details

Free text, for 
notes, explanatory comments, etc.
  @param  Nmr_AbstractMeasurementList self
  @param  ApiString value
**/
extern void *Nmr_AbstractMeasurementList_SetDetails(Nmr_AbstractMeasurementList self, ApiString value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  ApiSet values
**/
extern void *Nmr_AbstractMeasurementList_SetEntries(Nmr_AbstractMeasurementList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs 
using MeasurementList as input
  @param  Nmr_AbstractMeasurementList self
  @param  ApiSet values
**/
extern void *Nmr_AbstractMeasurementList_SetInputToNmrRuns(Nmr_AbstractMeasurementList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.isSimulated

Are data in 
this list simulated? The attribute is an annotation more than anything 
else, as there are no corresponding constraints.
  @param  Nmr_AbstractMeasurementList self
  @param  ApiBoolean value
**/
extern void *Nmr_AbstractMeasurementList_SetIsSimulated(Nmr_AbstractMeasurementList self, ApiBoolean value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.method

Default method used 
to calculate measurements. May be overridden for individual measurements 
in the list.
  @param  Nmr_AbstractMeasurementList self
  @param  Meth_Method value
**/
extern void *Nmr_AbstractMeasurementList_SetMethod(Nmr_AbstractMeasurementList self, Meth_Method value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.name

Measurement List name, 
freely chosen by user. Intended to identify the list from other lists of 
the same type.
  @param  Nmr_AbstractMeasurementList self
  @param  ApiString value
**/
extern void *Nmr_AbstractMeasurementList_SetName(Nmr_AbstractMeasurementList self, ApiString value);

/**
  Set for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @param  ApiSet values
**/
extern void *Nmr_AbstractMeasurementList_SetNmrMeasurementListValidations(Nmr_AbstractMeasurementList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.outputFromNmrRun

NmrSim.Run 
from which Measuremnet list is produced.
  @param  Nmr_AbstractMeasurementList self
  @param  Nsim_Run value
**/
extern void *Nmr_AbstractMeasurementList_SetOutputFromNmrRun(Nmr_AbstractMeasurementList self, Nsim_Run value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.serial

Serial number of 
object. Serves as object main key. Serial numbers of deleted objects are 
not re-used. Serial numbers can only be set by the implementation. 
Values are in practice always positive, since negative values are 
interpreted as a signal to set the next free serial
  @param  Nmr_AbstractMeasurementList self
  @param  ApiInteger value
**/
extern void *Nmr_AbstractMeasurementList_SetSerial(Nmr_AbstractMeasurementList self, ApiInteger value);

/**
  Set for ccp.nmr.Nmr.AbstractMeasurementList.unit

Unit of measurement 
for measurementList.
  @param  Nmr_AbstractMeasurementList self
  @param  ApiString value
**/
extern void *Nmr_AbstractMeasurementList_SetUnit(Nmr_AbstractMeasurementList self, ApiString value);

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurementList.entries

Bmrb Entries for 
MeasurementList
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
extern ApiList Nmr_AbstractMeasurementList_SortedEntries(Nmr_AbstractMeasurementList self);

/**
  Sorted for 
ccp.nmr.Nmr.AbstractMeasurementList.inputToNmrRuns

NmrSim.Runs using 
MeasurementList as input
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
extern ApiList Nmr_AbstractMeasurementList_SortedInputToNmrRuns(Nmr_AbstractMeasurementList self);

/**
  Sorted for ccp.nmr.Nmr.AbstractMeasurementList.measurements

child link 
to class AbstractMeasurement
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
extern ApiList Nmr_AbstractMeasurementList_SortedMeasurements(Nmr_AbstractMeasurementList self);

/**
  Sorted for 
ccp.nmr.Nmr.AbstractMeasurementList.nmrMeasurementListValidations

Validation 
results that include AbstractMeasurementList
  @param  Nmr_AbstractMeasurementList self
  @returns   the result
**/
extern ApiList Nmr_AbstractMeasurementList_SortedNmrMeasurementListValidations(Nmr_AbstractMeasurementList self);

#endif /* __incl__ccp_api_nmr_Nmr_AbstractMeasurementList_h__ */
