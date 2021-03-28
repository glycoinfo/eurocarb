
#ifndef __incl__molsim_api_NmrSim_Run_h__
#define __incl__molsim_api_NmrSim_Run_h__

#include "ccp.h"

/*
  A single run, simulatuion, structure generation atempt etc. 
*/

/* package molsim.api.NmrSim */

/**
  Add for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_Run self
  @param  Impl_ApplicationData value
**/
extern void *Nsim_Run_AddApplicationData(Nsim_Run self, Impl_ApplicationData value);

/**
  Add for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists used 
as input for NmrSim.Run
  @param  Nsim_Run self
  @param  Nmr_AbstractMeasurementList value
**/
extern void *Nsim_Run_AddInputMeasurementList(Nsim_Run self, Nmr_AbstractMeasurementList value);

/**
  Add for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input to 
NmrSim.Run
  @param  Nsim_Run self
  @param  Nmr_PeakList value
**/
extern void *Nsim_Run_AddInputPeakList(Nsim_Run self, Nmr_PeakList value);

/**
  Add for molsim.NmrSim.Run.inputStructures

Structures used for Run input
  @param  Nsim_Run self
  @param  Coor_Model value
**/
extern void *Nsim_Run_AddInputStructure(Nsim_Run self, Coor_Model value);

/**
  Add for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @param  Nmr_AbstractMeasurementList value
**/
extern void *Nsim_Run_AddOutputMeasurementList(Nsim_Run self, Nmr_AbstractMeasurementList value);

/**
  Add for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @param  Nmr_PeakList value
**/
extern void *Nsim_Run_AddOutputPeakList(Nsim_Run self, Nmr_PeakList value);

/**
  CheckAllValid for molsim.NmrSim.Run
  @param  Nsim_Run self
  @param  ApiBoolean complete
**/
extern void *Nsim_Run_CheckAllValid(Nsim_Run self, ApiBoolean complete);

/**
  CheckValid for molsim.NmrSim.Run
  @param  Nsim_Run self
  @param  ApiBoolean complete
**/
extern void *Nsim_Run_CheckValid(Nsim_Run self, ApiBoolean complete);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nsim_Run_FindAllApplicationData(Nsim_Run self, ApiMap conditions);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_Run self
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nsim_Run_FindAllApplicationData_keyval0(Nsim_Run self);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nsim_Run_FindAllApplicationData_keyval1(Nsim_Run self, char * key, ApiObject value);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nsim_Run_FindAllApplicationData_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiList Nsim_Run_FindAllApplicationData_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_Run self
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
extern ApiList Nsim_Run_FindAllApplicationData_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists 
used as input for NmrSim.Run
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllInputMeasurementLists(Nsim_Run self, ApiMap conditions);

