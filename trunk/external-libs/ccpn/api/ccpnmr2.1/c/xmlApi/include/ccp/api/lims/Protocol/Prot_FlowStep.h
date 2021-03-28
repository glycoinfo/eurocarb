
#ifndef __incl__ccp_api_lims_Protocol_FlowStep_h__
#define __incl__ccp_api_lims_Protocol_FlowStep_h__

#include "ccp.h"

/*
  Flow step.
*/

/* package ccp.api.lims.Protocol */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FlowStep self
  @param  Impl_ApplicationData value
**/
extern void *Prot_FlowStep_AddApplicationData(Prot_FlowStep self, Impl_ApplicationData value);

/**
  Add for ccp.lims.Protocol.Step.parameterDefinitions

List of parameter 
definition associated to a step.
  @param  Prot_FlowStep self
  @param  Prot_ParameterDefinition value
**/
extern void *Prot_FlowStep_AddParameterDefinition(Prot_FlowStep self, Prot_ParameterDefinition value);

/**
  Add for ccp.lims.Protocol.Step.refInputSamples

List of InputSampleDefs 
associated with this Step.
  @param  Prot_FlowStep self
  @param  Prot_RefInputSample value
**/
extern void *Prot_FlowStep_AddRefInputSample(Prot_FlowStep self, Prot_RefInputSample value);

/**
  Add for ccp.lims.Protocol.Step.refOutputSamples

List of InputSampleDefs 
associated with this Step.
  @param  Prot_FlowStep self
  @param  Prot_RefOutputSample value
**/
extern void *Prot_FlowStep_AddRefOutputSample(Prot_FlowStep self, Prot_RefOutputSample value);

