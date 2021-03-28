
#ifndef __incl__ccp_api_lims_Sample_Sample_h__
#define __incl__ccp_api_lims_Sample_Sample_h__

#include "ccp.h"

/*
  The information on the sample. The sample conforms to a particular sample reference information. The sample is the contents that has been used during an experiment that contains the sample components which is located in an Holder.
*/

/* package ccp.api.lims.Sample */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_Sample self
  @param  Impl_ApplicationData value
**/
extern void *Sam_Sample_AddApplicationData(Sam_Sample self, Impl_ApplicationData value);

/**
  Add for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @param  Cryz_DropAnnotation value
**/
extern void *Sam_Sample_AddDropAnnotation(Sam_Sample self, Cryz_DropAnnotation value);

/**
  Add for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all hazard 
pharses associated to a particular sample.
  @param  Sam_Sample self
  @param  Clas_HazardPhrase value
**/
extern void *Sam_Sample_AddHazardPhrase(Sam_Sample self, Clas_HazardPhrase value);

/**
  Add for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_Sample self
  @param  Expe_InputSample value
**/
extern void *Sam_Sample_AddInputSample(Sam_Sample self, Expe_InputSample value);

/**
  Add for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments carried 
out on Sample
  @param  Sam_Sample self
  @param  Nmr_Experiment value
**/
extern void *Sam_Sample_AddNmrExperiment(Sam_Sample self, Nmr_Experiment value);

/**
  Add for ccp.lims.Sample.AbstractSample.sampleCategories

List of sample 
category associated to a sample.
  @param  Sam_Sample self
  @param  Clas_SampleCategory value
**/
extern void *Sam_Sample_AddSampleCategory(Sam_Sample self, Clas_SampleCategory value);