/**
  FindAll for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists 
used as input for NmrSim.Run
  @param  Nsim_Run self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllInputMeasurementLists_keyval0(Nsim_Run self);

/**
  FindAll for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists 
used as input for NmrSim.Run
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllInputMeasurementLists_keyval1(Nsim_Run self, char * key, ApiObject value);

/**
  FindAll for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists 
used as input for NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllInputMeasurementLists_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists 
used as input for NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllInputMeasurementLists_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists 
used as input for NmrSim.Run
  @param  Nsim_Run self
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
extern ApiSet Nsim_Run_FindAllInputMeasurementLists_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input to 
NmrSim.Run
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllInputPeakLists(Nsim_Run self, ApiMap conditions);

/**
  FindAll for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input to 
NmrSim.Run
  @param  Nsim_Run self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllInputPeakLists_keyval0(Nsim_Run self);

/**
  FindAll for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input to 
NmrSim.Run
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllInputPeakLists_keyval1(Nsim_Run self, char * key, ApiObject value);

/**
  FindAll for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input to 
NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllInputPeakLists_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input to 
NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllInputPeakLists_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input to 
NmrSim.Run
  @param  Nsim_Run self
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
extern ApiSet Nsim_Run_FindAllInputPeakLists_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for molsim.NmrSim.Run.inputStructures

Structures used for Run 
input
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllInputStructures(Nsim_Run self, ApiMap conditions);

/**
  FindAll for molsim.NmrSim.Run.inputStructures

Structures used for Run 
input
  @param  Nsim_Run self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllInputStructures_keyval0(Nsim_Run self);

/**
  FindAll for molsim.NmrSim.Run.inputStructures

Structures used for Run 
input
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllInputStructures_keyval1(Nsim_Run self, char * key, ApiObject value);

/**
  FindAll for molsim.NmrSim.Run.inputStructures

Structures used for Run 
input
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllInputStructures_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for molsim.NmrSim.Run.inputStructures

Structures used for Run 
input
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllInputStructures_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for molsim.NmrSim.Run.inputStructures

Structures used for Run 
input
  @param  Nsim_Run self
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
extern ApiSet Nsim_Run_FindAllInputStructures_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for molsim.NmrSim.Run.nmrSimEnergyTerms

child link to class 
NmrSimEnergyTerm
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllNmrSimEnergyTerms(Nsim_Run self, ApiMap conditions);

/**
  FindAll for molsim.NmrSim.Run.nmrSimEnergyTerms

child link to class 
NmrSimEnergyTerm
  @param  Nsim_Run self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllNmrSimEnergyTerms_keyval0(Nsim_Run self);

/**
  FindAll for molsim.NmrSim.Run.nmrSimEnergyTerms

child link to class 
NmrSimEnergyTerm
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllNmrSimEnergyTerms_keyval1(Nsim_Run self, char * key, ApiObject value);

/**
  FindAll for molsim.NmrSim.Run.nmrSimEnergyTerms

child link to class 
NmrSimEnergyTerm
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllNmrSimEnergyTerms_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for molsim.NmrSim.Run.nmrSimEnergyTerms

child link to class 
NmrSimEnergyTerm
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllNmrSimEnergyTerms_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for molsim.NmrSim.Run.nmrSimEnergyTerms

child link to class 
NmrSimEnergyTerm
  @param  Nsim_Run self
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
extern ApiSet Nsim_Run_FindAllNmrSimEnergyTerms_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllOutputMeasurementLists(Nsim_Run self, ApiMap conditions);

/**
  FindAll for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllOutputMeasurementLists_keyval0(Nsim_Run self);

/**
  FindAll for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllOutputMeasurementLists_keyval1(Nsim_Run self, char * key, ApiObject value);

/**
  FindAll for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllOutputMeasurementLists_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllOutputMeasurementLists_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
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
extern ApiSet Nsim_Run_FindAllOutputMeasurementLists_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllOutputPeakLists(Nsim_Run self, ApiMap conditions);

/**
  FindAll for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllOutputPeakLists_keyval0(Nsim_Run self);

/**
  FindAll for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllOutputPeakLists_keyval1(Nsim_Run self, char * key, ApiObject value);

/**
  FindAll for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllOutputPeakLists_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllOutputPeakLists_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
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
extern ApiSet Nsim_Run_FindAllOutputPeakLists_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindAll for molsim.NmrSim.Run.runParameters

child link to class 
RunParameter
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllRunParameters(Nsim_Run self, ApiMap conditions);

/**
  FindAll for molsim.NmrSim.Run.runParameters

child link to class 
RunParameter
  @param  Nsim_Run self
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllRunParameters_keyval0(Nsim_Run self);

/**
  FindAll for molsim.NmrSim.Run.runParameters

child link to class 
RunParameter
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllRunParameters_keyval1(Nsim_Run self, char * key, ApiObject value);

/**
  FindAll for molsim.NmrSim.Run.runParameters

child link to class 
RunParameter
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllRunParameters_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindAll for molsim.NmrSim.Run.runParameters

child link to class 
RunParameter
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  all value that satisfy the conditions 
**/
extern ApiSet Nsim_Run_FindAllRunParameters_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindAll for molsim.NmrSim.Run.runParameters

child link to class 
RunParameter
  @param  Nsim_Run self
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
extern ApiSet Nsim_Run_FindAllRunParameters_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nsim_Run_FindFirstApplicationData(Nsim_Run self, ApiMap conditions);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_Run self
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nsim_Run_FindFirstApplicationData_keyval0(Nsim_Run self);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nsim_Run_FindFirstApplicationData_keyval1(Nsim_Run self, char * key, ApiObject value);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nsim_Run_FindFirstApplicationData_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Impl_ApplicationData Nsim_Run_FindFirstApplicationData_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_Run self
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
extern Impl_ApplicationData Nsim_Run_FindFirstApplicationData_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists 
used as input for NmrSim.Run
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nsim_Run_FindFirstInputMeasurementList(Nsim_Run self, ApiMap conditions);