/**
  CheckAllValid for ccp.lims.Protocol.FlowStep
  @param  Prot_FlowStep self
  @param  ApiBoolean complete
**/
extern void *Prot_FlowStep_CheckAllValid(Prot_FlowStep self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.Protocol.FlowStep
  @param  Prot_FlowStep self
  @param  ApiBoolean complete
**/
extern void *Prot_FlowStep_CheckValid(Prot_FlowStep self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FlowStep self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Prot_FlowStep_FindAllApplicationData(Prot_FlowStep self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FlowStep self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Prot_FlowStep_FindAllApplicationData_keyval0(Prot_FlowStep self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FlowStep self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Prot_FlowStep_FindAllApplicationData_keyval1(Prot_FlowStep self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Prot_FlowStep_FindAllApplicationData_keyval2(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Prot_FlowStep_FindAllApplicationData_keyval3(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FlowStep self
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
extern ApiList Prot_FlowStep_FindAllApplicationData_keyval4(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FlowStep self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_FlowStep_FindAllParameterDefinitions(Prot_FlowStep self, ApiMap conditions);

/**
  FindAll for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FlowStep self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_FlowStep_FindAllParameterDefinitions_keyval0(Prot_FlowStep self);

/**
  FindAll for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FlowStep self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_FlowStep_FindAllParameterDefinitions_keyval1(Prot_FlowStep self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_FlowStep_FindAllParameterDefinitions_keyval2(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_FlowStep_FindAllParameterDefinitions_keyval3(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FlowStep self
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
extern ApiSet Prot_FlowStep_FindAllParameterDefinitions_keyval4(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_FlowStep_FindAllRefInputSamples(Prot_FlowStep self, ApiMap conditions);

/**
  FindAll for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_FlowStep_FindAllRefInputSamples_keyval0(Prot_FlowStep self);

/**
  FindAll for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_FlowStep_FindAllRefInputSamples_keyval1(Prot_FlowStep self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_FlowStep_FindAllRefInputSamples_keyval2(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_FlowStep_FindAllRefInputSamples_keyval3(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
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
extern ApiSet Prot_FlowStep_FindAllRefInputSamples_keyval4(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_FlowStep_FindAllRefOutputSamples(Prot_FlowStep self, ApiMap conditions);

/**
  FindAll for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_FlowStep_FindAllRefOutputSamples_keyval0(Prot_FlowStep self);

/**
  FindAll for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_FlowStep_FindAllRefOutputSamples_keyval1(Prot_FlowStep self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_FlowStep_FindAllRefOutputSamples_keyval2(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_FlowStep_FindAllRefOutputSamples_keyval3(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
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
extern ApiSet Prot_FlowStep_FindAllRefOutputSamples_keyval4(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FlowStep self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Prot_FlowStep_FindFirstApplicationData(Prot_FlowStep self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FlowStep self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Prot_FlowStep_FindFirstApplicationData_keyval0(Prot_FlowStep self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FlowStep self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Prot_FlowStep_FindFirstApplicationData_keyval1(Prot_FlowStep self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Prot_FlowStep_FindFirstApplicationData_keyval2(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Prot_FlowStep_FindFirstApplicationData_keyval3(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FlowStep self
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
extern Impl_ApplicationData Prot_FlowStep_FindFirstApplicationData_keyval4(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FlowStep self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Prot_ParameterDefinition Prot_FlowStep_FindFirstParameterDefinition(Prot_FlowStep self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FlowStep self
  @returns  the first value that satisfies the conditions 
**/
extern Prot_ParameterDefinition Prot_FlowStep_FindFirstParameterDefinition_keyval0(Prot_FlowStep self);

/**
  FindFirst for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FlowStep self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Prot_ParameterDefinition Prot_FlowStep_FindFirstParameterDefinition_keyval1(Prot_FlowStep self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Prot_ParameterDefinition Prot_FlowStep_FindFirstParameterDefinition_keyval2(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Prot_ParameterDefinition Prot_FlowStep_FindFirstParameterDefinition_keyval3(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FlowStep self
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
extern Prot_ParameterDefinition Prot_FlowStep_FindFirstParameterDefinition_keyval4(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Prot_RefInputSample Prot_FlowStep_FindFirstRefInputSample(Prot_FlowStep self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @returns  the first value that satisfies the conditions 
**/
extern Prot_RefInputSample Prot_FlowStep_FindFirstRefInputSample_keyval0(Prot_FlowStep self);

/**
  FindFirst for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Prot_RefInputSample Prot_FlowStep_FindFirstRefInputSample_keyval1(Prot_FlowStep self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Prot_RefInputSample Prot_FlowStep_FindFirstRefInputSample_keyval2(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Prot_RefInputSample Prot_FlowStep_FindFirstRefInputSample_keyval3(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
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
extern Prot_RefInputSample Prot_FlowStep_FindFirstRefInputSample_keyval4(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Prot_RefOutputSample Prot_FlowStep_FindFirstRefOutputSample(Prot_FlowStep self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @returns  the first value that satisfies the conditions 
**/
extern Prot_RefOutputSample Prot_FlowStep_FindFirstRefOutputSample_keyval0(Prot_FlowStep self);

/**
  FindFirst for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Prot_RefOutputSample Prot_FlowStep_FindFirstRefOutputSample_keyval1(Prot_FlowStep self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Prot_RefOutputSample Prot_FlowStep_FindFirstRefOutputSample_keyval2(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Prot_RefOutputSample Prot_FlowStep_FindFirstRefOutputSample_keyval3(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
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
extern Prot_RefOutputSample Prot_FlowStep_FindFirstRefOutputSample_keyval4(Prot_FlowStep self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.Protocol.FlowStep
  @param  Prot_FlowStep self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Prot_FlowStep_Get(Prot_FlowStep self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Prot_FlowStep self
  @returns   the result
**/
extern Acco_AccessObject Prot_FlowStep_GetAccess(Prot_FlowStep self);

/**
  Get for memops.Implementation.DataObject.activeAccess

Access object 
that is active for DataObject. NB This is a derived link tha depends on 
the access permissions on the (recursive) parents.
  @param  Prot_FlowStep self
  @returns   the result
**/
extern Acco_AccessObject Prot_FlowStep_GetActiveAccess(Prot_FlowStep self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FlowStep self
  @returns   the result
**/
extern ApiList Prot_FlowStep_GetApplicationData(Prot_FlowStep self);

/**
  Get for ccp.lims.Protocol.FlowStep.beginProportionSolA

The proportion 
of solution A at the begining in percent (%).
  @param  Prot_FlowStep self
  @returns   the result
**/
extern ApiFloat Prot_FlowStep_GetBeginProportionSolA(Prot_FlowStep self);

/**
  GetByKey for ccp.lims.Protocol.FlowStep
  @param  Prot_FlowStep self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Prot_FlowStep Prot_FlowStep_GetByKey(Prot_FlowStep self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Prot_FlowStep self
  @returns   the result
**/
extern ApiString Prot_FlowStep_GetClassName(Prot_FlowStep self);

/**
  Get for ccp.lims.Protocol.Step.details

Details field for comments.
  @param  Prot_FlowStep self
  @returns   the result
**/
extern ApiString Prot_FlowStep_GetDetails(Prot_FlowStep self);

/**
  Get for ccp.lims.Protocol.Step.duration

The duration in second (s) of 
the step.
  @param  Prot_FlowStep self
  @returns   the result
**/
extern ApiFloat Prot_FlowStep_GetDuration(Prot_FlowStep self);

/**
  Get for ccp.lims.Protocol.Step.durationDisplayUnit

This is the unit 
entered by user and used for display.
  @param  Prot_FlowStep self
  @returns   the result
**/
extern ApiString Prot_FlowStep_GetDurationDisplayUnit(Prot_FlowStep self);

/**
  Get for ccp.lims.Protocol.FlowStep.endProportionSolA

The proportion of 
solution A at the end in percent (%).
  @param  Prot_FlowStep self
  @returns   the result
**/
extern ApiFloat Prot_FlowStep_GetEndProportionSolA(Prot_FlowStep self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Prot_FlowStep self
  @returns   the result
**/
extern ApiList Prot_FlowStep_GetFieldNames(Prot_FlowStep self);

/**
  Get for ccp.lims.Protocol.FlowStep.flowType

The type of flow e.g. 
'fixed volume', 'one solution flow', '2solutions gradient', ...
  @param  Prot_FlowStep self
  @returns   the result
**/
extern ApiString Prot_FlowStep_GetFlowType(Prot_FlowStep self);

/**
  Get for ccp.lims.Protocol.FlowStep.flowrate

The volume of material 
passing a fixed point per unit of time in L/s.
  @param  Prot_FlowStep self
  @returns   the result
**/
extern ApiFloat Prot_FlowStep_GetFlowrate(Prot_FlowStep self);

/**
  Get for ccp.lims.Protocol.FlowStep.flowrateDisplayUnit

This is the unit 
entered by user and used for display.
  @param  Prot_FlowStep self
  @returns   the result
**/
extern ApiString Prot_FlowStep_GetFlowrateDisplayUnit(Prot_FlowStep self);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Prot_FlowStep self
  @returns   the result
**/
extern ApiBoolean Prot_FlowStep_GetInConstructor(Prot_FlowStep self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Prot_FlowStep self
  @returns   the result
**/
extern ApiBoolean Prot_FlowStep_GetIsDeleted(Prot_FlowStep self);

/**
  Get for ccp.lims.Protocol.Step.name

The name of the step.
  @param  Prot_FlowStep self
  @returns   the result
**/
extern ApiString Prot_FlowStep_GetName(Prot_FlowStep self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Prot_FlowStep self
  @returns   the result
**/
extern ApiString Prot_FlowStep_GetPackageName(Prot_FlowStep self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Prot_FlowStep self
  @returns   the result
**/
extern ApiString Prot_FlowStep_GetPackageShortName(Prot_FlowStep self);

/**
  Get for ccp.lims.Protocol.Step.parameterDefinitions

List of parameter 
definition associated to a step.
  @param  Prot_FlowStep self
  @returns   the result
**/
extern ApiSet Prot_FlowStep_GetParameterDefinitions(Prot_FlowStep self);

/**
  Get for ccp.lims.Protocol.Step.parent

link to parent object - synonym 
for procedure
  @param  Prot_FlowStep self
  @returns   the result
**/
extern Prot_Procedure Prot_FlowStep_GetParent(Prot_FlowStep self);

/**
  Get for ccp.lims.Protocol.Step.procedure

parent link
  @param  Prot_FlowStep self
  @returns   the result
**/
extern Prot_Procedure Prot_FlowStep_GetProcedure(Prot_FlowStep self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Prot_FlowStep self
  @returns   the result
**/
extern ApiString Prot_FlowStep_GetQualifiedName(Prot_FlowStep self);

/**
  Get for ccp.lims.Protocol.Step.refInputSamples

List of InputSampleDefs 
associated with this Step.
  @param  Prot_FlowStep self
  @returns   the result
**/
extern ApiSet Prot_FlowStep_GetRefInputSamples(Prot_FlowStep self);

/**
  Get for ccp.lims.Protocol.Step.refOutputSamples

List of InputSampleDefs 
associated with this Step.
  @param  Prot_FlowStep self
  @returns   the result
**/
extern ApiSet Prot_FlowStep_GetRefOutputSamples(Prot_FlowStep self);

/**
  Get for ccp.lims.Protocol.Step.role

The role of the step that it takes 
within a procedure or simply its classification number.
  @param  Prot_FlowStep self
  @returns   the result
**/
extern ApiString Prot_FlowStep_GetRole(Prot_FlowStep self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Prot_FlowStep self
  @returns   the result
**/
extern Impl_MemopsRoot Prot_FlowStep_GetRoot(Prot_FlowStep self);

/**
  Get for ccp.lims.Protocol.Step.serial

Unique identifier.
  @param  Prot_FlowStep self
  @returns   the result
**/
extern ApiInteger Prot_FlowStep_GetSerial(Prot_FlowStep self);

/**
  Get for ccp.lims.Protocol.FlowStep.solutionA

solutionA used by the 
FlowStep.
  @param  Prot_FlowStep self
  @returns   the result
**/
extern Prot_RefInputSample Prot_FlowStep_GetSolutionA(Prot_FlowStep self);

/**
  Get for ccp.lims.Protocol.FlowStep.solutionB

solutionB used by the 
FlowStep.
  @param  Prot_FlowStep self
  @returns   the result
**/
extern Prot_RefInputSample Prot_FlowStep_GetSolutionB(Prot_FlowStep self);

/**
  Get for ccp.lims.Protocol.Step.stepNumber

The place of the step in the 
order of step of the procedure. Need not be sequential, successive steps 
could be numbered (-10,0,10,12,17,20,...). The steps are performed 
according to increasing value of this attribute.
  @param  Prot_FlowStep self
  @returns   the result
**/
extern ApiInteger Prot_FlowStep_GetStepNumber(Prot_FlowStep self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Prot_FlowStep self
  @returns   the result
**/
extern Impl_TopObject Prot_FlowStep_GetTopObject(Prot_FlowStep self);

/**
  Constructor for ccp.lims.Protocol.FlowStep
  @param  Prot_Procedure parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Prot_FlowStep Prot_FlowStep_Init(Prot_Procedure parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.Protocol.FlowStep
  @param  Prot_Procedure parent
  @param  ApiInteger stepNumber
  @returns  the new object
**/
extern Prot_FlowStep Prot_FlowStep_Init_reqd(Prot_Procedure parent, ApiInteger stepNumber);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FlowStep self
  @param  Impl_ApplicationData value
**/
extern void *Prot_FlowStep_RemoveApplicationData(Prot_FlowStep self, Impl_ApplicationData value);

/**
  Remove for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FlowStep self
  @param  Prot_ParameterDefinition value
**/
extern void *Prot_FlowStep_RemoveParameterDefinition(Prot_FlowStep self, Prot_ParameterDefinition value);

/**
  Remove for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  Prot_RefInputSample value
**/
extern void *Prot_FlowStep_RemoveRefInputSample(Prot_FlowStep self, Prot_RefInputSample value);

/**
  Remove for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @param  Prot_RefOutputSample value
**/
extern void *Prot_FlowStep_RemoveRefOutputSample(Prot_FlowStep self, Prot_RefOutputSample value);

/**
  SetAttr for ccp.lims.Protocol.FlowStep
  @param  Prot_FlowStep self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Prot_FlowStep_Set(Prot_FlowStep self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Prot_FlowStep self
  @param  Acco_AccessObject value
**/
extern void *Prot_FlowStep_SetAccess(Prot_FlowStep self, Acco_AccessObject value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_FlowStep self
  @param  ApiList values
**/
extern void *Prot_FlowStep_SetApplicationData(Prot_FlowStep self, ApiList values);

/**
  Set for ccp.lims.Protocol.FlowStep.beginProportionSolA

The proportion 
of solution A at the begining in percent (%).
  @param  Prot_FlowStep self
  @param  ApiFloat value
**/
extern void *Prot_FlowStep_SetBeginProportionSolA(Prot_FlowStep self, ApiFloat value);

/**
  Set for ccp.lims.Protocol.Step.details

Details field for comments.
  @param  Prot_FlowStep self
  @param  ApiString value
**/
extern void *Prot_FlowStep_SetDetails(Prot_FlowStep self, ApiString value);

/**
  Set for ccp.lims.Protocol.Step.duration

The duration in second (s) of 
the step.
  @param  Prot_FlowStep self
  @param  ApiFloat value
**/
extern void *Prot_FlowStep_SetDuration(Prot_FlowStep self, ApiFloat value);

/**
  Set for ccp.lims.Protocol.Step.durationDisplayUnit

This is the unit 
entered by user and used for display.
  @param  Prot_FlowStep self
  @param  ApiString value
**/
extern void *Prot_FlowStep_SetDurationDisplayUnit(Prot_FlowStep self, ApiString value);

/**
  Set for ccp.lims.Protocol.FlowStep.endProportionSolA

The proportion of 
solution A at the end in percent (%).
  @param  Prot_FlowStep self
  @param  ApiFloat value
**/
extern void *Prot_FlowStep_SetEndProportionSolA(Prot_FlowStep self, ApiFloat value);

/**
  Set for ccp.lims.Protocol.FlowStep.flowType

The type of flow e.g. 
'fixed volume', 'one solution flow', '2solutions gradient', ...
  @param  Prot_FlowStep self
  @param  ApiString value
**/
extern void *Prot_FlowStep_SetFlowType(Prot_FlowStep self, ApiString value);

/**
  Set for ccp.lims.Protocol.FlowStep.flowrate

The volume of material 
passing a fixed point per unit of time in L/s.
  @param  Prot_FlowStep self
  @param  ApiFloat value
**/
extern void *Prot_FlowStep_SetFlowrate(Prot_FlowStep self, ApiFloat value);

/**
  Set for ccp.lims.Protocol.FlowStep.flowrateDisplayUnit

This is the unit 
entered by user and used for display.
  @param  Prot_FlowStep self
  @param  ApiString value
**/
extern void *Prot_FlowStep_SetFlowrateDisplayUnit(Prot_FlowStep self, ApiString value);

/**
  Set for ccp.lims.Protocol.Step.name

The name of the step.
  @param  Prot_FlowStep self
  @param  ApiString value
**/
extern void *Prot_FlowStep_SetName(Prot_FlowStep self, ApiString value);

/**
  Set for ccp.lims.Protocol.Step.parameterDefinitions

List of parameter 
definition associated to a step.
  @param  Prot_FlowStep self
  @param  ApiSet values
**/
extern void *Prot_FlowStep_SetParameterDefinitions(Prot_FlowStep self, ApiSet values);

/**
  Set for ccp.lims.Protocol.Step.refInputSamples

List of InputSampleDefs 
associated with this Step.
  @param  Prot_FlowStep self
  @param  ApiSet values
**/
extern void *Prot_FlowStep_SetRefInputSamples(Prot_FlowStep self, ApiSet values);

/**
  Set for ccp.lims.Protocol.Step.refOutputSamples

List of InputSampleDefs 
associated with this Step.
  @param  Prot_FlowStep self
  @param  ApiSet values
**/
extern void *Prot_FlowStep_SetRefOutputSamples(Prot_FlowStep self, ApiSet values);

/**
  Set for ccp.lims.Protocol.Step.role

The role of the step that it takes 
within a procedure or simply its classification number.
  @param  Prot_FlowStep self
  @param  ApiString value
**/
extern void *Prot_FlowStep_SetRole(Prot_FlowStep self, ApiString value);

/**
  Set for ccp.lims.Protocol.Step.serial

Unique identifier.
  @param  Prot_FlowStep self
  @param  ApiInteger value
**/
extern void *Prot_FlowStep_SetSerial(Prot_FlowStep self, ApiInteger value);

/**
  Set for ccp.lims.Protocol.FlowStep.solutionA

solutionA used by the 
FlowStep.
  @param  Prot_FlowStep self
  @param  Prot_RefInputSample value
**/
extern void *Prot_FlowStep_SetSolutionA(Prot_FlowStep self, Prot_RefInputSample value);

/**
  Set for ccp.lims.Protocol.FlowStep.solutionB

solutionB used by the 
FlowStep.
  @param  Prot_FlowStep self
  @param  Prot_RefInputSample value
**/
extern void *Prot_FlowStep_SetSolutionB(Prot_FlowStep self, Prot_RefInputSample value);

/**
  Set for ccp.lims.Protocol.Step.stepNumber

The place of the step in the 
order of step of the procedure. Need not be sequential, successive steps 
could be numbered (-10,0,10,12,17,20,...). The steps are performed 
according to increasing value of this attribute.
  @param  Prot_FlowStep self
  @param  ApiInteger value
**/
extern void *Prot_FlowStep_SetStepNumber(Prot_FlowStep self, ApiInteger value);

/**
  Sorted for ccp.lims.Protocol.Step.parameterDefinitions

List of 
parameter definition associated to a step.
  @param  Prot_FlowStep self
  @returns   the result
**/
extern ApiList Prot_FlowStep_SortedParameterDefinitions(Prot_FlowStep self);

/**
  Sorted for ccp.lims.Protocol.Step.refInputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @returns   the result
**/
extern ApiList Prot_FlowStep_SortedRefInputSamples(Prot_FlowStep self);

/**
  Sorted for ccp.lims.Protocol.Step.refOutputSamples

List of 
InputSampleDefs associated with this Step.
  @param  Prot_FlowStep self
  @returns   the result
**/
extern ApiList Prot_FlowStep_SortedRefOutputSamples(Prot_FlowStep self);

#endif /* __incl__ccp_api_lims_Protocol_FlowStep_h__ */
