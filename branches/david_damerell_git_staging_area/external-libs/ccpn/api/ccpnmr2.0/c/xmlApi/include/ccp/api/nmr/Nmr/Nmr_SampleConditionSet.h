
#ifndef __incl__ccp_api_nmr_Nmr_SampleConditionSet_h__
#define __incl__ccp_api_nmr_Nmr_SampleConditionSet_h__

#include "ccp.h"

/*
  Conditions under which an experiment is carried out.
*/

/* package ccp.api.nmr.Nmr */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleConditionSet self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_SampleConditionSet_AddApplicationData(Nmr_SampleConditionSet self, Impl_ApplicationData value);

/**
  Add for ccp.nmr.Nmr.SampleConditionSet.experiments

Experiments acquired 
under a given set of sample conditions.
  @param  Nmr_SampleConditionSet self
  @param  Nmr_Experiment value
**/
extern void *Nmr_SampleConditionSet_AddExperiment(Nmr_SampleConditionSet self, Nmr_Experiment value);

/**
  CheckAllValid for ccp.nmr.Nmr.SampleConditionSet
  @param  Nmr_SampleConditionSet self
  @param  ApiBoolean complete
**/
extern void *Nmr_SampleConditionSet_CheckAllValid(Nmr_SampleConditionSet self, ApiBoolean complete);

