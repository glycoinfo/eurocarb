
#ifndef __incl__ccp_api_lims_ExpBlueprint_ExpBlueprint_h__
#define __incl__ccp_api_lims_ExpBlueprint_ExpBlueprint_h__

#include "ccp.h"

/*
  The information on the ExpBlueprint that represents well defined experimental objectives. The ExpBlueprint groups wish targets or domain of wish targets and non-polymer molecules.
*/

/* package ccp.api.lims.ExpBlueprint */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprint self
  @param  Impl_ApplicationData value
**/
extern void *Expb_ExpBlueprint_AddApplicationData(Expb_ExpBlueprint self, Impl_ApplicationData value);

/**
  Add for ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments 
performed on a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @param  Expe_Experiment value
**/
extern void *Expb_ExpBlueprint_AddExperiment(Expb_ExpBlueprint self, Expe_Experiment value);

/**
  CheckAllValid for ccp.lims.ExpBlueprint.ExpBlueprint
  @param  Expb_ExpBlueprint self
  @param  ApiBoolean complete
**/
extern void *Expb_ExpBlueprint_CheckAllValid(Expb_ExpBlueprint self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.ExpBlueprint.ExpBlueprint
  @param  Expb_ExpBlueprint self
  @param  ApiBoolean complete
**/
extern void *Expb_ExpBlueprint_CheckValid(Expb_ExpBlueprint self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expb_ExpBlueprint_FindAllApplicationData(Expb_ExpBlueprint self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprint self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expb_ExpBlueprint_FindAllApplicationData_keyval0(Expb_ExpBlueprint self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expb_ExpBlueprint_FindAllApplicationData_keyval1(Expb_ExpBlueprint self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expb_ExpBlueprint_FindAllApplicationData_keyval2(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Expb_ExpBlueprint_FindAllApplicationData_keyval3(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprint self
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
extern ApiList Expb_ExpBlueprint_FindAllApplicationData_keyval4(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintComponents

child link to 
class BlueprintComponent
  @param  Expb_ExpBlueprint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_ExpBlueprint_FindAllBlueprintComponents(Expb_ExpBlueprint self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintComponents

child link to 
class BlueprintComponent
  @param  Expb_ExpBlueprint self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_ExpBlueprint_FindAllBlueprintComponents_keyval0(Expb_ExpBlueprint self);

/**
  FindAll for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintComponents

child link to 
class BlueprintComponent
  @param  Expb_ExpBlueprint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_ExpBlueprint_FindAllBlueprintComponents_keyval1(Expb_ExpBlueprint self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintComponents

child link to 
class BlueprintComponent
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_ExpBlueprint_FindAllBlueprintComponents_keyval2(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintComponents

child link to 
class BlueprintComponent
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_ExpBlueprint_FindAllBlueprintComponents_keyval3(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintComponents

child link to 
class BlueprintComponent
  @param  Expb_ExpBlueprint self
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
extern ApiSet Expb_ExpBlueprint_FindAllBlueprintComponents_keyval4(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintDbRefs

child 
link to class BlueprintDbRef
  @param  Expb_ExpBlueprint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_ExpBlueprint_FindAllBlueprintDbRefs(Expb_ExpBlueprint self, ApiMap conditions);

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintDbRefs

child 
link to class BlueprintDbRef
  @param  Expb_ExpBlueprint self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_ExpBlueprint_FindAllBlueprintDbRefs_keyval0(Expb_ExpBlueprint self);

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintDbRefs

child 
link to class BlueprintDbRef
  @param  Expb_ExpBlueprint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_ExpBlueprint_FindAllBlueprintDbRefs_keyval1(Expb_ExpBlueprint self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintDbRefs

child 
link to class BlueprintDbRef
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_ExpBlueprint_FindAllBlueprintDbRefs_keyval2(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintDbRefs

child 
link to class BlueprintDbRef
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_ExpBlueprint_FindAllBlueprintDbRefs_keyval3(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintDbRefs

child 
link to class BlueprintDbRef
  @param  Expb_ExpBlueprint self
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
extern ApiSet Expb_ExpBlueprint_FindAllBlueprintDbRefs_keyval4(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintStatuses

child 
link to class BlueprintStatus
  @param  Expb_ExpBlueprint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_ExpBlueprint_FindAllBlueprintStatuses(Expb_ExpBlueprint self, ApiMap conditions);

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintStatuses

child 
link to class BlueprintStatus
  @param  Expb_ExpBlueprint self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_ExpBlueprint_FindAllBlueprintStatuses_keyval0(Expb_ExpBlueprint self);

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintStatuses

child 
link to class BlueprintStatus
  @param  Expb_ExpBlueprint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_ExpBlueprint_FindAllBlueprintStatuses_keyval1(Expb_ExpBlueprint self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintStatuses

child 
link to class BlueprintStatus
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_ExpBlueprint_FindAllBlueprintStatuses_keyval2(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintStatuses

child 
link to class BlueprintStatus
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_ExpBlueprint_FindAllBlueprintStatuses_keyval3(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintStatuses

child 
link to class BlueprintStatus
  @param  Expb_ExpBlueprint self
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
extern ApiSet Expb_ExpBlueprint_FindAllBlueprintStatuses_keyval4(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments 
performed on a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_ExpBlueprint_FindAllExperiments(Expb_ExpBlueprint self, ApiMap conditions);

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments 
performed on a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_ExpBlueprint_FindAllExperiments_keyval0(Expb_ExpBlueprint self);

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments 
performed on a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_ExpBlueprint_FindAllExperiments_keyval1(Expb_ExpBlueprint self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments 
performed on a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_ExpBlueprint_FindAllExperiments_keyval2(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments 
performed on a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Expb_ExpBlueprint_FindAllExperiments_keyval3(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments 
performed on a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
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
extern ApiSet Expb_ExpBlueprint_FindAllExperiments_keyval4(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expb_ExpBlueprint_FindFirstApplicationData(Expb_ExpBlueprint self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprint self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expb_ExpBlueprint_FindFirstApplicationData_keyval0(Expb_ExpBlueprint self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expb_ExpBlueprint_FindFirstApplicationData_keyval1(Expb_ExpBlueprint self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expb_ExpBlueprint_FindFirstApplicationData_keyval2(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Expb_ExpBlueprint_FindFirstApplicationData_keyval3(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprint self
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
extern Impl_ApplicationData Expb_ExpBlueprint_FindFirstApplicationData_keyval4(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintComponents

child link to 
class BlueprintComponent
  @param  Expb_ExpBlueprint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Expb_ExpBlueprint_FindFirstBlueprintComponent(Expb_ExpBlueprint self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintComponents

child link to 
class BlueprintComponent
  @param  Expb_ExpBlueprint self
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Expb_ExpBlueprint_FindFirstBlueprintComponent_keyval0(Expb_ExpBlueprint self);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintComponents

child link to 
class BlueprintComponent
  @param  Expb_ExpBlueprint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Expb_ExpBlueprint_FindFirstBlueprintComponent_keyval1(Expb_ExpBlueprint self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintComponents

child link to 
class BlueprintComponent
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Expb_ExpBlueprint_FindFirstBlueprintComponent_keyval2(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintComponents

child link to 
class BlueprintComponent
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Expb_ExpBlueprint_FindFirstBlueprintComponent_keyval3(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintComponents

child link to 
class BlueprintComponent
  @param  Expb_ExpBlueprint self
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
extern Expb_BlueprintComponent Expb_ExpBlueprint_FindFirstBlueprintComponent_keyval4(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintDbRefs

child 
link to class BlueprintDbRef
  @param  Expb_ExpBlueprint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintDbRef Expb_ExpBlueprint_FindFirstBlueprintDbRef(Expb_ExpBlueprint self, ApiMap conditions);

/**
  FindFirst for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintDbRefs

child 
link to class BlueprintDbRef
  @param  Expb_ExpBlueprint self
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintDbRef Expb_ExpBlueprint_FindFirstBlueprintDbRef_keyval0(Expb_ExpBlueprint self);

/**
  FindFirst for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintDbRefs

child 
link to class BlueprintDbRef
  @param  Expb_ExpBlueprint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintDbRef Expb_ExpBlueprint_FindFirstBlueprintDbRef_keyval1(Expb_ExpBlueprint self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintDbRefs

child 
link to class BlueprintDbRef
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintDbRef Expb_ExpBlueprint_FindFirstBlueprintDbRef_keyval2(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintDbRefs

child 
link to class BlueprintDbRef
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintDbRef Expb_ExpBlueprint_FindFirstBlueprintDbRef_keyval3(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintDbRefs

child 
link to class BlueprintDbRef
  @param  Expb_ExpBlueprint self
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
extern Expb_BlueprintDbRef Expb_ExpBlueprint_FindFirstBlueprintDbRef_keyval4(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintStatuses

child link to 
class BlueprintStatus
  @param  Expb_ExpBlueprint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintStatus Expb_ExpBlueprint_FindFirstBlueprintStatus(Expb_ExpBlueprint self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintStatuses

child link to 
class BlueprintStatus
  @param  Expb_ExpBlueprint self
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintStatus Expb_ExpBlueprint_FindFirstBlueprintStatus_keyval0(Expb_ExpBlueprint self);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintStatuses

child link to 
class BlueprintStatus
  @param  Expb_ExpBlueprint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintStatus Expb_ExpBlueprint_FindFirstBlueprintStatus_keyval1(Expb_ExpBlueprint self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintStatuses

child link to 
class BlueprintStatus
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintStatus Expb_ExpBlueprint_FindFirstBlueprintStatus_keyval2(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintStatuses

child link to 
class BlueprintStatus
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintStatus Expb_ExpBlueprint_FindFirstBlueprintStatus_keyval3(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.blueprintStatuses

child link to 
class BlueprintStatus
  @param  Expb_ExpBlueprint self
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
extern Expb_BlueprintStatus Expb_ExpBlueprint_FindFirstBlueprintStatus_keyval4(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments performed on 
a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Expb_ExpBlueprint_FindFirstExperiment(Expb_ExpBlueprint self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments performed on 
a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Expb_ExpBlueprint_FindFirstExperiment_keyval0(Expb_ExpBlueprint self);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments performed on 
a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Expb_ExpBlueprint_FindFirstExperiment_keyval1(Expb_ExpBlueprint self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments performed on 
a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Expb_ExpBlueprint_FindFirstExperiment_keyval2(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments performed on 
a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Expe_Experiment Expb_ExpBlueprint_FindFirstExperiment_keyval3(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments performed on 
a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
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
extern Expe_Experiment Expb_ExpBlueprint_FindFirstExperiment_keyval4(Expb_ExpBlueprint self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.ExpBlueprint.ExpBlueprint
  @param  Expb_ExpBlueprint self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Expb_ExpBlueprint_Get(Expb_ExpBlueprint self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern Acco_AccessObject Expb_ExpBlueprint_GetAccess(Expb_ExpBlueprint self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern ApiList Expb_ExpBlueprint_GetApplicationData(Expb_ExpBlueprint self);

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.biochemicalFunction

The 
biochemical function within the biological pathway of the ExpBlueprint.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern ApiString Expb_ExpBlueprint_GetBiochemicalFunction(Expb_ExpBlueprint self);

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.biologicalProcess

The 
biological process where the ExpBlueprint is involved. e.g. 'Unknown'.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern ApiString Expb_ExpBlueprint_GetBiologicalProcess(Expb_ExpBlueprint self);

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintComponents

child 
link to class BlueprintComponent
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern ApiSet Expb_ExpBlueprint_GetBlueprintComponents(Expb_ExpBlueprint self);

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintDbRefs

child link 
to class BlueprintDbRef
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern ApiSet Expb_ExpBlueprint_GetBlueprintDbRefs(Expb_ExpBlueprint self);

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintStatuses

child link 
to class BlueprintStatus
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern ApiSet Expb_ExpBlueprint_GetBlueprintStatuses(Expb_ExpBlueprint self);

/**
  GetByKey for ccp.lims.ExpBlueprint.ExpBlueprint
  @param  Expb_ExpBlueprint self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Expb_ExpBlueprint Expb_ExpBlueprint_GetByKey(Expb_ExpBlueprint self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.catalyticActivity

The 
official statement of catalytic activity.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern ApiString Expb_ExpBlueprint_GetCatalyticActivity(Expb_ExpBlueprint self);

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.cellLocation

The typical 
location of ExpBlueprint within a cell.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern ApiString Expb_ExpBlueprint_GetCellLocation(Expb_ExpBlueprint self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern ApiString Expb_ExpBlueprint_GetClassName(Expb_ExpBlueprint self);

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.commonName

The common name 
of ExpBlueprint.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern ApiString Expb_ExpBlueprint_GetCommonName(Expb_ExpBlueprint self);

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.details

Detail field for 
comments.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern ApiString Expb_ExpBlueprint_GetDetails(Expb_ExpBlueprint self);

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.expBlueprintStore

parent 
link
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern Expb_ExpBlueprintStore Expb_ExpBlueprint_GetExpBlueprintStore(Expb_ExpBlueprint self);

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments 
performed on a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern ApiSet Expb_ExpBlueprint_GetExperiments(Expb_ExpBlueprint self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern ApiList Expb_ExpBlueprint_GetFieldNames(Expb_ExpBlueprint self);

/**
  GetFullKey for ccp.lims.ExpBlueprint.ExpBlueprint
  @param  Expb_ExpBlueprint self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Expb_ExpBlueprint_GetFullKey(Expb_ExpBlueprint self, ApiBoolean useGuid);

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.functionDescription

The 
function description is an human-readable description of the biochemical 
function.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern ApiString Expb_ExpBlueprint_GetFunctionDescription(Expb_ExpBlueprint self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern ApiBoolean Expb_ExpBlueprint_GetInConstructor(Expb_ExpBlueprint self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern ApiBoolean Expb_ExpBlueprint_GetIsDeleted(Expb_ExpBlueprint self);

/**
  GetLocalKey for ccp.lims.ExpBlueprint.ExpBlueprint
  @param  Expb_ExpBlueprint self
  @returns  Local object key
**/
extern ApiObject Expb_ExpBlueprint_GetLocalKey(Expb_ExpBlueprint self);

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.localName

The local name of 
ExpBlueprint.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern ApiString Expb_ExpBlueprint_GetLocalName(Expb_ExpBlueprint self);

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.owner

Person who owns the 
ExpBlueprint.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern Affi_Person Expb_ExpBlueprint_GetOwner(Expb_ExpBlueprint self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern ApiString Expb_ExpBlueprint_GetPackageName(Expb_ExpBlueprint self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern ApiString Expb_ExpBlueprint_GetPackageShortName(Expb_ExpBlueprint self);

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.parent

link to parent object 
- synonym for expBlueprintStore
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern Expb_ExpBlueprintStore Expb_ExpBlueprint_GetParent(Expb_ExpBlueprint self);

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.pathway

The description of 
the biological processes this ExpBlueprint is related to.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern ApiString Expb_ExpBlueprint_GetPathway(Expb_ExpBlueprint self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern ApiString Expb_ExpBlueprint_GetQualifiedName(Expb_ExpBlueprint self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern Impl_MemopsRoot Expb_ExpBlueprint_GetRoot(Expb_ExpBlueprint self);

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.serial

Unique identifier.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern ApiInteger Expb_ExpBlueprint_GetSerial(Expb_ExpBlueprint self);

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.similarityDetails

The 
information relating this ExpBlueprint to other 
organisms/genes/proteins.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern ApiString Expb_ExpBlueprint_GetSimilarityDetails(Expb_ExpBlueprint self);

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.systematicName

The 
systematic name of the ExpBlueprint.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern ApiString Expb_ExpBlueprint_GetSystematicName(Expb_ExpBlueprint self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern Impl_TopObject Expb_ExpBlueprint_GetTopObject(Expb_ExpBlueprint self);

/**
  Get for ccp.lims.ExpBlueprint.ExpBlueprint.whyChosen

Details of the 
basis for the selection of this ExpBlueprint.
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern ApiString Expb_ExpBlueprint_GetWhyChosen(Expb_ExpBlueprint self);

/**
  Constructor for ccp.lims.ExpBlueprint.ExpBlueprint
  @param  Expb_ExpBlueprintStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Expb_ExpBlueprint Expb_ExpBlueprint_Init(Expb_ExpBlueprintStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.ExpBlueprint.ExpBlueprint
  @param  Expb_ExpBlueprintStore parent
  @param  char * commonName
  @param  char * whyChosen
  @returns  the new object
**/
extern Expb_ExpBlueprint Expb_ExpBlueprint_Init_reqd(Expb_ExpBlueprintStore parent, char * commonName, char * whyChosen);

/**
  Factory function to create ccp.lims.ExpBlueprint.BlueprintComponent
  @param  Expb_ExpBlueprint self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Expb_BlueprintComponent Expb_ExpBlueprint_NewBlueprintComponent(Expb_ExpBlueprint self, ApiMap attrlinks);

/**
  Factory function to create ccp.lims.ExpBlueprint.BlueprintComponent
  @param  Expb_ExpBlueprint self
  @param  char * componentType
  @param  char * whyChosen
  @returns  the new object
**/
extern Expb_BlueprintComponent Expb_ExpBlueprint_NewBlueprintComponent_reqd(Expb_ExpBlueprint self, char * componentType, char * whyChosen);

/**
  Factory function to create ccp.lims.ExpBlueprint.BlueprintDbRef
  @param  Expb_ExpBlueprint self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Expb_BlueprintDbRef Expb_ExpBlueprint_NewBlueprintDbRef(Expb_ExpBlueprint self, ApiMap attrlinks);

/**
  Factory function to create ccp.lims.ExpBlueprint.BlueprintDbRef
  @param  Expb_ExpBlueprint self
  @param  Dbr_Entry dbRef
  @returns  the new object
**/
extern Expb_BlueprintDbRef Expb_ExpBlueprint_NewBlueprintDbRef_reqd(Expb_ExpBlueprint self, Dbr_Entry dbRef);

/**
  Factory function to create ccp.lims.ExpBlueprint.BlueprintStatus
  @param  Expb_ExpBlueprint self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Expb_BlueprintStatus Expb_ExpBlueprint_NewBlueprintStatus(Expb_ExpBlueprint self, ApiMap attrlinks);

/**
  Factory function to create ccp.lims.ExpBlueprint.BlueprintStatus
  @param  Expb_ExpBlueprint self
  @param  Clas_TargetStatus code
  @returns  the new object
**/
extern Expb_BlueprintStatus Expb_ExpBlueprint_NewBlueprintStatus_reqd(Expb_ExpBlueprint self, Clas_TargetStatus code);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprint self
  @param  Impl_ApplicationData value
**/
extern void *Expb_ExpBlueprint_RemoveApplicationData(Expb_ExpBlueprint self, Impl_ApplicationData value);

/**
  Remove for ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments 
performed on a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @param  Expe_Experiment value
**/
extern void *Expb_ExpBlueprint_RemoveExperiment(Expb_ExpBlueprint self, Expe_Experiment value);

/**
  SetAttr for ccp.lims.ExpBlueprint.ExpBlueprint
  @param  Expb_ExpBlueprint self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Expb_ExpBlueprint_Set(Expb_ExpBlueprint self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Expb_ExpBlueprint self
  @param  Acco_AccessObject value
**/
extern void *Expb_ExpBlueprint_SetAccess(Expb_ExpBlueprint self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Expb_ExpBlueprint self
  @param  ApiList values
**/
extern void *Expb_ExpBlueprint_SetApplicationData(Expb_ExpBlueprint self, ApiList values);

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.biochemicalFunction

The 
biochemical function within the biological pathway of the ExpBlueprint.
  @param  Expb_ExpBlueprint self
  @param  ApiString value
**/
extern void *Expb_ExpBlueprint_SetBiochemicalFunction(Expb_ExpBlueprint self, ApiString value);

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.biologicalProcess

The 
biological process where the ExpBlueprint is involved. e.g. 'Unknown'.
  @param  Expb_ExpBlueprint self
  @param  ApiString value
**/
extern void *Expb_ExpBlueprint_SetBiologicalProcess(Expb_ExpBlueprint self, ApiString value);

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.catalyticActivity

The 
official statement of catalytic activity.
  @param  Expb_ExpBlueprint self
  @param  ApiString value
**/
extern void *Expb_ExpBlueprint_SetCatalyticActivity(Expb_ExpBlueprint self, ApiString value);

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.cellLocation

The typical 
location of ExpBlueprint within a cell.
  @param  Expb_ExpBlueprint self
  @param  ApiString value
**/
extern void *Expb_ExpBlueprint_SetCellLocation(Expb_ExpBlueprint self, ApiString value);

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.commonName

The common name 
of ExpBlueprint.
  @param  Expb_ExpBlueprint self
  @param  ApiString value
**/
extern void *Expb_ExpBlueprint_SetCommonName(Expb_ExpBlueprint self, ApiString value);

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.details

Detail field for 
comments.
  @param  Expb_ExpBlueprint self
  @param  ApiString value
**/
extern void *Expb_ExpBlueprint_SetDetails(Expb_ExpBlueprint self, ApiString value);

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments 
performed on a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @param  ApiSet values
**/
extern void *Expb_ExpBlueprint_SetExperiments(Expb_ExpBlueprint self, ApiSet values);

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.functionDescription

The 
function description is an human-readable description of the biochemical 
function.
  @param  Expb_ExpBlueprint self
  @param  ApiString value
**/
extern void *Expb_ExpBlueprint_SetFunctionDescription(Expb_ExpBlueprint self, ApiString value);

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.localName

The local name of 
ExpBlueprint.
  @param  Expb_ExpBlueprint self
  @param  ApiString value
**/
extern void *Expb_ExpBlueprint_SetLocalName(Expb_ExpBlueprint self, ApiString value);

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.owner

Person who owns the 
ExpBlueprint.
  @param  Expb_ExpBlueprint self
  @param  Affi_Person value
**/
extern void *Expb_ExpBlueprint_SetOwner(Expb_ExpBlueprint self, Affi_Person value);

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.pathway

The description of 
the biological processes this ExpBlueprint is related to.
  @param  Expb_ExpBlueprint self
  @param  ApiString value
**/
extern void *Expb_ExpBlueprint_SetPathway(Expb_ExpBlueprint self, ApiString value);

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.serial

Unique identifier.
  @param  Expb_ExpBlueprint self
  @param  ApiInteger value
**/
extern void *Expb_ExpBlueprint_SetSerial(Expb_ExpBlueprint self, ApiInteger value);

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.similarityDetails

The 
information relating this ExpBlueprint to other 
organisms/genes/proteins.
  @param  Expb_ExpBlueprint self
  @param  ApiString value
**/
extern void *Expb_ExpBlueprint_SetSimilarityDetails(Expb_ExpBlueprint self, ApiString value);

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.systematicName

The 
systematic name of the ExpBlueprint.
  @param  Expb_ExpBlueprint self
  @param  ApiString value
**/
extern void *Expb_ExpBlueprint_SetSystematicName(Expb_ExpBlueprint self, ApiString value);

/**
  Set for ccp.lims.ExpBlueprint.ExpBlueprint.whyChosen

Details of the 
basis for the selection of this ExpBlueprint.
  @param  Expb_ExpBlueprint self
  @param  ApiString value
**/
extern void *Expb_ExpBlueprint_SetWhyChosen(Expb_ExpBlueprint self, ApiString value);

/**
  Sorted for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintComponents

child 
link to class BlueprintComponent
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern ApiList Expb_ExpBlueprint_SortedBlueprintComponents(Expb_ExpBlueprint self);

/**
  Sorted for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintDbRefs

child 
link to class BlueprintDbRef
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern ApiList Expb_ExpBlueprint_SortedBlueprintDbRefs(Expb_ExpBlueprint self);

/**
  Sorted for ccp.lims.ExpBlueprint.ExpBlueprint.blueprintStatuses

child 
link to class BlueprintStatus
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern ApiList Expb_ExpBlueprint_SortedBlueprintStatuses(Expb_ExpBlueprint self);

/**
  Sorted for ccp.lims.ExpBlueprint.ExpBlueprint.experiments

Experiments 
performed on a ExpBlueprint (objective).
  @param  Expb_ExpBlueprint self
  @returns   the result
**/
extern ApiList Expb_ExpBlueprint_SortedExperiments(Expb_ExpBlueprint self);

#endif /* __incl__ccp_api_lims_ExpBlueprint_ExpBlueprint_h__ */