/**
  FindFirst for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists 
used as input for NmrSim.Run
  @param  Nsim_Run self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nsim_Run_FindFirstInputMeasurementList_keyval0(Nsim_Run self);

/**
  FindFirst for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists 
used as input for NmrSim.Run
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nsim_Run_FindFirstInputMeasurementList_keyval1(Nsim_Run self, char * key, ApiObject value);

/**
  FindFirst for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists 
used as input for NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nsim_Run_FindFirstInputMeasurementList_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists 
used as input for NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nsim_Run_FindFirstInputMeasurementList_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists 
used as input for NmrSim.Run
  @param  Nsim_Run self
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
extern Nmr_AbstractMeasurementList Nsim_Run_FindFirstInputMeasurementList_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input 
to NmrSim.Run
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakList Nsim_Run_FindFirstInputPeakList(Nsim_Run self, ApiMap conditions);

/**
  FindFirst for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input 
to NmrSim.Run
  @param  Nsim_Run self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakList Nsim_Run_FindFirstInputPeakList_keyval0(Nsim_Run self);

/**
  FindFirst for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input 
to NmrSim.Run
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakList Nsim_Run_FindFirstInputPeakList_keyval1(Nsim_Run self, char * key, ApiObject value);

/**
  FindFirst for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input 
to NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakList Nsim_Run_FindFirstInputPeakList_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input 
to NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakList Nsim_Run_FindFirstInputPeakList_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input 
to NmrSim.Run
  @param  Nsim_Run self
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
extern Nmr_PeakList Nsim_Run_FindFirstInputPeakList_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for molsim.NmrSim.Run.inputStructures

Structures used for Run 
input
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Model Nsim_Run_FindFirstInputStructure(Nsim_Run self, ApiMap conditions);

/**
  FindFirst for molsim.NmrSim.Run.inputStructures

Structures used for Run 
input
  @param  Nsim_Run self
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Model Nsim_Run_FindFirstInputStructure_keyval0(Nsim_Run self);

/**
  FindFirst for molsim.NmrSim.Run.inputStructures

Structures used for Run 
input
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Model Nsim_Run_FindFirstInputStructure_keyval1(Nsim_Run self, char * key, ApiObject value);

/**
  FindFirst for molsim.NmrSim.Run.inputStructures

Structures used for Run 
input
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Model Nsim_Run_FindFirstInputStructure_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for molsim.NmrSim.Run.inputStructures

Structures used for Run 
input
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Coor_Model Nsim_Run_FindFirstInputStructure_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for molsim.NmrSim.Run.inputStructures

Structures used for Run 
input
  @param  Nsim_Run self
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
extern Coor_Model Nsim_Run_FindFirstInputStructure_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for molsim.NmrSim.Run.nmrSimEnergyTerms

child link to class 
NmrSimEnergyTerm
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nsim_Run_FindFirstNmrSimEnergyTerm(Nsim_Run self, ApiMap conditions);

/**
  FindFirst for molsim.NmrSim.Run.nmrSimEnergyTerms

child link to class 
NmrSimEnergyTerm
  @param  Nsim_Run self
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nsim_Run_FindFirstNmrSimEnergyTerm_keyval0(Nsim_Run self);

/**
  FindFirst for molsim.NmrSim.Run.nmrSimEnergyTerms

child link to class 
NmrSimEnergyTerm
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nsim_Run_FindFirstNmrSimEnergyTerm_keyval1(Nsim_Run self, char * key, ApiObject value);

/**
  FindFirst for molsim.NmrSim.Run.nmrSimEnergyTerms

child link to class 
NmrSimEnergyTerm
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nsim_Run_FindFirstNmrSimEnergyTerm_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for molsim.NmrSim.Run.nmrSimEnergyTerms

child link to class 
NmrSimEnergyTerm
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_NmrSimEnergyTerm Nsim_Run_FindFirstNmrSimEnergyTerm_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for molsim.NmrSim.Run.nmrSimEnergyTerms

child link to class 
NmrSimEnergyTerm
  @param  Nsim_Run self
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
extern Nsim_NmrSimEnergyTerm Nsim_Run_FindFirstNmrSimEnergyTerm_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nsim_Run_FindFirstOutputMeasurementList(Nsim_Run self, ApiMap conditions);

/**
  FindFirst for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nsim_Run_FindFirstOutputMeasurementList_keyval0(Nsim_Run self);

/**
  FindFirst for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nsim_Run_FindFirstOutputMeasurementList_keyval1(Nsim_Run self, char * key, ApiObject value);

/**
  FindFirst for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nsim_Run_FindFirstOutputMeasurementList_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_AbstractMeasurementList Nsim_Run_FindFirstOutputMeasurementList_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
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
extern Nmr_AbstractMeasurementList Nsim_Run_FindFirstOutputMeasurementList_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakList Nsim_Run_FindFirstOutputPeakList(Nsim_Run self, ApiMap conditions);

/**
  FindFirst for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakList Nsim_Run_FindFirstOutputPeakList_keyval0(Nsim_Run self);

/**
  FindFirst for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakList Nsim_Run_FindFirstOutputPeakList_keyval1(Nsim_Run self, char * key, ApiObject value);

/**
  FindFirst for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakList Nsim_Run_FindFirstOutputPeakList_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nmr_PeakList Nsim_Run_FindFirstOutputPeakList_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
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
extern Nmr_PeakList Nsim_Run_FindFirstOutputPeakList_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  FindFirst for molsim.NmrSim.Run.runParameters

child link to class 
RunParameter
  @param  Nsim_Run self
  @param  ApiMap conditions
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_RunParameter Nsim_Run_FindFirstRunParameter(Nsim_Run self, ApiMap conditions);

/**
  FindFirst for molsim.NmrSim.Run.runParameters

child link to class 
RunParameter
  @param  Nsim_Run self
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_RunParameter Nsim_Run_FindFirstRunParameter_keyval0(Nsim_Run self);

/**
  FindFirst for molsim.NmrSim.Run.runParameters

child link to class 
RunParameter
  @param  Nsim_Run self
  @param  char * key
  @param  ApiObject value
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_RunParameter Nsim_Run_FindFirstRunParameter_keyval1(Nsim_Run self, char * key, ApiObject value);

/**
  FindFirst for molsim.NmrSim.Run.runParameters

child link to class 
RunParameter
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_RunParameter Nsim_Run_FindFirstRunParameter_keyval2(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2);

/**
  FindFirst for molsim.NmrSim.Run.runParameters

child link to class 
RunParameter
  @param  Nsim_Run self
  @param  char * key1
  @param  ApiObject value1
  @param  char * key2
  @param  ApiObject value2
  @param  char * key3
  @param  ApiObject value3
  @returns  the first value that satisfies the conditions 
**/
extern Nsim_RunParameter Nsim_Run_FindFirstRunParameter_keyval3(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3);