/**
  CheckValid for ccp.nmr.Nmr.SampleConditionSet
  @param  Nmr_SampleConditionSet self
  @param  ApiBoolean complete
**/
extern void *Nmr_SampleConditionSet_CheckValid(Nmr_SampleConditionSet self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleConditionSet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_SampleConditionSet_FindAllApplicationData(Nmr_SampleConditionSet self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleConditionSet self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_SampleConditionSet_FindAllApplicationData_keyval0(Nmr_SampleConditionSet self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleConditionSet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_SampleConditionSet_FindAllApplicationData_keyval1(Nmr_SampleConditionSet self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleConditionSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_SampleConditionSet_FindAllApplicationData_keyval2(Nmr_SampleConditionSet self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleConditionSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nmr_SampleConditionSet_FindAllApplicationData_keyval3(Nmr_SampleConditionSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleConditionSet self
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
extern ApiList Nmr_SampleConditionSet_FindAllApplicationData_keyval4(Nmr_SampleConditionSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.SampleConditionSet.citations

Citations for 
SmpleConditionSet
  @param  Nmr_SampleConditionSet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SampleConditionSet_FindAllCitations(Nmr_SampleConditionSet self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.SampleConditionSet.citations

Citations for 
SmpleConditionSet
  @param  Nmr_SampleConditionSet self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SampleConditionSet_FindAllCitations_keyval0(Nmr_SampleConditionSet self);

/**
  FindAll for ccp.nmr.Nmr.SampleConditionSet.citations

Citations for 
SmpleConditionSet
  @param  Nmr_SampleConditionSet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SampleConditionSet_FindAllCitations_keyval1(Nmr_SampleConditionSet self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.SampleConditionSet.citations

Citations for 
SmpleConditionSet
  @param  Nmr_SampleConditionSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SampleConditionSet_FindAllCitations_keyval2(Nmr_SampleConditionSet self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.SampleConditionSet.citations

Citations for 
SmpleConditionSet
  @param  Nmr_SampleConditionSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SampleConditionSet_FindAllCitations_keyval3(Nmr_SampleConditionSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.SampleConditionSet.citations

Citations for 
SmpleConditionSet
  @param  Nmr_SampleConditionSet self
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
extern ApiSet Nmr_SampleConditionSet_FindAllCitations_keyval4(Nmr_SampleConditionSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.SampleConditionSet.experiments

Experiments 
acquired under a given set of sample conditions.
  @param  Nmr_SampleConditionSet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SampleConditionSet_FindAllExperiments(Nmr_SampleConditionSet self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.SampleConditionSet.experiments

Experiments 
acquired under a given set of sample conditions.
  @param  Nmr_SampleConditionSet self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SampleConditionSet_FindAllExperiments_keyval0(Nmr_SampleConditionSet self);

/**
  FindAll for ccp.nmr.Nmr.SampleConditionSet.experiments

Experiments 
acquired under a given set of sample conditions.
  @param  Nmr_SampleConditionSet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SampleConditionSet_FindAllExperiments_keyval1(Nmr_SampleConditionSet self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.SampleConditionSet.experiments

Experiments 
acquired under a given set of sample conditions.
  @param  Nmr_SampleConditionSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SampleConditionSet_FindAllExperiments_keyval2(Nmr_SampleConditionSet self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.SampleConditionSet.experiments

Experiments 
acquired under a given set of sample conditions.
  @param  Nmr_SampleConditionSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SampleConditionSet_FindAllExperiments_keyval3(Nmr_SampleConditionSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.SampleConditionSet.experiments

Experiments 
acquired under a given set of sample conditions.
  @param  Nmr_SampleConditionSet self
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
extern ApiSet Nmr_SampleConditionSet_FindAllExperiments_keyval4(Nmr_SampleConditionSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.nmr.Nmr.SampleConditionSet.sampleConditions

child link 
to class SampleCondition
  @param  Nmr_SampleConditionSet self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SampleConditionSet_FindAllSampleConditions(Nmr_SampleConditionSet self, ApiMap conditions);

/**
  FindAll for ccp.nmr.Nmr.SampleConditionSet.sampleConditions

child link 
to class SampleCondition
  @param  Nmr_SampleConditionSet self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SampleConditionSet_FindAllSampleConditions_keyval0(Nmr_SampleConditionSet self);

/**
  FindAll for ccp.nmr.Nmr.SampleConditionSet.sampleConditions

child link 
to class SampleCondition
  @param  Nmr_SampleConditionSet self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SampleConditionSet_FindAllSampleConditions_keyval1(Nmr_SampleConditionSet self, char * key, ApiObject value);

/**
  FindAll for ccp.nmr.Nmr.SampleConditionSet.sampleConditions

child link 
to class SampleCondition
  @param  Nmr_SampleConditionSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SampleConditionSet_FindAllSampleConditions_keyval2(Nmr_SampleConditionSet self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.nmr.Nmr.SampleConditionSet.sampleConditions

child link 
to class SampleCondition
  @param  Nmr_SampleConditionSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nmr_SampleConditionSet_FindAllSampleConditions_keyval3(Nmr_SampleConditionSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.nmr.Nmr.SampleConditionSet.sampleConditions

child link 
to class SampleCondition
  @param  Nmr_SampleConditionSet self
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
extern ApiSet Nmr_SampleConditionSet_FindAllSampleConditions_keyval4(Nmr_SampleConditionSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleConditionSet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_SampleConditionSet_FindFirstApplicationData(Nmr_SampleConditionSet self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleConditionSet self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_SampleConditionSet_FindFirstApplicationData_keyval0(Nmr_SampleConditionSet self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleConditionSet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_SampleConditionSet_FindFirstApplicationData_keyval1(Nmr_SampleConditionSet self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleConditionSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_SampleConditionSet_FindFirstApplicationData_keyval2(Nmr_SampleConditionSet self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleConditionSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nmr_SampleConditionSet_FindFirstApplicationData_keyval3(Nmr_SampleConditionSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleConditionSet self
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
extern Impl_ApplicationData Nmr_SampleConditionSet_FindFirstApplicationData_keyval4(Nmr_SampleConditionSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.SampleConditionSet.citations

Citations for 
SmpleConditionSet
  @param  Nmr_SampleConditionSet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Nmr_SampleConditionSet_FindFirstCitation(Nmr_SampleConditionSet self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.SampleConditionSet.citations

Citations for 
SmpleConditionSet
  @param  Nmr_SampleConditionSet self
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Nmr_SampleConditionSet_FindFirstCitation_keyval0(Nmr_SampleConditionSet self);

/**
  FindFirst for ccp.nmr.Nmr.SampleConditionSet.citations

Citations for 
SmpleConditionSet
  @param  Nmr_SampleConditionSet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Nmr_SampleConditionSet_FindFirstCitation_keyval1(Nmr_SampleConditionSet self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.SampleConditionSet.citations

Citations for 
SmpleConditionSet
  @param  Nmr_SampleConditionSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Nmr_SampleConditionSet_FindFirstCitation_keyval2(Nmr_SampleConditionSet self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.SampleConditionSet.citations

Citations for 
SmpleConditionSet
  @param  Nmr_SampleConditionSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Nmr_SampleConditionSet_FindFirstCitation_keyval3(Nmr_SampleConditionSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.SampleConditionSet.citations

Citations for 
SmpleConditionSet
  @param  Nmr_SampleConditionSet self
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
extern Cita_Citation Nmr_SampleConditionSet_FindFirstCitation_keyval4(Nmr_SampleConditionSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.SampleConditionSet.experiments

Experiments 
acquired under a given set of sample conditions.
  @param  Nmr_SampleConditionSet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_SampleConditionSet_FindFirstExperiment(Nmr_SampleConditionSet self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.SampleConditionSet.experiments

Experiments 
acquired under a given set of sample conditions.
  @param  Nmr_SampleConditionSet self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_SampleConditionSet_FindFirstExperiment_keyval0(Nmr_SampleConditionSet self);

/**
  FindFirst for ccp.nmr.Nmr.SampleConditionSet.experiments

Experiments 
acquired under a given set of sample conditions.
  @param  Nmr_SampleConditionSet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_SampleConditionSet_FindFirstExperiment_keyval1(Nmr_SampleConditionSet self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.SampleConditionSet.experiments

Experiments 
acquired under a given set of sample conditions.
  @param  Nmr_SampleConditionSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_SampleConditionSet_FindFirstExperiment_keyval2(Nmr_SampleConditionSet self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.SampleConditionSet.experiments

Experiments 
acquired under a given set of sample conditions.
  @param  Nmr_SampleConditionSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_Experiment Nmr_SampleConditionSet_FindFirstExperiment_keyval3(Nmr_SampleConditionSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.SampleConditionSet.experiments

Experiments 
acquired under a given set of sample conditions.
  @param  Nmr_SampleConditionSet self
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
extern Nmr_Experiment Nmr_SampleConditionSet_FindFirstExperiment_keyval4(Nmr_SampleConditionSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.nmr.Nmr.SampleConditionSet.sampleConditions

child 
link to class SampleCondition
  @param  Nmr_SampleConditionSet self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SampleCondition Nmr_SampleConditionSet_FindFirstSampleCondition(Nmr_SampleConditionSet self, ApiMap conditions);

/**
  FindFirst for ccp.nmr.Nmr.SampleConditionSet.sampleConditions

child 
link to class SampleCondition
  @param  Nmr_SampleConditionSet self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SampleCondition Nmr_SampleConditionSet_FindFirstSampleCondition_keyval0(Nmr_SampleConditionSet self);

/**
  FindFirst for ccp.nmr.Nmr.SampleConditionSet.sampleConditions

child 
link to class SampleCondition
  @param  Nmr_SampleConditionSet self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SampleCondition Nmr_SampleConditionSet_FindFirstSampleCondition_keyval1(Nmr_SampleConditionSet self, char * key, ApiObject value);

/**
  FindFirst for ccp.nmr.Nmr.SampleConditionSet.sampleConditions

child 
link to class SampleCondition
  @param  Nmr_SampleConditionSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SampleCondition Nmr_SampleConditionSet_FindFirstSampleCondition_keyval2(Nmr_SampleConditionSet self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.nmr.Nmr.SampleConditionSet.sampleConditions

child 
link to class SampleCondition
  @param  Nmr_SampleConditionSet self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_SampleCondition Nmr_SampleConditionSet_FindFirstSampleCondition_keyval3(Nmr_SampleConditionSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.nmr.Nmr.SampleConditionSet.sampleConditions

child 
link to class SampleCondition
  @param  Nmr_SampleConditionSet self
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
extern Nmr_SampleCondition Nmr_SampleConditionSet_FindFirstSampleCondition_keyval4(Nmr_SampleConditionSet self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.nmr.Nmr.SampleConditionSet
  @param  Nmr_SampleConditionSet self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nmr_SampleConditionSet_Get(Nmr_SampleConditionSet self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_SampleConditionSet self
  @returns   the result
**/
extern Acco_AccessObject Nmr_SampleConditionSet_GetAccess(Nmr_SampleConditionSet self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleConditionSet self
  @returns   the result
**/
extern ApiList Nmr_SampleConditionSet_GetApplicationData(Nmr_SampleConditionSet self);

/**
  GetByKey for ccp.nmr.Nmr.SampleConditionSet
  @param  Nmr_SampleConditionSet self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nmr_SampleConditionSet Nmr_SampleConditionSet_GetByKey(Nmr_SampleConditionSet self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.nmr.Nmr.SampleConditionSet.citations

Citations for 
SmpleConditionSet
  @param  Nmr_SampleConditionSet self
  @returns   the result
**/
extern ApiSet Nmr_SampleConditionSet_GetCitations(Nmr_SampleConditionSet self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nmr_SampleConditionSet self
  @returns   the result
**/
extern ApiString Nmr_SampleConditionSet_GetClassName(Nmr_SampleConditionSet self);

/**
  Get for ccp.nmr.Nmr.SampleConditionSet.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_SampleConditionSet self
  @returns   the result
**/
extern ApiString Nmr_SampleConditionSet_GetDetails(Nmr_SampleConditionSet self);

/**
  Get for ccp.nmr.Nmr.SampleConditionSet.experiments

Experiments acquired 
under a given set of sample conditions.
  @param  Nmr_SampleConditionSet self
  @returns   the result
**/
extern ApiSet Nmr_SampleConditionSet_GetExperiments(Nmr_SampleConditionSet self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nmr_SampleConditionSet self
  @returns   the result
**/
extern ApiList Nmr_SampleConditionSet_GetFieldNames(Nmr_SampleConditionSet self);

/**
  GetFullKey for ccp.nmr.Nmr.SampleConditionSet
  @param  Nmr_SampleConditionSet self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nmr_SampleConditionSet_GetFullKey(Nmr_SampleConditionSet self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nmr_SampleConditionSet self
  @returns   the result
**/
extern ApiBoolean Nmr_SampleConditionSet_GetInConstructor(Nmr_SampleConditionSet self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nmr_SampleConditionSet self
  @returns   the result
**/
extern ApiBoolean Nmr_SampleConditionSet_GetIsDeleted(Nmr_SampleConditionSet self);

/**
  GetLocalKey for ccp.nmr.Nmr.SampleConditionSet
  @param  Nmr_SampleConditionSet self
  @returns  Local object key
**/
extern ApiObject Nmr_SampleConditionSet_GetLocalKey(Nmr_SampleConditionSet self);

/**
  Get for ccp.nmr.Nmr.SampleConditionSet.nmrProject

parent link
  @param  Nmr_SampleConditionSet self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_SampleConditionSet_GetNmrProject(Nmr_SampleConditionSet self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nmr_SampleConditionSet self
  @returns   the result
**/
extern ApiString Nmr_SampleConditionSet_GetPackageName(Nmr_SampleConditionSet self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nmr_SampleConditionSet self
  @returns   the result
**/
extern ApiString Nmr_SampleConditionSet_GetPackageShortName(Nmr_SampleConditionSet self);

/**
  Get for ccp.nmr.Nmr.SampleConditionSet.parent

link to parent object - 
synonym for nmrProject
  @param  Nmr_SampleConditionSet self
  @returns   the result
**/
extern Nmr_NmrProject Nmr_SampleConditionSet_GetParent(Nmr_SampleConditionSet self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nmr_SampleConditionSet self
  @returns   the result
**/
extern ApiString Nmr_SampleConditionSet_GetQualifiedName(Nmr_SampleConditionSet self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nmr_SampleConditionSet self
  @returns   the result
**/
extern Impl_MemopsRoot Nmr_SampleConditionSet_GetRoot(Nmr_SampleConditionSet self);

/**
  Get for ccp.nmr.Nmr.SampleConditionSet.sampleConditions

child link to 
class SampleCondition
  @param  Nmr_SampleConditionSet self
  @returns   the result
**/
extern ApiSet Nmr_SampleConditionSet_GetSampleConditions(Nmr_SampleConditionSet self);

/**
  Get for ccp.nmr.Nmr.SampleConditionSet.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_SampleConditionSet self
  @returns   the result
**/
extern ApiInteger Nmr_SampleConditionSet_GetSerial(Nmr_SampleConditionSet self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nmr_SampleConditionSet self
  @returns   the result
**/
extern Impl_TopObject Nmr_SampleConditionSet_GetTopObject(Nmr_SampleConditionSet self);

/**
  Constructor for ccp.nmr.Nmr.SampleConditionSet
  @param  Nmr_NmrProject parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_SampleConditionSet Nmr_SampleConditionSet_Init(Nmr_NmrProject parent, ApiMap attrlinks);

/**
  Constructor for ccp.nmr.Nmr.SampleConditionSet
  @param  Nmr_NmrProject parent
  @returns  the new object
**/
extern Nmr_SampleConditionSet Nmr_SampleConditionSet_Init_reqd(Nmr_NmrProject parent);

/**
  Factory function to create ccp.nmr.Nmr.SampleCondition
  @param  Nmr_SampleConditionSet self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nmr_SampleCondition Nmr_SampleConditionSet_NewSampleCondition(Nmr_SampleConditionSet self, ApiMap attrlinks);

/**
  Factory function to create ccp.nmr.Nmr.SampleCondition
  @param  Nmr_SampleConditionSet self
  @param  char * condition
  @returns  the new object
**/
extern Nmr_SampleCondition Nmr_SampleConditionSet_NewSampleCondition_reqd(Nmr_SampleConditionSet self, char * condition);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleConditionSet self
  @param  Impl_ApplicationData value
**/
extern void *Nmr_SampleConditionSet_RemoveApplicationData(Nmr_SampleConditionSet self, Impl_ApplicationData value);

/**
  Remove for ccp.nmr.Nmr.SampleConditionSet.experiments

Experiments 
acquired under a given set of sample conditions.
  @param  Nmr_SampleConditionSet self
  @param  Nmr_Experiment value
**/
extern void *Nmr_SampleConditionSet_RemoveExperiment(Nmr_SampleConditionSet self, Nmr_Experiment value);

/**
  SetAttr for ccp.nmr.Nmr.SampleConditionSet
  @param  Nmr_SampleConditionSet self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nmr_SampleConditionSet_Set(Nmr_SampleConditionSet self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nmr_SampleConditionSet self
  @param  Acco_AccessObject value
**/
extern void *Nmr_SampleConditionSet_SetAccess(Nmr_SampleConditionSet self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nmr_SampleConditionSet self
  @param  ApiList values
**/
extern void *Nmr_SampleConditionSet_SetApplicationData(Nmr_SampleConditionSet self, ApiList values);

/**
  Set for ccp.nmr.Nmr.SampleConditionSet.citations

Citations for 
SmpleConditionSet
  @param  Nmr_SampleConditionSet self
  @param  ApiSet values
**/
extern void *Nmr_SampleConditionSet_SetCitations(Nmr_SampleConditionSet self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.SampleConditionSet.details

Free text, for notes, 
explanatory comments, etc.
  @param  Nmr_SampleConditionSet self
  @param  ApiString value
**/
extern void *Nmr_SampleConditionSet_SetDetails(Nmr_SampleConditionSet self, ApiString value);

/**
  Set for ccp.nmr.Nmr.SampleConditionSet.experiments

Experiments acquired 
under a given set of sample conditions.
  @param  Nmr_SampleConditionSet self
  @param  ApiSet values
**/
extern void *Nmr_SampleConditionSet_SetExperiments(Nmr_SampleConditionSet self, ApiSet values);

/**
  Set for ccp.nmr.Nmr.SampleConditionSet.serial

Serial number of object. 
Serves as object main key. Serial numbers of deleted objects are not 
re-used. Serial numbers can only be set by the implementation. Values 
are in practice always positive, since negative values are interpreted 
as a signal to set the next free serial
  @param  Nmr_SampleConditionSet self
  @param  ApiInteger value
**/
extern void *Nmr_SampleConditionSet_SetSerial(Nmr_SampleConditionSet self, ApiInteger value);

/**
  Sorted for ccp.nmr.Nmr.SampleConditionSet.citations

Citations for 
SmpleConditionSet
  @param  Nmr_SampleConditionSet self
  @returns   the result
**/
extern ApiList Nmr_SampleConditionSet_SortedCitations(Nmr_SampleConditionSet self);

/**
  Sorted for ccp.nmr.Nmr.SampleConditionSet.experiments

Experiments 
acquired under a given set of sample conditions.
  @param  Nmr_SampleConditionSet self
  @returns   the result
**/
extern ApiList Nmr_SampleConditionSet_SortedExperiments(Nmr_SampleConditionSet self);

/**
  Sorted for ccp.nmr.Nmr.SampleConditionSet.sampleConditions

child link 
to class SampleCondition
  @param  Nmr_SampleConditionSet self
  @returns   the result
**/
extern ApiList Nmr_SampleConditionSet_SortedSampleConditions(Nmr_SampleConditionSet self);

#endif /* __incl__ccp_api_nmr_Nmr_SampleConditionSet_h__ */