/**
  CheckAllValid for ccp.lims.Sample.Sample
  @param  Sam_Sample self
  @param  ApiBoolean complete
**/
extern void *Sam_Sample_CheckAllValid(Sam_Sample self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.Sample.Sample
  @param  Sam_Sample self
  @param  ApiBoolean complete
**/
extern void *Sam_Sample_CheckValid(Sam_Sample self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Sam_Sample_FindAllApplicationData(Sam_Sample self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_Sample self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Sam_Sample_FindAllApplicationData_keyval0(Sam_Sample self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Sam_Sample_FindAllApplicationData_keyval1(Sam_Sample self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Sam_Sample_FindAllApplicationData_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Sam_Sample_FindAllApplicationData_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_Sample self
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
extern ApiList Sam_Sample_FindAllApplicationData_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllDropAnnotations(Sam_Sample self, ApiMap conditions);

/**
  FindAll for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllDropAnnotations_keyval0(Sam_Sample self);

/**
  FindAll for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllDropAnnotations_keyval1(Sam_Sample self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllDropAnnotations_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllDropAnnotations_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
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
extern ApiSet Sam_Sample_FindAllDropAnnotations_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllHazardPhrases(Sam_Sample self, ApiMap conditions);

/**
  FindAll for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_Sample self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllHazardPhrases_keyval0(Sam_Sample self);

/**
  FindAll for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllHazardPhrases_keyval1(Sam_Sample self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllHazardPhrases_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllHazardPhrases_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_Sample self
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
extern ApiSet Sam_Sample_FindAllHazardPhrases_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllInputSamples(Sam_Sample self, ApiMap conditions);

/**
  FindAll for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_Sample self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllInputSamples_keyval0(Sam_Sample self);

/**
  FindAll for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllInputSamples_keyval1(Sam_Sample self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllInputSamples_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllInputSamples_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_Sample self
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
extern ApiSet Sam_Sample_FindAllInputSamples_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllLocalRiskPhrases(Sam_Sample self, ApiMap conditions);

/**
  FindAll for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_Sample self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllLocalRiskPhrases_keyval0(Sam_Sample self);

/**
  FindAll for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllLocalRiskPhrases_keyval1(Sam_Sample self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllLocalRiskPhrases_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllLocalRiskPhrases_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_Sample self
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
extern ApiSet Sam_Sample_FindAllLocalRiskPhrases_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllNmrExperiments(Sam_Sample self, ApiMap conditions);

/**
  FindAll for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_Sample self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllNmrExperiments_keyval0(Sam_Sample self);

/**
  FindAll for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllNmrExperiments_keyval1(Sam_Sample self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllNmrExperiments_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllNmrExperiments_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_Sample self
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
extern ApiSet Sam_Sample_FindAllNmrExperiments_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllRPhrases(Sam_Sample self, ApiMap conditions);

/**
  FindAll for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllRPhrases_keyval0(Sam_Sample self);

/**
  FindAll for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllRPhrases_keyval1(Sam_Sample self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllRPhrases_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllRPhrases_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_Sample self
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
extern ApiSet Sam_Sample_FindAllRPhrases_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllSPhrases(Sam_Sample self, ApiMap conditions);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllSPhrases_keyval0(Sam_Sample self);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllSPhrases_keyval1(Sam_Sample self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllSPhrases_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllSPhrases_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_Sample self
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
extern ApiSet Sam_Sample_FindAllSPhrases_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllSampleCategories(Sam_Sample self, ApiMap conditions);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_Sample self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllSampleCategories_keyval0(Sam_Sample self);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllSampleCategories_keyval1(Sam_Sample self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllSampleCategories_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllSampleCategories_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_Sample self
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
extern ApiSet Sam_Sample_FindAllSampleCategories_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllSampleComponents(Sam_Sample self, ApiMap conditions);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_Sample self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllSampleComponents_keyval0(Sam_Sample self);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllSampleComponents_keyval1(Sam_Sample self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllSampleComponents_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Sam_Sample_FindAllSampleComponents_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_Sample self
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
extern ApiSet Sam_Sample_FindAllSampleComponents_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Sam_Sample_FindFirstApplicationData(Sam_Sample self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_Sample self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Sam_Sample_FindFirstApplicationData_keyval0(Sam_Sample self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Sam_Sample_FindFirstApplicationData_keyval1(Sam_Sample self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Sam_Sample_FindFirstApplicationData_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Sam_Sample_FindFirstApplicationData_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_Sample self
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
extern Impl_ApplicationData Sam_Sample_FindFirstApplicationData_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_DropAnnotation Sam_Sample_FindFirstDropAnnotation(Sam_Sample self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_DropAnnotation Sam_Sample_FindFirstDropAnnotation_keyval0(Sam_Sample self);

/**
  FindFirst for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_DropAnnotation Sam_Sample_FindFirstDropAnnotation_keyval1(Sam_Sample self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_DropAnnotation Sam_Sample_FindFirstDropAnnotation_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Cryz_DropAnnotation Sam_Sample_FindFirstDropAnnotation_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
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
extern Cryz_DropAnnotation Sam_Sample_FindFirstDropAnnotation_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_Sample_FindFirstHazardPhrase(Sam_Sample self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_Sample self
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_Sample_FindFirstHazardPhrase_keyval0(Sam_Sample self);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_Sample_FindFirstHazardPhrase_keyval1(Sam_Sample self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_Sample_FindFirstHazardPhrase_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_Sample_FindFirstHazardPhrase_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_Sample self
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
extern Clas_HazardPhrase Sam_Sample_FindFirstHazardPhrase_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Sample.Sample.inputSamples

Input sample list 
that describes the amount of sample used per experiment for a given 
sample.
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Expe_InputSample Sam_Sample_FindFirstInputSample(Sam_Sample self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Sample.Sample.inputSamples

Input sample list 
that describes the amount of sample used per experiment for a given 
sample.
  @param  Sam_Sample self
  @returns  the first value that satisfies the conditions 
**/
extern Expe_InputSample Sam_Sample_FindFirstInputSample_keyval0(Sam_Sample self);

/**
  FindFirst for ccp.lims.Sample.Sample.inputSamples

Input sample list 
that describes the amount of sample used per experiment for a given 
sample.
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Expe_InputSample Sam_Sample_FindFirstInputSample_keyval1(Sam_Sample self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Sample.Sample.inputSamples

Input sample list 
that describes the amount of sample used per experiment for a given 
sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Expe_InputSample Sam_Sample_FindFirstInputSample_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Sample.Sample.inputSamples

Input sample list 
that describes the amount of sample used per experiment for a given 
sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Expe_InputSample Sam_Sample_FindFirstInputSample_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Sample.Sample.inputSamples

Input sample list 
that describes the amount of sample used per experiment for a given 
sample.
  @param  Sam_Sample self
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
extern Expe_InputSample Sam_Sample_FindFirstInputSample_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local 
risk phrases that are specific to a certain laboratory.
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_Sample_FindFirstLocalRiskPhrase(Sam_Sample self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local 
risk phrases that are specific to a certain laboratory.
  @param  Sam_Sample self
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_Sample_FindFirstLocalRiskPhrase_keyval0(Sam_Sample self);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local 
risk phrases that are specific to a certain laboratory.
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_Sample_FindFirstLocalRiskPhrase_keyval1(Sam_Sample self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local 
risk phrases that are specific to a certain laboratory.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_Sample_FindFirstLocalRiskPhrase_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local 
risk phrases that are specific to a certain laboratory.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_Sample_FindFirstLocalRiskPhrase_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local 
risk phrases that are specific to a certain laboratory.
  @param  Sam_Sample self
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
extern Clas_HazardPhrase Sam_Sample_FindFirstLocalRiskPhrase_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Sam_Sample_FindFirstNmrExperiment(Sam_Sample self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_Sample self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Sam_Sample_FindFirstNmrExperiment_keyval0(Sam_Sample self);

/**
  FindFirst for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Sam_Sample_FindFirstNmrExperiment_keyval1(Sam_Sample self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Sam_Sample_FindFirstNmrExperiment_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Sam_Sample_FindFirstNmrExperiment_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_Sample self
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
extern Nmr_Experiment Sam_Sample_FindFirstNmrExperiment_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_Sample_FindFirstRPhrase(Sam_Sample self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_Sample_FindFirstRPhrase_keyval0(Sam_Sample self);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_Sample_FindFirstRPhrase_keyval1(Sam_Sample self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_Sample_FindFirstRPhrase_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_Sample_FindFirstRPhrase_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_Sample self
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
extern Clas_HazardPhrase Sam_Sample_FindFirstRPhrase_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_Sample_FindFirstSPhrase(Sam_Sample self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_Sample_FindFirstSPhrase_keyval0(Sam_Sample self);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_Sample_FindFirstSPhrase_keyval1(Sam_Sample self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_Sample_FindFirstSPhrase_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Clas_HazardPhrase Sam_Sample_FindFirstSPhrase_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_Sample self
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
extern Clas_HazardPhrase Sam_Sample_FindFirstSPhrase_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleCategory Sam_Sample_FindFirstSampleCategory(Sam_Sample self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_Sample self
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleCategory Sam_Sample_FindFirstSampleCategory_keyval0(Sam_Sample self);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleCategory Sam_Sample_FindFirstSampleCategory_keyval1(Sam_Sample self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleCategory Sam_Sample_FindFirstSampleCategory_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Clas_SampleCategory Sam_Sample_FindFirstSampleCategory_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_Sample self
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
extern Clas_SampleCategory Sam_Sample_FindFirstSampleCategory_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleComponents

child 
link to class SampleComponent
  @param  Sam_Sample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Sam_SampleComponent Sam_Sample_FindFirstSampleComponent(Sam_Sample self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleComponents

child 
link to class SampleComponent
  @param  Sam_Sample self
  @returns  the first value that satisfies the conditions 
**/
extern Sam_SampleComponent Sam_Sample_FindFirstSampleComponent_keyval0(Sam_Sample self);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleComponents

child 
link to class SampleComponent
  @param  Sam_Sample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Sam_SampleComponent Sam_Sample_FindFirstSampleComponent_keyval1(Sam_Sample self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleComponents

child 
link to class SampleComponent
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Sam_SampleComponent Sam_Sample_FindFirstSampleComponent_keyval2(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleComponents

child 
link to class SampleComponent
  @param  Sam_Sample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Sam_SampleComponent Sam_Sample_FindFirstSampleComponent_keyval3(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Sample.AbstractSample.sampleComponents

child 
link to class SampleComponent
  @param  Sam_Sample self
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
extern Sam_SampleComponent Sam_Sample_FindFirstSampleComponent_keyval4(Sam_Sample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.Sample.Sample
  @param  Sam_Sample self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Sam_Sample_Get(Sam_Sample self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Sam_Sample self
  @returns   the result
**/
extern Acco_AccessObject Sam_Sample_GetAccess(Sam_Sample self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Sam_Sample self
  @returns   the result
**/
extern Acco_AccessObject Sam_Sample_GetActiveAccess(Sam_Sample self);

/**
  Get for ccp.lims.Sample.Sample.amountDisplayUnit

This is the unit 
entered by user and used for display.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiString Sam_Sample_GetAmountDisplayUnit(Sam_Sample self);

/**
  Get for ccp.lims.Sample.Sample.amountUnit

One of the three possible 
units: kg, m3 or number.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiString Sam_Sample_GetAmountUnit(Sam_Sample self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiList Sam_Sample_GetApplicationData(Sam_Sample self);

/**
  Get for ccp.lims.Sample.Sample.batchNum

This is the batch or lot number 
of the sample.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiString Sam_Sample_GetBatchNum(Sam_Sample self);

/**
  GetByKey for ccp.lims.Sample.Sample
  @param  Sam_Sample self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Sam_Sample Sam_Sample_GetByKey(Sam_Sample self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiString Sam_Sample_GetClassName(Sam_Sample self);

/**
  Get for ccp.lims.Sample.Sample.colPosition

The column position of the 
sample in the holder.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiInteger Sam_Sample_GetColPosition(Sam_Sample self);

/**
  getter for derived attribute creationDate
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiString Sam_Sample_GetCreationDate(Sam_Sample self);

/**
  Get for ccp.lims.Sample.Sample.currentAmount

The current amount of the 
sample. Can be deduced by a subtraction between the initial amount and 
all the amount which are implied in experiments.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiFloat Sam_Sample_GetCurrentAmount(Sam_Sample self);

/**
  Get for ccp.lims.Sample.Sample.currentAmountFlag

Was current amount 
validated?
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiBoolean Sam_Sample_GetCurrentAmountFlag(Sam_Sample self);

/**
  Get for ccp.lims.Sample.AbstractSample.details

Free text, for notes, 
explanatory comments, etc.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiString Sam_Sample_GetDetails(Sam_Sample self);

/**
  Get for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiSet Sam_Sample_GetDropAnnotations(Sam_Sample self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiList Sam_Sample_GetFieldNames(Sam_Sample self);

/**
  Get for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all hazard 
pharses associated to a particular sample.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiSet Sam_Sample_GetHazardPhrases(Sam_Sample self);

/**
  Get for ccp.lims.Sample.Sample.holder

The holder to which the samples 
belong.
  @param  Sam_Sample self
  @returns   the result
**/
extern Hold_Holder Sam_Sample_GetHolder(Sam_Sample self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiBoolean Sam_Sample_GetInConstructor(Sam_Sample self);

/**
  Get for ccp.lims.Sample.Sample.initialAmount

The initial amount of the 
sample at the creation date.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiFloat Sam_Sample_GetInitialAmount(Sam_Sample self);

/**
  Get for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiSet Sam_Sample_GetInputSamples(Sam_Sample self);

/**
  Get for ccp.lims.Sample.AbstractSample.ionicStrength

The ionic strength 
(dimensionless quantity).
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiFloat Sam_Sample_GetIonicStrength(Sam_Sample self);

/**
  Get for ccp.lims.Sample.AbstractSample.isActive

True if the sample is 
active.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiBoolean Sam_Sample_GetIsActive(Sam_Sample self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiBoolean Sam_Sample_GetIsDeleted(Sam_Sample self);

/**
  Get for ccp.lims.Sample.AbstractSample.isHazard

Is the sample hazard?
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiBoolean Sam_Sample_GetIsHazard(Sam_Sample self);

/**
  Get for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiSet Sam_Sample_GetLocalRiskPhrases(Sam_Sample self);

/**
  Get for ccp.lims.Sample.AbstractSample.name

The name of the sample or 
the code to identify it. It is the unique identifier.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiString Sam_Sample_GetName(Sam_Sample self);

/**
  Get for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments carried 
out on Sample
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiSet Sam_Sample_GetNmrExperiments(Sam_Sample self);

/**
  Get for ccp.lims.Sample.Sample.outputSample

Output sample list that 
describes the amount of sample created by that experiment for a given 
sample.
  @param  Sam_Sample self
  @returns   the result
**/
extern Expe_OutputSample Sam_Sample_GetOutputSample(Sam_Sample self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiString Sam_Sample_GetPackageName(Sam_Sample self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiString Sam_Sample_GetPackageShortName(Sam_Sample self);

/**
  Get for ccp.lims.Sample.AbstractSample.parent

link to parent object - 
synonym for sampleStore
  @param  Sam_Sample self
  @returns   the result
**/
extern Sam_SampleStore Sam_Sample_GetParent(Sam_Sample self);

/**
  Get for ccp.lims.Sample.AbstractSample.ph

The pH.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiFloat Sam_Sample_GetPh(Sam_Sample self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiString Sam_Sample_GetQualifiedName(Sam_Sample self);

/**
  Get for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiSet Sam_Sample_GetRPhrases(Sam_Sample self);

/**
  Get for ccp.lims.Sample.Sample.refSample

The RefSample that conforms to 
the Sample.
  @param  Sam_Sample self
  @returns   the result
**/
extern Sam_RefSample Sam_Sample_GetRefSample(Sam_Sample self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Sam_Sample self
  @returns   the result
**/
extern Impl_MemopsRoot Sam_Sample_GetRoot(Sam_Sample self);

/**
  Get for ccp.lims.Sample.Sample.rowPosition

The row position of the 
sample in the holder.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiInteger Sam_Sample_GetRowPosition(Sam_Sample self);

/**
  Get for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiSet Sam_Sample_GetSPhrases(Sam_Sample self);

/**
  Get for ccp.lims.Sample.AbstractSample.sampleCategories

List of sample 
category associated to a sample.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiSet Sam_Sample_GetSampleCategories(Sam_Sample self);

/**
  Get for ccp.lims.Sample.AbstractSample.sampleComponents

child link to 
class SampleComponent
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiSet Sam_Sample_GetSampleComponents(Sam_Sample self);

/**
  Get for ccp.lims.Sample.AbstractSample.sampleStore

parent link
  @param  Sam_Sample self
  @returns   the result
**/
extern Sam_SampleStore Sam_Sample_GetSampleStore(Sam_Sample self);

/**
  Get for ccp.lims.Sample.Sample.subPosition

The sub-position of the 
sample in the holder.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiInteger Sam_Sample_GetSubPosition(Sam_Sample self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Sam_Sample self
  @returns   the result
**/
extern Impl_TopObject Sam_Sample_GetTopObject(Sam_Sample self);

/**
  Constructor for ccp.lims.Sample.Sample
  @param  Sam_SampleStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Sam_Sample Sam_Sample_Init(Sam_SampleStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.Sample.Sample
  @param  Sam_SampleStore parent
  @param  char * name
  @param  ApiSet sampleCategories
  @returns  the new object
**/
extern Sam_Sample Sam_Sample_Init_reqd(Sam_SampleStore parent, char * name, ApiSet sampleCategories);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_Sample self
  @param  Impl_ApplicationData value
**/
extern void *Sam_Sample_RemoveApplicationData(Sam_Sample self, Impl_ApplicationData value);

/**
  Remove for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @param  Cryz_DropAnnotation value
**/
extern void *Sam_Sample_RemoveDropAnnotation(Sam_Sample self, Cryz_DropAnnotation value);

/**
  Remove for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_Sample self
  @param  Clas_HazardPhrase value
**/
extern void *Sam_Sample_RemoveHazardPhrase(Sam_Sample self, Clas_HazardPhrase value);

/**
  Remove for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_Sample self
  @param  Expe_InputSample value
**/
extern void *Sam_Sample_RemoveInputSample(Sam_Sample self, Expe_InputSample value);

/**
  Remove for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_Sample self
  @param  Nmr_Experiment value
**/
extern void *Sam_Sample_RemoveNmrExperiment(Sam_Sample self, Nmr_Experiment value);

/**
  Remove for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_Sample self
  @param  Clas_SampleCategory value
**/
extern void *Sam_Sample_RemoveSampleCategory(Sam_Sample self, Clas_SampleCategory value);

/**
  SetAttr for ccp.lims.Sample.Sample
  @param  Sam_Sample self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Sam_Sample_Set(Sam_Sample self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Sam_Sample self
  @param  Acco_AccessObject value
**/
extern void *Sam_Sample_SetAccess(Sam_Sample self, Acco_AccessObject value);

/**
  Set for ccp.lims.Sample.Sample.amountDisplayUnit

This is the unit 
entered by user and used for display.
  @param  Sam_Sample self
  @param  ApiString value
**/
extern void *Sam_Sample_SetAmountDisplayUnit(Sam_Sample self, ApiString value);

/**
  Set for ccp.lims.Sample.Sample.amountUnit

One of the three possible 
units: kg, m3 or number.
  @param  Sam_Sample self
  @param  ApiString value
**/
extern void *Sam_Sample_SetAmountUnit(Sam_Sample self, ApiString value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Sam_Sample self
  @param  ApiList values
**/
extern void *Sam_Sample_SetApplicationData(Sam_Sample self, ApiList values);

/**
  Set for ccp.lims.Sample.Sample.batchNum

This is the batch or lot number 
of the sample.
  @param  Sam_Sample self
  @param  ApiString value
**/
extern void *Sam_Sample_SetBatchNum(Sam_Sample self, ApiString value);

/**
  Set for ccp.lims.Sample.Sample.colPosition

The column position of the 
sample in the holder.
  @param  Sam_Sample self
  @param  ApiInteger value
**/
extern void *Sam_Sample_SetColPosition(Sam_Sample self, ApiInteger value);

/**
  Set for ccp.lims.Sample.Sample.currentAmount

The current amount of the 
sample. Can be deduced by a subtraction between the initial amount and 
all the amount which are implied in experiments.
  @param  Sam_Sample self
  @param  ApiFloat value
**/
extern void *Sam_Sample_SetCurrentAmount(Sam_Sample self, ApiFloat value);

/**
  Set for ccp.lims.Sample.Sample.currentAmountFlag

Was current amount 
validated?
  @param  Sam_Sample self
  @param  ApiBoolean value
**/
extern void *Sam_Sample_SetCurrentAmountFlag(Sam_Sample self, ApiBoolean value);

/**
  Set for ccp.lims.Sample.AbstractSample.details

Free text, for notes, 
explanatory comments, etc.
  @param  Sam_Sample self
  @param  ApiString value
**/
extern void *Sam_Sample_SetDetails(Sam_Sample self, ApiString value);

/**
  Set for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @param  ApiSet values
**/
extern void *Sam_Sample_SetDropAnnotations(Sam_Sample self, ApiSet values);

/**
  Set for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all hazard 
pharses associated to a particular sample.
  @param  Sam_Sample self
  @param  ApiSet values
**/
extern void *Sam_Sample_SetHazardPhrases(Sam_Sample self, ApiSet values);

/**
  Set for ccp.lims.Sample.Sample.holder

The holder to which the samples 
belong.
  @param  Sam_Sample self
  @param  Hold_Holder value
**/
extern void *Sam_Sample_SetHolder(Sam_Sample self, Hold_Holder value);

/**
  Set for ccp.lims.Sample.Sample.initialAmount

The initial amount of the 
sample at the creation date.
  @param  Sam_Sample self
  @param  ApiFloat value
**/
extern void *Sam_Sample_SetInitialAmount(Sam_Sample self, ApiFloat value);

/**
  Set for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_Sample self
  @param  ApiSet values
**/
extern void *Sam_Sample_SetInputSamples(Sam_Sample self, ApiSet values);

/**
  Set for ccp.lims.Sample.AbstractSample.ionicStrength

The ionic strength 
(dimensionless quantity).
  @param  Sam_Sample self
  @param  ApiFloat value
**/
extern void *Sam_Sample_SetIonicStrength(Sam_Sample self, ApiFloat value);

/**
  Set for ccp.lims.Sample.AbstractSample.isActive

True if the sample is 
active.
  @param  Sam_Sample self
  @param  ApiBoolean value
**/
extern void *Sam_Sample_SetIsActive(Sam_Sample self, ApiBoolean value);

/**
  Set for ccp.lims.Sample.AbstractSample.isHazard

Is the sample hazard?
  @param  Sam_Sample self
  @param  ApiBoolean value
**/
extern void *Sam_Sample_SetIsHazard(Sam_Sample self, ApiBoolean value);

/**
  Set for ccp.lims.Sample.AbstractSample.name

The name of the sample or 
the code to identify it. It is the unique identifier.
  @param  Sam_Sample self
  @param  ApiString value
**/
extern void *Sam_Sample_SetName(Sam_Sample self, ApiString value);

/**
  Set for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments carried 
out on Sample
  @param  Sam_Sample self
  @param  ApiSet values
**/
extern void *Sam_Sample_SetNmrExperiments(Sam_Sample self, ApiSet values);

/**
  Set for ccp.lims.Sample.Sample.outputSample

Output sample list that 
describes the amount of sample created by that experiment for a given 
sample.
  @param  Sam_Sample self
  @param  Expe_OutputSample value
**/
extern void *Sam_Sample_SetOutputSample(Sam_Sample self, Expe_OutputSample value);

/**
  Set for ccp.lims.Sample.AbstractSample.ph

The pH.
  @param  Sam_Sample self
  @param  ApiFloat value
**/
extern void *Sam_Sample_SetPh(Sam_Sample self, ApiFloat value);

/**
  Set for ccp.lims.Sample.Sample.refSample

The RefSample that conforms to 
the Sample.
  @param  Sam_Sample self
  @param  Sam_RefSample value
**/
extern void *Sam_Sample_SetRefSample(Sam_Sample self, Sam_RefSample value);

/**
  Set for ccp.lims.Sample.Sample.rowPosition

The row position of the 
sample in the holder.
  @param  Sam_Sample self
  @param  ApiInteger value
**/
extern void *Sam_Sample_SetRowPosition(Sam_Sample self, ApiInteger value);

/**
  Set for ccp.lims.Sample.AbstractSample.sampleCategories

List of sample 
category associated to a sample.
  @param  Sam_Sample self
  @param  ApiSet values
**/
extern void *Sam_Sample_SetSampleCategories(Sam_Sample self, ApiSet values);

/**
  Set for ccp.lims.Sample.Sample.subPosition

The sub-position of the 
sample in the holder.
  @param  Sam_Sample self
  @param  ApiInteger value
**/
extern void *Sam_Sample_SetSubPosition(Sam_Sample self, ApiInteger value);

/**
  Sorted for ccp.lims.Sample.Sample.dropAnnotations
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiList Sam_Sample_SortedDropAnnotations(Sam_Sample self);

/**
  Sorted for ccp.lims.Sample.AbstractSample.hazardPhrases

List of all 
hazard pharses associated to a particular sample.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiList Sam_Sample_SortedHazardPhrases(Sam_Sample self);

/**
  Sorted for ccp.lims.Sample.Sample.inputSamples

Input sample list that 
describes the amount of sample used per experiment for a given sample.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiList Sam_Sample_SortedInputSamples(Sam_Sample self);

/**
  Sorted for ccp.lims.Sample.AbstractSample.localRiskPhrases

Local risk 
phrases that are specific to a certain laboratory.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiList Sam_Sample_SortedLocalRiskPhrases(Sam_Sample self);

/**
  Sorted for ccp.lims.Sample.Sample.nmrExperiments

Nmrr experiments 
carried out on Sample
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiList Sam_Sample_SortedNmrExperiments(Sam_Sample self);

/**
  Sorted for ccp.lims.Sample.AbstractSample.rPhrases

Risk Phrases 
(R-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiList Sam_Sample_SortedRPhrases(Sam_Sample self);

/**
  Sorted for ccp.lims.Sample.AbstractSample.sPhrases

Safety Phrases 
(S-phrases) that are associated to a sample.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiList Sam_Sample_SortedSPhrases(Sam_Sample self);

/**
  Sorted for ccp.lims.Sample.AbstractSample.sampleCategories

List of 
sample category associated to a sample.
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiList Sam_Sample_SortedSampleCategories(Sam_Sample self);

/**
  Sorted for ccp.lims.Sample.AbstractSample.sampleComponents

child link 
to class SampleComponent
  @param  Sam_Sample self
  @returns   the result
**/
extern ApiList Sam_Sample_SortedSampleComponents(Sam_Sample self);

#endif /* __incl__ccp_api_lims_Sample_Sample_h__ */
