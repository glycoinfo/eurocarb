
#ifndef __incl__ccp_api_lims_Sample_CrystalSample_h__
#define __incl__ccp_api_lims_Sample_CrystalSample_h__

#include "ccp.h"

/*
  The CrystalSample contains information about an individual Crystal and its  physical properties : dimensions, color,...
*/

/* package ccp.api.lims.Sample */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_CrystalSample self
  @param  Impl_ApplicationData value
**/
extern void *Sam_CrystalSample_AddApplicationData(Sam_CrystalSample self, Impl_ApplicationData value);

/**
  Add for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_CrystalSample self
  @param  Cryz_DropAnnotation value
**/
extern void *Sam_CrystalSample_AddDropAnnotation(Sam_CrystalSample self, Cryz_DropAnnotation value);

/**
  Add for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all hazard 
pharses associated to a particular sample.
  @param  Sam_CrystalSample self
  @param  Clas_HazardPhrase value
**/
extern void *Sam_CrystalSample_AddHazardPhrase(Sam_CrystalSample self, Clas_HazardPhrase value);

/**
  Add for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_CrystalSample self
  @param  Expe_InputSample value
**/
extern void *Sam_CrystalSample_AddInputSample(Sam_CrystalSample self, Expe_InputSample value);

/**
  Add for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments carried 
out on Sample
  @param  Sam_CrystalSample self
  @param  Nmr_Experiment value
**/
extern void *Sam_CrystalSample_AddNmrExperiment(Sam_CrystalSample self, Nmr_Experiment value);

/**
  Add for ccp.lims.Sample.AbstractSample.sampleCategories

List of sample 
category associated to a sample.
  @param  Sam_CrystalSample self
  @param  Clas_SampleCategory value
**/
extern void *Sam_CrystalSample_AddSampleCategory(Sam_CrystalSample self, Clas_SampleCategory value);

