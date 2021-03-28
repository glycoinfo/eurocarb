
#ifndef __incl__ccp_api_lims_Protocol_PressStep_h__
#define __incl__ccp_api_lims_Protocol_PressStep_h__

#include "ccp.h"

/*
  Press step.
*/

/* package ccp.api.lims.Protocol */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_PressStep self
  @param  Impl_ApplicationData value
**/
extern void *Prot_PressStep_AddApplicationData(Prot_PressStep self, Impl_ApplicationData value);

/**
  Add for ccp.lims.Protocol.Step.parameterDefinitions

List of parameter 
definition associated to a step.
  @param  Prot_PressStep self
  @param  Prot_ParameterDefinition value
**/
extern void *Prot_PressStep_AddParameterDefinition(Prot_PressStep self, Prot_ParameterDefinition value);

/**
  Add for ccp.lims.Protocol.Step.refInputSamples

List of InputSampleDefs 
associated with this Step.
  @param  Prot_PressStep self
  @param  Prot_RefInputSample value
**/
extern void *Prot_PressStep_AddRefInputSample(Prot_PressStep self, Prot_RefInputSample value);

/**
  Add for ccp.lims.Protocol.Step.refOutputSamples

List of InputSampleDefs 
associated with this Step.
  @param  Prot_PressStep self
  @param  Prot_RefOutputSample value
**/
extern void *Prot_PressStep_AddRefOutputSample(Prot_PressStep self, Prot_RefOutputSample value);

