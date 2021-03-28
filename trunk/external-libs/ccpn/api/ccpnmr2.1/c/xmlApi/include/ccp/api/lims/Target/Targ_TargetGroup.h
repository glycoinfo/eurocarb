
#ifndef __incl__ccp_api_lims_Target_TargetGroup_h__
#define __incl__ccp_api_lims_Target_TargetGroup_h__

#include "ccp.h"

/*
  General grouping system for Target. It can be used to represent a protein family.
*/

/* package ccp.api.lims.Target */

/**
  Add for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @param  Anno_Annotation value
**/
extern void *Targ_TargetGroup_AddAnnotation(Targ_TargetGroup self, Anno_Annotation value);

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetGroup self
  @param  Impl_ApplicationData value
**/
extern void *Targ_TargetGroup_AddApplicationData(Targ_TargetGroup self, Impl_ApplicationData value);

/**
  Add for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @param  Cita_Citation value
**/
extern void *Targ_TargetGroup_AddCitation(Targ_TargetGroup self, Cita_Citation value);

/**
  Add for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @param  Dbr_Entry value
**/
extern void *Targ_TargetGroup_AddEntry(Targ_TargetGroup self, Dbr_Entry value);

/**
  Add for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub target 
group contained in a target group.
  @param  Targ_TargetGroup self
  @param  Targ_TargetGroup value
**/
extern void *Targ_TargetGroup_AddSubTargetGroup(Targ_TargetGroup self, Targ_TargetGroup value);

/**
  Add for ccp.lims.Target.TargetGroup.targets

The list of target that 
belongs to a particular target group.
  @param  Targ_TargetGroup self
  @param  Targ_Target value
**/
extern void *Targ_TargetGroup_AddTarget(Targ_TargetGroup self, Targ_Target value);