/**
  CheckAllValid for ccp.lims.Sample.CrystalSample
  @param  Sam_CrystalSample self
  @param  ApiBoolean complete
**/
extern void *Sam_CrystalSample_CheckAllValid(Sam_CrystalSample self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.Sample.CrystalSample
  @param  Sam_CrystalSample self
  @param  ApiBoolean complete
**/
extern void *Sam_CrystalSample_CheckValid(Sam_CrystalSample self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_CrystalSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Sam_CrystalSample_FindAllApplicationData(Sam_CrystalSample self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_CrystalSample self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Sam_CrystalSample_FindAllApplicationData_keyval0(Sam_CrystalSample self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_CrystalSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Sam_CrystalSample_FindAllApplicationData_keyval1(Sam_CrystalSample self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Sam_CrystalSample_FindAllApplicationData_keyval2(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Sam_CrystalSample_FindAllApplicationData_keyval3(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_CrystalSample self
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
extern ApiList Sam_CrystalSample_FindAllApplicationData_keyval4(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_CrystalSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllDropAnnotations(Sam_CrystalSample self, ApiMap conditions);

/**
  FindAll for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_CrystalSample self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllDropAnnotations_keyval0(Sam_CrystalSample self);

/**
  FindAll for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_CrystalSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllDropAnnotations_keyval1(Sam_CrystalSample self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllDropAnnotations_keyval2(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllDropAnnotations_keyval3(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_CrystalSample self
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
extern ApiSet Sam_CrystalSample_FindAllDropAnnotations_keyval4(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_CrystalSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllHazardPhrases(Sam_CrystalSample self, ApiMap conditions);

/**
  FindAll for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_CrystalSample self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllHazardPhrases_keyval0(Sam_CrystalSample self);

/**
  FindAll for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_CrystalSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllHazardPhrases_keyval1(Sam_CrystalSample self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllHazardPhrases_keyval2(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllHazardPhrases_keyval3(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_CrystalSample self
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
extern ApiSet Sam_CrystalSample_FindAllHazardPhrases_keyval4(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_CrystalSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllInputSamples(Sam_CrystalSample self, ApiMap conditions);

/**
  FindAll for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_CrystalSample self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllInputSamples_keyval0(Sam_CrystalSample self);

/**
  FindAll for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_CrystalSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllInputSamples_keyval1(Sam_CrystalSample self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllInputSamples_keyval2(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllInputSamples_keyval3(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_CrystalSample self
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
extern ApiSet Sam_CrystalSample_FindAllInputSamples_keyval4(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_CrystalSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllLocalRiskPhrases(Sam_CrystalSample self, ApiMap conditions);

/**
  FindAll for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_CrystalSample self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllLocalRiskPhrases_keyval0(Sam_CrystalSample self);

/**
  FindAll for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_CrystalSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllLocalRiskPhrases_keyval1(Sam_CrystalSample self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllLocalRiskPhrases_keyval2(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllLocalRiskPhrases_keyval3(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_CrystalSample self
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
extern ApiSet Sam_CrystalSample_FindAllLocalRiskPhrases_keyval4(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_CrystalSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllNmrExperiments(Sam_CrystalSample self, ApiMap conditions);

/**
  FindAll for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_CrystalSample self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllNmrExperiments_keyval0(Sam_CrystalSample self);

/**
  FindAll for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_CrystalSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllNmrExperiments_keyval1(Sam_CrystalSample self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllNmrExperiments_keyval2(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllNmrExperiments_keyval3(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_CrystalSample self
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
extern ApiSet Sam_CrystalSample_FindAllNmrExperiments_keyval4(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_CrystalSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllRPhrases(Sam_CrystalSample self, ApiMap conditions);

/**
  FindAll for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_CrystalSample self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllRPhrases_keyval0(Sam_CrystalSample self);

/**
  FindAll for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_CrystalSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllRPhrases_keyval1(Sam_CrystalSample self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllRPhrases_keyval2(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllRPhrases_keyval3(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_CrystalSample self
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
extern ApiSet Sam_CrystalSample_FindAllRPhrases_keyval4(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_CrystalSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllSPhrases(Sam_CrystalSample self, ApiMap conditions);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_CrystalSample self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllSPhrases_keyval0(Sam_CrystalSample self);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_CrystalSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllSPhrases_keyval1(Sam_CrystalSample self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllSPhrases_keyval2(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllSPhrases_keyval3(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_CrystalSample self
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
extern ApiSet Sam_CrystalSample_FindAllSPhrases_keyval4(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_CrystalSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllSampleCategories(Sam_CrystalSample self, ApiMap conditions);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_CrystalSample self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllSampleCategories_keyval0(Sam_CrystalSample self);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_CrystalSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllSampleCategories_keyval1(Sam_CrystalSample self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllSampleCategories_keyval2(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllSampleCategories_keyval3(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_CrystalSample self
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
extern ApiSet Sam_CrystalSample_FindAllSampleCategories_keyval4(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_CrystalSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllSampleComponents(Sam_CrystalSample self, ApiMap conditions);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_CrystalSample self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllSampleComponents_keyval0(Sam_CrystalSample self);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_CrystalSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllSampleComponents_keyval1(Sam_CrystalSample self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllSampleComponents_keyval2(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_CrystalSample_FindAllSampleComponents_keyval3(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_CrystalSample self
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
extern ApiSet Sam_CrystalSample_FindAllSampleComponents_keyval4(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_CrystalSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Sam_CrystalSample_FindFirstApplicationData(Sam_CrystalSample self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_CrystalSample self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Sam_CrystalSample_FindFirstApplicationData_keyval0(Sam_CrystalSample self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_CrystalSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Sam_CrystalSample_FindFirstApplicationData_keyval1(Sam_CrystalSample self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Sam_CrystalSample_FindFirstApplicationData_keyval2(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Sam_CrystalSample_FindFirstApplicationData_keyval3(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_CrystalSample self
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
extern Impl_ApplicationData Sam_CrystalSample_FindFirstApplicationData_keyval4(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_CrystalSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_DropAnnotation Sam_CrystalSample_FindFirstDropAnnotation(Sam_CrystalSample self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_CrystalSample self
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_DropAnnotation Sam_CrystalSample_FindFirstDropAnnotation_keyval0(Sam_CrystalSample self);

/**
  FindFirst for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_CrystalSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_DropAnnotation Sam_CrystalSample_FindFirstDropAnnotation_keyval1(Sam_CrystalSample self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_DropAnnotation Sam_CrystalSample_FindFirstDropAnnotation_keyval2(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_DropAnnotation Sam_CrystalSample_FindFirstDropAnnotation_keyval3(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_CrystalSample self
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
extern Cryz_DropAnnotation Sam_CrystalSample_FindFirstDropAnnotation_keyval4(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_CrystalSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_CrystalSample_FindFirstHazardPhrase(Sam_CrystalSample self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_CrystalSample self
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_CrystalSample_FindFirstHazardPhrase_keyval0(Sam_CrystalSample self);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_CrystalSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_CrystalSample_FindFirstHazardPhrase_keyval1(Sam_CrystalSample self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_CrystalSample_FindFirstHazardPhrase_keyval2(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_CrystalSample_FindFirstHazardPhrase_keyval3(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_CrystalSample self
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
extern Clas_HazardPhrase Sam_CrystalSample_FindFirstHazardPhrase_keyval4(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Sample.Sample.inputSamples

Input sample list 
that describes the amount of sample used per experiment for a given 
sample.
  @param  Sam_CrystalSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Expe_InputSample Sam_CrystalSample_FindFirstInputSample(Sam_CrystalSample self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Sample.Sample.inputSamples

Input sample list 
that describes the amount of sample used per experiment for a given 
sample.
  @param  Sam_CrystalSample self
  @returns  the first value that satisfies the conditions 
**/
extern Expe_InputSample Sam_CrystalSample_FindFirstInputSample_keyval0(Sam_CrystalSample self);

/**
  FindFirst for ccp.lims.Sample.Sample.inputSamples

Input sample list 
that describes the amount of sample used per experiment for a given 
sample.
  @param  Sam_CrystalSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Expe_InputSample Sam_CrystalSample_FindFirstInputSample_keyval1(Sam_CrystalSample self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Sample.Sample.inputSamples

Input sample list 
that describes the amount of sample used per experiment for a given 
sample.
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Expe_InputSample Sam_CrystalSample_FindFirstInputSample_keyval2(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Sample.Sample.inputSamples

Input sample list 
that describes the amount of sample used per experiment for a given 
sample.
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Expe_InputSample Sam_CrystalSample_FindFirstInputSample_keyval3(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Sample.Sample.inputSamples

Input sample list 
that describes the amount of sample used per experiment for a given 
sample.
  @param  Sam_CrystalSample self
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
extern Expe_InputSample Sam_CrystalSample_FindFirstInputSample_keyval4(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local 
risk phrases that are specific to a certain laboratory.
  @param  Sam_CrystalSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_CrystalSample_FindFirstLocalRiskPhrase(Sam_CrystalSample self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local 
risk phrases that are specific to a certain laboratory.
  @param  Sam_CrystalSample self
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_CrystalSample_FindFirstLocalRiskPhrase_keyval0(Sam_CrystalSample self);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local 
risk phrases that are specific to a certain laboratory.
  @param  Sam_CrystalSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_CrystalSample_FindFirstLocalRiskPhrase_keyval1(Sam_CrystalSample self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local 
risk phrases that are specific to a certain laboratory.
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_CrystalSample_FindFirstLocalRiskPhrase_keyval2(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local 
risk phrases that are specific to a certain laboratory.
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_CrystalSample_FindFirstLocalRiskPhrase_keyval3(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local 
risk phrases that are specific to a certain laboratory.
  @param  Sam_CrystalSample self
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
extern Clas_HazardPhrase Sam_CrystalSample_FindFirstLocalRiskPhrase_keyval4(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_CrystalSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Sam_CrystalSample_FindFirstNmrExperiment(Sam_CrystalSample self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_CrystalSample self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Sam_CrystalSample_FindFirstNmrExperiment_keyval0(Sam_CrystalSample self);

/**
  FindFirst for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_CrystalSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Sam_CrystalSample_FindFirstNmrExperiment_keyval1(Sam_CrystalSample self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Sam_CrystalSample_FindFirstNmrExperiment_keyval2(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Sam_CrystalSample_FindFirstNmrExperiment_keyval3(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_CrystalSample self
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
extern Nmr_Experiment Sam_CrystalSample_FindFirstNmrExperiment_keyval4(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_CrystalSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_CrystalSample_FindFirstRPhrase(Sam_CrystalSample self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_CrystalSample self
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_CrystalSample_FindFirstRPhrase_keyval0(Sam_CrystalSample self);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_CrystalSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_CrystalSample_FindFirstRPhrase_keyval1(Sam_CrystalSample self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_CrystalSample_FindFirstRPhrase_keyval2(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_CrystalSample_FindFirstRPhrase_keyval3(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_CrystalSample self
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
extern Clas_HazardPhrase Sam_CrystalSample_FindFirstRPhrase_keyval4(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_CrystalSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_CrystalSample_FindFirstSPhrase(Sam_CrystalSample self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_CrystalSample self
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_CrystalSample_FindFirstSPhrase_keyval0(Sam_CrystalSample self);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_CrystalSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_CrystalSample_FindFirstSPhrase_keyval1(Sam_CrystalSample self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_CrystalSample_FindFirstSPhrase_keyval2(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_CrystalSample_FindFirstSPhrase_keyval3(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_CrystalSample self
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
extern Clas_HazardPhrase Sam_CrystalSample_FindFirstSPhrase_keyval4(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_CrystalSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleCategory Sam_CrystalSample_FindFirstSampleCategory(Sam_CrystalSample self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_CrystalSample self
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleCategory Sam_CrystalSample_FindFirstSampleCategory_keyval0(Sam_CrystalSample self);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_CrystalSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleCategory Sam_CrystalSample_FindFirstSampleCategory_keyval1(Sam_CrystalSample self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleCategory Sam_CrystalSample_FindFirstSampleCategory_keyval2(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleCategory Sam_CrystalSample_FindFirstSampleCategory_keyval3(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_CrystalSample self
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
extern Clas_SampleCategory Sam_CrystalSample_FindFirstSampleCategory_keyval4(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleComponents

child 
link to class SampleComponent
  @param  Sam_CrystalSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Sam_SampleComponent Sam_CrystalSample_FindFirstSampleComponent(Sam_CrystalSample self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleComponents

child 
link to class SampleComponent
  @param  Sam_CrystalSample self
  @returns  the first value that satisfies the conditions 
**/
extern Sam_SampleComponent Sam_CrystalSample_FindFirstSampleComponent_keyval0(Sam_CrystalSample self);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleComponents

child 
link to class SampleComponent
  @param  Sam_CrystalSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Sam_SampleComponent Sam_CrystalSample_FindFirstSampleComponent_keyval1(Sam_CrystalSample self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleComponents

child 
link to class SampleComponent
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Sam_SampleComponent Sam_CrystalSample_FindFirstSampleComponent_keyval2(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleComponents

child 
link to class SampleComponent
  @param  Sam_CrystalSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Sam_SampleComponent Sam_CrystalSample_FindFirstSampleComponent_keyval3(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleComponents

child 
link to class SampleComponent
  @param  Sam_CrystalSample self
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
extern Sam_SampleComponent Sam_CrystalSample_FindFirstSampleComponent_keyval4(Sam_CrystalSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.Sample.CrystalSample
  @param  Sam_CrystalSample self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Sam_CrystalSample_Get(Sam_CrystalSample self, ApiString name);

/**
  Get for ccp.lims.Sample.CrystalSample.a

Length of Cell axis a in 
angstrom.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiFloat Sam_CrystalSample_GetA(Sam_CrystalSample self);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern Acco_AccessObject Sam_CrystalSample_GetAccess(Sam_CrystalSample self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern Acco_AccessObject Sam_CrystalSample_GetActiveAccess(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.CrystalSample.alpha

Angle between Cell axis b 
and c in degrees.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiFloat Sam_CrystalSample_GetAlpha(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.Sample.amountDisplayUnit

This is the unit 
entered by user and used for display.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiString Sam_CrystalSample_GetAmountDisplayUnit(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.Sample.amountUnit

One of the three possible 
units: kg, m3 or number.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiString Sam_CrystalSample_GetAmountUnit(Sam_CrystalSample self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiList Sam_CrystalSample_GetApplicationData(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.CrystalSample.b

Length of Cell axis b in 
angstrom.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiFloat Sam_CrystalSample_GetB(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.Sample.batchNum

This is the batch or lot number 
of the sample.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiString Sam_CrystalSample_GetBatchNum(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.CrystalSample.beta

Angle between Cell axis a 
and c in degrees.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiFloat Sam_CrystalSample_GetBeta(Sam_CrystalSample self);

/**
  GetByKey for ccp.lims.Sample.CrystalSample
  @param  Sam_CrystalSample self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Sam_CrystalSample Sam_CrystalSample_GetByKey(Sam_CrystalSample self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.lims.Sample.CrystalSample.c

Length of Cell axis c in 
angstrom.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiFloat Sam_CrystalSample_GetC(Sam_CrystalSample self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiString Sam_CrystalSample_GetClassName(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.Sample.colPosition

The column position of the 
sample in the holder.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiInteger Sam_CrystalSample_GetColPosition(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.CrystalSample.colour

Description of the colour 
of the crystal.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiString Sam_CrystalSample_GetColour(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.Sample.creationDate

The creation date is 
derived from the endDate of the Experiment which creates it.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiString Sam_CrystalSample_GetCreationDate(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.CrystalSample.crystalType

The type of the 
crystal.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiString Sam_CrystalSample_GetCrystalType(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.Sample.currentAmount

The current amount of the 
sample. Can be deduced by a subtraction between the initial amount and 
all the amount which are implied in experiments.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiFloat Sam_CrystalSample_GetCurrentAmount(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.Sample.currentAmountFlag

Was current amount 
validated?
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiBoolean Sam_CrystalSample_GetCurrentAmountFlag(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.AbstractSample.details

Free text, for notes, 
explanatory comments, etc.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiString Sam_CrystalSample_GetDetails(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiSet Sam_CrystalSample_GetDropAnnotations(Sam_CrystalSample self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiList Sam_CrystalSample_GetFieldNames(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.CrystalSample.gamma

Angle between Cell axis a 
and b in degrees.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiFloat Sam_CrystalSample_GetGamma(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all hazard 
pharses associated to a particular sample.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiSet Sam_CrystalSample_GetHazardPhrases(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.Sample.holder

The holder to which the samples 
belong.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern Hold_Holder Sam_CrystalSample_GetHolder(Sam_CrystalSample self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiBoolean Sam_CrystalSample_GetInConstructor(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.Sample.initialAmount

The initial amount of the 
sample at the creation date.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiFloat Sam_CrystalSample_GetInitialAmount(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiSet Sam_CrystalSample_GetInputSamples(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.AbstractSample.ionicStrength

The ionic strength 
(dimensionless quantity).
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiFloat Sam_CrystalSample_GetIonicStrength(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.AbstractSample.isActive

True if the sample is 
active.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiBoolean Sam_CrystalSample_GetIsActive(Sam_CrystalSample self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiBoolean Sam_CrystalSample_GetIsDeleted(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.AbstractSample.isHazard

Is the sample hazard?
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiBoolean Sam_CrystalSample_GetIsHazard(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiSet Sam_CrystalSample_GetLocalRiskPhrases(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.CrystalSample.morphology

Description of the 
shape of the crystal.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiString Sam_CrystalSample_GetMorphology(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.AbstractSample.name

The name of the sample or 
the code to identify it. It is the unique identifier.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiString Sam_CrystalSample_GetName(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments carried 
out on Sample
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiSet Sam_CrystalSample_GetNmrExperiments(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.Sample.outputSample

Output sample list that 
describes the amount of sample created by that experiment for a given 
sample.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern Expe_OutputSample Sam_CrystalSample_GetOutputSample(Sam_CrystalSample self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiString Sam_CrystalSample_GetPackageName(Sam_CrystalSample self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiString Sam_CrystalSample_GetPackageShortName(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.AbstractSample.parent

link to parent object - 
synonym for sampleStore
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern Sam_SampleStore Sam_CrystalSample_GetParent(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.AbstractSample.ph

The pH.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiFloat Sam_CrystalSample_GetPh(Sam_CrystalSample self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiString Sam_CrystalSample_GetQualifiedName(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiSet Sam_CrystalSample_GetRPhrases(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.Sample.refSample

The RefSample that conforms to 
the Sample.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern Sam_RefSample Sam_CrystalSample_GetRefSample(Sam_CrystalSample self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern Impl_MemopsRoot Sam_CrystalSample_GetRoot(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.Sample.rowPosition

The row position of the 
sample in the holder.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiInteger Sam_CrystalSample_GetRowPosition(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiSet Sam_CrystalSample_GetSPhrases(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.AbstractSample.sampleCategories

List of sample 
category associated to a sample.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiSet Sam_CrystalSample_GetSampleCategories(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.AbstractSample.sampleComponents

child link to 
class SampleComponent
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiSet Sam_CrystalSample_GetSampleComponents(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.AbstractSample.sampleStore

parent link
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern Sam_SampleStore Sam_CrystalSample_GetSampleStore(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.CrystalSample.spaceGroup

The spacegroup name.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiString Sam_CrystalSample_GetSpaceGroup(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.Sample.subPosition

The sub-position of the 
sample in the holder.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiInteger Sam_CrystalSample_GetSubPosition(Sam_CrystalSample self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern Impl_TopObject Sam_CrystalSample_GetTopObject(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.CrystalSample.x

Length of x dimension of 
crystal in millimeter (mm).
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiFloat Sam_CrystalSample_GetX(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.CrystalSample.y

Length of y dimension of 
crystal in millimeter (mm).
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiFloat Sam_CrystalSample_GetY(Sam_CrystalSample self);

/**
  Get for ccp.lims.Sample.CrystalSample.z

Length of z dimension of 
crystal in millimeter (mm).
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiFloat Sam_CrystalSample_GetZ(Sam_CrystalSample self);

/**
  Constructor for ccp.lims.Sample.CrystalSample
  @param  Sam_SampleStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Sam_CrystalSample Sam_CrystalSample_Init(Sam_SampleStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.Sample.CrystalSample
  @param  Sam_SampleStore parent
  @param  char * name
  @param  ApiSet sampleCategories
  @returns  the new object
**/
extern Sam_CrystalSample Sam_CrystalSample_Init_reqd(Sam_SampleStore parent, char * name, ApiSet sampleCategories);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_CrystalSample self
  @param  Impl_ApplicationData value
**/
extern void *Sam_CrystalSample_RemoveApplicationData(Sam_CrystalSample self, Impl_ApplicationData value);

/**
  Remove for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_CrystalSample self
  @param  Cryz_DropAnnotation value
**/
extern void *Sam_CrystalSample_RemoveDropAnnotation(Sam_CrystalSample self, Cryz_DropAnnotation value);

/**
  Remove for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_CrystalSample self
  @param  Clas_HazardPhrase value
**/
extern void *Sam_CrystalSample_RemoveHazardPhrase(Sam_CrystalSample self, Clas_HazardPhrase value);

/**
  Remove for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_CrystalSample self
  @param  Expe_InputSample value
**/
extern void *Sam_CrystalSample_RemoveInputSample(Sam_CrystalSample self, Expe_InputSample value);

/**
  Remove for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_CrystalSample self
  @param  Nmr_Experiment value
**/
extern void *Sam_CrystalSample_RemoveNmrExperiment(Sam_CrystalSample self, Nmr_Experiment value);

/**
  Remove for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_CrystalSample self
  @param  Clas_SampleCategory value
**/
extern void *Sam_CrystalSample_RemoveSampleCategory(Sam_CrystalSample self, Clas_SampleCategory value);

/**
  SetAttr for ccp.lims.Sample.CrystalSample
  @param  Sam_CrystalSample self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Sam_CrystalSample_Set(Sam_CrystalSample self, ApiString name, ApiObject value);

/**
  Set for ccp.lims.Sample.CrystalSample.a

Length of Cell axis a in 
angstrom.
  @param  Sam_CrystalSample self
  @param  ApiFloat value
**/
extern void *Sam_CrystalSample_SetA(Sam_CrystalSample self, ApiFloat value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Sam_CrystalSample self
  @param  Acco_AccessObject value
**/
extern void *Sam_CrystalSample_SetAccess(Sam_CrystalSample self, Acco_AccessObject value);

/**
  Set for ccp.lims.Sample.CrystalSample.alpha

Angle between Cell axis b 
and c in degrees.
  @param  Sam_CrystalSample self
  @param  ApiFloat value
**/
extern void *Sam_CrystalSample_SetAlpha(Sam_CrystalSample self, ApiFloat value);

/**
  Set for ccp.lims.Sample.Sample.amountDisplayUnit

This is the unit 
entered by user and used for display.
  @param  Sam_CrystalSample self
  @param  ApiString value
**/
extern void *Sam_CrystalSample_SetAmountDisplayUnit(Sam_CrystalSample self, ApiString value);

/**
  Set for ccp.lims.Sample.Sample.amountUnit

One of the three possible 
units: kg, m3 or number.
  @param  Sam_CrystalSample self
  @param  ApiString value
**/
extern void *Sam_CrystalSample_SetAmountUnit(Sam_CrystalSample self, ApiString value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_CrystalSample self
  @param  ApiList values
**/
extern void *Sam_CrystalSample_SetApplicationData(Sam_CrystalSample self, ApiList values);

/**
  Set for ccp.lims.Sample.CrystalSample.b

Length of Cell axis b in 
angstrom.
  @param  Sam_CrystalSample self
  @param  ApiFloat value
**/
extern void *Sam_CrystalSample_SetB(Sam_CrystalSample self, ApiFloat value);

/**
  Set for ccp.lims.Sample.Sample.batchNum

This is the batch or lot number 
of the sample.
  @param  Sam_CrystalSample self
  @param  ApiString value
**/
extern void *Sam_CrystalSample_SetBatchNum(Sam_CrystalSample self, ApiString value);

/**
  Set for ccp.lims.Sample.CrystalSample.beta

Angle between Cell axis a 
and c in degrees.
  @param  Sam_CrystalSample self
  @param  ApiFloat value
**/
extern void *Sam_CrystalSample_SetBeta(Sam_CrystalSample self, ApiFloat value);

/**
  Set for ccp.lims.Sample.CrystalSample.c

Length of Cell axis c in 
angstrom.
  @param  Sam_CrystalSample self
  @param  ApiFloat value
**/
extern void *Sam_CrystalSample_SetC(Sam_CrystalSample self, ApiFloat value);

/**
  Set for ccp.lims.Sample.Sample.colPosition

The column position of the 
sample in the holder.
  @param  Sam_CrystalSample self
  @param  ApiInteger value
**/
extern void *Sam_CrystalSample_SetColPosition(Sam_CrystalSample self, ApiInteger value);

/**
  Set for ccp.lims.Sample.CrystalSample.colour

Description of the colour 
of the crystal.
  @param  Sam_CrystalSample self
  @param  ApiString value
**/
extern void *Sam_CrystalSample_SetColour(Sam_CrystalSample self, ApiString value);

/**
  Set for ccp.lims.Sample.CrystalSample.crystalType

The type of the 
crystal.
  @param  Sam_CrystalSample self
  @param  ApiString value
**/
extern void *Sam_CrystalSample_SetCrystalType(Sam_CrystalSample self, ApiString value);

/**
  Set for ccp.lims.Sample.Sample.currentAmount

The current amount of the 
sample. Can be deduced by a subtraction between the initial amount and 
all the amount which are implied in experiments.
  @param  Sam_CrystalSample self
  @param  ApiFloat value
**/
extern void *Sam_CrystalSample_SetCurrentAmount(Sam_CrystalSample self, ApiFloat value);

/**
  Set for ccp.lims.Sample.Sample.currentAmountFlag

Was current amount 
validated?
  @param  Sam_CrystalSample self
  @param  ApiBoolean value
**/
extern void *Sam_CrystalSample_SetCurrentAmountFlag(Sam_CrystalSample self, ApiBoolean value);

/**
  Set for ccp.lims.Sample.AbstractSample.details

Free text, for notes, 
explanatory comments, etc.
  @param  Sam_CrystalSample self
  @param  ApiString value
**/
extern void *Sam_CrystalSample_SetDetails(Sam_CrystalSample self, ApiString value);

/**
  Set for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_CrystalSample self
  @param  ApiSet values
**/
extern void *Sam_CrystalSample_SetDropAnnotations(Sam_CrystalSample self, ApiSet values);

/**
  Set for ccp.lims.Sample.CrystalSample.gamma

Angle between Cell axis a 
and b in degrees.
  @param  Sam_CrystalSample self
  @param  ApiFloat value
**/
extern void *Sam_CrystalSample_SetGamma(Sam_CrystalSample self, ApiFloat value);

/**
  Set for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all hazard 
pharses associated to a particular sample.
  @param  Sam_CrystalSample self
  @param  ApiSet values
**/
extern void *Sam_CrystalSample_SetHazardPhrases(Sam_CrystalSample self, ApiSet values);

/**
  Set for ccp.lims.Sample.Sample.holder

The holder to which the samples 
belong.
  @param  Sam_CrystalSample self
  @param  Hold_Holder value
**/
extern void *Sam_CrystalSample_SetHolder(Sam_CrystalSample self, Hold_Holder value);

/**
  Set for ccp.lims.Sample.Sample.initialAmount

The initial amount of the 
sample at the creation date.
  @param  Sam_CrystalSample self
  @param  ApiFloat value
**/
extern void *Sam_CrystalSample_SetInitialAmount(Sam_CrystalSample self, ApiFloat value);

/**
  Set for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_CrystalSample self
  @param  ApiSet values
**/
extern void *Sam_CrystalSample_SetInputSamples(Sam_CrystalSample self, ApiSet values);

/**
  Set for ccp.lims.Sample.AbstractSample.ionicStrength

The ionic strength 
(dimensionless quantity).
  @param  Sam_CrystalSample self
  @param  ApiFloat value
**/
extern void *Sam_CrystalSample_SetIonicStrength(Sam_CrystalSample self, ApiFloat value);

/**
  Set for ccp.lims.Sample.AbstractSample.isActive

True if the sample is 
active.
  @param  Sam_CrystalSample self
  @param  ApiBoolean value
**/
extern void *Sam_CrystalSample_SetIsActive(Sam_CrystalSample self, ApiBoolean value);

/**
  Set for ccp.lims.Sample.AbstractSample.isHazard

Is the sample hazard?
  @param  Sam_CrystalSample self
  @param  ApiBoolean value
**/
extern void *Sam_CrystalSample_SetIsHazard(Sam_CrystalSample self, ApiBoolean value);

/**
  Set for ccp.lims.Sample.CrystalSample.morphology

Description of the 
shape of the crystal.
  @param  Sam_CrystalSample self
  @param  ApiString value
**/
extern void *Sam_CrystalSample_SetMorphology(Sam_CrystalSample self, ApiString value);

/**
  Set for ccp.lims.Sample.AbstractSample.name

The name of the sample or 
the code to identify it. It is the unique identifier.
  @param  Sam_CrystalSample self
  @param  ApiString value
**/
extern void *Sam_CrystalSample_SetName(Sam_CrystalSample self, ApiString value);

/**
  Set for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments carried 
out on Sample
  @param  Sam_CrystalSample self
  @param  ApiSet values
**/
extern void *Sam_CrystalSample_SetNmrExperiments(Sam_CrystalSample self, ApiSet values);

/**
  Set for ccp.lims.Sample.Sample.outputSample

Output sample list that 
describes the amount of sample created by that experiment for a given 
sample.
  @param  Sam_CrystalSample self
  @param  Expe_OutputSample value
**/
extern void *Sam_CrystalSample_SetOutputSample(Sam_CrystalSample self, Expe_OutputSample value);

/**
  Set for ccp.lims.Sample.AbstractSample.ph

The pH.
  @param  Sam_CrystalSample self
  @param  ApiFloat value
**/
extern void *Sam_CrystalSample_SetPh(Sam_CrystalSample self, ApiFloat value);

/**
  Set for ccp.lims.Sample.Sample.refSample

The RefSample that conforms to 
the Sample.
  @param  Sam_CrystalSample self
  @param  Sam_RefSample value
**/
extern void *Sam_CrystalSample_SetRefSample(Sam_CrystalSample self, Sam_RefSample value);

/**
  Set for ccp.lims.Sample.Sample.rowPosition

The row position of the 
sample in the holder.
  @param  Sam_CrystalSample self
  @param  ApiInteger value
**/
extern void *Sam_CrystalSample_SetRowPosition(Sam_CrystalSample self, ApiInteger value);

/**
  Set for ccp.lims.Sample.AbstractSample.sampleCategories

List of sample 
category associated to a sample.
  @param  Sam_CrystalSample self
  @param  ApiSet values
**/
extern void *Sam_CrystalSample_SetSampleCategories(Sam_CrystalSample self, ApiSet values);

/**
  Set for ccp.lims.Sample.CrystalSample.spaceGroup

The spacegroup name.
  @param  Sam_CrystalSample self
  @param  ApiString value
**/
extern void *Sam_CrystalSample_SetSpaceGroup(Sam_CrystalSample self, ApiString value);

/**
  Set for ccp.lims.Sample.Sample.subPosition

The sub-position of the 
sample in the holder.
  @param  Sam_CrystalSample self
  @param  ApiInteger value
**/
extern void *Sam_CrystalSample_SetSubPosition(Sam_CrystalSample self, ApiInteger value);

/**
  Set for ccp.lims.Sample.CrystalSample.x

Length of x dimension of 
crystal in millimeter (mm).
  @param  Sam_CrystalSample self
  @param  ApiFloat value
**/
extern void *Sam_CrystalSample_SetX(Sam_CrystalSample self, ApiFloat value);

/**
  Set for ccp.lims.Sample.CrystalSample.y

Length of y dimension of 
crystal in millimeter (mm).
  @param  Sam_CrystalSample self
  @param  ApiFloat value
**/
extern void *Sam_CrystalSample_SetY(Sam_CrystalSample self, ApiFloat value);

/**
  Set for ccp.lims.Sample.CrystalSample.z

Length of z dimension of 
crystal in millimeter (mm).
  @param  Sam_CrystalSample self
  @param  ApiFloat value
**/
extern void *Sam_CrystalSample_SetZ(Sam_CrystalSample self, ApiFloat value);

/**
  Sorted for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiList Sam_CrystalSample_SortedDropAnnotations(Sam_CrystalSample self);

/**
  Sorted for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiList Sam_CrystalSample_SortedHazardPhrases(Sam_CrystalSample self);

/**
  Sorted for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiList Sam_CrystalSample_SortedInputSamples(Sam_CrystalSample self);

/**
  Sorted for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiList Sam_CrystalSample_SortedLocalRiskPhrases(Sam_CrystalSample self);

/**
  Sorted for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiList Sam_CrystalSample_SortedNmrExperiments(Sam_CrystalSample self);

/**
  Sorted for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiList Sam_CrystalSample_SortedRPhrases(Sam_CrystalSample self);

/**
  Sorted for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiList Sam_CrystalSample_SortedSPhrases(Sam_CrystalSample self);

/**
  Sorted for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiList Sam_CrystalSample_SortedSampleCategories(Sam_CrystalSample self);

/**
  Sorted for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_CrystalSample self
  @returns   the result
**/
extern ApiList Sam_CrystalSample_SortedSampleComponents(Sam_CrystalSample self);

#endif /* __incl__ccp_api_lims_Sample_CrystalSample_h__ */