/**
  CheckAllValid for ccp.lims.Protocol.PressStep
  @param  Prot_PressStep self
  @param  ApiBoolean complete
**/
extern void *Prot_PressStep_CheckAllValid(Prot_PressStep self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.Protocol.PressStep
  @param  Prot_PressStep self
  @param  ApiBoolean complete
**/
extern void *Prot_PressStep_CheckValid(Prot_PressStep self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_PressStep self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Prot_PressStep_FindAllApplicationData(Prot_PressStep self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_PressStep self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Prot_PressStep_FindAllApplicationData_keyval0(Prot_PressStep self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_PressStep self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Prot_PressStep_FindAllApplicationData_keyval1(Prot_PressStep self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_PressStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Prot_PressStep_FindAllApplicationData_keyval2(Prot_PressStep self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_PressStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Prot_PressStep_FindAllApplicationData_keyval3(Prot_PressStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_PressStep self
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
extern ApiList Prot_PressStep_FindAllApplicationData_keyval4(Prot_PressStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_PressStep self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_PressStep_FindAllParameterDefinitions(Prot_PressStep self, ApiMap conditions);

/**
  FindAll for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_PressStep self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_PressStep_FindAllParameterDefinitions_keyval0(Prot_PressStep self);

/**
  FindAll for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_PressStep self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_PressStep_FindAllParameterDefinitions_keyval1(Prot_PressStep self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_PressStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_PressStep_FindAllParameterDefinitions_keyval2(Prot_PressStep self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_PressStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_PressStep_FindAllParameterDefinitions_keyval3(Prot_PressStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_PressStep self
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
extern ApiSet Prot_PressStep_FindAllParameterDefinitions_keyval4(Prot_PressStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_PressStep self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_PressStep_FindAllRefInputSamples(Prot_PressStep self, ApiMap conditions);

/**
  FindAll for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_PressStep self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_PressStep_FindAllRefInputSamples_keyval0(Prot_PressStep self);

/**
  FindAll for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_PressStep self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_PressStep_FindAllRefInputSamples_keyval1(Prot_PressStep self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_PressStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_PressStep_FindAllRefInputSamples_keyval2(Prot_PressStep self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_PressStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_PressStep_FindAllRefInputSamples_keyval3(Prot_PressStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_PressStep self
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
extern ApiSet Prot_PressStep_FindAllRefInputSamples_keyval4(Prot_PressStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_PressStep self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_PressStep_FindAllRefOutputSamples(Prot_PressStep self, ApiMap conditions);

/**
  FindAll for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_PressStep self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_PressStep_FindAllRefOutputSamples_keyval0(Prot_PressStep self);

/**
  FindAll for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_PressStep self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_PressStep_FindAllRefOutputSamples_keyval1(Prot_PressStep self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_PressStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_PressStep_FindAllRefOutputSamples_keyval2(Prot_PressStep self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_PressStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_PressStep_FindAllRefOutputSamples_keyval3(Prot_PressStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_PressStep self
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
extern ApiSet Prot_PressStep_FindAllRefOutputSamples_keyval4(Prot_PressStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_PressStep self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Prot_PressStep_FindFirstApplicationData(Prot_PressStep self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_PressStep self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Prot_PressStep_FindFirstApplicationData_keyval0(Prot_PressStep self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_PressStep self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Prot_PressStep_FindFirstApplicationData_keyval1(Prot_PressStep self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_PressStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Prot_PressStep_FindFirstApplicationData_keyval2(Prot_PressStep self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_PressStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Prot_PressStep_FindFirstApplicationData_keyval3(Prot_PressStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_PressStep self
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
extern Impl_ApplicationData Prot_PressStep_FindFirstApplicationData_keyval4(Prot_PressStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_PressStep self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Prot_ParameterDefinition Prot_PressStep_FindFirstParameterDefinition(Prot_PressStep self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_PressStep self
  @returns  the first value that satisfies the conditions 
**/
extern Prot_ParameterDefinition Prot_PressStep_FindFirstParameterDefinition_keyval0(Prot_PressStep self);

/**
  FindFirst for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_PressStep self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Prot_ParameterDefinition Prot_PressStep_FindFirstParameterDefinition_keyval1(Prot_PressStep self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_PressStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Prot_ParameterDefinition Prot_PressStep_FindFirstParameterDefinition_keyval2(Prot_PressStep self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_PressStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Prot_ParameterDefinition Prot_PressStep_FindFirstParameterDefinition_keyval3(Prot_PressStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_PressStep self
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
extern Prot_ParameterDefinition Prot_PressStep_FindFirstParameterDefinition_keyval4(Prot_PressStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_PressStep self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Prot_RefInputSample Prot_PressStep_FindFirstRefInputSample(Prot_PressStep self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_PressStep self
  @returns  the first value that satisfies the conditions 
**/
extern Prot_RefInputSample Prot_PressStep_FindFirstRefInputSample_keyval0(Prot_PressStep self);

/**
  FindFirst for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_PressStep self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Prot_RefInputSample Prot_PressStep_FindFirstRefInputSample_keyval1(Prot_PressStep self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_PressStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Prot_RefInputSample Prot_PressStep_FindFirstRefInputSample_keyval2(Prot_PressStep self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_PressStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Prot_RefInputSample Prot_PressStep_FindFirstRefInputSample_keyval3(Prot_PressStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_PressStep self
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
extern Prot_RefInputSample Prot_PressStep_FindFirstRefInputSample_keyval4(Prot_PressStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_PressStep self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Prot_RefOutputSample Prot_PressStep_FindFirstRefOutputSample(Prot_PressStep self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_PressStep self
  @returns  the first value that satisfies the conditions 
**/
extern Prot_RefOutputSample Prot_PressStep_FindFirstRefOutputSample_keyval0(Prot_PressStep self);

/**
  FindFirst for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_PressStep self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Prot_RefOutputSample Prot_PressStep_FindFirstRefOutputSample_keyval1(Prot_PressStep self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_PressStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Prot_RefOutputSample Prot_PressStep_FindFirstRefOutputSample_keyval2(Prot_PressStep self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_PressStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Prot_RefOutputSample Prot_PressStep_FindFirstRefOutputSample_keyval3(Prot_PressStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_PressStep self
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
extern Prot_RefOutputSample Prot_PressStep_FindFirstRefOutputSample_keyval4(Prot_PressStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.Protocol.PressStep
  @param  Prot_PressStep self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Prot_PressStep_Get(Prot_PressStep self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Prot_PressStep self
  @returns   the result
**/
extern Acco_AccessObject Prot_PressStep_GetAccess(Prot_PressStep self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_PressStep self
  @returns   the result
**/
extern ApiList Prot_PressStep_GetApplicationData(Prot_PressStep self);

/**
  GetByKey for ccp.lims.Protocol.PressStep
  @param  Prot_PressStep self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Prot_PressStep Prot_PressStep_GetByKey(Prot_PressStep self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Prot_PressStep self
  @returns   the result
**/
extern ApiString Prot_PressStep_GetClassName(Prot_PressStep self);

/**
  Get for ccp.lims.Protocol.Step.details

Details field for comments.
  @param  Prot_PressStep self
  @returns   the result
**/
extern ApiString Prot_PressStep_GetDetails(Prot_PressStep self);

/**
  Get for ccp.lims.Protocol.Step.duration

The duration in second (s) of 
the step.
  @param  Prot_PressStep self
  @returns   the result
**/
extern ApiFloat Prot_PressStep_GetDuration(Prot_PressStep self);

/**
  Get for ccp.lims.Protocol.Step.durationDisplayUnit

This is the unit 
entered by user and used for display.
  @param  Prot_PressStep self
  @returns   the result
**/
extern ApiString Prot_PressStep_GetDurationDisplayUnit(Prot_PressStep self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Prot_PressStep self
  @returns   the result
**/
extern ApiList Prot_PressStep_GetFieldNames(Prot_PressStep self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Prot_PressStep self
  @returns   the result
**/
extern ApiBoolean Prot_PressStep_GetInConstructor(Prot_PressStep self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Prot_PressStep self
  @returns   the result
**/
extern ApiBoolean Prot_PressStep_GetIsDeleted(Prot_PressStep self);

/**
  Get for ccp.lims.Protocol.Step.name

The name of the step.
  @param  Prot_PressStep self
  @returns   the result
**/
extern ApiString Prot_PressStep_GetName(Prot_PressStep self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Prot_PressStep self
  @returns   the result
**/
extern ApiString Prot_PressStep_GetPackageName(Prot_PressStep self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Prot_PressStep self
  @returns   the result
**/
extern ApiString Prot_PressStep_GetPackageShortName(Prot_PressStep self);

/**
  Get for ccp.lims.Protocol.Step.parameterDefinitions

List of parameter 
definition associated to a step.
  @param  Prot_PressStep self
  @returns   the result
**/
extern ApiSet Prot_PressStep_GetParameterDefinitions(Prot_PressStep self);

/**
  Get for ccp.lims.Protocol.Step.parent

link to parent object - synonym 
for procedure
  @param  Prot_PressStep self
  @returns   the result
**/
extern Prot_Procedure Prot_PressStep_GetParent(Prot_PressStep self);

/**
  Get for ccp.lims.Protocol.PressStep.pressure

The pressure applied.
  @param  Prot_PressStep self
  @returns   the result
**/
extern ApiFloat Prot_PressStep_GetPressure(Prot_PressStep self);

/**
  Get for ccp.lims.Protocol.PressStep.pressureDisplayUnit

This is the 
unit entered by user and used for display.
  @param  Prot_PressStep self
  @returns   the result
**/
extern ApiString Prot_PressStep_GetPressureDisplayUnit(Prot_PressStep self);

/**
  Get for ccp.lims.Protocol.Step.procedure

parent link
  @param  Prot_PressStep self
  @returns   the result
**/
extern Prot_Procedure Prot_PressStep_GetProcedure(Prot_PressStep self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Prot_PressStep self
  @returns   the result
**/
extern ApiString Prot_PressStep_GetQualifiedName(Prot_PressStep self);

/**
  Get for ccp.lims.Protocol.Step.refInputSamples

List of InputSampleDefs 
associated with this Step.
  @param  Prot_PressStep self
  @returns   the result
**/
extern ApiSet Prot_PressStep_GetRefInputSamples(Prot_PressStep self);

/**
  Get for ccp.lims.Protocol.Step.refOutputSamples

List of InputSampleDefs 
associated with this Step.
  @param  Prot_PressStep self
  @returns   the result
**/
extern ApiSet Prot_PressStep_GetRefOutputSamples(Prot_PressStep self);

/**
  Get for ccp.lims.Protocol.Step.role

The role of the step that it takes 
within a procedure or simply its classification number.
  @param  Prot_PressStep self
  @returns   the result
**/
extern ApiString Prot_PressStep_GetRole(Prot_PressStep self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Prot_PressStep self
  @returns   the result
**/
extern Impl_MemopsRoot Prot_PressStep_GetRoot(Prot_PressStep self);

/**
  Get for ccp.lims.Protocol.Step.serial

Unique identifier.
  @param  Prot_PressStep self
  @returns   the result
**/
extern ApiInteger Prot_PressStep_GetSerial(Prot_PressStep self);

/**
  Get for ccp.lims.Protocol.Step.stepNumber

The place of the step in the 
order of step of the procedure. Need not be sequential, successive steps 
could be numbered (-10,0,10,12,17,20,...). The steps are performed 
according to increasing value of this attribute.
  @param  Prot_PressStep self
  @returns   the result
**/
extern ApiInteger Prot_PressStep_GetStepNumber(Prot_PressStep self);

/**
  Get for ccp.lims.Protocol.PressStep.tempDisplayUnit

This is the unit 
entered by user and used for display.
  @param  Prot_PressStep self
  @returns   the result
**/
extern ApiString Prot_PressStep_GetTempDisplayUnit(Prot_PressStep self);

/**
  Get for ccp.lims.Protocol.PressStep.temperature

The temperature in 
kelvin (K).
  @param  Prot_PressStep self
  @returns   the result
**/
extern ApiFloat Prot_PressStep_GetTemperature(Prot_PressStep self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Prot_PressStep self
  @returns   the result
**/
extern Impl_TopObject Prot_PressStep_GetTopObject(Prot_PressStep self);

/**
  Constructor for ccp.lims.Protocol.PressStep
  @param  Prot_Procedure parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Prot_PressStep Prot_PressStep_Init(Prot_Procedure parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.Protocol.PressStep
  @param  Prot_Procedure parent
  @param  ApiInteger stepNumber
  @returns  the new object
**/
extern Prot_PressStep Prot_PressStep_Init_reqd(Prot_Procedure parent, ApiInteger stepNumber);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_PressStep self
  @param  Impl_ApplicationData value
**/
extern void *Prot_PressStep_RemoveApplicationData(Prot_PressStep self, Impl_ApplicationData value);

/**
  Remove for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_PressStep self
  @param  Prot_ParameterDefinition value
**/
extern void *Prot_PressStep_RemoveParameterDefinition(Prot_PressStep self, Prot_ParameterDefinition value);

/**
  Remove for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_PressStep self
  @param  Prot_RefInputSample value
**/
extern void *Prot_PressStep_RemoveRefInputSample(Prot_PressStep self, Prot_RefInputSample value);

/**
  Remove for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_PressStep self
  @param  Prot_RefOutputSample value
**/
extern void *Prot_PressStep_RemoveRefOutputSample(Prot_PressStep self, Prot_RefOutputSample value);

/**
  SetAttr for ccp.lims.Protocol.PressStep
  @param  Prot_PressStep self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Prot_PressStep_Set(Prot_PressStep self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Prot_PressStep self
  @param  Acco_AccessObject value
**/
extern void *Prot_PressStep_SetAccess(Prot_PressStep self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_PressStep self
  @param  ApiList values
**/
extern void *Prot_PressStep_SetApplicationData(Prot_PressStep self, ApiList values);

/**
  Set for ccp.lims.Protocol.Step.details

Details field for comments.
  @param  Prot_PressStep self
  @param  ApiString value
**/
extern void *Prot_PressStep_SetDetails(Prot_PressStep self, ApiString value);

/**
  Set for ccp.lims.Protocol.Step.duration

The duration in second (s) of 
the step.
  @param  Prot_PressStep self
  @param  ApiFloat value
**/
extern void *Prot_PressStep_SetDuration(Prot_PressStep self, ApiFloat value);

/**
  Set for ccp.lims.Protocol.Step.durationDisplayUnit

This is the unit 
entered by user and used for display.
  @param  Prot_PressStep self
  @param  ApiString value
**/
extern void *Prot_PressStep_SetDurationDisplayUnit(Prot_PressStep self, ApiString value);

/**
  Set for ccp.lims.Protocol.Step.name

The name of the step.
  @param  Prot_PressStep self
  @param  ApiString value
**/
extern void *Prot_PressStep_SetName(Prot_PressStep self, ApiString value);

/**
  Set for ccp.lims.Protocol.Step.parameterDefinitions

List of parameter 
definition associated to a step.
  @param  Prot_PressStep self
  @param  ApiSet values
**/
extern void *Prot_PressStep_SetParameterDefinitions(Prot_PressStep self, ApiSet values);

/**
  Set for ccp.lims.Protocol.PressStep.pressure

The pressure applied.
  @param  Prot_PressStep self
  @param  ApiFloat value
**/
extern void *Prot_PressStep_SetPressure(Prot_PressStep self, ApiFloat value);

/**
  Set for ccp.lims.Protocol.PressStep.pressureDisplayUnit

This is the 
unit entered by user and used for display.
  @param  Prot_PressStep self
  @param  ApiString value
**/
extern void *Prot_PressStep_SetPressureDisplayUnit(Prot_PressStep self, ApiString value);

/**
  Set for ccp.lims.Protocol.Step.refInputSamples

List of InputSampleDefs 
associated with this Step.
  @param  Prot_PressStep self
  @param  ApiSet values
**/
extern void *Prot_PressStep_SetRefInputSamples(Prot_PressStep self, ApiSet values);

/**
  Set for ccp.lims.Protocol.Step.refOutputSamples

List of InputSampleDefs 
associated with this Step.
  @param  Prot_PressStep self
  @param  ApiSet values
**/
extern void *Prot_PressStep_SetRefOutputSamples(Prot_PressStep self, ApiSet values);

/**
  Set for ccp.lims.Protocol.Step.role

The role of the step that it takes 
within a procedure or simply its classification number.
  @param  Prot_PressStep self
  @param  ApiString value
**/
extern void *Prot_PressStep_SetRole(Prot_PressStep self, ApiString value);

/**
  Set for ccp.lims.Protocol.Step.serial

Unique identifier.
  @param  Prot_PressStep self
  @param  ApiInteger value
**/
extern void *Prot_PressStep_SetSerial(Prot_PressStep self, ApiInteger value);

/**
  Set for ccp.lims.Protocol.Step.stepNumber

The place of the step in the 
order of step of the procedure. Need not be sequential, successive steps 
could be numbered (-10,0,10,12,17,20,...). The steps are performed 
according to increasing value of this attribute.
  @param  Prot_PressStep self
  @param  ApiInteger value
**/
extern void *Prot_PressStep_SetStepNumber(Prot_PressStep self, ApiInteger value);

/**
  Set for ccp.lims.Protocol.PressStep.tempDisplayUnit

This is the unit 
entered by user and used for display.
  @param  Prot_PressStep self
  @param  ApiString value
**/
extern void *Prot_PressStep_SetTempDisplayUnit(Prot_PressStep self, ApiString value);

/**
  Set for ccp.lims.Protocol.PressStep.temperature

The temperature in 
kelvin (K).
  @param  Prot_PressStep self
  @param  ApiFloat value
**/
extern void *Prot_PressStep_SetTemperature(Prot_PressStep self, ApiFloat value);

/**
  Sorted for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_PressStep self
  @returns   the result
**/
extern ApiList Prot_PressStep_SortedParameterDefinitions(Prot_PressStep self);

/**
  Sorted for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_PressStep self
  @returns   the result
**/
extern ApiList Prot_PressStep_SortedRefInputSamples(Prot_PressStep self);

/**
  Sorted for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_PressStep self
  @returns   the result
**/
extern ApiList Prot_PressStep_SortedRefOutputSamples(Prot_PressStep self);

#endif /* __incl__ccp_api_lims_Protocol_PressStep_h__ */