/**
  CheckAllValid for ccp.lims.Target.TargetGroup
  @param  Targ_TargetGroup self
  @param  ApiBoolean complete
**/
extern void *Targ_TargetGroup_CheckAllValid(Targ_TargetGroup self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.Target.TargetGroup
  @param  Targ_TargetGroup self
  @param  ApiBoolean complete
**/
extern void *Targ_TargetGroup_CheckValid(Targ_TargetGroup self, ApiBoolean complete);

/**
  FindAll for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetGroup_FindAllAnnotations(Targ_TargetGroup self, ApiMap conditions);

/**
  FindAll for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetGroup_FindAllAnnotations_keyval0(Targ_TargetGroup self);

/**
  FindAll for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetGroup_FindAllAnnotations_keyval1(Targ_TargetGroup self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetGroup_FindAllAnnotations_keyval2(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetGroup_FindAllAnnotations_keyval3(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
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
extern ApiSet Targ_TargetGroup_FindAllAnnotations_keyval4(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Targ_TargetGroup_FindAllApplicationData(Targ_TargetGroup self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetGroup self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Targ_TargetGroup_FindAllApplicationData_keyval0(Targ_TargetGroup self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Targ_TargetGroup_FindAllApplicationData_keyval1(Targ_TargetGroup self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Targ_TargetGroup_FindAllApplicationData_keyval2(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Targ_TargetGroup_FindAllApplicationData_keyval3(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetGroup self
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
extern ApiList Targ_TargetGroup_FindAllApplicationData_keyval4(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetGroup_FindAllCitations(Targ_TargetGroup self, ApiMap conditions);

/**
  FindAll for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetGroup_FindAllCitations_keyval0(Targ_TargetGroup self);

/**
  FindAll for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetGroup_FindAllCitations_keyval1(Targ_TargetGroup self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetGroup_FindAllCitations_keyval2(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetGroup_FindAllCitations_keyval3(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
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
extern ApiSet Targ_TargetGroup_FindAllCitations_keyval4(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetGroup_FindAllEntrys(Targ_TargetGroup self, ApiMap conditions);

/**
  FindAll for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetGroup_FindAllEntrys_keyval0(Targ_TargetGroup self);

/**
  FindAll for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetGroup_FindAllEntrys_keyval1(Targ_TargetGroup self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetGroup_FindAllEntrys_keyval2(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetGroup_FindAllEntrys_keyval3(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
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
extern ApiSet Targ_TargetGroup_FindAllEntrys_keyval4(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub 
target group contained in a target group.
  @param  Targ_TargetGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetGroup_FindAllSubTargetGroups(Targ_TargetGroup self, ApiMap conditions);

/**
  FindAll for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub 
target group contained in a target group.
  @param  Targ_TargetGroup self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetGroup_FindAllSubTargetGroups_keyval0(Targ_TargetGroup self);

/**
  FindAll for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub 
target group contained in a target group.
  @param  Targ_TargetGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetGroup_FindAllSubTargetGroups_keyval1(Targ_TargetGroup self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub 
target group contained in a target group.
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetGroup_FindAllSubTargetGroups_keyval2(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub 
target group contained in a target group.
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetGroup_FindAllSubTargetGroups_keyval3(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub 
target group contained in a target group.
  @param  Targ_TargetGroup self
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
extern ApiSet Targ_TargetGroup_FindAllSubTargetGroups_keyval4(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Target.TargetGroup.targets

The list of target that 
belongs to a particular target group.
  @param  Targ_TargetGroup self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetGroup_FindAllTargets(Targ_TargetGroup self, ApiMap conditions);

/**
  FindAll for ccp.lims.Target.TargetGroup.targets

The list of target that 
belongs to a particular target group.
  @param  Targ_TargetGroup self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetGroup_FindAllTargets_keyval0(Targ_TargetGroup self);

/**
  FindAll for ccp.lims.Target.TargetGroup.targets

The list of target that 
belongs to a particular target group.
  @param  Targ_TargetGroup self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetGroup_FindAllTargets_keyval1(Targ_TargetGroup self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Target.TargetGroup.targets

The list of target that 
belongs to a particular target group.
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetGroup_FindAllTargets_keyval2(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Target.TargetGroup.targets

The list of target that 
belongs to a particular target group.
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Targ_TargetGroup_FindAllTargets_keyval3(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Target.TargetGroup.targets

The list of target that 
belongs to a particular target group.
  @param  Targ_TargetGroup self
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
extern ApiSet Targ_TargetGroup_FindAllTargets_keyval4(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Anno_Annotation Targ_TargetGroup_FindFirstAnnotation(Targ_TargetGroup self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @returns  the first value that satisfies the conditions 
**/
extern Anno_Annotation Targ_TargetGroup_FindFirstAnnotation_keyval0(Targ_TargetGroup self);

/**
  FindFirst for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Anno_Annotation Targ_TargetGroup_FindFirstAnnotation_keyval1(Targ_TargetGroup self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Anno_Annotation Targ_TargetGroup_FindFirstAnnotation_keyval2(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Anno_Annotation Targ_TargetGroup_FindFirstAnnotation_keyval3(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
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
extern Anno_Annotation Targ_TargetGroup_FindFirstAnnotation_keyval4(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Targ_TargetGroup_FindFirstApplicationData(Targ_TargetGroup self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetGroup self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Targ_TargetGroup_FindFirstApplicationData_keyval0(Targ_TargetGroup self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Targ_TargetGroup_FindFirstApplicationData_keyval1(Targ_TargetGroup self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Targ_TargetGroup_FindFirstApplicationData_keyval2(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Targ_TargetGroup_FindFirstApplicationData_keyval3(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetGroup self
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
extern Impl_ApplicationData Targ_TargetGroup_FindFirstApplicationData_keyval4(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Targ_TargetGroup_FindFirstCitation(Targ_TargetGroup self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Targ_TargetGroup_FindFirstCitation_keyval0(Targ_TargetGroup self);

/**
  FindFirst for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Targ_TargetGroup_FindFirstCitation_keyval1(Targ_TargetGroup self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Targ_TargetGroup_FindFirstCitation_keyval2(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Cita_Citation Targ_TargetGroup_FindFirstCitation_keyval3(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
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
extern Cita_Citation Targ_TargetGroup_FindFirstCitation_keyval4(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Dbr_Entry Targ_TargetGroup_FindFirstEntry(Targ_TargetGroup self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @returns  the first value that satisfies the conditions 
**/
extern Dbr_Entry Targ_TargetGroup_FindFirstEntry_keyval0(Targ_TargetGroup self);

/**
  FindFirst for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Dbr_Entry Targ_TargetGroup_FindFirstEntry_keyval1(Targ_TargetGroup self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Dbr_Entry Targ_TargetGroup_FindFirstEntry_keyval2(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Dbr_Entry Targ_TargetGroup_FindFirstEntry_keyval3(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
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
extern Dbr_Entry Targ_TargetGroup_FindFirstEntry_keyval4(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub 
target group contained in a target group.
  @param  Targ_TargetGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Targ_TargetGroup_FindFirstSubTargetGroup(Targ_TargetGroup self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub 
target group contained in a target group.
  @param  Targ_TargetGroup self
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Targ_TargetGroup_FindFirstSubTargetGroup_keyval0(Targ_TargetGroup self);

/**
  FindFirst for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub 
target group contained in a target group.
  @param  Targ_TargetGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Targ_TargetGroup_FindFirstSubTargetGroup_keyval1(Targ_TargetGroup self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub 
target group contained in a target group.
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Targ_TargetGroup_FindFirstSubTargetGroup_keyval2(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub 
target group contained in a target group.
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetGroup Targ_TargetGroup_FindFirstSubTargetGroup_keyval3(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub 
target group contained in a target group.
  @param  Targ_TargetGroup self
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
extern Targ_TargetGroup Targ_TargetGroup_FindFirstSubTargetGroup_keyval4(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Target.TargetGroup.targets

The list of target 
that belongs to a particular target group.
  @param  Targ_TargetGroup self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Targ_TargetGroup_FindFirstTarget(Targ_TargetGroup self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Target.TargetGroup.targets

The list of target 
that belongs to a particular target group.
  @param  Targ_TargetGroup self
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Targ_TargetGroup_FindFirstTarget_keyval0(Targ_TargetGroup self);

/**
  FindFirst for ccp.lims.Target.TargetGroup.targets

The list of target 
that belongs to a particular target group.
  @param  Targ_TargetGroup self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Targ_TargetGroup_FindFirstTarget_keyval1(Targ_TargetGroup self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Target.TargetGroup.targets

The list of target 
that belongs to a particular target group.
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Targ_TargetGroup_FindFirstTarget_keyval2(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Target.TargetGroup.targets

The list of target 
that belongs to a particular target group.
  @param  Targ_TargetGroup self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Targ_Target Targ_TargetGroup_FindFirstTarget_keyval3(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Target.TargetGroup.targets

The list of target 
that belongs to a particular target group.
  @param  Targ_TargetGroup self
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
extern Targ_Target Targ_TargetGroup_FindFirstTarget_keyval4(Targ_TargetGroup self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.Target.TargetGroup
  @param  Targ_TargetGroup self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Targ_TargetGroup_Get(Targ_TargetGroup self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern Acco_AccessObject Targ_TargetGroup_GetAccess(Targ_TargetGroup self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern Acco_AccessObject Targ_TargetGroup_GetActiveAccess(Targ_TargetGroup self);

/**
  Get for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern ApiSet Targ_TargetGroup_GetAnnotations(Targ_TargetGroup self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern ApiList Targ_TargetGroup_GetApplicationData(Targ_TargetGroup self);

/**
  GetByKey for ccp.lims.Target.TargetGroup
  @param  Targ_TargetGroup self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Targ_TargetGroup Targ_TargetGroup_GetByKey(Targ_TargetGroup self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern ApiSet Targ_TargetGroup_GetCitations(Targ_TargetGroup self);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern ApiString Targ_TargetGroup_GetClassName(Targ_TargetGroup self);

/**
  Get for ccp.lims.Target.TargetGroup.completeName
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern ApiString Targ_TargetGroup_GetCompleteName(Targ_TargetGroup self);

/**
  Get for ccp.lims.Target.TargetGroup.details

Free text, for notes, 
explanatory comments, etc.
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern ApiString Targ_TargetGroup_GetDetails(Targ_TargetGroup self);

/**
  Get for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern ApiSet Targ_TargetGroup_GetEntrys(Targ_TargetGroup self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern ApiList Targ_TargetGroup_GetFieldNames(Targ_TargetGroup self);

/**
  GetFullKey for ccp.lims.Target.TargetGroup
  @param  Targ_TargetGroup self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Targ_TargetGroup_GetFullKey(Targ_TargetGroup self, ApiBoolean useGuid);

/**
  Get for ccp.lims.Target.TargetGroup.groupingType

it is the name of the 
grouping type, it can be a protein family group a gene family,... The 
difference between these is then entirely up to the understanding of the 
user.
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern ApiString Targ_TargetGroup_GetGroupingType(Targ_TargetGroup self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern ApiBoolean Targ_TargetGroup_GetInConstructor(Targ_TargetGroup self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern ApiBoolean Targ_TargetGroup_GetIsDeleted(Targ_TargetGroup self);

/**
  GetLocalKey for ccp.lims.Target.TargetGroup
  @param  Targ_TargetGroup self
  @returns  Local object key
**/
extern ApiObject Targ_TargetGroup_GetLocalKey(Targ_TargetGroup self);

/**
  Get for ccp.lims.Target.TargetGroup.namingSystem

The naming system used 
for this group. It can be used to represent a specific group associated 
to a target.
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern ApiString Targ_TargetGroup_GetNamingSystem(Targ_TargetGroup self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern ApiString Targ_TargetGroup_GetPackageName(Targ_TargetGroup self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern ApiString Targ_TargetGroup_GetPackageShortName(Targ_TargetGroup self);

/**
  Get for ccp.lims.Target.TargetGroup.parent

link to parent object - 
synonym for targetStore
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern Targ_TargetStore Targ_TargetGroup_GetParent(Targ_TargetGroup self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern ApiString Targ_TargetGroup_GetQualifiedName(Targ_TargetGroup self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern Impl_MemopsRoot Targ_TargetGroup_GetRoot(Targ_TargetGroup self);

/**
  Get for ccp.lims.Target.TargetGroup.shortName

The name of the target 
group.
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern ApiString Targ_TargetGroup_GetShortName(Targ_TargetGroup self);

/**
  Get for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub target 
group contained in a target group.
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern ApiSet Targ_TargetGroup_GetSubTargetGroups(Targ_TargetGroup self);

/**
  Get for ccp.lims.Target.TargetGroup.targetGroup

The target group to 
which the sub target groups belong.
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern Targ_TargetGroup Targ_TargetGroup_GetTargetGroup(Targ_TargetGroup self);

/**
  Get for ccp.lims.Target.TargetGroup.targetStore

parent link
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern Targ_TargetStore Targ_TargetGroup_GetTargetStore(Targ_TargetGroup self);

/**
  Get for ccp.lims.Target.TargetGroup.targets

The list of target that 
belongs to a particular target group.
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern ApiSet Targ_TargetGroup_GetTargets(Targ_TargetGroup self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern Impl_TopObject Targ_TargetGroup_GetTopObject(Targ_TargetGroup self);

/**
  Constructor for ccp.lims.Target.TargetGroup
  @param  Targ_TargetStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Targ_TargetGroup Targ_TargetGroup_Init(Targ_TargetStore parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.Target.TargetGroup
  @param  Targ_TargetStore parent
  @param  char * namingSystem
  @param  char * shortName
  @returns  the new object
**/
extern Targ_TargetGroup Targ_TargetGroup_Init_reqd(Targ_TargetStore parent, char * namingSystem, char * shortName);

/**
  Remove for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @param  Anno_Annotation value
**/
extern void *Targ_TargetGroup_RemoveAnnotation(Targ_TargetGroup self, Anno_Annotation value);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetGroup self
  @param  Impl_ApplicationData value
**/
extern void *Targ_TargetGroup_RemoveApplicationData(Targ_TargetGroup self, Impl_ApplicationData value);

/**
  Remove for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @param  Cita_Citation value
**/
extern void *Targ_TargetGroup_RemoveCitation(Targ_TargetGroup self, Cita_Citation value);

/**
  Remove for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @param  Dbr_Entry value
**/
extern void *Targ_TargetGroup_RemoveEntry(Targ_TargetGroup self, Dbr_Entry value);

/**
  Remove for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub 
target group contained in a target group.
  @param  Targ_TargetGroup self
  @param  Targ_TargetGroup value
**/
extern void *Targ_TargetGroup_RemoveSubTargetGroup(Targ_TargetGroup self, Targ_TargetGroup value);

/**
  Remove for ccp.lims.Target.TargetGroup.targets

The list of target that 
belongs to a particular target group.
  @param  Targ_TargetGroup self
  @param  Targ_Target value
**/
extern void *Targ_TargetGroup_RemoveTarget(Targ_TargetGroup self, Targ_Target value);

/**
  SetAttr for ccp.lims.Target.TargetGroup
  @param  Targ_TargetGroup self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Targ_TargetGroup_Set(Targ_TargetGroup self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Targ_TargetGroup self
  @param  Acco_AccessObject value
**/
extern void *Targ_TargetGroup_SetAccess(Targ_TargetGroup self, Acco_AccessObject value);

/**
  Set for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @param  ApiSet values
**/
extern void *Targ_TargetGroup_SetAnnotations(Targ_TargetGroup self, ApiSet values);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Targ_TargetGroup self
  @param  ApiList values
**/
extern void *Targ_TargetGroup_SetApplicationData(Targ_TargetGroup self, ApiList values);

/**
  Set for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @param  ApiSet values
**/
extern void *Targ_TargetGroup_SetCitations(Targ_TargetGroup self, ApiSet values);

/**
  Set for ccp.lims.Target.TargetGroup.completeName
  @param  Targ_TargetGroup self
  @param  ApiString value
**/
extern void *Targ_TargetGroup_SetCompleteName(Targ_TargetGroup self, ApiString value);

/**
  Set for ccp.lims.Target.TargetGroup.details

Free text, for notes, 
explanatory comments, etc.
  @param  Targ_TargetGroup self
  @param  ApiString value
**/
extern void *Targ_TargetGroup_SetDetails(Targ_TargetGroup self, ApiString value);

/**
  Set for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @param  ApiSet values
**/
extern void *Targ_TargetGroup_SetEntrys(Targ_TargetGroup self, ApiSet values);

/**
  Set for ccp.lims.Target.TargetGroup.groupingType

it is the name of the 
grouping type, it can be a protein family group a gene family,... The 
difference between these is then entirely up to the understanding of the 
user.
  @param  Targ_TargetGroup self
  @param  ApiString value
**/
extern void *Targ_TargetGroup_SetGroupingType(Targ_TargetGroup self, ApiString value);

/**
  Set for ccp.lims.Target.TargetGroup.namingSystem

The naming system used 
for this group. It can be used to represent a specific group associated 
to a target.
  @param  Targ_TargetGroup self
  @param  ApiString value
**/
extern void *Targ_TargetGroup_SetNamingSystem(Targ_TargetGroup self, ApiString value);

/**
  Set for ccp.lims.Target.TargetGroup.shortName

The name of the target 
group.
  @param  Targ_TargetGroup self
  @param  ApiString value
**/
extern void *Targ_TargetGroup_SetShortName(Targ_TargetGroup self, ApiString value);

/**
  Set for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub target 
group contained in a target group.
  @param  Targ_TargetGroup self
  @param  ApiSet values
**/
extern void *Targ_TargetGroup_SetSubTargetGroups(Targ_TargetGroup self, ApiSet values);

/**
  Set for ccp.lims.Target.TargetGroup.targetGroup

The target group to 
which the sub target groups belong.
  @param  Targ_TargetGroup self
  @param  Targ_TargetGroup value
**/
extern void *Targ_TargetGroup_SetTargetGroup(Targ_TargetGroup self, Targ_TargetGroup value);

/**
  Set for ccp.lims.Target.TargetGroup.targets

The list of target that 
belongs to a particular target group.
  @param  Targ_TargetGroup self
  @param  ApiSet values
**/
extern void *Targ_TargetGroup_SetTargets(Targ_TargetGroup self, ApiSet values);

/**
  Sorted for ccp.lims.Target.TargetGroup.annotations
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern ApiList Targ_TargetGroup_SortedAnnotations(Targ_TargetGroup self);

/**
  Sorted for ccp.lims.Target.TargetGroup.citations
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern ApiList Targ_TargetGroup_SortedCitations(Targ_TargetGroup self);

/**
  Sorted for ccp.lims.Target.TargetGroup.entrys
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern ApiList Targ_TargetGroup_SortedEntrys(Targ_TargetGroup self);

/**
  Sorted for ccp.lims.Target.TargetGroup.subTargetGroups

List of sub 
target group contained in a target group.
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern ApiList Targ_TargetGroup_SortedSubTargetGroups(Targ_TargetGroup self);

/**
  Sorted for ccp.lims.Target.TargetGroup.targets

The list of target that 
belongs to a particular target group.
  @param  Targ_TargetGroup self
  @returns   the result
**/
extern ApiList Targ_TargetGroup_SortedTargets(Targ_TargetGroup self);

#endif /* __incl__ccp_api_lims_Target_TargetGroup_h__ */
