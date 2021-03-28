
#ifndef __incl__ccp_api_nmr_Nmr_SpectralDensityList_h__
#define __incl__ccp_api_nmr_Nmr_SpectralDensityList_h__

#include "ccp.h"

/*
  List of spectral density sets.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SpectralDensityList self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_SpectralDensityList_AddApplicationData(Nmr_SpectralDensityList self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which include 
DerivedDataList
  @param  Nmr_SpectralDensityList self
  @param  Entr_Entry value
**/
extern void *Nmr_SpectralDensityList_AddEntry(Nmr_SpectralDensityList self, Entr_Entry value);

/**
  Add for ccp.nmr.Nmr.SpectralDensityList.experiments

Experiments for 
which list of spectral densities is valid.
  @param  Nmr_SpectralDensityList self
  @param  Nmr_Experiment value
**/
extern void *Nmr_SpectralDensityList_AddExperiment(Nmr_SpectralDensityList self, Nmr_Experiment value);

/**
  CheckAllValid for ccp.nmr.Nmr.SpectralDensityList
  @param  Nmr_SpectralDensityList self
  @param  ApiBoolean complete
**/
extern void *Nmr_SpectralDensityList_CheckAllValid(Nmr_SpectralDensityList self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.SpectralDensityList
  @param  Nmr_SpectralDensityList self
  @param  ApiBoolean complete
**/
extern void *Nmr_SpectralDensityList_CheckValid(Nmr_SpectralDensityList self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SpectralDensityList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_SpectralDensityList_FindAllApplicationData(Nmr_SpectralDensityList self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SpectralDensityList self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_SpectralDensityList_FindAllApplicationData_keyval0(Nmr_SpectralDensityList self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SpectralDensityList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_SpectralDensityList_FindAllApplicationData_keyval1(Nmr_SpectralDensityList self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SpectralDensityList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_SpectralDensityList_FindAllApplicationData_keyval2(Nmr_SpectralDensityList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SpectralDensityList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_SpectralDensityList_FindAllApplicationData_keyval3(Nmr_SpectralDensityList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SpectralDensityList self
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
extern ApiList Nmr_SpectralDensityList_FindAllApplicationData_keyval4(Nmr_SpectralDensityList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.SpectralDensityList.derivations

child link to 
class SpectralDensityDerivation
  @param  Nmr_SpectralDensityList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SpectralDensityList_FindAllDerivations(Nmr_SpectralDensityList self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.SpectralDensityList.derivations

child link to 
class SpectralDensityDerivation
  @param  Nmr_SpectralDensityList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SpectralDensityList_FindAllDerivations_keyval0(Nmr_SpectralDensityList self);

/**
  FindAll for ccp.nmr.Nmr.SpectralDensityList.derivations

child link to 
class SpectralDensityDerivation
  @param  Nmr_SpectralDensityList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SpectralDensityList_FindAllDerivations_keyval1(Nmr_SpectralDensityList self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.SpectralDensityList.derivations

child link to 
class SpectralDensityDerivation
  @param  Nmr_SpectralDensityList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SpectralDensityList_FindAllDerivations_keyval2(Nmr_SpectralDensityList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.SpectralDensityList.derivations

child link to 
class SpectralDensityDerivation
  @param  Nmr_SpectralDensityList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SpectralDensityList_FindAllDerivations_keyval3(Nmr_SpectralDensityList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.SpectralDensityList.derivations

child link to 
class SpectralDensityDerivation
  @param  Nmr_SpectralDensityList self
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
extern ApiSet Nmr_SpectralDensityList_FindAllDerivations_keyval4(Nmr_SpectralDensityList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which 
include DerivedDataList
  @param  Nmr_SpectralDensityList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SpectralDensityList_FindAllEntries(Nmr_SpectralDensityList self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which 
include DerivedDataList
  @param  Nmr_SpectralDensityList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SpectralDensityList_FindAllEntries_keyval0(Nmr_SpectralDensityList self);

/**
  FindAll for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which 
include DerivedDataList
  @param  Nmr_SpectralDensityList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SpectralDensityList_FindAllEntries_keyval1(Nmr_SpectralDensityList self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which 
include DerivedDataList
  @param  Nmr_SpectralDensityList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SpectralDensityList_FindAllEntries_keyval2(Nmr_SpectralDensityList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which 
include DerivedDataList
  @param  Nmr_SpectralDensityList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SpectralDensityList_FindAllEntries_keyval3(Nmr_SpectralDensityList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which 
include DerivedDataList
  @param  Nmr_SpectralDensityList self
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
extern ApiSet Nmr_SpectralDensityList_FindAllEntries_keyval4(Nmr_SpectralDensityList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.SpectralDensityList.experiments

Experiments for 
which list of spectral densities is valid.
  @param  Nmr_SpectralDensityList self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SpectralDensityList_FindAllExperiments(Nmr_SpectralDensityList self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.SpectralDensityList.experiments

Experiments for 
which list of spectral densities is valid.
  @param  Nmr_SpectralDensityList self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SpectralDensityList_FindAllExperiments_keyval0(Nmr_SpectralDensityList self);

/**
  FindAll for ccp.nmr.Nmr.SpectralDensityList.experiments

Experiments for 
which list of spectral densities is valid.
  @param  Nmr_SpectralDensityList self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SpectralDensityList_FindAllExperiments_keyval1(Nmr_SpectralDensityList self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.SpectralDensityList.experiments

Experiments for 
which list of spectral densities is valid.
  @param  Nmr_SpectralDensityList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SpectralDensityList_FindAllExperiments_keyval2(Nmr_SpectralDensityList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.SpectralDensityList.experiments

Experiments for 
which list of spectral densities is valid.
  @param  Nmr_SpectralDensityList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SpectralDensityList_FindAllExperiments_keyval3(Nmr_SpectralDensityList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.SpectralDensityList.experiments

Experiments for 
which list of spectral densities is valid.
  @param  Nmr_SpectralDensityList self
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
extern ApiSet Nmr_SpectralDensityList_FindAllExperiments_keyval4(Nmr_SpectralDensityList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SpectralDensityList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_SpectralDensityList_FindFirstApplicationData(Nmr_SpectralDensityList self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SpectralDensityList self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_SpectralDensityList_FindFirstApplicationData_keyval0(Nmr_SpectralDensityList self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SpectralDensityList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_SpectralDensityList_FindFirstApplicationData_keyval1(Nmr_SpectralDensityList self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SpectralDensityList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_SpectralDensityList_FindFirstApplicationData_keyval2(Nmr_SpectralDensityList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SpectralDensityList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_SpectralDensityList_FindFirstApplicationData_keyval3(Nmr_SpectralDensityList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SpectralDensityList self
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
extern Impl_ApplicationData Nmr_SpectralDensityList_FindFirstApplicationData_keyval4(Nmr_SpectralDensityList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.SpectralDensityList.derivations

child link to 
class SpectralDensityDerivation
  @param  Nmr_SpectralDensityList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SpectralDensityDerivation Nmr_SpectralDensityList_FindFirstDerivation(Nmr_SpectralDensityList self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.SpectralDensityList.derivations

child link to 
class SpectralDensityDerivation
  @param  Nmr_SpectralDensityList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SpectralDensityDerivation Nmr_SpectralDensityList_FindFirstDerivation_keyval0(Nmr_SpectralDensityList self);

/**
  FindFirst for ccp.nmr.Nmr.SpectralDensityList.derivations

child link to 
class SpectralDensityDerivation
  @param  Nmr_SpectralDensityList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SpectralDensityDerivation Nmr_SpectralDensityList_FindFirstDerivation_keyval1(Nmr_SpectralDensityList self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.SpectralDensityList.derivations

child link to 
class SpectralDensityDerivation
  @param  Nmr_SpectralDensityList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SpectralDensityDerivation Nmr_SpectralDensityList_FindFirstDerivation_keyval2(Nmr_SpectralDensityList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.SpectralDensityList.derivations

child link to 
class SpectralDensityDerivation
  @param  Nmr_SpectralDensityList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SpectralDensityDerivation Nmr_SpectralDensityList_FindFirstDerivation_keyval3(Nmr_SpectralDensityList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.SpectralDensityList.derivations

child link to 
class SpectralDensityDerivation
  @param  Nmr_SpectralDensityList self
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
extern Nmr_SpectralDensityDerivation Nmr_SpectralDensityList_FindFirstDerivation_keyval4(Nmr_SpectralDensityList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which 
include DerivedDataList
  @param  Nmr_SpectralDensityList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_SpectralDensityList_FindFirstEntry(Nmr_SpectralDensityList self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which 
include DerivedDataList
  @param  Nmr_SpectralDensityList self
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_SpectralDensityList_FindFirstEntry_keyval0(Nmr_SpectralDensityList self);

/**
  FindFirst for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which 
include DerivedDataList
  @param  Nmr_SpectralDensityList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_SpectralDensityList_FindFirstEntry_keyval1(Nmr_SpectralDensityList self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which 
include DerivedDataList
  @param  Nmr_SpectralDensityList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_SpectralDensityList_FindFirstEntry_keyval2(Nmr_SpectralDensityList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which 
include DerivedDataList
  @param  Nmr_SpectralDensityList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_SpectralDensityList_FindFirstEntry_keyval3(Nmr_SpectralDensityList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which 
include DerivedDataList
  @param  Nmr_SpectralDensityList self
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
extern Entr_Entry Nmr_SpectralDensityList_FindFirstEntry_keyval4(Nmr_SpectralDensityList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.SpectralDensityList.experiments

Experiments 
for which list of spectral densities is valid.
  @param  Nmr_SpectralDensityList self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_SpectralDensityList_FindFirstExperiment(Nmr_SpectralDensityList self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.SpectralDensityList.experiments

Experiments 
for which list of spectral densities is valid.
  @param  Nmr_SpectralDensityList self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_SpectralDensityList_FindFirstExperiment_keyval0(Nmr_SpectralDensityList self);

/**
  FindFirst for ccp.nmr.Nmr.SpectralDensityList.experiments

Experiments 
for which list of spectral densities is valid.
  @param  Nmr_SpectralDensityList self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_SpectralDensityList_FindFirstExperiment_keyval1(Nmr_SpectralDensityList self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.SpectralDensityList.experiments

Experiments 
for which list of spectral densities is valid.
  @param  Nmr_SpectralDensityList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_SpectralDensityList_FindFirstExperiment_keyval2(Nmr_SpectralDensityList self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.SpectralDensityList.experiments

Experiments 
for which list of spectral densities is valid.
  @param  Nmr_SpectralDensityList self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_SpectralDensityList_FindFirstExperiment_keyval3(Nmr_SpectralDensityList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.SpectralDensityList.experiments

Experiments 
for which list of spectral densities is valid.
  @param  Nmr_SpectralDensityList self
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
extern Nmr_Experiment Nmr_SpectralDensityList_FindFirstExperiment_keyval4(Nmr_SpectralDensityList self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.SpectralDensityList
  @param  Nmr_SpectralDensityList self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_SpectralDensityList_Get(Nmr_SpectralDensityList self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_SpectralDensityList self
  @returns   the result
**/
extern Acco_AccessObject Nmr_SpectralDensityList_GetAccess(Nmr_SpectralDensityList self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SpectralDensityList self
  @returns   the result
**/
extern ApiList Nmr_SpectralDensityList_GetApplicationData(Nmr_SpectralDensityList self);

/**
  GetByKey for ccp.nmr.Nmr.SpectralDensityList
  @param  Nmr_SpectralDensityList self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_SpectralDensityList Nmr_SpectralDensityList_GetByKey(Nmr_SpectralDensityList self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_SpectralDensityList self
  @returns   the result
**/
extern ApiString Nmr_SpectralDensityList_GetClassName(Nmr_SpectralDensityList self);

/**
  Get for ccp.nmr.Nmr.SpectralDensityList.derivations

child link to class 
SpectralDensityDerivation
  @param  Nmr_SpectralDensityList self
  @returns   the result
**/
extern ApiSet Nmr_SpectralDensityList_GetDerivations(Nmr_SpectralDensityList self);

/**
  Get for ccp.nmr.Nmr.DerivedDataList.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_SpectralDensityList self
  @returns   the result
**/
extern ApiString Nmr_SpectralDensityList_GetDetails(Nmr_SpectralDensityList self);

/**
  Get for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which include 
DerivedDataList
  @param  Nmr_SpectralDensityList self
  @returns   the result
**/
extern ApiSet Nmr_SpectralDensityList_GetEntries(Nmr_SpectralDensityList self);

/**
  Get for ccp.nmr.Nmr.SpectralDensityList.experiments

Experiments for 
which list of spectral densities is valid.
  @param  Nmr_SpectralDensityList self
  @returns   the result
**/
extern ApiSet Nmr_SpectralDensityList_GetExperiments(Nmr_SpectralDensityList self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_SpectralDensityList self
  @returns   the result
**/
extern ApiList Nmr_SpectralDensityList_GetFieldNames(Nmr_SpectralDensityList self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_SpectralDensityList self
  @returns   the result
**/
extern ApiBoolean Nmr_SpectralDensityList_GetInConstructor(Nmr_SpectralDensityList self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_SpectralDensityList self
  @returns   the result
**/
extern ApiBoolean Nmr_SpectralDensityList_GetIsDeleted(Nmr_SpectralDensityList self);

/**
  Get for ccp.nmr.Nmr.DerivedDataList.method

Default method used for 
deriving Meassurements in list. This method is overridden by the methods 
given for the individual derivation, if any.
  @param  Nmr_SpectralDensityList self
  @returns   the result
**/
extern Meth_Method Nmr_SpectralDensityList_GetMethod(Nmr_SpectralDensityList self);

/**
  Get for ccp.nmr.Nmr.DerivedDataList.nmrProject

parent link
  @param  Nmr_SpectralDensityList self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_SpectralDensityList_GetNmrProject(Nmr_SpectralDensityList self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_SpectralDensityList self
  @returns   the result
**/
extern ApiString Nmr_SpectralDensityList_GetPackageName(Nmr_SpectralDensityList self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_SpectralDensityList self
  @returns   the result
**/
extern ApiString Nmr_SpectralDensityList_GetPackageShortName(Nmr_SpectralDensityList self);

/**
  Get for ccp.nmr.Nmr.DerivedDataList.parent

link to parent object - 
synonym for nmrProject
  @param  Nmr_SpectralDensityList self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_SpectralDensityList_GetParent(Nmr_SpectralDensityList self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_SpectralDensityList self
  @returns   the result
**/
extern ApiString Nmr_SpectralDensityList_GetQualifiedName(Nmr_SpectralDensityList self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_SpectralDensityList self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_SpectralDensityList_GetRoot(Nmr_SpectralDensityList self);

/**
  Get for ccp.nmr.Nmr.DerivedDataList.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_SpectralDensityList self
  @returns   the result
**/
extern ApiInteger Nmr_SpectralDensityList_GetSerial(Nmr_SpectralDensityList self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_SpectralDensityList self
  @returns   the result
**/
extern Impl_TopObject Nmr_SpectralDensityList_GetTopObject(Nmr_SpectralDensityList self);

/**
  Get for ccp.nmr.Nmr.SpectralDensityList.unit

Unit of measurement for 
SpectralDensity.
  @param  Nmr_SpectralDensityList self
  @returns   the result
**/
extern ApiString Nmr_SpectralDensityList_GetUnit(Nmr_SpectralDensityList self);

/**
  Constructor for ccp.nmr.Nmr.SpectralDensityList
  @param  Nmr_NmrProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_SpectralDensityList Nmr_SpectralDensityList_Init(Nmr_NmrProject parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.SpectralDensityList
  @param  Nmr_NmrProject parent
  @returns  the new object
**/
extern Nmr_SpectralDensityList Nmr_SpectralDensityList_Init_reqd(Nmr_NmrProject parent);

/**
  Factory function to create ccp.nmr.Nmr.SpectralDensityDerivation
  @param  Nmr_SpectralDensityList self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_SpectralDensityDerivation Nmr_SpectralDensityList_NewSpectralDensityDerivation(Nmr_SpectralDensityList self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.Nmr.SpectralDensityDerivation
  @param  Nmr_SpectralDensityList self
  @returns  the new object
**/
extern Nmr_SpectralDensityDerivation Nmr_SpectralDensityList_NewSpectralDensityDerivation_reqd(Nmr_SpectralDensityList self);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SpectralDensityList self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_SpectralDensityList_RemoveApplicationData(Nmr_SpectralDensityList self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which 
include DerivedDataList
  @param  Nmr_SpectralDensityList self
  @param  Entr_Entry value
**/
extern void *Nmr_SpectralDensityList_RemoveEntry(Nmr_SpectralDensityList self, Entr_Entry value);

/**
  Remove for ccp.nmr.Nmr.SpectralDensityList.experiments

Experiments for 
which list of spectral densities is valid.
  @param  Nmr_SpectralDensityList self
  @param  Nmr_Experiment value
**/
extern void *Nmr_SpectralDensityList_RemoveExperiment(Nmr_SpectralDensityList self, Nmr_Experiment value);

/**
  SetAttr for ccp.nmr.Nmr.SpectralDensityList
  @param  Nmr_SpectralDensityList self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_SpectralDensityList_Set(Nmr_SpectralDensityList self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_SpectralDensityList self
  @param  Acco_AccessObject value
**/
extern void *Nmr_SpectralDensityList_SetAccess(Nmr_SpectralDensityList self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SpectralDensityList self
  @param  ApiList values
**/
extern void *Nmr_SpectralDensityList_SetApplicationData(Nmr_SpectralDensityList self, ApiList values);

/**
  Set for ccp.nmr.Nmr.DerivedDataList.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_SpectralDensityList self
  @param  ApiString value
**/
extern void *Nmr_SpectralDensityList_SetDetails(Nmr_SpectralDensityList self, ApiString value);

/**
  Set for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which include 
DerivedDataList
  @param  Nmr_SpectralDensityList self
  @param  ApiSet values
**/
extern void *Nmr_SpectralDensityList_SetEntries(Nmr_SpectralDensityList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.SpectralDensityList.experiments

Experiments for 
which list of spectral densities is valid.
  @param  Nmr_SpectralDensityList self
  @param  ApiSet values
**/
extern void *Nmr_SpectralDensityList_SetExperiments(Nmr_SpectralDensityList self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.DerivedDataList.method

Default method used for 
deriving Meassurements in list. This method is overridden by the methods 
given for the individual derivation, if any.
  @param  Nmr_SpectralDensityList self
  @param  Meth_Method value
**/
extern void *Nmr_SpectralDensityList_SetMethod(Nmr_SpectralDensityList self, Meth_Method value);

/**
  Set for ccp.nmr.Nmr.DerivedDataList.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_SpectralDensityList self
  @param  ApiInteger value
**/
extern void *Nmr_SpectralDensityList_SetSerial(Nmr_SpectralDensityList self, ApiInteger value);

/**
  Set for ccp.nmr.Nmr.SpectralDensityList.unit

Unit of measurement for 
SpectralDensity.
  @param  Nmr_SpectralDensityList self
  @param  ApiString value
**/
extern void *Nmr_SpectralDensityList_SetUnit(Nmr_SpectralDensityList self, ApiString value);

/**
  Sorted for ccp.nmr.Nmr.SpectralDensityList.derivations

child link to 
class SpectralDensityDerivation
  @param  Nmr_SpectralDensityList self
  @returns   the result
**/
extern ApiList Nmr_SpectralDensityList_SortedDerivations(Nmr_SpectralDensityList self);

/**
  Sorted for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which 
include DerivedDataList
  @param  Nmr_SpectralDensityList self
  @returns   the result
**/
extern ApiList Nmr_SpectralDensityList_SortedEntries(Nmr_SpectralDensityList self);

/**
  Sorted for ccp.nmr.Nmr.SpectralDensityList.experiments

Experiments for 
which list of spectral densities is valid.
  @param  Nmr_SpectralDensityList self
  @returns   the result
**/
extern ApiList Nmr_SpectralDensityList_SortedExperiments(Nmr_SpectralDensityList self);

#endif /* __incl__ccp_api_nmr_Nmr_SpectralDensityList_h__ */
