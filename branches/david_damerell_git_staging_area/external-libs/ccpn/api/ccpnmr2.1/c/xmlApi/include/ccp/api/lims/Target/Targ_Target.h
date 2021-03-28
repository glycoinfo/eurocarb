
#ifndef __incl__ccp_api_lims_Target_Target_h__
#define __incl__ccp_api_lims_Target_Target_h__

#include "ccp.h"

/*
  The information on the target.
*/

/* package ccp.api.lims.Target */

/**
  Add for ccp.lims.Target.Target.annotations

Targets annotated by 
Annotation.
  @param  Targ_Target self
  @param  Anno_Annotation value
**/
extern void *Targ_Target_AddAnnotation(Targ_Target self, Anno_Annotation value);

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_Target self
  @param  Impl_ApplicationData value
**/
extern void *Targ_Target_AddApplicationData(Targ_Target self, Impl_ApplicationData value);

/**
  Add for ccp.lims.Target.Target.blueprintComponents

BlueprintComponents 
linked to a single Target, representing the fact that different 
fragments of the same target may be studied in various contexts.
  @param  Targ_Target self
  @param  Expb_BlueprintComponent value
**/
extern void *Targ_Target_AddBlueprintComponent(Targ_Target self, Expb_BlueprintComponent value);

/**
  Add for ccp.lims.Target.Target.citations

Citations describing target.
  @param  Targ_Target self
  @param  Cita_Citation value
**/
extern void *Targ_Target_AddCitation(Targ_Target self, Cita_Citation value);

/**
  Add for ccp.lims.Target.Target.dbRefs
  @param  Targ_Target self
  @param  Dbr_Entry value
**/
extern void *Targ_Target_AddDbRef(Targ_Target self, Dbr_Entry value);

/**
  Add for ccp.lims.Target.Target.nucleicAcids

The nucleic acid 
MolComponent used to describe the Target
  @param  Targ_Target self
  @param  Refs_MolComponent value
**/
extern void *Targ_Target_AddNucleicAcid(Targ_Target self, Refs_MolComponent value);

/**
  Add for ccp.lims.Target.Target.targetGroups

The list of target groups 
to wich this target belongs.
  @param  Targ_Target self
  @param  Targ_TargetGroup value
**/
extern void *Targ_Target_AddTargetGroup(Targ_Target self, Targ_TargetGroup value);

