
#ifndef __incl__ccp_api_lims_Protocol_RefInputSample_h__
#define __incl__ccp_api_lims_Protocol_RefInputSample_h__

#include "ccp.h"

/*
  An InputSampleDef is used to specify that an Experiment created from the parent Protocol should have an InputSample that accepts Samples belonging to the specified SampleCategory (any if InputSampleDef.sampleCategory is null).
*/

/* package ccp.api.lims.Protocol */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefInputSample self
  @param  Impl_ApplicationData value
**/
extern void *Prot_RefInputSample_AddApplicationData(Prot_RefInputSample self, Impl_ApplicationData value);

/**
  Add for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @param  Expe_InputSample value
**/
extern void *Prot_RefInputSample_AddInputSample(Prot_RefInputSample self, Expe_InputSample value);

/**
  Add for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps where 
the solutionA is involved.
  @param  Prot_RefInputSample self
  @param  Prot_FlowStep value
**/
extern void *Prot_RefInputSample_AddSolAflowStep(Prot_RefInputSample self, Prot_FlowStep value);

/**
  Add for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps where 
the solutionB is involved.
  @param  Prot_RefInputSample self
  @param  Prot_FlowStep value
**/
extern void *Prot_RefInputSample_AddSolBflowStep(Prot_RefInputSample self, Prot_FlowStep value);

/**
  CheckAllValid for ccp.lims.Protocol.RefInputSample
  @param  Prot_RefInputSample self
  @param  ApiBoolean complete
**/
extern void *Prot_RefInputSample_CheckAllValid(Prot_RefInputSample self, ApiBoolean complete);

/**
  CheckValid for ccp.lims.Protocol.RefInputSample
  @param  Prot_RefInputSample self
  @param  ApiBoolean complete
**/
extern void *Prot_RefInputSample_CheckValid(Prot_RefInputSample self, ApiBoolean complete);

