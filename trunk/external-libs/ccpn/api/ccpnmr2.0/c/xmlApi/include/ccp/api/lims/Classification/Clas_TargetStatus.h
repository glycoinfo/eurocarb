
#ifndef __incl__ccp_api_lims_Classification_TargetStatus_h__
#define __incl__ccp_api_lims_Classification_TargetStatus_h__

#include "ccp.h"

/*
  General target status classification.
*/

/* package ccp.api.lims.Classification */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetStatus self
  @param  Impl_ApplicationData value
**/
extern void *Clas_TargetStatus_AddApplicationData(Clas_TargetStatus self, Impl_ApplicationData value);

/**
  Add for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @param  Clas_TargetScoreboard value
**/
extern void *Clas_TargetStatus_AddTargetScoreboard(Clas_TargetStatus self, Clas_TargetScoreboard value);

/**
  CheckAllValid for ccp.lims.Classification.TargetStatus
  @param  Clas_TargetStatus self
  @param  ApiBoolean complete
**/
extern void *Clas_TargetStatus_CheckAllValid(Clas_TargetStatus self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.Classification.TargetStatus
  @param  Clas_TargetStatus self
  @param  ApiBoolean complete
**/
extern void *Clas_TargetStatus_CheckValid(Clas_TargetStatus self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetStatus self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Clas_TargetStatus_FindAllApplicationData(Clas_TargetStatus self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetStatus self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Clas_TargetStatus_FindAllApplicationData_keyval0(Clas_TargetStatus self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetStatus self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Clas_TargetStatus_FindAllApplicationData_keyval1(Clas_TargetStatus self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Clas_TargetStatus_FindAllApplicationData_keyval2(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Clas_TargetStatus_FindAllApplicationData_keyval3(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetStatus self
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
extern ApiList Clas_TargetStatus_FindAllApplicationData_keyval4(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_TargetStatus_FindAllBlueprintStatuss(Clas_TargetStatus self, ApiMap conditions);

/**
  FindAll for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_TargetStatus_FindAllBlueprintStatuss_keyval0(Clas_TargetStatus self);

/**
  FindAll for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_TargetStatus_FindAllBlueprintStatuss_keyval1(Clas_TargetStatus self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_TargetStatus_FindAllBlueprintStatuss_keyval2(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_TargetStatus_FindAllBlueprintStatuss_keyval3(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
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
extern ApiSet Clas_TargetStatus_FindAllBlueprintStatuss_keyval4(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_TargetStatus_FindAllTargetScoreboards(Clas_TargetStatus self, ApiMap conditions);

/**
  FindAll for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_TargetStatus_FindAllTargetScoreboards_keyval0(Clas_TargetStatus self);

/**
  FindAll for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_TargetStatus_FindAllTargetScoreboards_keyval1(Clas_TargetStatus self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_TargetStatus_FindAllTargetScoreboards_keyval2(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_TargetStatus_FindAllTargetScoreboards_keyval3(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
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
extern ApiSet Clas_TargetStatus_FindAllTargetScoreboards_keyval4(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Classification.TargetStatus.targetStatus

The 
status associated to a particular target status.
  @param  Clas_TargetStatus self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_TargetStatus_FindAllTargetStatus(Clas_TargetStatus self, ApiMap conditions);

/**
  FindAll for ccp.lims.Classification.TargetStatus.targetStatus

The 
status associated to a particular target status.
  @param  Clas_TargetStatus self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_TargetStatus_FindAllTargetStatus_keyval0(Clas_TargetStatus self);

/**
  FindAll for ccp.lims.Classification.TargetStatus.targetStatus

The 
status associated to a particular target status.
  @param  Clas_TargetStatus self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_TargetStatus_FindAllTargetStatus_keyval1(Clas_TargetStatus self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Classification.TargetStatus.targetStatus

The 
status associated to a particular target status.
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_TargetStatus_FindAllTargetStatus_keyval2(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Classification.TargetStatus.targetStatus

The 
status associated to a particular target status.
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Clas_TargetStatus_FindAllTargetStatus_keyval3(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Classification.TargetStatus.targetStatus

The 
status associated to a particular target status.
  @param  Clas_TargetStatus self
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
extern ApiSet Clas_TargetStatus_FindAllTargetStatus_keyval4(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetStatus self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Clas_TargetStatus_FindFirstApplicationData(Clas_TargetStatus self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetStatus self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Clas_TargetStatus_FindFirstApplicationData_keyval0(Clas_TargetStatus self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetStatus self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Clas_TargetStatus_FindFirstApplicationData_keyval1(Clas_TargetStatus self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Clas_TargetStatus_FindFirstApplicationData_keyval2(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Clas_TargetStatus_FindFirstApplicationData_keyval3(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetStatus self
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
extern Impl_ApplicationData Clas_TargetStatus_FindFirstApplicationData_keyval4(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintStatus Clas_TargetStatus_FindFirstBlueprintStatus(Clas_TargetStatus self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintStatus Clas_TargetStatus_FindFirstBlueprintStatus_keyval0(Clas_TargetStatus self);

/**
  FindFirst for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintStatus Clas_TargetStatus_FindFirstBlueprintStatus_keyval1(Clas_TargetStatus self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintStatus Clas_TargetStatus_FindFirstBlueprintStatus_keyval2(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Expb_BlueprintStatus Clas_TargetStatus_FindFirstBlueprintStatus_keyval3(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
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
extern Expb_BlueprintStatus Clas_TargetStatus_FindFirstBlueprintStatus_keyval4(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Clas_TargetScoreboard Clas_TargetStatus_FindFirstTargetScoreboard(Clas_TargetStatus self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @returns  the first value that satisfies the conditions 
**/
extern Clas_TargetScoreboard Clas_TargetStatus_FindFirstTargetScoreboard_keyval0(Clas_TargetStatus self);

/**
  FindFirst for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Clas_TargetScoreboard Clas_TargetStatus_FindFirstTargetScoreboard_keyval1(Clas_TargetStatus self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Clas_TargetScoreboard Clas_TargetStatus_FindFirstTargetScoreboard_keyval2(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Clas_TargetScoreboard Clas_TargetStatus_FindFirstTargetScoreboard_keyval3(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
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
extern Clas_TargetScoreboard Clas_TargetStatus_FindFirstTargetScoreboard_keyval4(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Classification.TargetStatus.targetStatus

The 
status associated to a particular target status.
  @param  Clas_TargetStatus self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetStatus Clas_TargetStatus_FindFirstTargetStatus(Clas_TargetStatus self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Classification.TargetStatus.targetStatus

The 
status associated to a particular target status.
  @param  Clas_TargetStatus self
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetStatus Clas_TargetStatus_FindFirstTargetStatus_keyval0(Clas_TargetStatus self);

/**
  FindFirst for ccp.lims.Classification.TargetStatus.targetStatus

The 
status associated to a particular target status.
  @param  Clas_TargetStatus self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetStatus Clas_TargetStatus_FindFirstTargetStatus_keyval1(Clas_TargetStatus self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Classification.TargetStatus.targetStatus

The 
status associated to a particular target status.
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetStatus Clas_TargetStatus_FindFirstTargetStatus_keyval2(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Classification.TargetStatus.targetStatus

The 
status associated to a particular target status.
  @param  Clas_TargetStatus self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Targ_TargetStatus Clas_TargetStatus_FindFirstTargetStatus_keyval3(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Classification.TargetStatus.targetStatus

The 
status associated to a particular target status.
  @param  Clas_TargetStatus self
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
extern Targ_TargetStatus Clas_TargetStatus_FindFirstTargetStatus_keyval4(Clas_TargetStatus self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.Classification.TargetStatus
  @param  Clas_TargetStatus self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Clas_TargetStatus_Get(Clas_TargetStatus self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Clas_TargetStatus self
  @returns   the result
**/
extern Acco_AccessObject Clas_TargetStatus_GetAccess(Clas_TargetStatus self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetStatus self
  @returns   the result
**/
extern ApiList Clas_TargetStatus_GetApplicationData(Clas_TargetStatus self);

/**
  Get for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
  @returns   the result
**/
extern ApiSet Clas_TargetStatus_GetBlueprintStatuss(Clas_TargetStatus self);

/**
  GetByKey for ccp.lims.Classification.TargetStatus
  @param  Clas_TargetStatus self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Clas_TargetStatus Clas_TargetStatus_GetByKey(Clas_TargetStatus self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Clas_TargetStatus self
  @returns   the result
**/
extern ApiString Clas_TargetStatus_GetClassName(Clas_TargetStatus self);

/**
  Get for ccp.lims.Classification.TargetStatus.classification

parent link
  @param  Clas_TargetStatus self
  @returns   the result
**/
extern Clas_Classification Clas_TargetStatus_GetClassification(Clas_TargetStatus self);

/**
  Get for ccp.lims.Classification.AbstractCategory.details

Free text, for 
notes, explanatory comments, etc.
  @param  Clas_TargetStatus self
  @returns   the result
**/
extern ApiString Clas_TargetStatus_GetDetails(Clas_TargetStatus self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Clas_TargetStatus self
  @returns   the result
**/
extern ApiList Clas_TargetStatus_GetFieldNames(Clas_TargetStatus self);

/**
  GetFullKey for ccp.lims.Classification.TargetStatus
  @param  Clas_TargetStatus self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Clas_TargetStatus_GetFullKey(Clas_TargetStatus self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Clas_TargetStatus self
  @returns   the result
**/
extern ApiBoolean Clas_TargetStatus_GetInConstructor(Clas_TargetStatus self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Clas_TargetStatus self
  @returns   the result
**/
extern ApiBoolean Clas_TargetStatus_GetIsDeleted(Clas_TargetStatus self);

/**
  GetLocalKey for ccp.lims.Classification.TargetStatus
  @param  Clas_TargetStatus self
  @returns  Local object key
**/
extern ApiObject Clas_TargetStatus_GetLocalKey(Clas_TargetStatus self);

/**
  Get for ccp.lims.Classification.AbstractCategory.name

Name of category
  @param  Clas_TargetStatus self
  @returns   the result
**/
extern ApiString Clas_TargetStatus_GetName(Clas_TargetStatus self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Clas_TargetStatus self
  @returns   the result
**/
extern ApiString Clas_TargetStatus_GetPackageName(Clas_TargetStatus self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Clas_TargetStatus self
  @returns   the result
**/
extern ApiString Clas_TargetStatus_GetPackageShortName(Clas_TargetStatus self);

/**
  Get for ccp.lims.Classification.TargetStatus.parent

link to parent 
object - synonym for classification
  @param  Clas_TargetStatus self
  @returns   the result
**/
extern Clas_Classification Clas_TargetStatus_GetParent(Clas_TargetStatus self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Clas_TargetStatus self
  @returns   the result
**/
extern ApiString Clas_TargetStatus_GetQualifiedName(Clas_TargetStatus self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Clas_TargetStatus self
  @returns   the result
**/
extern Impl_MemopsRoot Clas_TargetStatus_GetRoot(Clas_TargetStatus self);

/**
  Get for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @returns   the result
**/
extern ApiSet Clas_TargetStatus_GetTargetScoreboards(Clas_TargetStatus self);

/**
  Get for ccp.lims.Classification.TargetStatus.targetStatus

The status 
associated to a particular target status.
  @param  Clas_TargetStatus self
  @returns   the result
**/
extern ApiSet Clas_TargetStatus_GetTargetStatus(Clas_TargetStatus self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Clas_TargetStatus self
  @returns   the result
**/
extern Impl_TopObject Clas_TargetStatus_GetTopObject(Clas_TargetStatus self);

/**
  Constructor for ccp.lims.Classification.TargetStatus
  @param  Clas_Classification parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Clas_TargetStatus Clas_TargetStatus_Init(Clas_Classification parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.Classification.TargetStatus
  @param  Clas_Classification parent
  @param  char * name
  @returns  the new object
**/
extern Clas_TargetStatus Clas_TargetStatus_Init_reqd(Clas_Classification parent, char * name);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetStatus self
  @param  Impl_ApplicationData value
**/
extern void *Clas_TargetStatus_RemoveApplicationData(Clas_TargetStatus self, Impl_ApplicationData value);

/**
  Remove for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @param  Clas_TargetScoreboard value
**/
extern void *Clas_TargetStatus_RemoveTargetScoreboard(Clas_TargetStatus self, Clas_TargetScoreboard value);

/**
  SetAttr for ccp.lims.Classification.TargetStatus
  @param  Clas_TargetStatus self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Clas_TargetStatus_Set(Clas_TargetStatus self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Clas_TargetStatus self
  @param  Acco_AccessObject value
**/
extern void *Clas_TargetStatus_SetAccess(Clas_TargetStatus self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Clas_TargetStatus self
  @param  ApiList values
**/
extern void *Clas_TargetStatus_SetApplicationData(Clas_TargetStatus self, ApiList values);

/**
  Set for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
  @param  ApiSet values
**/
extern void *Clas_TargetStatus_SetBlueprintStatuss(Clas_TargetStatus self, ApiSet values);

/**
  Set for ccp.lims.Classification.AbstractCategory.details

Free text, for 
notes, explanatory comments, etc.
  @param  Clas_TargetStatus self
  @param  ApiString value
**/
extern void *Clas_TargetStatus_SetDetails(Clas_TargetStatus self, ApiString value);

/**
  Set for ccp.lims.Classification.AbstractCategory.name

Name of category
  @param  Clas_TargetStatus self
  @param  ApiString value
**/
extern void *Clas_TargetStatus_SetName(Clas_TargetStatus self, ApiString value);

/**
  Set for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @param  ApiSet values
**/
extern void *Clas_TargetStatus_SetTargetScoreboards(Clas_TargetStatus self, ApiSet values);

/**
  Set for ccp.lims.Classification.TargetStatus.targetStatus

The status 
associated to a particular target status.
  @param  Clas_TargetStatus self
  @param  ApiSet values
**/
extern void *Clas_TargetStatus_SetTargetStatus(Clas_TargetStatus self, ApiSet values);

/**
  Sorted for ccp.lims.Classification.TargetStatus.blueprintStatuss
  @param  Clas_TargetStatus self
  @returns   the result
**/
extern ApiList Clas_TargetStatus_SortedBlueprintStatuss(Clas_TargetStatus self);

/**
  Sorted for ccp.lims.Classification.TargetStatus.targetScoreboards
  @param  Clas_TargetStatus self
  @returns   the result
**/
extern ApiList Clas_TargetStatus_SortedTargetScoreboards(Clas_TargetStatus self);

/**
  Sorted for ccp.lims.Classification.TargetStatus.targetStatus

The status 
associated to a particular target status.
  @param  Clas_TargetStatus self
  @returns   the result
**/
extern ApiList Clas_TargetStatus_SortedTargetStatus(Clas_TargetStatus self);

#endif /* __incl__ccp_api_lims_Classification_TargetStatus_h__ */