/**
  FindFirst for molsim.NmrSim.Run.runParameters

child link to class 
RunParameter
  @param  Nsim_Run self
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
extern Nsim_RunParameter Nsim_Run_FindFirstRunParameter_keyval4(Nsim_Run self, char * key1, ApiObject value1, char * key2, ApiObject value2, char * key3, ApiObject value3, char * key4, ApiObject value4);

/**
  GetAttr for molsim.NmrSim.Run
  @param  Nsim_Run self
  @param  ApiString name
  @returns  get attribute or link by name
**/
extern ApiObject Nsim_Run_Get(Nsim_Run self, ApiString name);

/**
  Get for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nsim_Run self
  @returns   the result
**/
extern Acco_AccessObject Nsim_Run_GetAccess(Nsim_Run self);

/**
  Get for molsim.NmrSim.Run.annealProtocol

AnnealProtocol used in Run
  @param  Nsim_Run self
  @returns   the result
**/
extern Anpr_AnnealProtocol Nsim_Run_GetAnnealProtocol(Nsim_Run self);

/**
  Get for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_Run self
  @returns   the result
**/
extern ApiList Nsim_Run_GetApplicationData(Nsim_Run self);

/**
  GetByKey for molsim.NmrSim.Run
  @param  Nsim_Run self
  @param  Impl_MemopsObject startObj
  @param  ApiList fullKey
  @returns  object corresponding to key
**/
extern Nsim_Run Nsim_Run_GetByKey(Nsim_Run self, Impl_MemopsObject startObj, ApiList fullKey);