/**
  FindAll for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_RefInputSample_FindAllAddSteps(Prot_RefInputSample self, ApiMap conditions);

/**
  FindAll for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_RefInputSample_FindAllAddSteps_keyval0(Prot_RefInputSample self);

/**
  FindAll for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_RefInputSample_FindAllAddSteps_keyval1(Prot_RefInputSample self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_RefInputSample_FindAllAddSteps_keyval2(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_RefInputSample_FindAllAddSteps_keyval3(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
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
extern ApiSet Prot_RefInputSample_FindAllAddSteps_keyval4(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefInputSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Prot_RefInputSample_FindAllApplicationData(Prot_RefInputSample self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefInputSample self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Prot_RefInputSample_FindAllApplicationData_keyval0(Prot_RefInputSample self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefInputSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Prot_RefInputSample_FindAllApplicationData_keyval1(Prot_RefInputSample self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Prot_RefInputSample_FindAllApplicationData_keyval2(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Prot_RefInputSample_FindAllApplicationData_keyval3(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefInputSample self
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
extern ApiList Prot_RefInputSample_FindAllApplicationData_keyval4(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_RefInputSample_FindAllInputSamples(Prot_RefInputSample self, ApiMap conditions);

/**
  FindAll for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_RefInputSample_FindAllInputSamples_keyval0(Prot_RefInputSample self);

/**
  FindAll for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_RefInputSample_FindAllInputSamples_keyval1(Prot_RefInputSample self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_RefInputSample_FindAllInputSamples_keyval2(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_RefInputSample_FindAllInputSamples_keyval3(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
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
extern ApiSet Prot_RefInputSample_FindAllInputSamples_keyval4(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps 
where the solutionA is involved.
  @param  Prot_RefInputSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_RefInputSample_FindAllSolAflowSteps(Prot_RefInputSample self, ApiMap conditions);

/**
  FindAll for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps 
where the solutionA is involved.
  @param  Prot_RefInputSample self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_RefInputSample_FindAllSolAflowSteps_keyval0(Prot_RefInputSample self);

/**
  FindAll for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps 
where the solutionA is involved.
  @param  Prot_RefInputSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_RefInputSample_FindAllSolAflowSteps_keyval1(Prot_RefInputSample self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps 
where the solutionA is involved.
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_RefInputSample_FindAllSolAflowSteps_keyval2(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps 
where the solutionA is involved.
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_RefInputSample_FindAllSolAflowSteps_keyval3(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps 
where the solutionA is involved.
  @param  Prot_RefInputSample self
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
extern ApiSet Prot_RefInputSample_FindAllSolAflowSteps_keyval4(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps 
where the solutionB is involved.
  @param  Prot_RefInputSample self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_RefInputSample_FindAllSolBflowSteps(Prot_RefInputSample self, ApiMap conditions);

/**
  FindAll for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps 
where the solutionB is involved.
  @param  Prot_RefInputSample self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_RefInputSample_FindAllSolBflowSteps_keyval0(Prot_RefInputSample self);

/**
  FindAll for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps 
where the solutionB is involved.
  @param  Prot_RefInputSample self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_RefInputSample_FindAllSolBflowSteps_keyval1(Prot_RefInputSample self, char * key, ApiObject value);

/**
  FindAll for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps 
where the solutionB is involved.
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_RefInputSample_FindAllSolBflowSteps_keyval2(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps 
where the solutionB is involved.
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Prot_RefInputSample_FindAllSolBflowSteps_keyval3(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps 
where the solutionB is involved.
  @param  Prot_RefInputSample self
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
extern ApiSet Prot_RefInputSample_FindAllSolBflowSteps_keyval4(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Prot_AddStep Prot_RefInputSample_FindFirstAddStep(Prot_RefInputSample self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
  @returns  the first value that satisfies the conditions 
**/
extern Prot_AddStep Prot_RefInputSample_FindFirstAddStep_keyval0(Prot_RefInputSample self);

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Prot_AddStep Prot_RefInputSample_FindFirstAddStep_keyval1(Prot_RefInputSample self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Prot_AddStep Prot_RefInputSample_FindFirstAddStep_keyval2(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Prot_AddStep Prot_RefInputSample_FindFirstAddStep_keyval3(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
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
extern Prot_AddStep Prot_RefInputSample_FindFirstAddStep_keyval4(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefInputSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Prot_RefInputSample_FindFirstApplicationData(Prot_RefInputSample self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefInputSample self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Prot_RefInputSample_FindFirstApplicationData_keyval0(Prot_RefInputSample self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefInputSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Prot_RefInputSample_FindFirstApplicationData_keyval1(Prot_RefInputSample self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Prot_RefInputSample_FindFirstApplicationData_keyval2(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Prot_RefInputSample_FindFirstApplicationData_keyval3(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefInputSample self
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
extern Impl_ApplicationData Prot_RefInputSample_FindFirstApplicationData_keyval4(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Expe_InputSample Prot_RefInputSample_FindFirstInputSample(Prot_RefInputSample self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @returns  the first value that satisfies the conditions 
**/
extern Expe_InputSample Prot_RefInputSample_FindFirstInputSample_keyval0(Prot_RefInputSample self);

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Expe_InputSample Prot_RefInputSample_FindFirstInputSample_keyval1(Prot_RefInputSample self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Expe_InputSample Prot_RefInputSample_FindFirstInputSample_keyval2(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Expe_InputSample Prot_RefInputSample_FindFirstInputSample_keyval3(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
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
extern Expe_InputSample Prot_RefInputSample_FindFirstInputSample_keyval4(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps 
where the solutionA is involved.
  @param  Prot_RefInputSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Prot_FlowStep Prot_RefInputSample_FindFirstSolAflowStep(Prot_RefInputSample self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps 
where the solutionA is involved.
  @param  Prot_RefInputSample self
  @returns  the first value that satisfies the conditions 
**/
extern Prot_FlowStep Prot_RefInputSample_FindFirstSolAflowStep_keyval0(Prot_RefInputSample self);

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps 
where the solutionA is involved.
  @param  Prot_RefInputSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Prot_FlowStep Prot_RefInputSample_FindFirstSolAflowStep_keyval1(Prot_RefInputSample self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps 
where the solutionA is involved.
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Prot_FlowStep Prot_RefInputSample_FindFirstSolAflowStep_keyval2(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps 
where the solutionA is involved.
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Prot_FlowStep Prot_RefInputSample_FindFirstSolAflowStep_keyval3(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps 
where the solutionA is involved.
  @param  Prot_RefInputSample self
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
extern Prot_FlowStep Prot_RefInputSample_FindFirstSolAflowStep_keyval4(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps 
where the solutionB is involved.
  @param  Prot_RefInputSample self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Prot_FlowStep Prot_RefInputSample_FindFirstSolBflowStep(Prot_RefInputSample self, ApiMap conditions);

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps 
where the solutionB is involved.
  @param  Prot_RefInputSample self
  @returns  the first value that satisfies the conditions 
**/
extern Prot_FlowStep Prot_RefInputSample_FindFirstSolBflowStep_keyval0(Prot_RefInputSample self);

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps 
where the solutionB is involved.
  @param  Prot_RefInputSample self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Prot_FlowStep Prot_RefInputSample_FindFirstSolBflowStep_keyval1(Prot_RefInputSample self, char * key, ApiObject value);

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps 
where the solutionB is involved.
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Prot_FlowStep Prot_RefInputSample_FindFirstSolBflowStep_keyval2(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps 
where the solutionB is involved.
  @param  Prot_RefInputSample self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Prot_FlowStep Prot_RefInputSample_FindFirstSolBflowStep_keyval3(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps 
where the solutionB is involved.
  @param  Prot_RefInputSample self
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
extern Prot_FlowStep Prot_RefInputSample_FindFirstSolBflowStep_keyval4(Prot_RefInputSample self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for ccp.lims.Protocol.RefInputSample
  @param  Prot_RefInputSample self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Prot_RefInputSample_Get(Prot_RefInputSample self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Prot_RefInputSample self
  @returns   the result
**/
extern Acco_AccessObject Prot_RefInputSample_GetAccess(Prot_RefInputSample self);

/**
  Get for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
  @returns   the result
**/
extern ApiSet Prot_RefInputSample_GetAddSteps(Prot_RefInputSample self);

/**
  Get for ccp.lims.Protocol.RefInputSample.amount

The default amount of 
Sample to use for an InputSample created from this InputSampleDef.
  @param  Prot_RefInputSample self
  @returns   the result
**/
extern ApiFloat Prot_RefInputSample_GetAmount(Prot_RefInputSample self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefInputSample self
  @returns   the result
**/
extern ApiList Prot_RefInputSample_GetApplicationData(Prot_RefInputSample self);

/**
  GetByKey for ccp.lims.Protocol.RefInputSample
  @param  Prot_RefInputSample self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Prot_RefInputSample Prot_RefInputSample_GetByKey(Prot_RefInputSample self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Prot_RefInputSample self
  @returns   the result
**/
extern ApiString Prot_RefInputSample_GetClassName(Prot_RefInputSample self);

/**
  Get for ccp.lims.Protocol.RefInputSample.displayUnit

The unit to 
display for InputSampleDef.amount.
  @param  Prot_RefInputSample self
  @returns   the result
**/
extern ApiString Prot_RefInputSample_GetDisplayUnit(Prot_RefInputSample self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Prot_RefInputSample self
  @returns   the result
**/
extern ApiList Prot_RefInputSample_GetFieldNames(Prot_RefInputSample self);

/**
  GetFullKey for ccp.lims.Protocol.RefInputSample
  @param  Prot_RefInputSample self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Prot_RefInputSample_GetFullKey(Prot_RefInputSample self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Prot_RefInputSample self
  @returns   the result
**/
extern ApiBoolean Prot_RefInputSample_GetInConstructor(Prot_RefInputSample self);

/**
  Get for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @returns   the result
**/
extern ApiSet Prot_RefInputSample_GetInputSamples(Prot_RefInputSample self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Prot_RefInputSample self
  @returns   the result
**/
extern ApiBoolean Prot_RefInputSample_GetIsDeleted(Prot_RefInputSample self);

/**
  GetLocalKey for ccp.lims.Protocol.RefInputSample
  @param  Prot_RefInputSample self
  @returns  Local object key
**/
extern ApiObject Prot_RefInputSample_GetLocalKey(Prot_RefInputSample self);

/**
  Get for ccp.lims.Protocol.RefInputSample.name

The name of the 
InputSampleDef. It is envisioned that this will be something useful to 
the user during the viewing and editing of Protocols. This should also 
be copied down to InputSample.name when an InputSample is created from 
an InputSampleDef.
  @param  Prot_RefInputSample self
  @returns   the result
**/
extern ApiString Prot_RefInputSample_GetName(Prot_RefInputSample self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Prot_RefInputSample self
  @returns   the result
**/
extern ApiString Prot_RefInputSample_GetPackageName(Prot_RefInputSample self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Prot_RefInputSample self
  @returns   the result
**/
extern ApiString Prot_RefInputSample_GetPackageShortName(Prot_RefInputSample self);

/**
  Get for ccp.lims.Protocol.RefInputSample.parent

link to parent object - 
synonym for protocol
  @param  Prot_RefInputSample self
  @returns   the result
**/
extern Prot_Protocol Prot_RefInputSample_GetParent(Prot_RefInputSample self);

/**
  Get for ccp.lims.Protocol.RefInputSample.protocol

parent link
  @param  Prot_RefInputSample self
  @returns   the result
**/
extern Prot_Protocol Prot_RefInputSample_GetProtocol(Prot_RefInputSample self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Prot_RefInputSample self
  @returns   the result
**/
extern ApiString Prot_RefInputSample_GetQualifiedName(Prot_RefInputSample self);

/**
  Get for ccp.lims.Protocol.RefInputSample.refSample
  @param  Prot_RefInputSample self
  @returns   the result
**/
extern Sam_RefSample Prot_RefInputSample_GetRefSample(Prot_RefInputSample self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Prot_RefInputSample self
  @returns   the result
**/
extern Impl_MemopsRoot Prot_RefInputSample_GetRoot(Prot_RefInputSample self);

/**
  Get for ccp.lims.Protocol.RefInputSample.serial

Unique identifier.
  @param  Prot_RefInputSample self
  @returns   the result
**/
extern ApiInteger Prot_RefInputSample_GetSerial(Prot_RefInputSample self);

/**
  Get for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps where 
the solutionA is involved.
  @param  Prot_RefInputSample self
  @returns   the result
**/
extern ApiSet Prot_RefInputSample_GetSolAflowSteps(Prot_RefInputSample self);

/**
  Get for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps where 
the solutionB is involved.
  @param  Prot_RefInputSample self
  @returns   the result
**/
extern ApiSet Prot_RefInputSample_GetSolBflowSteps(Prot_RefInputSample self);

/**
  Get for ccp.lims.Protocol.RefInputSample.step

The Step the 
InputSampleDef belongs to.
  @param  Prot_RefInputSample self
  @returns   the result
**/
extern Prot_Step Prot_RefInputSample_GetStep(Prot_RefInputSample self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Prot_RefInputSample self
  @returns   the result
**/
extern Impl_TopObject Prot_RefInputSample_GetTopObject(Prot_RefInputSample self);

/**
  Get for ccp.lims.Protocol.RefInputSample.unit

Unit (L, Kg, g/L, s-1, 
etc.) for InputSampleDef.amount
  @param  Prot_RefInputSample self
  @returns   the result
**/
extern ApiString Prot_RefInputSample_GetUnit(Prot_RefInputSample self);

/**
  Constructor for ccp.lims.Protocol.RefInputSample
  @param  Prot_Protocol parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Prot_RefInputSample Prot_RefInputSample_Init(Prot_Protocol parent, ApiMap attrlinks);

/**
  Constructor for ccp.lims.Protocol.RefInputSample
  @param  Prot_Protocol parent
  @returns  the new object
**/
extern Prot_RefInputSample Prot_RefInputSample_Init_reqd(Prot_Protocol parent);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefInputSample self
  @param  Impl_ApplicationData value
**/
extern void *Prot_RefInputSample_RemoveApplicationData(Prot_RefInputSample self, Impl_ApplicationData value);

/**
  Remove for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @param  Expe_InputSample value
**/
extern void *Prot_RefInputSample_RemoveInputSample(Prot_RefInputSample self, Expe_InputSample value);

/**
  Remove for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps 
where the solutionA is involved.
  @param  Prot_RefInputSample self
  @param  Prot_FlowStep value
**/
extern void *Prot_RefInputSample_RemoveSolAflowStep(Prot_RefInputSample self, Prot_FlowStep value);

/**
  Remove for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps 
where the solutionB is involved.
  @param  Prot_RefInputSample self
  @param  Prot_FlowStep value
**/
extern void *Prot_RefInputSample_RemoveSolBflowStep(Prot_RefInputSample self, Prot_FlowStep value);

/**
  SetAttr for ccp.lims.Protocol.RefInputSample
  @param  Prot_RefInputSample self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Prot_RefInputSample_Set(Prot_RefInputSample self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Prot_RefInputSample self
  @param  Acco_AccessObject value
**/
extern void *Prot_RefInputSample_SetAccess(Prot_RefInputSample self, Acco_AccessObject value);

/**
  Set for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
  @param  ApiSet values
**/
extern void *Prot_RefInputSample_SetAddSteps(Prot_RefInputSample self, ApiSet values);

/**
  Set for ccp.lims.Protocol.RefInputSample.amount

The default amount of 
Sample to use for an InputSample created from this InputSampleDef.
  @param  Prot_RefInputSample self
  @param  ApiFloat value
**/
extern void *Prot_RefInputSample_SetAmount(Prot_RefInputSample self, ApiFloat value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Prot_RefInputSample self
  @param  ApiList values
**/
extern void *Prot_RefInputSample_SetApplicationData(Prot_RefInputSample self, ApiList values);

/**
  Set for ccp.lims.Protocol.RefInputSample.displayUnit

The unit to 
display for InputSampleDef.amount.
  @param  Prot_RefInputSample self
  @param  ApiString value
**/
extern void *Prot_RefInputSample_SetDisplayUnit(Prot_RefInputSample self, ApiString value);

/**
  Set for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @param  ApiSet values
**/
extern void *Prot_RefInputSample_SetInputSamples(Prot_RefInputSample self, ApiSet values);

/**
  Set for ccp.lims.Protocol.RefInputSample.name

The name of the 
InputSampleDef. It is envisioned that this will be something useful to 
the user during the viewing and editing of Protocols. This should also 
be copied down to InputSample.name when an InputSample is created from 
an InputSampleDef.
  @param  Prot_RefInputSample self
  @param  ApiString value
**/
extern void *Prot_RefInputSample_SetName(Prot_RefInputSample self, ApiString value);

/**
  Set for ccp.lims.Protocol.RefInputSample.refSample
  @param  Prot_RefInputSample self
  @param  Sam_RefSample value
**/
extern void *Prot_RefInputSample_SetRefSample(Prot_RefInputSample self, Sam_RefSample value);

/**
  Set for ccp.lims.Protocol.RefInputSample.serial

Unique identifier.
  @param  Prot_RefInputSample self
  @param  ApiInteger value
**/
extern void *Prot_RefInputSample_SetSerial(Prot_RefInputSample self, ApiInteger value);

/**
  Set for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps where 
the solutionA is involved.
  @param  Prot_RefInputSample self
  @param  ApiSet values
**/
extern void *Prot_RefInputSample_SetSolAflowSteps(Prot_RefInputSample self, ApiSet values);

/**
  Set for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps where 
the solutionB is involved.
  @param  Prot_RefInputSample self
  @param  ApiSet values
**/
extern void *Prot_RefInputSample_SetSolBflowSteps(Prot_RefInputSample self, ApiSet values);

/**
  Set for ccp.lims.Protocol.RefInputSample.step

The Step the 
InputSampleDef belongs to.
  @param  Prot_RefInputSample self
  @param  Prot_Step value
**/
extern void *Prot_RefInputSample_SetStep(Prot_RefInputSample self, Prot_Step value);

/**
  Set for ccp.lims.Protocol.RefInputSample.unit

Unit (L, Kg, g/L, s-1, 
etc.) for InputSampleDef.amount
  @param  Prot_RefInputSample self
  @param  ApiString value
**/
extern void *Prot_RefInputSample_SetUnit(Prot_RefInputSample self, ApiString value);

/**
  Sorted for ccp.lims.Protocol.RefInputSample.addSteps

Steps where the 
Materiel is involved.
  @param  Prot_RefInputSample self
  @returns   the result
**/
extern ApiList Prot_RefInputSample_SortedAddSteps(Prot_RefInputSample self);

/**
  Sorted for ccp.lims.Protocol.RefInputSample.inputSamples
  @param  Prot_RefInputSample self
  @returns   the result
**/
extern ApiList Prot_RefInputSample_SortedInputSamples(Prot_RefInputSample self);

/**
  Sorted for ccp.lims.Protocol.RefInputSample.solAflowSteps

FlowSteps 
where the solutionA is involved.
  @param  Prot_RefInputSample self
  @returns   the result
**/
extern ApiList Prot_RefInputSample_SortedSolAflowSteps(Prot_RefInputSample self);

/**
  Sorted for ccp.lims.Protocol.RefInputSample.solBflowSteps

FlowSteps 
where the solutionB is involved.
  @param  Prot_RefInputSample self
  @returns   the result
**/
extern ApiList Prot_RefInputSample_SortedSolBflowSteps(Prot_RefInputSample self);

#endif /* __incl__ccp_api_lims_Protocol_RefInputSample_h__ */