/**
  CheckAllValid for ccp.lims.Target.Target
  @param  Targ_Target self
  @param  ApiBoolean complete
**/
extern void *Targ_Target_CheckAllValid(Targ_Target self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.Target.Target
  @param  Targ_Target self
  @param  ApiBoolean complete
**/
extern void *Targ_Target_CheckValid(Targ_Target self, ApiBoolean complete);

/**
  FindAll for ccp.lims.Target.Target.annotations

Targets annotated by 
Annotation.
  @param  Targ_Target self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllAnnotations(Targ_Target self, ApiMap conditions);

/**
  FindAll for ccp.lims.Target.Target.annotations

Targets annotated by 
Annotation.
  @param  Targ_Target self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllAnnotations_keyval0(Targ_Target self);

/**
  FindAll for ccp.lims.Target.Target.annotations

Targets annotated by 
Annotation.
  @param  Targ_Target self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllAnnotations_keyval1(Targ_Target self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Target.Target.annotations

Targets annotated by 
Annotation.
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllAnnotations_keyval2(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Target.Target.annotations

Targets annotated by 
Annotation.
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllAnnotations_keyval3(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Target.Target.annotations

Targets annotated by 
Annotation.
  @param  Targ_Target self
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
extern ApiSet Targ_Target_FindAllAnnotations_keyval4(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_Target self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Targ_Target_FindAllApplicationData(Targ_Target self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_Target self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Targ_Target_FindAllApplicationData_keyval0(Targ_Target self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_Target self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Targ_Target_FindAllApplicationData_keyval1(Targ_Target self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Targ_Target_FindAllApplicationData_keyval2(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Targ_Target_FindAllApplicationData_keyval3(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_Target self
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
extern ApiList Targ_Target_FindAllApplicationData_keyval4(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
ccp.lims.Target.Target.blueprintComponents

BlueprintComponents linked 
to a single Target, representing the fact that different fragments of 
the same target may be studied in various contexts.
  @param  Targ_Target self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllBlueprintComponents(Targ_Target self, ApiMap conditions);

/**
  FindAll for 
ccp.lims.Target.Target.blueprintComponents

BlueprintComponents linked 
to a single Target, representing the fact that different fragments of 
the same target may be studied in various contexts.
  @param  Targ_Target self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllBlueprintComponents_keyval0(Targ_Target self);

/**
  FindAll for 
ccp.lims.Target.Target.blueprintComponents

BlueprintComponents linked 
to a single Target, representing the fact that different fragments of 
the same target may be studied in various contexts.
  @param  Targ_Target self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllBlueprintComponents_keyval1(Targ_Target self, char * key, ApiObject value);

/**
  FindAll for 
ccp.lims.Target.Target.blueprintComponents

BlueprintComponents linked 
to a single Target, representing the fact that different fragments of 
the same target may be studied in various contexts.
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllBlueprintComponents_keyval2(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
ccp.lims.Target.Target.blueprintComponents

BlueprintComponents linked 
to a single Target, representing the fact that different fragments of 
the same target may be studied in various contexts.
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllBlueprintComponents_keyval3(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
ccp.lims.Target.Target.blueprintComponents

BlueprintComponents linked 
to a single Target, representing the fact that different fragments of 
the same target may be studied in various contexts.
  @param  Targ_Target self
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
extern ApiSet Targ_Target_FindAllBlueprintComponents_keyval4(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Target.Target.citations

Citations describing 
target.
  @param  Targ_Target self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllCitations(Targ_Target self, ApiMap conditions);

/**
  FindAll for ccp.lims.Target.Target.citations

Citations describing 
target.
  @param  Targ_Target self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllCitations_keyval0(Targ_Target self);

/**
  FindAll for ccp.lims.Target.Target.citations

Citations describing 
target.
  @param  Targ_Target self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllCitations_keyval1(Targ_Target self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Target.Target.citations

Citations describing 
target.
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllCitations_keyval2(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Target.Target.citations

Citations describing 
target.
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllCitations_keyval3(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Target.Target.citations

Citations describing 
target.
  @param  Targ_Target self
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
extern ApiSet Targ_Target_FindAllCitations_keyval4(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Target.Target.dbRefs
  @param  Targ_Target self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllDbRefs(Targ_Target self, ApiMap conditions);

/**
  FindAll for ccp.lims.Target.Target.dbRefs
  @param  Targ_Target self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllDbRefs_keyval0(Targ_Target self);

/**
  FindAll for ccp.lims.Target.Target.dbRefs
  @param  Targ_Target self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllDbRefs_keyval1(Targ_Target self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Target.Target.dbRefs
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllDbRefs_keyval2(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Target.Target.dbRefs
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllDbRefs_keyval3(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Target.Target.dbRefs
  @param  Targ_Target self
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
extern ApiSet Targ_Target_FindAllDbRefs_keyval4(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Target.Target.nucleicAcids

The nucleic acid 
MolComponent used to describe the Target
  @param  Targ_Target self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllNucleicAcids(Targ_Target self, ApiMap conditions);

/**
  FindAll for ccp.lims.Target.Target.nucleicAcids

The nucleic acid 
MolComponent used to describe the Target
  @param  Targ_Target self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllNucleicAcids_keyval0(Targ_Target self);

/**
  FindAll for ccp.lims.Target.Target.nucleicAcids

The nucleic acid 
MolComponent used to describe the Target
  @param  Targ_Target self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllNucleicAcids_keyval1(Targ_Target self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Target.Target.nucleicAcids

The nucleic acid 
MolComponent used to describe the Target
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllNucleicAcids_keyval2(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Target.Target.nucleicAcids

The nucleic acid 
MolComponent used to describe the Target
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllNucleicAcids_keyval3(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Target.Target.nucleicAcids

The nucleic acid 
MolComponent used to describe the Target
  @param  Targ_Target self
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
extern ApiSet Targ_Target_FindAllNucleicAcids_keyval4(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Target.Target.projects

The list of project to wich 
this target belongs.
  @param  Targ_Target self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllProjects(Targ_Target self, ApiMap conditions);

/**
  FindAll for ccp.lims.Target.Target.projects

The list of project to wich 
this target belongs.
  @param  Targ_Target self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllProjects_keyval0(Targ_Target self);

/**
  FindAll for ccp.lims.Target.Target.projects

The list of project to wich 
this target belongs.
  @param  Targ_Target self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllProjects_keyval1(Targ_Target self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Target.Target.projects

The list of project to wich 
this target belongs.
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllProjects_keyval2(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Target.Target.projects

The list of project to wich 
this target belongs.
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllProjects_keyval3(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Target.Target.projects

The list of project to wich 
this target belongs.
  @param  Targ_Target self
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
extern ApiSet Targ_Target_FindAllProjects_keyval4(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Target.Target.targetGroups

The list of target 
groups to wich this target belongs.
  @param  Targ_Target self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllTargetGroups(Targ_Target self, ApiMap conditions);

/**
  FindAll for ccp.lims.Target.Target.targetGroups

The list of target 
groups to wich this target belongs.
  @param  Targ_Target self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllTargetGroups_keyval0(Targ_Target self);

/**
  FindAll for ccp.lims.Target.Target.targetGroups

The list of target 
groups to wich this target belongs.
  @param  Targ_Target self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllTargetGroups_keyval1(Targ_Target self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Target.Target.targetGroups

The list of target 
groups to wich this target belongs.
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllTargetGroups_keyval2(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Target.Target.targetGroups

The list of target 
groups to wich this target belongs.
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllTargetGroups_keyval3(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Target.Target.targetGroups

The list of target 
groups to wich this target belongs.
  @param  Targ_Target self
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
extern ApiSet Targ_Target_FindAllTargetGroups_keyval4(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Target.Target.targetStatus

child link to class 
TargetStatus
  @param  Targ_Target self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllTargetStatus(Targ_Target self, ApiMap conditions);

/**
  FindAll for ccp.lims.Target.Target.targetStatus

child link to class 
TargetStatus
  @param  Targ_Target self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllTargetStatus_keyval0(Targ_Target self);

/**
  FindAll for ccp.lims.Target.Target.targetStatus

child link to class 
TargetStatus
  @param  Targ_Target self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllTargetStatus_keyval1(Targ_Target self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Target.Target.targetStatus

child link to class 
TargetStatus
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllTargetStatus_keyval2(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Target.Target.targetStatus

child link to class 
TargetStatus
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_Target_FindAllTargetStatus_keyval3(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Target.Target.targetStatus

child link to class 
TargetStatus
  @param  Targ_Target self
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
extern ApiSet Targ_Target_FindAllTargetStatus_keyval4(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Target.Target.annotations

Targets annotated by 
Annotation.
  @param  Targ_Target self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anno_Annotation Targ_Target_FindFirstAnnotation(Targ_Target self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Target.Target.annotations

Targets annotated by 
Annotation.
  @param  Targ_Target self
  @returns  the first value that satisfies the conditions 
**/
extern Anno_Annotation Targ_Target_FindFirstAnnotation_keyval0(Targ_Target self);

/**
  FindFirst for ccp.lims.Target.Target.annotations

Targets annotated by 
Annotation.
  @param  Targ_Target self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anno_Annotation Targ_Target_FindFirstAnnotation_keyval1(Targ_Target self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Target.Target.annotations

Targets annotated by 
Annotation.
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anno_Annotation Targ_Target_FindFirstAnnotation_keyval2(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Target.Target.annotations

Targets annotated by 
Annotation.
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anno_Annotation Targ_Target_FindFirstAnnotation_keyval3(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Target.Target.annotations

Targets annotated by 
Annotation.
  @param  Targ_Target self
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
extern Anno_Annotation Targ_Target_FindFirstAnnotation_keyval4(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_Target self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Targ_Target_FindFirstApplicationData(Targ_Target self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_Target self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Targ_Target_FindFirstApplicationData_keyval0(Targ_Target self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_Target self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Targ_Target_FindFirstApplicationData_keyval1(Targ_Target self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Targ_Target_FindFirstApplicationData_keyval2(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Targ_Target_FindFirstApplicationData_keyval3(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_Target self
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
extern Impl_ApplicationData Targ_Target_FindFirstApplicationData_keyval4(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
ccp.lims.Target.Target.blueprintComponents

BlueprintComponents linked 
to a single Target, representing the fact that different fragments of 
the same target may be studied in various contexts.
  @param  Targ_Target self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Targ_Target_FindFirstBlueprintComponent(Targ_Target self, ApiMap conditions);

/**
  FindFirst for 
ccp.lims.Target.Target.blueprintComponents

BlueprintComponents linked 
to a single Target, representing the fact that different fragments of 
the same target may be studied in various contexts.
  @param  Targ_Target self
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Targ_Target_FindFirstBlueprintComponent_keyval0(Targ_Target self);

/**
  FindFirst for 
ccp.lims.Target.Target.blueprintComponents

BlueprintComponents linked 
to a single Target, representing the fact that different fragments of 
the same target may be studied in various contexts.
  @param  Targ_Target self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Targ_Target_FindFirstBlueprintComponent_keyval1(Targ_Target self, char * key, ApiObject value);

/**
  FindFirst for 
ccp.lims.Target.Target.blueprintComponents

BlueprintComponents linked 
to a single Target, representing the fact that different fragments of 
the same target may be studied in various contexts.
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Targ_Target_FindFirstBlueprintComponent_keyval2(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
ccp.lims.Target.Target.blueprintComponents

BlueprintComponents linked 
to a single Target, representing the fact that different fragments of 
the same target may be studied in various contexts.
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintComponent Targ_Target_FindFirstBlueprintComponent_keyval3(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
ccp.lims.Target.Target.blueprintComponents

BlueprintComponents linked 
to a single Target, representing the fact that different fragments of 
the same target may be studied in various contexts.
  @param  Targ_Target self
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
extern Expb_BlueprintComponent Targ_Target_FindFirstBlueprintComponent_keyval4(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Target.Target.citations

Citations describing 
target.
  @param  Targ_Target self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Targ_Target_FindFirstCitation(Targ_Target self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Target.Target.citations

Citations describing 
target.
  @param  Targ_Target self
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Targ_Target_FindFirstCitation_keyval0(Targ_Target self);

/**
  FindFirst for ccp.lims.Target.Target.citations

Citations describing 
target.
  @param  Targ_Target self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Targ_Target_FindFirstCitation_keyval1(Targ_Target self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Target.Target.citations

Citations describing 
target.
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Targ_Target_FindFirstCitation_keyval2(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Target.Target.citations

Citations describing 
target.
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Targ_Target_FindFirstCitation_keyval3(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Target.Target.citations

Citations describing 
target.
  @param  Targ_Target self
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
extern Cita_Citation Targ_Target_FindFirstCitation_keyval4(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Target.Target.dbRefs
  @param  Targ_Target self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Dbr_Entry Targ_Target_FindFirstDbRef(Targ_Target self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Target.Target.dbRefs
  @param  Targ_Target self
  @returns  the first value that satisfies the conditions 
**/
extern Dbr_Entry Targ_Target_FindFirstDbRef_keyval0(Targ_Target self);

/**
  FindFirst for ccp.lims.Target.Target.dbRefs
  @param  Targ_Target self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Dbr_Entry Targ_Target_FindFirstDbRef_keyval1(Targ_Target self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Target.Target.dbRefs
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Dbr_Entry Targ_Target_FindFirstDbRef_keyval2(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Target.Target.dbRefs
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Dbr_Entry Targ_Target_FindFirstDbRef_keyval3(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Target.Target.dbRefs
  @param  Targ_Target self
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
extern Dbr_Entry Targ_Target_FindFirstDbRef_keyval4(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Target.Target.nucleicAcids

The nucleic acid 
MolComponent used to describe the Target
  @param  Targ_Target self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolComponent Targ_Target_FindFirstNucleicAcid(Targ_Target self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Target.Target.nucleicAcids

The nucleic acid 
MolComponent used to describe the Target
  @param  Targ_Target self
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolComponent Targ_Target_FindFirstNucleicAcid_keyval0(Targ_Target self);

/**
  FindFirst for ccp.lims.Target.Target.nucleicAcids

The nucleic acid 
MolComponent used to describe the Target
  @param  Targ_Target self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolComponent Targ_Target_FindFirstNucleicAcid_keyval1(Targ_Target self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Target.Target.nucleicAcids

The nucleic acid 
MolComponent used to describe the Target
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolComponent Targ_Target_FindFirstNucleicAcid_keyval2(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Target.Target.nucleicAcids

The nucleic acid 
MolComponent used to describe the Target
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Refs_MolComponent Targ_Target_FindFirstNucleicAcid_keyval3(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Target.Target.nucleicAcids

The nucleic acid 
MolComponent used to describe the Target
  @param  Targ_Target self
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
extern Refs_MolComponent Targ_Target_FindFirstNucleicAcid_keyval4(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Target.Target.projects

The list of project to 
wich this target belongs.
  @param  Targ_Target self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Project Targ_Target_FindFirstProject(Targ_Target self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Target.Target.projects

The list of project to 
wich this target belongs.
  @param  Targ_Target self
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Project Targ_Target_FindFirstProject_keyval0(Targ_Target self);

/**
  FindFirst for ccp.lims.Target.Target.projects

The list of project to 
wich this target belongs.
  @param  Targ_Target self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Project Targ_Target_FindFirstProject_keyval1(Targ_Target self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Target.Target.projects

The list of project to 
wich this target belongs.
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Project Targ_Target_FindFirstProject_keyval2(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Target.Target.projects

The list of project to 
wich this target belongs.
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Project Targ_Target_FindFirstProject_keyval3(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Target.Target.projects

The list of project to 
wich this target belongs.
  @param  Targ_Target self
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
extern Targ_Project Targ_Target_FindFirstProject_keyval4(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Target.Target.targetGroups

The list of target 
groups to wich this target belongs.
  @param  Targ_Target self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Targ_Target_FindFirstTargetGroup(Targ_Target self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Target.Target.targetGroups

The list of target 
groups to wich this target belongs.
  @param  Targ_Target self
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Targ_Target_FindFirstTargetGroup_keyval0(Targ_Target self);

/**
  FindFirst for ccp.lims.Target.Target.targetGroups

The list of target 
groups to wich this target belongs.
  @param  Targ_Target self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Targ_Target_FindFirstTargetGroup_keyval1(Targ_Target self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Target.Target.targetGroups

The list of target 
groups to wich this target belongs.
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Targ_Target_FindFirstTargetGroup_keyval2(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Target.Target.targetGroups

The list of target 
groups to wich this target belongs.
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Targ_Target_FindFirstTargetGroup_keyval3(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Target.Target.targetGroups

The list of target 
groups to wich this target belongs.
  @param  Targ_Target self
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
extern Targ_TargetGroup Targ_Target_FindFirstTargetGroup_keyval4(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Target.Target.targetStatus

child link to class 
TargetStatus
  @param  Targ_Target self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetStatus Targ_Target_FindFirstTargetStatus(Targ_Target self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Target.Target.targetStatus

child link to class 
TargetStatus
  @param  Targ_Target self
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetStatus Targ_Target_FindFirstTargetStatus_keyval0(Targ_Target self);

/**
  FindFirst for ccp.lims.Target.Target.targetStatus

child link to class 
TargetStatus
  @param  Targ_Target self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetStatus Targ_Target_FindFirstTargetStatus_keyval1(Targ_Target self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Target.Target.targetStatus

child link to class 
TargetStatus
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetStatus Targ_Target_FindFirstTargetStatus_keyval2(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Target.Target.targetStatus

child link to class 
TargetStatus
  @param  Targ_Target self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetStatus Targ_Target_FindFirstTargetStatus_keyval3(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Target.Target.targetStatus

child link to class 
TargetStatus
  @param  Targ_Target self
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
extern Targ_TargetStatus Targ_Target_FindFirstTargetStatus_keyval4(Targ_Target self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.Target.Target
  @param  Targ_Target self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Targ_Target_Get(Targ_Target self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Targ_Target self
  @returns   the result
**/
extern Acco_AccessObject Targ_Target_GetAccess(Targ_Target self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Targ_Target self
  @returns   the result
**/
extern Acco_AccessObject Targ_Target_GetActiveAccess(Targ_Target self);

/**
  Get for ccp.lims.Target.Target.annotations

Targets annotated by 
Annotation.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiSet Targ_Target_GetAnnotations(Targ_Target self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_Target self
  @returns   the result
**/
extern ApiList Targ_Target_GetApplicationData(Targ_Target self);

/**
  Get for ccp.lims.Target.Target.biochemicalFunction

The biochemical 
function within the biological pathway of the target. e.g. 'Cytosine 
deaminase'.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiString Targ_Target_GetBiochemicalFunction(Targ_Target self);

/**
  Get for ccp.lims.Target.Target.biologicalProcess

The biological process 
where the target is involved. e.g. 'Unknown'.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiString Targ_Target_GetBiologicalProcess(Targ_Target self);

/**
  Get for ccp.lims.Target.Target.blueprintComponents

BlueprintComponents 
linked to a single Target, representing the fact that different 
fragments of the same target may be studied in various contexts.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiSet Targ_Target_GetBlueprintComponents(Targ_Target self);

/**
  GetByKey for ccp.lims.Target.Target
  @param  Targ_Target self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Targ_Target Targ_Target_GetByKey(Targ_Target self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.lims.Target.Target.catalyticActivity

The official statement 
of catalytic activity. e.g. 'CYTOSINE + H(2)O = URACIL + NH(3)'.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiString Targ_Target_GetCatalyticActivity(Targ_Target self);

/**
  Get for ccp.lims.Target.Target.cellLocation

The typical location of the 
target within a cell. e.g. 'cytoplasmic'.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiString Targ_Target_GetCellLocation(Targ_Target self);

/**
  Get for ccp.lims.Target.Target.citations

Citations describing target.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiSet Targ_Target_GetCitations(Targ_Target self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiString Targ_Target_GetClassName(Targ_Target self);

/**
  Get for ccp.lims.Target.Target.commonName

The common name of the target 
is the name used to identify the target e.g. 'Endonuclease IV'.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiString Targ_Target_GetCommonName(Targ_Target self);

/**
  Get for ccp.lims.Target.Target.creator

The person who is in charge for 
this target or who created this target.
  @param  Targ_Target self
  @returns   the result
**/
extern Affi_Person Targ_Target_GetCreator(Targ_Target self);

/**
  Get for ccp.lims.Target.Target.dbRefs
  @param  Targ_Target self
  @returns   the result
**/
extern ApiSet Targ_Target_GetDbRefs(Targ_Target self);

/**
  Get for ccp.lims.Target.Target.details

Detail field for comments.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiString Targ_Target_GetDetails(Targ_Target self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiList Targ_Target_GetFieldNames(Targ_Target self);

/**
  GetFullKey for ccp.lims.Target.Target
  @param  Targ_Target self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Targ_Target_GetFullKey(Targ_Target self, ApiBoolean useGuid);

/**
  Get for ccp.lims.Target.Target.functionDescription

The function 
description is an human-readable description of the biochemical 
function. e.g. 'Converts cytosine to uracil or 5-methylcytosine to 
thymine by deaminating carbon number 4'.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiString Targ_Target_GetFunctionDescription(Targ_Target self);

/**
  Get for ccp.lims.Target.Target.geneName

The official name of the gene 
for this target. e.g. 'fcy1'.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiString Targ_Target_GetGeneName(Targ_Target self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiBoolean Targ_Target_GetInConstructor(Targ_Target self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiBoolean Targ_Target_GetIsDeleted(Targ_Target self);

/**
  GetLocalKey for ccp.lims.Target.Target
  @param  Targ_Target self
  @returns  Local object key
**/
extern ApiObject Targ_Target_GetLocalKey(Targ_Target self);

/**
  Get for ccp.lims.Target.Target.localName

Local name is what the target 
is known as in the lab e.g. 'A6'.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiString Targ_Target_GetLocalName(Targ_Target self);

/**
  Get for ccp.lims.Target.Target.nucleicAcids

The nucleic acid 
MolComponent used to describe the Target
  @param  Targ_Target self
  @returns   the result
**/
extern ApiSet Targ_Target_GetNucleicAcids(Targ_Target self);

/**
  Get for ccp.lims.Target.Target.orf

Open Reading Frame name.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiString Targ_Target_GetOrf(Targ_Target self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiString Targ_Target_GetPackageName(Targ_Target self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Targ_Target self
  @returns   the result
**/
extern ApiString Targ_Target_GetPackageShortName(Targ_Target self);

/**
  Get for ccp.lims.Target.Target.parent

link to parent object - synonym 
for targetStore
  @param  Targ_Target self
  @returns   the result
**/
extern Targ_TargetStore Targ_Target_GetParent(Targ_Target self);

/**
  Get for ccp.lims.Target.Target.pathway

The description of the 
biological processes this target is related to. e.g. 'Pyrimidine salvage 
pathway'.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiString Targ_Target_GetPathway(Targ_Target self);

/**
  Get for ccp.lims.Target.Target.projects

The list of project to wich 
this target belongs.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiSet Targ_Target_GetProjects(Targ_Target self);

/**
  Get for ccp.lims.Target.Target.protein

The MolComponent used to 
describe the Target protein
  @param  Targ_Target self
  @returns   the result
**/
extern Refs_MolComponent Targ_Target_GetProtein(Targ_Target self);

/**
  Get for ccp.lims.Target.Target.proteinName

The official name of the 
protein for this target. By default: 'theoretical protein'. e.g. 
'Cytosine deaminase'.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiString Targ_Target_GetProteinName(Targ_Target self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiString Targ_Target_GetQualifiedName(Targ_Target self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Targ_Target self
  @returns   the result
**/
extern Impl_MemopsRoot Targ_Target_GetRoot(Targ_Target self);

/**
  getter for derived attribute seqString
  @param  Targ_Target self
  @returns   the result
**/
extern ApiString Targ_Target_GetSeqString(Targ_Target self);

/**
  Get for ccp.lims.Target.Target.serial

Unique identifier.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiInteger Targ_Target_GetSerial(Targ_Target self);

/**
  Get for ccp.lims.Target.Target.similarityDetails

Information relating 
this target to other organisms/genes/proteins. e.g. 'Belongs to the 
cytidine and deoxycytidylate deaminases family.'
  @param  Targ_Target self
  @returns   the result
**/
extern ApiString Targ_Target_GetSimilarityDetails(Targ_Target self);

/**
  Get for ccp.lims.Target.Target.species

Specie of target.
  @param  Targ_Target self
  @returns   the result
**/
extern Taxo_NaturalSource Targ_Target_GetSpecies(Targ_Target self);

/**
  Get for ccp.lims.Target.Target.systematicName

The systematic name of 
the target is the 'proper' scientific name e.g. 'Endodeoxyribonuclease 
IV'.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiString Targ_Target_GetSystematicName(Targ_Target self);

/**
  Get for ccp.lims.Target.Target.targetGroups

The list of target groups 
to wich this target belongs.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiSet Targ_Target_GetTargetGroups(Targ_Target self);

/**
  Get for ccp.lims.Target.Target.targetStatus

child link to class 
TargetStatus
  @param  Targ_Target self
  @returns   the result
**/
extern ApiSet Targ_Target_GetTargetStatus(Targ_Target self);

/**
  Get for ccp.lims.Target.Target.targetStore

parent link
  @param  Targ_Target self
  @returns   the result
**/
extern Targ_TargetStore Targ_Target_GetTargetStore(Targ_Target self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Targ_Target self
  @returns   the result
**/
extern Impl_TopObject Targ_Target_GetTopObject(Targ_Target self);

/**
  Get for ccp.lims.Target.Target.topology

The topology of the target is a 
general description of its topology or if it is a membrane protein, the 
topology could refer to the membrane one predicted by the TMHMM program 
or obtained by experimental observation.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiString Targ_Target_GetTopology(Targ_Target self);

/**
  Get for ccp.lims.Target.Target.whyChosen

Details of the basis for the 
selection of this target.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiString Targ_Target_GetWhyChosen(Targ_Target self);

/**
  Constructor for ccp.lims.Target.Target
  @param  Targ_TargetStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Targ_Target Targ_Target_Init(Targ_TargetStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.Target.Target
  @param  Targ_TargetStore parent
  @param  char * commonName
  @param  Refs_MolComponent protein
  @param  char * whyChosen
  @returns  the new object
**/
extern Targ_Target Targ_Target_Init_reqd(Targ_TargetStore parent, char * commonName, Refs_MolComponent protein, char * whyChosen);

/**
  Factory function to create ccp.lims.Target.TargetStatus
  @param  Targ_Target self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Targ_TargetStatus Targ_Target_NewTargetStatus(Targ_Target self, ApiMap attrlinks);

/**
  Factory function to create ccp.lims.Target.TargetStatus
  @param  Targ_Target self
  @param  Clas_TargetStatus code
  @param  char * date
  @returns  the new object
**/
extern Targ_TargetStatus Targ_Target_NewTargetStatus_reqd(Targ_Target self, Clas_TargetStatus code, char * date);

/**
  Remove for ccp.lims.Target.Target.annotations

Targets annotated by 
Annotation.
  @param  Targ_Target self
  @param  Anno_Annotation value
**/
extern void *Targ_Target_RemoveAnnotation(Targ_Target self, Anno_Annotation value);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_Target self
  @param  Impl_ApplicationData value
**/
extern void *Targ_Target_RemoveApplicationData(Targ_Target self, Impl_ApplicationData value);

/**
  Remove for 
ccp.lims.Target.Target.blueprintComponents

BlueprintComponents linked 
to a single Target, representing the fact that different fragments of 
the same target may be studied in various contexts.
  @param  Targ_Target self
  @param  Expb_BlueprintComponent value
**/
extern void *Targ_Target_RemoveBlueprintComponent(Targ_Target self, Expb_BlueprintComponent value);

/**
  Remove for ccp.lims.Target.Target.citations

Citations describing 
target.
  @param  Targ_Target self
  @param  Cita_Citation value
**/
extern void *Targ_Target_RemoveCitation(Targ_Target self, Cita_Citation value);

/**
  Remove for ccp.lims.Target.Target.dbRefs
  @param  Targ_Target self
  @param  Dbr_Entry value
**/
extern void *Targ_Target_RemoveDbRef(Targ_Target self, Dbr_Entry value);

/**
  Remove for ccp.lims.Target.Target.nucleicAcids

The nucleic acid 
MolComponent used to describe the Target
  @param  Targ_Target self
  @param  Refs_MolComponent value
**/
extern void *Targ_Target_RemoveNucleicAcid(Targ_Target self, Refs_MolComponent value);

/**
  Remove for ccp.lims.Target.Target.targetGroups

The list of target 
groups to wich this target belongs.
  @param  Targ_Target self
  @param  Targ_TargetGroup value
**/
extern void *Targ_Target_RemoveTargetGroup(Targ_Target self, Targ_TargetGroup value);

/**
  SetAttr for ccp.lims.Target.Target
  @param  Targ_Target self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Targ_Target_Set(Targ_Target self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Targ_Target self
  @param  Acco_AccessObject value
**/
extern void *Targ_Target_SetAccess(Targ_Target self, Acco_AccessObject value);

/**
  Set for ccp.lims.Target.Target.annotations

Targets annotated by 
Annotation.
  @param  Targ_Target self
  @param  ApiSet values
**/
extern void *Targ_Target_SetAnnotations(Targ_Target self, ApiSet values);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_Target self
  @param  ApiList values
**/
extern void *Targ_Target_SetApplicationData(Targ_Target self, ApiList values);

/**
  Set for ccp.lims.Target.Target.biochemicalFunction

The biochemical 
function within the biological pathway of the target. e.g. 'Cytosine 
deaminase'.
  @param  Targ_Target self
  @param  ApiString value
**/
extern void *Targ_Target_SetBiochemicalFunction(Targ_Target self, ApiString value);

/**
  Set for ccp.lims.Target.Target.biologicalProcess

The biological process 
where the target is involved. e.g. 'Unknown'.
  @param  Targ_Target self
  @param  ApiString value
**/
extern void *Targ_Target_SetBiologicalProcess(Targ_Target self, ApiString value);

/**
  Set for ccp.lims.Target.Target.blueprintComponents

BlueprintComponents 
linked to a single Target, representing the fact that different 
fragments of the same target may be studied in various contexts.
  @param  Targ_Target self
  @param  ApiSet values
**/
extern void *Targ_Target_SetBlueprintComponents(Targ_Target self, ApiSet values);

/**
  Set for ccp.lims.Target.Target.catalyticActivity

The official statement 
of catalytic activity. e.g. 'CYTOSINE + H(2)O = URACIL + NH(3)'.
  @param  Targ_Target self
  @param  ApiString value
**/
extern void *Targ_Target_SetCatalyticActivity(Targ_Target self, ApiString value);

/**
  Set for ccp.lims.Target.Target.cellLocation

The typical location of the 
target within a cell. e.g. 'cytoplasmic'.
  @param  Targ_Target self
  @param  ApiString value
**/
extern void *Targ_Target_SetCellLocation(Targ_Target self, ApiString value);

/**
  Set for ccp.lims.Target.Target.citations

Citations describing target.
  @param  Targ_Target self
  @param  ApiSet values
**/
extern void *Targ_Target_SetCitations(Targ_Target self, ApiSet values);

/**
  Set for ccp.lims.Target.Target.commonName

The common name of the target 
is the name used to identify the target e.g. 'Endonuclease IV'.
  @param  Targ_Target self
  @param  ApiString value
**/
extern void *Targ_Target_SetCommonName(Targ_Target self, ApiString value);

/**
  Set for ccp.lims.Target.Target.creator

The person who is in charge for 
this target or who created this target.
  @param  Targ_Target self
  @param  Affi_Person value
**/
extern void *Targ_Target_SetCreator(Targ_Target self, Affi_Person value);

/**
  Set for ccp.lims.Target.Target.dbRefs
  @param  Targ_Target self
  @param  ApiSet values
**/
extern void *Targ_Target_SetDbRefs(Targ_Target self, ApiSet values);

/**
  Set for ccp.lims.Target.Target.details

Detail field for comments.
  @param  Targ_Target self
  @param  ApiString value
**/
extern void *Targ_Target_SetDetails(Targ_Target self, ApiString value);

/**
  Set for ccp.lims.Target.Target.functionDescription

The function 
description is an human-readable description of the biochemical 
function. e.g. 'Converts cytosine to uracil or 5-methylcytosine to 
thymine by deaminating carbon number 4'.
  @param  Targ_Target self
  @param  ApiString value
**/
extern void *Targ_Target_SetFunctionDescription(Targ_Target self, ApiString value);

/**
  Set for ccp.lims.Target.Target.geneName

The official name of the gene 
for this target. e.g. 'fcy1'.
  @param  Targ_Target self
  @param  ApiString value
**/
extern void *Targ_Target_SetGeneName(Targ_Target self, ApiString value);

/**
  Set for ccp.lims.Target.Target.localName

Local name is what the target 
is known as in the lab e.g. 'A6'.
  @param  Targ_Target self
  @param  ApiString value
**/
extern void *Targ_Target_SetLocalName(Targ_Target self, ApiString value);

/**
  Set for ccp.lims.Target.Target.nucleicAcids

The nucleic acid 
MolComponent used to describe the Target
  @param  Targ_Target self
  @param  ApiSet values
**/
extern void *Targ_Target_SetNucleicAcids(Targ_Target self, ApiSet values);

/**
  Set for ccp.lims.Target.Target.orf

Open Reading Frame name.
  @param  Targ_Target self
  @param  ApiString value
**/
extern void *Targ_Target_SetOrf(Targ_Target self, ApiString value);

/**
  Set for ccp.lims.Target.Target.pathway

The description of the 
biological processes this target is related to. e.g. 'Pyrimidine salvage 
pathway'.
  @param  Targ_Target self
  @param  ApiString value
**/
extern void *Targ_Target_SetPathway(Targ_Target self, ApiString value);

/**
  Set for ccp.lims.Target.Target.projects

The list of project to wich 
this target belongs.
  @param  Targ_Target self
  @param  ApiSet values
**/
extern void *Targ_Target_SetProjects(Targ_Target self, ApiSet values);

/**
  Set for ccp.lims.Target.Target.protein

The MolComponent used to 
describe the Target protein
  @param  Targ_Target self
  @param  Refs_MolComponent value
**/
extern void *Targ_Target_SetProtein(Targ_Target self, Refs_MolComponent value);

/**
  Set for ccp.lims.Target.Target.proteinName

The official name of the 
protein for this target. By default: 'theoretical protein'. e.g. 
'Cytosine deaminase'.
  @param  Targ_Target self
  @param  ApiString value
**/
extern void *Targ_Target_SetProteinName(Targ_Target self, ApiString value);

/**
  Set for ccp.lims.Target.Target.serial

Unique identifier.
  @param  Targ_Target self
  @param  ApiInteger value
**/
extern void *Targ_Target_SetSerial(Targ_Target self, ApiInteger value);

/**
  Set for ccp.lims.Target.Target.similarityDetails

Information relating 
this target to other organisms/genes/proteins. e.g. 'Belongs to the 
cytidine and deoxycytidylate deaminases family.'
  @param  Targ_Target self
  @param  ApiString value
**/
extern void *Targ_Target_SetSimilarityDetails(Targ_Target self, ApiString value);

/**
  Set for ccp.lims.Target.Target.species

Specie of target.
  @param  Targ_Target self
  @param  Taxo_NaturalSource value
**/
extern void *Targ_Target_SetSpecies(Targ_Target self, Taxo_NaturalSource value);

/**
  Set for ccp.lims.Target.Target.systematicName

The systematic name of 
the target is the 'proper' scientific name e.g. 'Endodeoxyribonuclease 
IV'.
  @param  Targ_Target self
  @param  ApiString value
**/
extern void *Targ_Target_SetSystematicName(Targ_Target self, ApiString value);

/**
  Set for ccp.lims.Target.Target.targetGroups

The list of target groups 
to wich this target belongs.
  @param  Targ_Target self
  @param  ApiSet values
**/
extern void *Targ_Target_SetTargetGroups(Targ_Target self, ApiSet values);

/**
  Set for ccp.lims.Target.Target.topology

The topology of the target is a 
general description of its topology or if it is a membrane protein, the 
topology could refer to the membrane one predicted by the TMHMM program 
or obtained by experimental observation.
  @param  Targ_Target self
  @param  ApiString value
**/
extern void *Targ_Target_SetTopology(Targ_Target self, ApiString value);

/**
  Set for ccp.lims.Target.Target.whyChosen

Details of the basis for the 
selection of this target.
  @param  Targ_Target self
  @param  ApiString value
**/
extern void *Targ_Target_SetWhyChosen(Targ_Target self, ApiString value);

/**
  Sorted for ccp.lims.Target.Target.annotations

Targets annotated by 
Annotation.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiList Targ_Target_SortedAnnotations(Targ_Target self);

/**
  Sorted for 
ccp.lims.Target.Target.blueprintComponents

BlueprintComponents linked 
to a single Target, representing the fact that different fragments of 
the same target may be studied in various contexts.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiList Targ_Target_SortedBlueprintComponents(Targ_Target self);

/**
  Sorted for ccp.lims.Target.Target.citations

Citations describing 
target.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiList Targ_Target_SortedCitations(Targ_Target self);

/**
  Sorted for ccp.lims.Target.Target.dbRefs
  @param  Targ_Target self
  @returns   the result
**/
extern ApiList Targ_Target_SortedDbRefs(Targ_Target self);

/**
  Sorted for ccp.lims.Target.Target.nucleicAcids

The nucleic acid 
MolComponent used to describe the Target
  @param  Targ_Target self
  @returns   the result
**/
extern ApiList Targ_Target_SortedNucleicAcids(Targ_Target self);

/**
  Sorted for ccp.lims.Target.Target.projects

The list of project to wich 
this target belongs.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiList Targ_Target_SortedProjects(Targ_Target self);

/**
  Sorted for ccp.lims.Target.Target.targetGroups

The list of target 
groups to wich this target belongs.
  @param  Targ_Target self
  @returns   the result
**/
extern ApiList Targ_Target_SortedTargetGroups(Targ_Target self);

/**
  Sorted for ccp.lims.Target.Target.targetStatus

child link to class 
TargetStatus
  @param  Targ_Target self
  @returns   the result
**/
extern ApiList Targ_Target_SortedTargetStatus(Targ_Target self);

#endif /* __incl__ccp_api_lims_Target_Target_h__ */