/**
  Get for memops.Implementation.ComplexDataType.className

Name of class 
of object. If class names differ for different implementations, name of 
the coresponding Python class. This is really a class attribute and may 
be implemented as such by languages that support the concept.
  @param  Nsim_Run self
  @returns   the result
**/
extern ApiString Nsim_Run_GetClassName(Nsim_Run self);

/**
  Get for molsim.NmrSim.Run.details

Free text, for notes, explanatory 
comments, etc.
  @param  Nsim_Run self
  @returns   the result
**/
extern ApiString Nsim_Run_GetDetails(Nsim_Run self);

/**
  Get for memops.Implementation.ComplexDataType.fieldNames

Names of all 
object fields in alphabetical order. Attribute names and role  names 
(where relevant) are given in alphabetical order (for each type). 

If 
you need more information about the classes, the place to look is in the 
obejct .metaclass MetaModel object.
  @param  Nsim_Run self
  @returns   the result
**/
extern ApiList Nsim_Run_GetFieldNames(Nsim_Run self);

/**
  GetFullKey for molsim.NmrSim.Run
  @param  Nsim_Run self
  @param  ApiBoolean useGuid
  @returns  list containing full object key
**/
extern ApiList Nsim_Run_GetFullKey(Nsim_Run self, ApiBoolean useGuid);

/**
  Get for 
memops.Implementation.ComplexDataType.inConstructor

Implementation 
switch that determines if an object is being constructed, and turns off 
some validity checking.
  @param  Nsim_Run self
  @returns   the result
**/
extern ApiBoolean Nsim_Run_GetInConstructor(Nsim_Run self);

/**
  Get for molsim.NmrSim.Run.inputConstraintStore

NmrConstraintStore that 
defines Nmr Constraints used for input to this run
  @param  Nsim_Run self
  @returns   the result
**/
extern Nmrc_NmrConstraintStore Nsim_Run_GetInputConstraintStore(Nsim_Run self);

/**
  Get for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists used 
as input for NmrSim.Run
  @param  Nsim_Run self
  @returns   the result
**/
extern ApiSet Nsim_Run_GetInputMeasurementLists(Nsim_Run self);

/**
  Get for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input to 
NmrSim.Run
  @param  Nsim_Run self
  @returns   the result
**/
extern ApiSet Nsim_Run_GetInputPeakLists(Nsim_Run self);

/**
  Get for molsim.NmrSim.Run.inputStructures

Structures used for Run input
  @param  Nsim_Run self
  @returns   the result
**/
extern ApiSet Nsim_Run_GetInputStructures(Nsim_Run self);

/**
  Get for memops.Implementation.MemopsObject.isDeleted

Implementation 
attribute, set automatically. If True the object has been deleted. 
Deleted objects are never returned by any API call, so there is normally 
no need to check this attribute. But if you keep your own lists (or 
other data structures) containing CCP objects, you may need to look.
  @param  Nsim_Run self
  @returns   the result
**/
extern ApiBoolean Nsim_Run_GetIsDeleted(Nsim_Run self);

/**
  GetLocalKey for molsim.NmrSim.Run
  @param  Nsim_Run self
  @returns  Local object key
**/
extern ApiObject Nsim_Run_GetLocalKey(Nsim_Run self);

/**
  Get for molsim.NmrSim.Run.molSystem

MolSystem used for Run
  @param  Nsim_Run self
  @returns   the result
**/
extern Mols_MolSystem Nsim_Run_GetMolSystem(Nsim_Run self);

/**
  Get for molsim.NmrSim.Run.nmrSimEnergyTerms

child link to class 
NmrSimEnergyTerm
  @param  Nsim_Run self
  @returns   the result
**/
extern ApiSet Nsim_Run_GetNmrSimEnergyTerms(Nsim_Run self);

/**
  Get for molsim.NmrSim.Run.nmrSimStore

parent link
  @param  Nsim_Run self
  @returns   the result
**/
extern Nsim_NmrSimStore Nsim_Run_GetNmrSimStore(Nsim_Run self);

