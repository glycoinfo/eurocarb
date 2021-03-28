
#ifndef __incl__ccp_api_nmr_Nmr_IsotropicS2List_h__
#define __incl__ccp_api_nmr_Nmr_IsotropicS2List_h__

#include "ccp.h"

/*
  List of order parameters (S2), calculated assuming isotropic motion.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2List self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_IsotropicS2List_AddApplicationData(Nmr_IsotropicS2List self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which include 
DerivedDataList
  @param  Nmr_IsotropicS2List self
  @param  Entr_Entry value
**/
extern void *Nmr_IsotropicS2List_AddEntry(Nmr_IsotropicS2List self, Entr_Entry value);

/**
  Add for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for which 
isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @param  Nmr_Experiment value
**/
extern void *Nmr_IsotropicS2List_AddExperiment(Nmr_IsotropicS2List self, Nmr_Experiment value);

/**
  CheckAllValid for ccp.nmr.Nmr.IsotropicS2List
  @param  Nmr_IsotropicS2List self
  @param  ApiBoolean complete
**/
extern void *Nmr_IsotropicS2List_CheckAllValid(Nmr_IsotropicS2List self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.IsotropicS2List
  @param  Nmr_IsotropicS2List self
  @param  ApiBoolean complete
**/
extern void *Nmr_IsotropicS2List_CheckValid(Nmr_IsotropicS2List self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2List self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_IsotropicS2List_FindAllApplicationData(Nmr_IsotropicS2List self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2List self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_IsotropicS2List_FindAllApplicationData_keyval0(Nmr_IsotropicS2List self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2List self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_IsotropicS2List_FindAllApplicationData_keyval1(Nmr_IsotropicS2List self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_IsotropicS2List_FindAllApplicationData_keyval2(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_IsotropicS2List_FindAllApplicationData_keyval3(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2List self
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
extern ApiList Nmr_IsotropicS2List_FindAllApplicationData_keyval4(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2List.derivations

child link to class 
IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_IsotropicS2List_FindAllDerivations(Nmr_IsotropicS2List self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2List.derivations

child link to class 
IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_IsotropicS2List_FindAllDerivations_keyval0(Nmr_IsotropicS2List self);

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2List.derivations

child link to class 
IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_IsotropicS2List_FindAllDerivations_keyval1(Nmr_IsotropicS2List self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2List.derivations

child link to class 
IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_IsotropicS2List_FindAllDerivations_keyval2(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2List.derivations

child link to class 
IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_IsotropicS2List_FindAllDerivations_keyval3(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2List.derivations

child link to class 
IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
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
extern ApiSet Nmr_IsotropicS2List_FindAllDerivations_keyval4(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which 
include DerivedDataList
  @param  Nmr_IsotropicS2List self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_IsotropicS2List_FindAllEntries(Nmr_IsotropicS2List self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which 
include DerivedDataList
  @param  Nmr_IsotropicS2List self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_IsotropicS2List_FindAllEntries_keyval0(Nmr_IsotropicS2List self);

/**
  FindAll for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which 
include DerivedDataList
  @param  Nmr_IsotropicS2List self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_IsotropicS2List_FindAllEntries_keyval1(Nmr_IsotropicS2List self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which 
include DerivedDataList
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_IsotropicS2List_FindAllEntries_keyval2(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which 
include DerivedDataList
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_IsotropicS2List_FindAllEntries_keyval3(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which 
include DerivedDataList
  @param  Nmr_IsotropicS2List self
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
extern ApiSet Nmr_IsotropicS2List_FindAllEntries_keyval4(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for 
which isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_IsotropicS2List_FindAllExperiments(Nmr_IsotropicS2List self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for 
which isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_IsotropicS2List_FindAllExperiments_keyval0(Nmr_IsotropicS2List self);

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for 
which isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_IsotropicS2List_FindAllExperiments_keyval1(Nmr_IsotropicS2List self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for 
which isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_IsotropicS2List_FindAllExperiments_keyval2(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for 
which isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_IsotropicS2List_FindAllExperiments_keyval3(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for 
which isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
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
extern ApiSet Nmr_IsotropicS2List_FindAllExperiments_keyval4(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2List self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_IsotropicS2List_FindFirstApplicationData(Nmr_IsotropicS2List self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2List self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_IsotropicS2List_FindFirstApplicationData_keyval0(Nmr_IsotropicS2List self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2List self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_IsotropicS2List_FindFirstApplicationData_keyval1(Nmr_IsotropicS2List self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_IsotropicS2List_FindFirstApplicationData_keyval2(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_IsotropicS2List_FindFirstApplicationData_keyval3(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2List self
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
extern Impl_ApplicationData Nmr_IsotropicS2List_FindFirstApplicationData_keyval4(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2List.derivations

child link to 
class IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_IsotropicS2Derivation Nmr_IsotropicS2List_FindFirstDerivation(Nmr_IsotropicS2List self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2List.derivations

child link to 
class IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_IsotropicS2Derivation Nmr_IsotropicS2List_FindFirstDerivation_keyval0(Nmr_IsotropicS2List self);

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2List.derivations

child link to 
class IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_IsotropicS2Derivation Nmr_IsotropicS2List_FindFirstDerivation_keyval1(Nmr_IsotropicS2List self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2List.derivations

child link to 
class IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_IsotropicS2Derivation Nmr_IsotropicS2List_FindFirstDerivation_keyval2(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2List.derivations

child link to 
class IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_IsotropicS2Derivation Nmr_IsotropicS2List_FindFirstDerivation_keyval3(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2List.derivations

child link to 
class IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
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
extern Nmr_IsotropicS2Derivation Nmr_IsotropicS2List_FindFirstDerivation_keyval4(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which 
include DerivedDataList
  @param  Nmr_IsotropicS2List self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_IsotropicS2List_FindFirstEntry(Nmr_IsotropicS2List self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which 
include DerivedDataList
  @param  Nmr_IsotropicS2List self
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_IsotropicS2List_FindFirstEntry_keyval0(Nmr_IsotropicS2List self);

/**
  FindFirst for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which 
include DerivedDataList
  @param  Nmr_IsotropicS2List self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_IsotropicS2List_FindFirstEntry_keyval1(Nmr_IsotropicS2List self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which 
include DerivedDataList
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_IsotropicS2List_FindFirstEntry_keyval2(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which 
include DerivedDataList
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Entr_Entry Nmr_IsotropicS2List_FindFirstEntry_keyval3(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which 
include DerivedDataList
  @param  Nmr_IsotropicS2List self
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
extern Entr_Entry Nmr_IsotropicS2List_FindFirstEntry_keyval4(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for 
which isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_IsotropicS2List_FindFirstExperiment(Nmr_IsotropicS2List self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for 
which isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_IsotropicS2List_FindFirstExperiment_keyval0(Nmr_IsotropicS2List self);

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for 
which isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_IsotropicS2List_FindFirstExperiment_keyval1(Nmr_IsotropicS2List self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for 
which isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_IsotropicS2List_FindFirstExperiment_keyval2(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for 
which isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_IsotropicS2List_FindFirstExperiment_keyval3(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for 
which isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
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
extern Nmr_Experiment Nmr_IsotropicS2List_FindFirstExperiment_keyval4(Nmr_IsotropicS2List self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.IsotropicS2List
  @param  Nmr_IsotropicS2List self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_IsotropicS2List_Get(Nmr_IsotropicS2List self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
extern Acco_AccessObject Nmr_IsotropicS2List_GetAccess(Nmr_IsotropicS2List self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
extern ApiList Nmr_IsotropicS2List_GetApplicationData(Nmr_IsotropicS2List self);

/**
  GetByKey for ccp.nmr.Nmr.IsotropicS2List
  @param  Nmr_IsotropicS2List self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_IsotropicS2List Nmr_IsotropicS2List_GetByKey(Nmr_IsotropicS2List self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
extern ApiString Nmr_IsotropicS2List_GetClassName(Nmr_IsotropicS2List self);

/**
  Get for ccp.nmr.Nmr.IsotropicS2List.derivations

child link to class 
IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
extern ApiSet Nmr_IsotropicS2List_GetDerivations(Nmr_IsotropicS2List self);

/**
  Get for ccp.nmr.Nmr.DerivedDataList.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
extern ApiString Nmr_IsotropicS2List_GetDetails(Nmr_IsotropicS2List self);

/**
  Get for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which include 
DerivedDataList
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
extern ApiSet Nmr_IsotropicS2List_GetEntries(Nmr_IsotropicS2List self);

/**
  Get for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for which 
isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
extern ApiSet Nmr_IsotropicS2List_GetExperiments(Nmr_IsotropicS2List self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
extern ApiList Nmr_IsotropicS2List_GetFieldNames(Nmr_IsotropicS2List self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
extern ApiBoolean Nmr_IsotropicS2List_GetInConstructor(Nmr_IsotropicS2List self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
extern ApiBoolean Nmr_IsotropicS2List_GetIsDeleted(Nmr_IsotropicS2List self);

/**
  Get for ccp.nmr.Nmr.DerivedDataList.method

Default method used for 
deriving Meassurements in list. This method is overridden by the methods 
given for the individual derivation, if any.
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
extern Meth_Method Nmr_IsotropicS2List_GetMethod(Nmr_IsotropicS2List self);

/**
  Get for ccp.nmr.Nmr.DerivedDataList.nmrProject

parent link
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_IsotropicS2List_GetNmrProject(Nmr_IsotropicS2List self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
extern ApiString Nmr_IsotropicS2List_GetPackageName(Nmr_IsotropicS2List self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
extern ApiString Nmr_IsotropicS2List_GetPackageShortName(Nmr_IsotropicS2List self);

/**
  Get for ccp.nmr.Nmr.DerivedDataList.parent

link to parent object - 
synonym for nmrProject
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_IsotropicS2List_GetParent(Nmr_IsotropicS2List self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
extern ApiString Nmr_IsotropicS2List_GetQualifiedName(Nmr_IsotropicS2List self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_IsotropicS2List_GetRoot(Nmr_IsotropicS2List self);

/**
  Get for ccp.nmr.Nmr.DerivedDataList.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
extern ApiInteger Nmr_IsotropicS2List_GetSerial(Nmr_IsotropicS2List self);

/**
  Get for ccp.nmr.Nmr.IsotropicS2List.sf

Spectrometer frequency (in MHz) 
where order parameters were determined.
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
extern ApiFloat Nmr_IsotropicS2List_GetSf(Nmr_IsotropicS2List self);

/**
  Get for ccp.nmr.Nmr.IsotropicS2List.tauEUnit

Unit for tau-e (overall 
correlation time).
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
extern ApiString Nmr_IsotropicS2List_GetTauEUnit(Nmr_IsotropicS2List self);

/**
  Get for ccp.nmr.Nmr.IsotropicS2List.tauSUnit

Unit for tau-s (internal 
motion correlation time).
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
extern ApiString Nmr_IsotropicS2List_GetTauSUnit(Nmr_IsotropicS2List self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
extern Impl_TopObject Nmr_IsotropicS2List_GetTopObject(Nmr_IsotropicS2List self);

/**
  Constructor for ccp.nmr.Nmr.IsotropicS2List
  @param  Nmr_NmrProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_IsotropicS2List Nmr_IsotropicS2List_Init(Nmr_NmrProject parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.IsotropicS2List
  @param  Nmr_NmrProject parent
  @returns  the new object
**/
extern Nmr_IsotropicS2List Nmr_IsotropicS2List_Init_reqd(Nmr_NmrProject parent);

/**
  Factory function to create ccp.nmr.Nmr.IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_IsotropicS2Derivation Nmr_IsotropicS2List_NewIsotropicS2Derivation(Nmr_IsotropicS2List self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.Nmr.IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
  @returns  the new object
**/
extern Nmr_IsotropicS2Derivation Nmr_IsotropicS2List_NewIsotropicS2Derivation_reqd(Nmr_IsotropicS2List self);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2List self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_IsotropicS2List_RemoveApplicationData(Nmr_IsotropicS2List self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which 
include DerivedDataList
  @param  Nmr_IsotropicS2List self
  @param  Entr_Entry value
**/
extern void *Nmr_IsotropicS2List_RemoveEntry(Nmr_IsotropicS2List self, Entr_Entry value);

/**
  Remove for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for 
which isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @param  Nmr_Experiment value
**/
extern void *Nmr_IsotropicS2List_RemoveExperiment(Nmr_IsotropicS2List self, Nmr_Experiment value);

/**
  SetAttr for ccp.nmr.Nmr.IsotropicS2List
  @param  Nmr_IsotropicS2List self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_IsotropicS2List_Set(Nmr_IsotropicS2List self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_IsotropicS2List self
  @param  Acco_AccessObject value
**/
extern void *Nmr_IsotropicS2List_SetAccess(Nmr_IsotropicS2List self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_IsotropicS2List self
  @param  ApiList values
**/
extern void *Nmr_IsotropicS2List_SetApplicationData(Nmr_IsotropicS2List self, ApiList values);

/**
  Set for ccp.nmr.Nmr.DerivedDataList.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_IsotropicS2List self
  @param  ApiString value
**/
extern void *Nmr_IsotropicS2List_SetDetails(Nmr_IsotropicS2List self, ApiString value);

/**
  Set for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which include 
DerivedDataList
  @param  Nmr_IsotropicS2List self
  @param  ApiSet values
**/
extern void *Nmr_IsotropicS2List_SetEntries(Nmr_IsotropicS2List self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for which 
isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @param  ApiSet values
**/
extern void *Nmr_IsotropicS2List_SetExperiments(Nmr_IsotropicS2List self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.DerivedDataList.method

Default method used for 
deriving Meassurements in list. This method is overridden by the methods 
given for the individual derivation, if any.
  @param  Nmr_IsotropicS2List self
  @param  Meth_Method value
**/
extern void *Nmr_IsotropicS2List_SetMethod(Nmr_IsotropicS2List self, Meth_Method value);

/**
  Set for ccp.nmr.Nmr.DerivedDataList.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_IsotropicS2List self
  @param  ApiInteger value
**/
extern void *Nmr_IsotropicS2List_SetSerial(Nmr_IsotropicS2List self, ApiInteger value);

/**
  Set for ccp.nmr.Nmr.IsotropicS2List.sf

Spectrometer frequency (in MHz) 
where order parameters were determined.
  @param  Nmr_IsotropicS2List self
  @param  ApiFloat value
**/
extern void *Nmr_IsotropicS2List_SetSf(Nmr_IsotropicS2List self, ApiFloat value);

/**
  Set for ccp.nmr.Nmr.IsotropicS2List.tauEUnit

Unit for tau-e (overall 
correlation time).
  @param  Nmr_IsotropicS2List self
  @param  ApiString value
**/
extern void *Nmr_IsotropicS2List_SetTauEUnit(Nmr_IsotropicS2List self, ApiString value);

/**
  Set for ccp.nmr.Nmr.IsotropicS2List.tauSUnit

Unit for tau-s (internal 
motion correlation time).
  @param  Nmr_IsotropicS2List self
  @param  ApiString value
**/
extern void *Nmr_IsotropicS2List_SetTauSUnit(Nmr_IsotropicS2List self, ApiString value);

/**
  Sorted for ccp.nmr.Nmr.IsotropicS2List.derivations

child link to class 
IsotropicS2Derivation
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
extern ApiList Nmr_IsotropicS2List_SortedDerivations(Nmr_IsotropicS2List self);

/**
  Sorted for ccp.nmr.Nmr.DerivedDataList.entries

Bmrb entries which 
include DerivedDataList
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
extern ApiList Nmr_IsotropicS2List_SortedEntries(Nmr_IsotropicS2List self);

/**
  Sorted for ccp.nmr.Nmr.IsotropicS2List.experiments

Experiments for 
which isotropic order parameter lis is valid.
  @param  Nmr_IsotropicS2List self
  @returns   the result
**/
extern ApiList Nmr_IsotropicS2List_SortedExperiments(Nmr_IsotropicS2List self);

#endif /* __incl__ccp_api_nmr_Nmr_IsotropicS2List_h__ */
