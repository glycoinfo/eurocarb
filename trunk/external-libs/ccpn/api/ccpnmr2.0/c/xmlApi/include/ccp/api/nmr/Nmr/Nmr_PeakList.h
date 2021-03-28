
#ifndef __incl__ccp_api_nmr_Nmr_PeakList_h__
#define __incl__ccp_api_nmr_Nmr_PeakList_h__

#include "ccp.h"

/*
  List of Peaks, all belonging to a specific DataSource.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakList self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_PeakList_AddApplicationData(Nmr_PeakList self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where PeakList 
is used as input
  @param  Nmr_PeakList self
  @param  Nsim_Run value
**/
extern void *Nmr_PeakList_AddInputToNmrRun(Nmr_PeakList self, Nsim_Run value);

/**
  Add for ccp.nmr.Nmr.PeakList.peakListValidations

Validation result that 
include PeakLists
  @param  Nmr_PeakList self
  @param  Vald_PeakListValidation value
**/
extern void *Nmr_PeakList_AddPeakListValidation(Nmr_PeakList self, Vald_PeakListValidation value);

/**
  CheckAllValid for ccp.nmr.Nmr.PeakList
  @param  Nmr_PeakList self
  @param  ApiBoolean complete
**/
extern void *Nmr_PeakList_CheckAllValid(Nmr_PeakList self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.PeakList
  @param  Nmr_PeakList self
  @param  ApiBoolean complete
**/
extern void *Nmr_PeakList_CheckValid(Nmr_PeakList self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_PeakList_FindAllApplicationData(Nmr_PeakList self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakList self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_PeakList_FindAllApplicationData_keyval0(Nmr_PeakList self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_PeakList_FindAllApplicationData_keyval1(Nmr_PeakList self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_PeakList_FindAllApplicationData_keyval2(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_PeakList_FindAllApplicationData_keyval3(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakList self
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
extern ApiList Nmr_PeakList_FindAllApplicationData_keyval4(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where 
PeakList is used as input
  @param  Nmr_PeakList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakList_FindAllInputToNmrRuns(Nmr_PeakList self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where 
PeakList is used as input
  @param  Nmr_PeakList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakList_FindAllInputToNmrRuns_keyval0(Nmr_PeakList self);

/**
  FindAll for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where 
PeakList is used as input
  @param  Nmr_PeakList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakList_FindAllInputToNmrRuns_keyval1(Nmr_PeakList self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where 
PeakList is used as input
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakList_FindAllInputToNmrRuns_keyval2(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where 
PeakList is used as input
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakList_FindAllInputToNmrRuns_keyval3(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where 
PeakList is used as input
  @param  Nmr_PeakList self
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
extern ApiSet Nmr_PeakList_FindAllInputToNmrRuns_keyval4(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.PeakList.peakListValidations

Validation result 
that include PeakLists
  @param  Nmr_PeakList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakList_FindAllPeakListValidations(Nmr_PeakList self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.PeakList.peakListValidations

Validation result 
that include PeakLists
  @param  Nmr_PeakList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakList_FindAllPeakListValidations_keyval0(Nmr_PeakList self);

/**
  FindAll for ccp.nmr.Nmr.PeakList.peakListValidations

Validation result 
that include PeakLists
  @param  Nmr_PeakList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakList_FindAllPeakListValidations_keyval1(Nmr_PeakList self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.PeakList.peakListValidations

Validation result 
that include PeakLists
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakList_FindAllPeakListValidations_keyval2(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.PeakList.peakListValidations

Validation result 
that include PeakLists
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakList_FindAllPeakListValidations_keyval3(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.PeakList.peakListValidations

Validation result 
that include PeakLists
  @param  Nmr_PeakList self
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
extern ApiSet Nmr_PeakList_FindAllPeakListValidations_keyval4(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.PeakList.peaks

child link to class Peak
  @param  Nmr_PeakList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakList_FindAllPeaks(Nmr_PeakList self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.PeakList.peaks

child link to class Peak
  @param  Nmr_PeakList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakList_FindAllPeaks_keyval0(Nmr_PeakList self);

/**
  FindAll for ccp.nmr.Nmr.PeakList.peaks

child link to class Peak
  @param  Nmr_PeakList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakList_FindAllPeaks_keyval1(Nmr_PeakList self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.PeakList.peaks

child link to class Peak
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakList_FindAllPeaks_keyval2(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.PeakList.peaks

child link to class Peak
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_PeakList_FindAllPeaks_keyval3(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.PeakList.peaks

child link to class Peak
  @param  Nmr_PeakList self
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
extern ApiSet Nmr_PeakList_FindAllPeaks_keyval4(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_PeakList_FindFirstApplicationData(Nmr_PeakList self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakList self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_PeakList_FindFirstApplicationData_keyval0(Nmr_PeakList self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_PeakList_FindFirstApplicationData_keyval1(Nmr_PeakList self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_PeakList_FindFirstApplicationData_keyval2(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_PeakList_FindFirstApplicationData_keyval3(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakList self
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
extern Impl_ApplicationData Nmr_PeakList_FindFirstApplicationData_keyval4(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where 
PeakList is used as input
  @param  Nmr_PeakList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_PeakList_FindFirstInputToNmrRun(Nmr_PeakList self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where 
PeakList is used as input
  @param  Nmr_PeakList self
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_PeakList_FindFirstInputToNmrRun_keyval0(Nmr_PeakList self);

/**
  FindFirst for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where 
PeakList is used as input
  @param  Nmr_PeakList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_PeakList_FindFirstInputToNmrRun_keyval1(Nmr_PeakList self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where 
PeakList is used as input
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_PeakList_FindFirstInputToNmrRun_keyval2(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where 
PeakList is used as input
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_Run Nmr_PeakList_FindFirstInputToNmrRun_keyval3(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where 
PeakList is used as input
  @param  Nmr_PeakList self
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
extern Nsim_Run Nmr_PeakList_FindFirstInputToNmrRun_keyval4(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.PeakList.peaks

child link to class Peak
  @param  Nmr_PeakList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_PeakList_FindFirstPeak(Nmr_PeakList self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.PeakList.peakListValidations

Validation 
result that include PeakLists
  @param  Nmr_PeakList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Vald_PeakListValidation Nmr_PeakList_FindFirstPeakListValidation(Nmr_PeakList self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.PeakList.peakListValidations

Validation 
result that include PeakLists
  @param  Nmr_PeakList self
  @returns  the first value that satisfies the conditions 
**/
extern Vald_PeakListValidation Nmr_PeakList_FindFirstPeakListValidation_keyval0(Nmr_PeakList self);

/**
  FindFirst for ccp.nmr.Nmr.PeakList.peakListValidations

Validation 
result that include PeakLists
  @param  Nmr_PeakList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Vald_PeakListValidation Nmr_PeakList_FindFirstPeakListValidation_keyval1(Nmr_PeakList self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.PeakList.peakListValidations

Validation 
result that include PeakLists
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Vald_PeakListValidation Nmr_PeakList_FindFirstPeakListValidation_keyval2(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.PeakList.peakListValidations

Validation 
result that include PeakLists
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Vald_PeakListValidation Nmr_PeakList_FindFirstPeakListValidation_keyval3(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.PeakList.peakListValidations

Validation 
result that include PeakLists
  @param  Nmr_PeakList self
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
extern Vald_PeakListValidation Nmr_PeakList_FindFirstPeakListValidation_keyval4(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.PeakList.peaks

child link to class Peak
  @param  Nmr_PeakList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_PeakList_FindFirstPeak_keyval0(Nmr_PeakList self);

/**
  FindFirst for ccp.nmr.Nmr.PeakList.peaks

child link to class Peak
  @param  Nmr_PeakList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_PeakList_FindFirstPeak_keyval1(Nmr_PeakList self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.PeakList.peaks

child link to class Peak
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_PeakList_FindFirstPeak_keyval2(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.PeakList.peaks

child link to class Peak
  @param  Nmr_PeakList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Peak Nmr_PeakList_FindFirstPeak_keyval3(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.PeakList.peaks

child link to class Peak
  @param  Nmr_PeakList self
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
extern Nmr_Peak Nmr_PeakList_FindFirstPeak_keyval4(Nmr_PeakList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.PeakList
  @param  Nmr_PeakList self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_PeakList_Get(Nmr_PeakList self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_PeakList self
  @returns   the result
**/
extern Acco_AccessObject Nmr_PeakList_GetAccess(Nmr_PeakList self);

/**
  Get for ccp.nmr.Nmr.PeakList.analysisPeakList

Analysis PeakList object 
associated with PeakList
  @param  Nmr_PeakList self
  @returns   the result
**/
extern Anal_AnalysisPeakList Nmr_PeakList_GetAnalysisPeakList(Nmr_PeakList self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakList self
  @returns   the result
**/
extern ApiList Nmr_PeakList_GetApplicationData(Nmr_PeakList self);

/**
  GetByKey for ccp.nmr.Nmr.PeakList
  @param  Nmr_PeakList self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_PeakList Nmr_PeakList_GetByKey(Nmr_PeakList self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_PeakList self
  @returns   the result
**/
extern ApiString Nmr_PeakList_GetClassName(Nmr_PeakList self);

/**
  Get for ccp.nmr.Nmr.PeakList.dataSource

parent link
  @param  Nmr_PeakList self
  @returns   the result
**/
extern Nmr_DataSource Nmr_PeakList_GetDataSource(Nmr_PeakList self);

/**
  Get for ccp.nmr.Nmr.PeakList.details

Free text, for notes, explanatory 
comments, etc.
  @param  Nmr_PeakList self
  @returns   the result
**/
extern ApiString Nmr_PeakList_GetDetails(Nmr_PeakList self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_PeakList self
  @returns   the result
**/
extern ApiList Nmr_PeakList_GetFieldNames(Nmr_PeakList self);

/**
  Get for ccp.nmr.Nmr.PeakList.fitMethod

Default fitting method for peaks 
in peakList. Valid for any peak that does not have an explicit fititng 
method.
  @param  Nmr_PeakList self
  @returns   the result
**/
extern Meth_Method Nmr_PeakList_GetFitMethod(Nmr_PeakList self);

/**
  GetFullKey for ccp.nmr.Nmr.PeakList
  @param  Nmr_PeakList self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmr_PeakList_GetFullKey(Nmr_PeakList self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_PeakList self
  @returns   the result
**/
extern ApiBoolean Nmr_PeakList_GetInConstructor(Nmr_PeakList self);

/**
  Get for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where PeakList 
is used as input
  @param  Nmr_PeakList self
  @returns   the result
**/
extern ApiSet Nmr_PeakList_GetInputToNmrRuns(Nmr_PeakList self);

/**
  Get for ccp.nmr.Nmr.PeakList.intensMethod

'Preferred' intensity 
determination method for peakList, the method whose results should be 
mostly relied on by others.
  @param  Nmr_PeakList self
  @returns   the result
**/
extern Meth_Method Nmr_PeakList_GetIntensMethod(Nmr_PeakList self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_PeakList self
  @returns   the result
**/
extern ApiBoolean Nmr_PeakList_GetIsDeleted(Nmr_PeakList self);

/**
  Get for ccp.nmr.Nmr.PeakList.isSimulated

Are the peaks calculated 
rather than measured?
  @param  Nmr_PeakList self
  @returns   the result
**/
extern ApiBoolean Nmr_PeakList_GetIsSimulated(Nmr_PeakList self);

/**
  GetLocalKey for ccp.nmr.Nmr.PeakList
  @param  Nmr_PeakList self
  @returns  Local object key
**/
extern ApiObject Nmr_PeakList_GetLocalKey(Nmr_PeakList self);

/**
  Get for ccp.nmr.Nmr.PeakList.name

Name of peaklist. Used in e.g. 
annotation to distinguish the peaklist from others belonging to the same 
dataSource.
  @param  Nmr_PeakList self
  @returns   the result
**/
extern ApiString Nmr_PeakList_GetName(Nmr_PeakList self);

/**
  Get for ccp.nmr.Nmr.PeakList.outputFromNmrRun

NmrSim.Run used to 
generate PeakList
  @param  Nmr_PeakList self
  @returns   the result
**/
extern Nsim_Run Nmr_PeakList_GetOutputFromNmrRun(Nmr_PeakList self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_PeakList self
  @returns   the result
**/
extern ApiString Nmr_PeakList_GetPackageName(Nmr_PeakList self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_PeakList self
  @returns   the result
**/
extern ApiString Nmr_PeakList_GetPackageShortName(Nmr_PeakList self);

/**
  Get for ccp.nmr.Nmr.PeakList.parent

link to parent object - synonym for 
dataSource
  @param  Nmr_PeakList self
  @returns   the result
**/
extern Nmr_DataSource Nmr_PeakList_GetParent(Nmr_PeakList self);

/**
  Get for ccp.nmr.Nmr.PeakList.peakListValidations

Validation result that 
include PeakLists
  @param  Nmr_PeakList self
  @returns   the result
**/
extern ApiSet Nmr_PeakList_GetPeakListValidations(Nmr_PeakList self);

/**
  Get for ccp.nmr.Nmr.PeakList.peaks

child link to class Peak
  @param  Nmr_PeakList self
  @returns   the result
**/
extern ApiSet Nmr_PeakList_GetPeaks(Nmr_PeakList self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_PeakList self
  @returns   the result
**/
extern ApiString Nmr_PeakList_GetQualifiedName(Nmr_PeakList self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_PeakList self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_PeakList_GetRoot(Nmr_PeakList self);

/**
  Get for ccp.nmr.Nmr.PeakList.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_PeakList self
  @returns   the result
**/
extern ApiInteger Nmr_PeakList_GetSerial(Nmr_PeakList self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_PeakList self
  @returns   the result
**/
extern Impl_TopObject Nmr_PeakList_GetTopObject(Nmr_PeakList self);

/**
  Constructor for ccp.nmr.Nmr.PeakList
  @param  Nmr_DataSource parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_PeakList Nmr_PeakList_Init(Nmr_DataSource parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.PeakList
  @param  Nmr_DataSource parent
  @returns  the new object
**/
extern Nmr_PeakList Nmr_PeakList_Init_reqd(Nmr_DataSource parent);

/**
  Factory function to create ccp.nmr.Nmr.Peak
  @param  Nmr_PeakList self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_Peak Nmr_PeakList_NewPeak(Nmr_PeakList self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.Nmr.Peak
  @param  Nmr_PeakList self
  @returns  the new object
**/
extern Nmr_Peak Nmr_PeakList_NewPeak_reqd(Nmr_PeakList self);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakList self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_PeakList_RemoveApplicationData(Nmr_PeakList self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where 
PeakList is used as input
  @param  Nmr_PeakList self
  @param  Nsim_Run value
**/
extern void *Nmr_PeakList_RemoveInputToNmrRun(Nmr_PeakList self, Nsim_Run value);

/**
  Remove for ccp.nmr.Nmr.PeakList.peakListValidations

Validation result 
that include PeakLists
  @param  Nmr_PeakList self
  @param  Vald_PeakListValidation value
**/
extern void *Nmr_PeakList_RemovePeakListValidation(Nmr_PeakList self, Vald_PeakListValidation value);

/**
  SetAttr for ccp.nmr.Nmr.PeakList
  @param  Nmr_PeakList self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_PeakList_Set(Nmr_PeakList self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_PeakList self
  @param  Acco_AccessObject value
**/
extern void *Nmr_PeakList_SetAccess(Nmr_PeakList self, Acco_AccessObject value);

/**
  Set for ccp.nmr.Nmr.PeakList.analysisPeakList

Analysis PeakList object 
associated with PeakList
  @param  Nmr_PeakList self
  @param  Anal_AnalysisPeakList value
**/
extern void *Nmr_PeakList_SetAnalysisPeakList(Nmr_PeakList self, Anal_AnalysisPeakList value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_PeakList self
  @param  ApiList values
**/
extern void *Nmr_PeakList_SetApplicationData(Nmr_PeakList self, ApiList values);

/**
  Set for ccp.nmr.Nmr.PeakList.details

Free text, for notes, explanatory 
comments, etc.
  @param  Nmr_PeakList self
  @param  ApiString value
**/
extern void *Nmr_PeakList_SetDetails(Nmr_PeakList self, ApiString value);

/**
  Set for ccp.nmr.Nmr.PeakList.fitMethod

Default fitting method for peaks 
in peakList. Valid for any peak that does not have an explicit fititng 
method.
  @param  Nmr_PeakList self
  @param  Meth_Method value
**/
extern void *Nmr_PeakList_SetFitMethod(Nmr_PeakList self, Meth_Method value);

/**
  Set for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where PeakList 
is used as input
  @param  Nmr_PeakList self
  @param  ApiSet values
**/
extern void *Nmr_PeakList_SetInputToNmrRuns(Nmr_PeakList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.PeakList.intensMethod

'Preferred' intensity 
determination method for peakList, the method whose results should be 
mostly relied on by others.
  @param  Nmr_PeakList self
  @param  Meth_Method value
**/
extern void *Nmr_PeakList_SetIntensMethod(Nmr_PeakList self, Meth_Method value);

/**
  Set for ccp.nmr.Nmr.PeakList.isSimulated

Are the peaks calculated 
rather than measured?
  @param  Nmr_PeakList self
  @param  ApiBoolean value
**/
extern void *Nmr_PeakList_SetIsSimulated(Nmr_PeakList self, ApiBoolean value);

/**
  Set for ccp.nmr.Nmr.PeakList.name

Name of peaklist. Used in e.g. 
annotation to distinguish the peaklist from others belonging to the same 
dataSource.
  @param  Nmr_PeakList self
  @param  ApiString value
**/
extern void *Nmr_PeakList_SetName(Nmr_PeakList self, ApiString value);

/**
  Set for ccp.nmr.Nmr.PeakList.outputFromNmrRun

NmrSim.Run used to 
generate PeakList
  @param  Nmr_PeakList self
  @param  Nsim_Run value
**/
extern void *Nmr_PeakList_SetOutputFromNmrRun(Nmr_PeakList self, Nsim_Run value);

/**
  Set for ccp.nmr.Nmr.PeakList.peakListValidations

Validation result that 
include PeakLists
  @param  Nmr_PeakList self
  @param  ApiSet values
**/
extern void *Nmr_PeakList_SetPeakListValidations(Nmr_PeakList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.PeakList.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nmr_PeakList self
  @param  ApiInteger value
**/
extern void *Nmr_PeakList_SetSerial(Nmr_PeakList self, ApiInteger value);

/**
  Sorted for ccp.nmr.Nmr.PeakList.inputToNmrRuns

NmrSim.Runs where 
PeakList is used as input
  @param  Nmr_PeakList self
  @returns   the result
**/
extern ApiList Nmr_PeakList_SortedInputToNmrRuns(Nmr_PeakList self);

/**
  Sorted for ccp.nmr.Nmr.PeakList.peakListValidations

Validation result 
that include PeakLists
  @param  Nmr_PeakList self
  @returns   the result
**/
extern ApiList Nmr_PeakList_SortedPeakListValidations(Nmr_PeakList self);

/**
  Sorted for ccp.nmr.Nmr.PeakList.peaks

child link to class Peak
  @param  Nmr_PeakList self
  @returns   the result
**/
extern ApiList Nmr_PeakList_SortedPeaks(Nmr_PeakList self);

#endif /* __incl__ccp_api_nmr_Nmr_PeakList_h__ */