/**
  Get for molsim.NmrSim.Run.outputConstraintStore

NmrConstraintStore used 
to store output constraitns from this run
  @param  Nsim_Run self
  @returns   the result
**/
extern Nmrc_NmrConstraintStore Nsim_Run_GetOutputConstraintStore(Nsim_Run self);

/**
  Get for molsim.NmrSim.Run.outputEnsemble

MolStructure Ensemble 
generated from Run
  @param  Nsim_Run self
  @returns   the result
**/
extern Coor_StructureEnsemble Nsim_Run_GetOutputEnsemble(Nsim_Run self);

/**
  Get for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @returns   the result
**/
extern ApiSet Nsim_Run_GetOutputMeasurementLists(Nsim_Run self);

/**
  Get for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @returns   the result
**/
extern ApiSet Nsim_Run_GetOutputPeakLists(Nsim_Run self);

/**
  Get for memops.Implementation.ComplexDataType.packageName

Name of 
package containing class, as a dot-separated string. E.g. 'ccp.nmr.Nmr'. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.
  @param  Nsim_Run self
  @returns   the result
**/
extern ApiString Nsim_Run_GetPackageName(Nsim_Run self);

/**
  Get for memops.Implementation.ComplexDataType.packageShortName

Short 
name of package containing class, generally as four or fewer upper case 
characters. E.g. 'NMRC'. Package shortnames are unique across packages. 
They are not set (value None) for packages that contain other packages. 
This is really a class attribute and may be implemented as such by 
languages that support the concept.1
  @param  Nsim_Run self
  @returns   the result
**/
extern ApiString Nsim_Run_GetPackageShortName(Nsim_Run self);

/**
  Get for molsim.NmrSim.Run.parent

link to parent object - synonym for 
nmrSimStore
  @param  Nsim_Run self
  @returns   the result
**/
extern Nsim_NmrSimStore Nsim_Run_GetParent(Nsim_Run self);

/**
  Get for memops.Implementation.ComplexDataType.qualifiedName

Fully 
qualified name of class, equal to (packageName + '.' + className). If 
class names differ between implementations, name of corresponding Python 
class. This is really a class attribute and may be implemented as such 
by languages that support the concept.
  @param  Nsim_Run self
  @returns   the result
**/
extern ApiString Nsim_Run_GetQualifiedName(Nsim_Run self);

/**
  Get for memops.Implementation.MemopsObject.root

MemopsRoot object at 
top of parent tree.
  @param  Nsim_Run self
  @returns   the result
**/
extern Impl_MemopsRoot Nsim_Run_GetRoot(Nsim_Run self);

/**
  Get for molsim.NmrSim.Run.runParameters

child link to class 
RunParameter
  @param  Nsim_Run self
  @returns   the result
**/
extern ApiSet Nsim_Run_GetRunParameters(Nsim_Run self);

/**
  Get for molsim.NmrSim.Run.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nsim_Run self
  @returns   the result
**/
extern ApiInteger Nsim_Run_GetSerial(Nsim_Run self);

/**
  Get for memops.Implementation.DataObject.topObject

TopObject - topmost 
parent in package.
  @param  Nsim_Run self
  @returns   the result
**/
extern Impl_TopObject Nsim_Run_GetTopObject(Nsim_Run self);

/**
  Constructor for molsim.NmrSim.Run
  @param  Nsim_NmrSimStore parent
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nsim_Run Nsim_Run_Init(Nsim_NmrSimStore parent, ApiMap attrlinks);

/**
  Constructor for molsim.NmrSim.Run
  @param  Nsim_NmrSimStore parent
  @param  Anpr_AnnealProtocol annealProtocol
  @param  Nmrc_NmrConstraintStore inputConstraintStore
  @param  Mols_MolSystem molSystem
  @returns  the new object
**/
extern Nsim_Run Nsim_Run_Init_reqd(Nsim_NmrSimStore parent, Anpr_AnnealProtocol annealProtocol, Nmrc_NmrConstraintStore inputConstraintStore, Mols_MolSystem molSystem);

/**
  Factory function to create molsim.NmrSim.NmrSimEnergyTerm
  @param  Nsim_Run self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nsim_NmrSimEnergyTerm Nsim_Run_NewNmrSimEnergyTerm(Nsim_Run self, ApiMap attrlinks);

/**
  Factory function to create molsim.NmrSim.NmrSimEnergyTerm
  @param  Nsim_Run self
  @param  char * code
  @param  ApiInteger termId
  @returns  the new object
**/
extern Nsim_NmrSimEnergyTerm Nsim_Run_NewNmrSimEnergyTerm_reqd(Nsim_Run self, char * code, ApiInteger termId);

/**
  Factory function to create molsim.NmrSim.RunParameter
  @param  Nsim_Run self
  @param  ApiMap attrlinks
  @returns  the new object
**/
extern Nsim_RunParameter Nsim_Run_NewRunParameter(Nsim_Run self, ApiMap attrlinks);

/**
  Factory function to create molsim.NmrSim.RunParameter
  @param  Nsim_Run self
  @param  char * code
  @param  ApiInteger id
  @returns  the new object
**/
extern Nsim_RunParameter Nsim_Run_NewRunParameter_reqd(Nsim_Run self, char * code, ApiInteger id);

/**
  Remove for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_Run self
  @param  Impl_ApplicationData value
**/
extern void *Nsim_Run_RemoveApplicationData(Nsim_Run self, Impl_ApplicationData value);

/**
  Remove for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists 
used as input for NmrSim.Run
  @param  Nsim_Run self
  @param  Nmr_AbstractMeasurementList value
**/
extern void *Nsim_Run_RemoveInputMeasurementList(Nsim_Run self, Nmr_AbstractMeasurementList value);

/**
  Remove for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input to 
NmrSim.Run
  @param  Nsim_Run self
  @param  Nmr_PeakList value
**/
extern void *Nsim_Run_RemoveInputPeakList(Nsim_Run self, Nmr_PeakList value);

/**
  Remove for molsim.NmrSim.Run.inputStructures

Structures used for Run 
input
  @param  Nsim_Run self
  @param  Coor_Model value
**/
extern void *Nsim_Run_RemoveInputStructure(Nsim_Run self, Coor_Model value);

/**
  Remove for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @param  Nmr_AbstractMeasurementList value
**/
extern void *Nsim_Run_RemoveOutputMeasurementList(Nsim_Run self, Nmr_AbstractMeasurementList value);

/**
  Remove for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @param  Nmr_PeakList value
**/
extern void *Nsim_Run_RemoveOutputPeakList(Nsim_Run self, Nmr_PeakList value);

/**
  SetAttr for molsim.NmrSim.Run
  @param  Nsim_Run self
  @param  ApiString name
  @param  ApiObject value
**/
extern void *Nsim_Run_Set(Nsim_Run self, ApiString name, ApiObject value);

/**
  Set for memops.Implementation.DataObject.access

Access object that 
controls object access
  @param  Nsim_Run self
  @param  Acco_AccessObject value
**/
extern void *Nsim_Run_SetAccess(Nsim_Run self, Acco_AccessObject value);

/**
  Set for molsim.NmrSim.Run.annealProtocol

AnnealProtocol used in Run
  @param  Nsim_Run self
  @param  Anpr_AnnealProtocol value
**/
extern void *Nsim_Run_SetAnnealProtocol(Nsim_Run self, Anpr_AnnealProtocol value);

/**
  Set for 
memops.Implementation.DataObject.applicationData

Application-specific 
data
  @param  Nsim_Run self
  @param  ApiList values
**/
extern void *Nsim_Run_SetApplicationData(Nsim_Run self, ApiList values);

/**
  Set for molsim.NmrSim.Run.details

Free text, for notes, explanatory 
comments, etc.
  @param  Nsim_Run self
  @param  ApiString value
**/
extern void *Nsim_Run_SetDetails(Nsim_Run self, ApiString value);

/**
  Set for molsim.NmrSim.Run.inputConstraintStore

NmrConstraintStore that 
defines Nmr Constraints used for input to this run
  @param  Nsim_Run self
  @param  Nmrc_NmrConstraintStore value
**/
extern void *Nsim_Run_SetInputConstraintStore(Nsim_Run self, Nmrc_NmrConstraintStore value);

/**
  Set for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists used 
as input for NmrSim.Run
  @param  Nsim_Run self
  @param  ApiSet values
**/
extern void *Nsim_Run_SetInputMeasurementLists(Nsim_Run self, ApiSet values);

/**
  Set for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input to 
NmrSim.Run
  @param  Nsim_Run self
  @param  ApiSet values
**/
extern void *Nsim_Run_SetInputPeakLists(Nsim_Run self, ApiSet values);

/**
  Set for molsim.NmrSim.Run.inputStructures

Structures used for Run input
  @param  Nsim_Run self
  @param  ApiSet values
**/
extern void *Nsim_Run_SetInputStructures(Nsim_Run self, ApiSet values);

/**
  Set for molsim.NmrSim.Run.molSystem

MolSystem used for Run
  @param  Nsim_Run self
  @param  Mols_MolSystem value
**/
extern void *Nsim_Run_SetMolSystem(Nsim_Run self, Mols_MolSystem value);

/**
  Set for molsim.NmrSim.Run.outputConstraintStore

NmrConstraintStore used 
to store output constraitns from this run
  @param  Nsim_Run self
  @param  Nmrc_NmrConstraintStore value
**/
extern void *Nsim_Run_SetOutputConstraintStore(Nsim_Run self, Nmrc_NmrConstraintStore value);

/**
  Set for molsim.NmrSim.Run.outputEnsemble

MolStructure Ensemble 
generated from Run
  @param  Nsim_Run self
  @param  Coor_StructureEnsemble value
**/
extern void *Nsim_Run_SetOutputEnsemble(Nsim_Run self, Coor_StructureEnsemble value);

/**
  Set for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @param  ApiSet values
**/
extern void *Nsim_Run_SetOutputMeasurementLists(Nsim_Run self, ApiSet values);

/**
  Set for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @param  ApiSet values
**/
extern void *Nsim_Run_SetOutputPeakLists(Nsim_Run self, ApiSet values);

/**
  Set for molsim.NmrSim.Run.serial

Serial number of object. Serves as 
object main key. Serial numbers of deleted objects are not re-used. 
Serial numbers can only be set by the implementation. Values are in 
practice always positive, since negative values are interpreted as a 
signal to set the next free serial
  @param  Nsim_Run self
  @param  ApiInteger value
**/
extern void *Nsim_Run_SetSerial(Nsim_Run self, ApiInteger value);

/**
  Sorted for molsim.NmrSim.Run.inputMeasurementLists

Measurement lists 
used as input for NmrSim.Run
  @param  Nsim_Run self
  @returns   the result
**/
extern ApiList Nsim_Run_SortedInputMeasurementLists(Nsim_Run self);

/**
  Sorted for molsim.NmrSim.Run.inputPeakLists

PeakLists used as input to 
NmrSim.Run
  @param  Nsim_Run self
  @returns   the result
**/
extern ApiList Nsim_Run_SortedInputPeakLists(Nsim_Run self);

/**
  Sorted for molsim.NmrSim.Run.inputStructures

Structures used for Run 
input
  @param  Nsim_Run self
  @returns   the result
**/
extern ApiList Nsim_Run_SortedInputStructures(Nsim_Run self);

/**
  Sorted for molsim.NmrSim.Run.nmrSimEnergyTerms

child link to class 
NmrSimEnergyTerm
  @param  Nsim_Run self
  @returns   the result
**/
extern ApiList Nsim_Run_SortedNmrSimEnergyTerms(Nsim_Run self);

/**
  Sorted for molsim.NmrSim.Run.outputMeasurementLists

MeasurementLists 
output form NmrSim.Run
  @param  Nsim_Run self
  @returns   the result
**/
extern ApiList Nsim_Run_SortedOutputMeasurementLists(Nsim_Run self);

/**
  Sorted for molsim.NmrSim.Run.outputPeakLists

PeakLists putput from 
NmrSim.Run
  @param  Nsim_Run self
  @returns   the result
**/
extern ApiList Nsim_Run_SortedOutputPeakLists(Nsim_Run self);

/**
  Sorted for molsim.NmrSim.Run.runParameters

child link to class 
RunParameter
  @param  Nsim_Run self
  @returns   the result
**/
extern ApiList Nsim_Run_SortedRunParameters(Nsim_Run self);

#endif /* __incl__molsim_api_NmrSim_Run_h__ */
